/*
 *
 *
 *   Crated By Rohan Simon for "The Boys" DND Discord Server
 *
 *
 */

// Imports modules that are required to interface with Discord

const Discord = require("discord.js");
const client = new Discord.Client();
const auth = require("./token.json");
const request = require("request");
const url = "http://roll.diceapi.com/json";

// Post Login as Discord Bot
client.on("ready", () => {
  console.log(`Logged in as ${client.user.tag}!`);
});

// Creates the event handeler that waits for a message to be sent in Chat

client.on("message", (message) => {
  if (message.content.startsWith("!r")) {
    // splits message to get dice rolls
    split_msg = message.content.split(" ");
    let new_url = url;

    // Creates url to interface with Dice Roll API
    for (let i = 1; i < split_msg.length; i++) {
      new_url = new_url + "/" + split_msg[i];
    }

    // Requests for the Dice roll

    request(new_url, (err, res, body) => {
      if (err) {
        return;
      }

      try {
        var result = JSON.parse(body);
      } catch (SyntaxError) {
        message.channel.send("Wrong Format, Try Again");
        return;
      }

      let sum = 0;
      // Sums up the roll
      for (j = 0; j < result.dice.length; j++) {
        sum = sum + result.dice[j].value;
      }
      // Sends the Sum
      if (sum === 69) {
        message.reply(sum.toString() + ", Nice");
      } else {
        message.reply(sum);
      }
    });
  }
});

// Logs in
client.login(auth.token);
