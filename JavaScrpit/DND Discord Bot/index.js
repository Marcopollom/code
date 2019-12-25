const Discord = require('discord.js');
const client = new Discord.Client();
const auth = require('./token.json');
const request = require('request');

const url = 'http://roll.diceapi.com/json';



client.on('ready', () => {
    console.log(`Logged in as ${client.user.tag}!`);
});

client.on("message", (message) => {
    if (message.content.startsWith("!r")) {
        split_msg = message.content.split(' ');
        for (let i = 1; i < split_msg.length; i++) {
            var new_url = url + '/' + split_msg[i];
        }
        console.log(new_url);
        request(new_url, (err, res, body) => {
            if (err) {
              return;
            }
            var result = JSON.parse(body)
            console.log(result);
        });
    }
});
  
client.login(auth.token);