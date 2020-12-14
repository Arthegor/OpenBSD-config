#!/bin/sh
ws='    "name": "1a",'
ws2="1a"
app="alacritty"
open=$(swaymsg -t get_workspaces | grep $ws2)
if [[ "$open" != "$ws" ]];
then
	swaymsg -- workspace "$ws2"
	swaymsg exec -- $app

else 

	swaymsg -- workspace "$ws2"
fi
