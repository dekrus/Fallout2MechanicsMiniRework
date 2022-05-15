# Fallout2MechanicsMiniRework
[__Download__](https://github.com/dekrus/Fallout2MechanicsMiniRework/releases)

 This is a small rework of some gameplay mechanics of Fallout 2 and games based on it.  
 The style of the page design is brazenly copied from https://github.com/BGforgeNet/FO2tweaks
 
## Installation
- Download `F2MechanicsMiniRework.zip` from the [latest release](https://github.com/dekrus/Fallout2MechanicsMiniRework/releases) page.
- Unzip the archive into main game directory. F2MechanicsMiniRework requires sfall (`ddraw.dll`) version 4.1.3+. https://sourceforge.net/projects/sfall/files/
- Edit `mods/F2MechanicsMiniRework.ini` to enable, disable or fine tune components as you desire.

## Сontents
- [Mods](#Meckanics-mods)
- [Compatibility](#compatibility)
- [Unistallation](#uninstallation)

## Mods
- [Poison](#poison)
- [Healing](#healing)
- [Misses](#misses)
  - [Random bodypart hit](#random-bodypart-hit)
- [Sneak](#sneak)
  - [Sneak detection](#sneak-detection)
- [Steal](#steal)
- [Swing&Thrust](#swingthrust)


### Poison (Requires SpeedInterfaceCounterAnims = 2" in ddraw.ini)
This is a rework of the original mechanics, designed to make Poison more dangerous for both the player and NPCs.

- Now poison damage is received not only by the player, but also by all creatures without immunity to poison.
- Poison damage triggers at the end of each of the poisoned creature's turns in combat, or every 4-5 seconds out of combat.
- If the critter or player accumulates more than 100 poison units, instant death occurs.
- Now tails of radscorpions can be used to apply poison to the player’s(or companions') piercing and cutting weapons.
- New perk "Poison Mastery", available from level 6 and requiring science above 50 or naturalist skill above 70. This perk adds poison dmg when using Needler ammo and also increases the effectiveness of poisoned weapons.

### Healing (Requires SpeedInterfaceCounterAnims = 2" in ddraw.ini)
Replaces the instant stimpak heal with a regeneration over time.

- Stimpack increases healing rate, triggering health regeneration (slow for 10 rounds or fast for 3 rounds depending on the selected settings).
- Super Stimpak instantly restores up to 60 hp, while temporarily reducing the "healing rate" based on the actual hp restored. Also Super Stimpak heals broken limbs.
- Some monsters have passive regeneration: wanamingos/centaurs.
- Fire and plasma damage temporarily reduces the target's regeneration.
- New bonus perk "Regeneration", which is automatically added if the base "Healing rate" is more than 5, adding a chance to heal injured limbs while regenerating HP.

### Misses
Changes how misses work in a more "logical" way.

- Expanded the area for hitting a random target in the path of a bullet / throwing weapon.
- To hit the eyes and groin, it is now necessary that the target be turned to face you, now it will not work to hit the eyes by shooting in the back of the head. Successful aimed shot to the eyes while the target isn't facing attacker will always turn into headshot, the same happens if the target is lies face down. Instead of groin, shots and melee hits from the back or rears will hit the torso or one of the legs.
- The position of body parts (and accordingly, the possibility of hit them) changes depending on the animation of the target (if target lies face up or down, lies on its side, etc.)
- Misses of aimed attacks now have a small chance to hit an adjacent body part.

Purple highlights new possible targets if shot misses initial target(crosshair).
![Misses](images/Misstohit.jpg)

#### Random bodypart hit
Chance to hit random bodypart with unaimed attacks for NPCs to makes the fight more intense :)  
Also can be enabled for player.

### Sneak
Removes randomness from the sneak skill, now the detection area gradually decreases with increasing skill level and the general illumination of map.  
Low illumination penalty to NPC perception range: From -8%(Basement light) to -40%(Complete darkness).  
Detection range = round((perception_range x (105.00000 - ((sneak - armor_weight) / 1.50000))) / 100.00000 - watcher_pe / 4);

#### Sneak detection
Color indication of sneak detection works for original and new sneak mechanics.
As long as sneaking player is within the detection range of an watching NPC, that NPC will be outlined:

- Red    - Player has been detected.
- Purple - (Steal mod only) Player has been detected, but the NPC will not notice an attempt to steal from other NPCs.
- Gray   - (Fog of War disabled) Not detected, but player will be detected if line of sight becomes unblocked
- Yellow - Not detected, but player will be detected if approaching ~2-3 hexes closer.
- Green  - Not detected, safe to approach.
![Sneak](images/SneakDetection.jpg)

### Steal
The original mechanics of pickpocketing did not take into account the perception of the target and also probability of failing pickpocket(~15%) did not depend on the skill and always the same for both 85 and 300 skill levels.
New steal mechanic is a attempt to fix these "features".  
Basic moments:
- The calculation of probability of a successful stealing is similar to the original formula with the addition of dependence on the perception of the target and steal skill of player.
- If steal skill developed over 140%, then for every 10 points the maximum steal chance is increased by 1% (0,1% for 1 point) to a maximum of 99%.
- When the skill exceeds 160 + (target's current perception x 5) then it becomes possible to steal weapons and items from the hands of the NPC.
- To peep into a target's pocket, you need to meet minimum skill requirements.
- In case of an unsuccessful attempt to use the theft skill, the target can sometimes become hostile, the presence of the Harmless perk significantly reduces this chance.

Modifiers that increase the skill requirement and reduce the chance of a successful pickpocket:
- the player in front of the target.
- the player is in front of and seen by nearby allies of the target.
Modifiers that reduce the chance of a successful pickpocket:
- the weight and size of the item (if the "Pickpocket" perk is not taken)
- the number of items stolen in a row.

Modifiers that reduce skill requirements and increase the chance of a successful pickpocket:
- Sneaking mode. Bonus depends on the sneak skill level + a significant increase in the bonus if the target can not see the player.
- Low light conditions (caves, cellars, night, etc.) the darker the easier it is to get into your pocket, adjusted for the presence of the "Night vision" perk.
- The target is unconscious / blinded (bonus depends on the severity of the condition).

Additional settings:
- The first attempt to steal will always have 100% if you have reached the minimum skill level. (workaround to reduce saves/loads)
- Subsequent attempts, in order to avoid abuse of experience for stealing, will be calculated according to the formula.
- Complication of stealing items depending on their cost, the more expensive the more difficult.
- Complicated stealing from merchants.

### Swing&Thrust
With the tweak enabled, the swing and thrust animation knife attacks will now have different properties when attacking target.

1. When NPC or Player attacking with knife using the Swing animation:
- Target's AC reduced by an amount equal to (target's agility +(attacker melee weapon skill/15)).
- On low armored targets swing with knife more likely to inflict max dmg, rather than min dmg.  

2. Thrust attack:
- Penetrates some of target DR and DT based on max knife dmg and attacker melee dmg stat.
- Increases the chance of a critical hit by 1.5 times.

## Compatibility
* Most of the components are compatible with all Fallout 2 based games. Сompatibility with Nevada and Sonora is enabling in `mods/F2MechanicsMiniRework.ini`

## Uninstallation
Delete `mods/F2MechanicsMiniRework.*` files.
