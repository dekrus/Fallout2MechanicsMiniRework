# Fallout2MechanicsMiniRework
[__Download__](https://github.com/dekrus/Fallout2MechanicsMiniRework/releases)

 This is a small rework of some gameplay mechanics of Fallout 2 and games based on it.  
 
## Installation
- Download `F2MechanicsMiniRework.zip` from the [latest release](https://github.com/dekrus/Fallout2MechanicsMiniRework/releases) page.
- Unzip the archive into main game directory. F2MechanicsMiniRework requires sfall (`ddraw.dll`) version 4.1.3+. it's shipped with the mod. If you have a newer version, you don't need to overwite the dll when extracting the archive. [SFALL]https://sourceforge.net/projects/sfall/files/ 
- Edit `mods/F2MechanicsMiniRework.ini` to enable, disable or fine tune components as you desire.

## Сontents
- [Mods](#mods)
- [Compatibility](#compatibility)
- [Unistallation](#uninstallation)

## Mods
- [Poison](#poison)
- [Healing](#healing)
- [MedToolsMod](#medical-tools)
- [Explosion injury](#explosion-injury)
- [Misses](#misses)
  - [Random bodypart hit](#random-bodypart-hit)
- [Sneak](#sneak)
  - [Sneak detection](#sneak-detection)
- [Steal](#steal)
- [Swing&Thrust](#swingthrust)


### Poison 
**(Requires SpeedInterfaceCounterAnims = 2" in ddraw.ini)**
This is a rework of the original poison mechanics, designed to make it more dangerous for both the player and NPCs.

- Now not only the player takes poison damage, but all creatures without poison immunity.
- Poison damage triggers at the end of each of the poisoned creature's turns in combat, or every 5 seconds when out of combat..
- If you (or NPC) accumulate more than 100 units of poison, instant death occurs.
- Now tails of radscorpions can be used to apply poison to the player’s(or Сompanions') piercing and cutting weapons.
- NPCs and Companions can apply poison to their weapons themselves if they have a radscorpion tail in their inventory.
- Added new perk "Poison Mastery", available from level 6 and requiring science above 50 or naturalist skill above 70. This perk adds poison dmg when using Needler ammo and also increases the effectiveness of all poisoned weapons.

### Healing 
**(Requires "SpeedInterfaceCounterAnims = 2" and "AllowUnsafeScripting = 1 or 2") in ddraw.ini)**
Replaces instant stimpak healing with healing over time.

- Using a stimpack increases "healing rate" for 3 rounds. To start healing, the "healing rate" must be greater than 5.
- Super Stimpak instantly restores up to 60 hp, while temporarily reducing the "healing rate" based on the actual HP restored. Also Super Stimpak can heals broken limbs(if enabled in ini file).
- Some monsters have passive health regeneration: wanamingos/centaurs(if enabled in ini file).
- Fire and Plasma damage temporarily reduces the target's regeneration rate and may even stop it completely.
- Added a new bonus perk "Regeneration", which is automatically added if the player's base "healing rate" is greater than 5. This perk adds a "healing rate" based chance to heal crippled limbs when HP is restored. 

### Medical Tools
Сhanges the way how First Aid Kits, Doctor's Bag and Paramedics Bag are used.

- The use of First Aid skill and Doctor skill without tools are unchanged.
- First Aid Kit and Doctor's Bag kept their previous skill bonuses (+20% and +40% for upgraded versions).
- Removed element of randomness in the number of uses of medical tools, now first aid kits and doctor's bag have an indicator of the remaining materials. First aid kit can be used 5 times until it is depleted, the doctor's bag 3 times. Upgraded versions (paramedic bag) can be used up to 10 times.
- Removed daily limit on the use of medical tools. The number of uses is limited only by the remaining supplies in first aid kit/ Doctor's bag.
- Each use of medical tools is guaranteed to restore a certain amount of health, ranging from the lowest possible (failed skill check) to the average and maximum values (successful skill check).
- Healer perk adds extra 4-10(2-5 for et_tu) HP healed per level. 
- Healing yield no XP points. +50 XP points per healed limb.
- Healing effectiveness is capped at 300% for both medical tools types.

FA tools:
- Can be used during combat. Also NPCs and companions can use it. 
- Costs 2 AP.
- Healing efficiency equal to stimpack achieved at 80% First Aid skill.

DOC tools:
- Can be used during combat if equipped and doctor's skill is 50 or more. Also NPCs and companions can use it.
- Costs 6 AP. Cost decreases as skill increases. (Costs 5 AP at skill 100%, 4 AP at skill 150%, and so on up to 2 AP at skill 250%).
- The effectiveness of healing per AP/skill is higher than First Aid Kits. Аmount of healing also depends on maximum health and severity of injuries received.
- The chance to heal an injury is calculated for each limb separately and capped at 100% ( 80% Doctor skill + 20% bonus from Doctor's Bag or 60% Doctor skill + 40% bonus Paramedics Bag).

### Explosion injury
Received damage from grenades (including plasma grenade, as well as EMP for robots), grenade launchers and other explosive weapons if it exceeds 10% of the !current! health points can cause damage to the arms/legs/eyes.  
(The probability is configured in the ini file and also depends on some S.P.E.C.I.A.L. of the target).
- Explosive hand injury can cause weapons to fall out of hand.

### Misses
Changes how misses work in a more "logical" way.

- Expanded the area for hitting a random target in the path of a bullet / throwing weapon.
- To hit the eyes and groin, it is now necessary that the target be turned to face you, now it will not work to hit the eyes by shooting in the back of the head. Successful aimed shot to the eyes while the target isn't facing attacker will always turn into headshot, the same happens if the target is lies face down. Instead of groin, shots and melee hits from the back or rears will hit the torso or one of the legs.
- The position of body parts (and accordingly, the possibility of hit them) changes depending on the animation of the target (if target lies face up or down, lies on its side, etc.)
- Misses of aimed attacks now have a small chance to hit an adjacent body part.

Example: Purple highlights new possible targets if shot misses initial target(crosshair).
![Misses](images/Misstohit.jpg)

#### Random bodypart hit
NPCs will now use aimed attacks targeting different parts of the body against the player and other NPCs.

- Alternate mode for the player can also be enabled, adding a chance to hit a random body part with unaimed attacks.

### Sneak
Removes randomness from the sneak skill, now the detection area gradually decreases with increasing skill level and the general illumination of map. 
 
Low light condition penalty to NPC perception range: From -8%(Basement light) to -40%(Complete darkness).  
Detection range formula = round((perception_range x (105.00000 - ((sneak - armor_weight) / 1.50000))) / 100.00000 - watcher_pe / 4);

#### Sneak detection
Color indication of sneak detection, that works for original and new sneak mechanics.
As long as sneaking player is within the detection range of an watching NPC, that NPC will be outlined:

- Red    - Player has been detected.
- Orange - (Steal mod only) Player has been detected, but the NPC will not notice an attempt to steal from other NPCs.
- Gray   - (Fog of War disabled) Player not detected, but will be detected if line of sight becomes unblocked.
- Yellow - Player not detected, but will be detected if approaching ~2-3 hexes closer.
- Green  - Player not detected, safe to approach.
![Sneak](images/SneakDetection.jpg)

### Steal
The original mechanics of pickpocketing did not take into account the perception of the target. And also the probability of unsuccessful pickpocketing did not depend on the skill and was always the same for both 85 and 300 skill levels approximately (~ 15%).
New steal mechanic is a attempt to fix these "features".  

Basic moments:
- The calculation of probability of a successful stealing is similar to the original formula with the addition of dependence on the perception of the target and steal skill of player.
- If steal skill developed over 140%, then for every 10 points the maximum steal chance is increased by 1% (0,1% for 1 point) to a maximum of 99%.
- When the skill exceeds 160 + (target's current perception x 5) then it becomes possible to steal weapons and items from the hands of the NPC.
- To peep into a target's pocket, you need to meet minimum skill requirements.
- In case of an unsuccessful attempt to use the theft skill, the target can sometimes become hostile, the presence of the Harmless perk significantly reduces this chance.

Modifiers that increase the skill requirement and reduce the chance of a successful pickpocket:
- the player stands in front of the target.
- the player is seen by the target's nearby allies.
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
With the setting enabled, swing attacks and thrusts with a knife will now have different properties.

1.Swing attack:
- Increases chance to hit based on target's agility and attacker's melee skill.
- On lightly armored targets, a swing attack is more likely to deal maximum damage rather than minimum..  

2. Thrust attack:
- Penetrates some of target DR and DT based on max knife dmg and attacker melee dmg stat.
- Increases base chance of a critical hit by 1.5 times.

## Compatibility
* Most of the components are compatible with all Fallout 2 based games. Compatibility with Nevada, Sonora or Fallout et tu can be enabled in `mods/F2MechanicsMiniRework.ini`

## Uninstallation
Delete `mods/F2MechanicsMiniRework.*` files.
