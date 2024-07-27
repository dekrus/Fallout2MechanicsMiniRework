# Fallout2MechanicsMiniRework
[__Download__](https://github.com/dekrus/Fallout2MechanicsMiniRework/releases)

 This is a rework of some gameplay mechanics of Fallout 2 and games based on it.  
 [__Описание на русском__](https://github.com/dekrus/Fallout2MechanicsMiniRework/blob/main/configs/README_RUS.txt)
 
## Installation
- Download `F2MechanicsMiniRework.zip` from the [latest release](https://github.com/dekrus/Fallout2MechanicsMiniRework/releases) page.
- Unpack the archive into the main game directory so that the files "F2MechanicsMiniRework.dat" and "F2MechanicsMiniRework.ini" are in the mods folder.
- F2MechanicsMiniRework requires sfall (`ddraw.dll`) version 4.4.4+ (or 5.0.8+). it's shipped with the mod. If you have a newer version, you don't need to overwrite the dll when extracting the archive. 
- If the file "mods_order.txt" exists in the mods folder, then F2MechanicsMiniRework.dat must be added to it.
- In `ddraw.ini` set `AllowUnsafeScripting=` to 1 or 2.
- Edit `mods/F2MechanicsMiniRework.ini` to enable, disable, or fine-tune components as you desire.
- [SFALL v4 latest release](https://sourceforge.net/projects/sfall/files/)
- [RUS SFALL v5 latest release](https://nuclear-grot.ucoz.net/forum/10-5-1)


## Сontents
- [Mods](#mods)
- [Compatibility](#compatibility)
- [Unistallation](#uninstallation)

## Mods
- [SecondaryAttack](#secondary-attack)
- [SkillBooks](#Skill-Books)
- [Poison](#poison)
- [Healing](#healing)
- [MedToolsMod](#medical-tools)
- [Explosion injury](#explosion-injury)
- [Misses](#misses)
  - [Random bodypart hit](#random-bodypart-hit)
- [Sneak](#sneak)
  - [Sneak Detection](#sneak-detection)
- [Steal](#steal)
- [Swing&Thrust](#swingthrust)
- [AntiCritical](#anticritical)
- [StealthBoy AutoSneak](#stealthboy-autosneak)
- [Stats Recalculation](#stats-recalculation)

### Secondary Attack
**(Requires "AllowUnsafeScripting = 1 or 2") in ddraw.ini)**  
This module adds an alternative fire mode to Laser, Plasma and Gauss weapons.
- Alternate Fire mode is activated with an Aimed Shot to the torso.
- All animations depend on combat speed settings, and I advise you to set the maximum combat speed for better results.
- 

Laser weapons:
![Secondary-Attack](images/LASER_SLOW.gif)  

- Laser weapons deal weapon damage (+ perks and critical effects) to all creatures in a line between the shooter and the target.
- The alternate firing mode consumes (2 + 1 * number of additional targets) microfusion cells/small energy cells.
- The maximum number of additional targets can be configured in the "F2MechanicsMiniRework.ini" file.
- Alternate mode increases armor penetration. ( All targets' laser defenses are multiplied by 0.5 )
- Hit chance and critical hit chance are calculated separately for each target.

Pulse weapons:
![Secondary-Attack](images/PULSE_CHAIN.gif)  

- Pulse and EMP ranged weapons deal weapon damage (+ perks and critical effects) in a “chain” of 2 creatures closest to the main target.
- The maximum distance between targets and the maximum number of additional targets are configured in the "F2MechanicsMiniRework.ini" file.
- The alternate firing mode consumes 3 microfusion cells/small energy cells.
- Critical hit chance is calculated separately for each target.

Gauss weapons:
![Secondary-Attack](images/GAUSS.gif)  

- Gauss weapons deal weapon damage (+ perks and critical effects) to all creatures in the line of fire.
- The maximum number of additional targets depends on the attacker's damage, the amount of damage reduction for each target (configurable in the "F2MechanicsMiniRework.ini" file), and the armor defenses of the targets on the line.
- Hit chance and critical hit chance are calculated separately for each target.

Plasma weapons:
![Secondary-Attack](images/PLASMA.gif)  

- Plasma weapons deal weapon damage (+ perks and critical effects) to all creatures in a radius around the main target.
- The radius of the plasma explosion is configured in the "F2MechanicsMiniRework.ini" file.
- Damage depends on the distance to the center of the explosion. The greater the distance, the lower the damage (can be configured in the "F2MechanicsMiniRework.ini" file).
- The alternate firing mode consumes 3 microfusion cells/small energy cells.
- Critical hit chance is calculated separately for each target.

Pistols & SMGs:
![Secondary-Attack](images/PISTOLS_SMGS.gif)  

- Non-energy Pistols and SMGs allow you to fire two single shots to the body of the same target for the cost of one aimed shot.
- The first shot (an aimed body shot) requires the standard AP cost, but consumes 1 fewer AP, allowing you to fire a second (non-aimed) shot at the same target for 1 AP.
- Second shot hit chance reduced by (15 + Wpn STR req * 3), but cannot be lower than 1/3 of the initial hit chance.
- Using inventory/changing weapons/using items/moving/reloading/shooting a different target interrupts the Double Tap.

Shotguns:
![Secondary-Attack](images/SHOTGUN.gif)  

- Aimed shots to the body knock back enemies and can knock them down.
- Affects targets closer than 10 hexes / half the weapon's maximum range.
- Heavier creatures like super mutants/robots/deathclaws/giant scorpions are knocked back less and are less likely to be knocked down.

### Traits Plus
Requires setting "AllowUnsafeScripting = 1 or 2" in ddraw.ini!!!
When you first launch the mod after installing it, you need to load any game save for the new trait descriptions to take effect.

Enhances base starting traits with new properties without altering their core mechanics.
All new trait properties are scripted and will function even if the traits themselves have been modified by the player or other mods.
Each new property for a specific trait can be enabled, disabled, or forcibly activated, even if the player does not possess the trait, when the option is enabled in the .ini settings file.

Fast Metabolism New Properties:
++ All food and chems remove 33% more poison and radiation.
+- All food and chems heal/remove 33% more HP.
+- All food and chems take effect and wear off twice as fast.
+- If "RegenMod" is enabled, health regeneration is increased by 33%. However, if the player is poisoned, its effectiveness is reduced by 50%. The reduction depends on poison resistance. For instance, with 90% resistance, the regeneration strength decreases by only 5%.
Bruiser New Properties:
(Damage changes are displayed in the inventory only for sfall 5.0.8+)
++ Maximum damage from unarmed, melee, and throwing weapons (excluding grenades) is doubled.
The 'Melee Damage' attribute now affects the maximum damage of throwing weapons

Small Frame New Properties:
++ Maximum chance to hit a player reduced by 10%, accounting for any other reductions from other mods/perks.
++ Sneak skill is 10% more effective.

One-Hander New Properties:
++ One-handed unarmed attacks now also receive a +20% hit chance bonus.
++ Ability to attack with one-handed weapons even when both arms are injured (hit chance bonus does not apply when both arms are injured).
++ Bonus: +5 on the critical hit table roll.
++ One-handed weapons require 3 less strength to use correctly.

Finesse New Properties:
++ Player's area damage attacks can now deal critical damage, penetrate armor, and incapacitate additional targets.
++ Affects all types of area attacks: burst fire, grenades, flamethrowers, and alternative fire modes.

Kamikaze New Properties:
(Compatible with "AutoMoveToAttack" sfall 5.0+)
++ Player can "attack on the move," reducing attack cost by 1 AP for every 2 steps, down to a minimum of 1 AP for non-targeted and 2 AP for targeted attacks.
++ Sequence is increased by 10.
++ Pistol's alternative firing mode does not interrupt movement.
-- Each step taken reduces hit chance by 3%. After attack and at the end of the turn, accuracy penalty resets to zero.

Heavy-Handed New Properties:
(Damage changes are displayed in the inventory only for sfall 5.0.8+)
++ "Melee Damage" is added to the minimum damage for unarmed, melee, and thrown weapon damage (excluding grenades).
++ The "Melee Damage" attribute now affects the maximum damage of throwing weapons
++ Every non-critical melee and throwing weapon attack has a chance to knock down the target. This chance is influenced by factors such as the attack's damage, the player's strength, the weapon's weight, and the opponent's endurance and species.
++ The severity of a player's critical miss is reduced by 30%.

Bloody mess New Properties:
++ The first kill each turn restores 2 AP to the player; each subsequent kill in the same turn restores 1 AP.
+- Critical miss severity is increased by 30% for everyone, including the player.

Jinxed New Properties:
+- Reduces the maximum hit chance of both players and NPCs by 5%.
+- The time limit is disabled, allowing critical misses to occur from the start of the game.

Chem Reliant New Properties:
+- Positive and negative effects of chems and food are increased by 50%, rounded to the nearest integer (-1 -> -2, +1 -> +2).

Chem Resistant New Properties:
++ Food and chems no longer cause addiction
++ Stats return to normal immediately after the first effect of chems and food wears off.
++ You can take half more doses, rounded up.
+- Positive and negative effects of chems and food are reduced by 50%, rounded up (-1 -> 0, +1 -> +1).

Skilled New Properties:
++ Increases maximum hit chance by 4%.
++ 50% chance that critical miss becomes a normal miss.
++ Reduces the level requirement for selecting perks by 4. Perks requiring level 9 can be taken at level 5, and perks requiring level 12 can be taken at level 8.


### Skill Books
This mod allows you to use skill books on companions to increase their skills, and also allows you to change the amount of bonus skill points and the number of skills that increase when reading books.
(Compatible with F2, F2 EcCo, F1.5: Resurrection, Nevada, Sonora: Bookseller Ashley mod, Et_Tu)

- Skill books can now be applied to sentient companions to improve their skills. The bonus from reading books is retained as the companion levels up.
- The original amount of skill gain (and its maximum value) from reading books can either be increased or changed to a fixed value.
- Books can now increase up to 2 skills at the same time if you add a new skill to the "books.ini" file. All base books, and any books registered in "books.ini", will work with the mod.
- The "Comprehension" perk now increases not only the number of points received when reading, but also the skill increase limit.
- The mod also works with unique books (Fallout 2 Hintbook, Cat's Paw issue no.5, Nevada: "Homo Ludens", Neurosurgery Manual)

Additional settings that can be enabled:
- Books can be read aloud, then the skill will increase for the player and the companion to whom the player reads the book, or for the whole group at once, depending on the option chosen.
- The presence of the "Comprehension" perk for the player also works for companions.
- You can allow non sentient companions like dogs and brahmins to read books and receive a bonus from them.
- Addition for Fallout: Sonora. If you set "FixedSkillInc" and "FixedSkill2Inc" to 0 or less, then the increase in skills will match the description of the books (+4/+2).

<details> 
  <summary> An example of how to modify the "GUN AND BULLETS" skill book to increase the "Small guns" and "Big guns" skills. </summary>
if the "books.ini" file is not present in your game folder, then you can take it from (https://github.com/sfall-team/sfall/blob/e703a82c8b5203919b83d99c54a5c76827818cef/artifacts/config_files/books.ini)  
Now look at the example below. For changing original books "overrideVanilla=" in "books.ini" can be anything if my mod is installed.  
"count" in "books.ini" should be equal to the number of changed and/or added books  
in square brackets indicate [1] the sequence number of the new/modified book starting from the number "1", the order of changing/adding the book does not matter.  

### Beginning of the example  
[1]  
; book item PID ("GUNS AND BULLETS" PID = 102, Big Book of Science  = 73, First Aid Book = 80, Scout Handbook = 86, Dean's Electronics = 76, Chemistry journals (F2 and 1.5 only) = 237), for other books will have to google  
PID=102  
; textID from proto.msg which displayed when reading book("GUNS AND BULLETS" TextID = 805, Big Book of Science = 802, First Aid Book = 804, Scout Handbook=806, Dean's Electronics=803, Chemistry journals (F2 and 1.5 only)=802)  
TextID=805 
; corresponding skill (skill number in order from top to bottom starting with Small guns = 0, Big guns = 1, Energy weapons = 2, ending with "outdoorsman" skill = 17)  
; Skill=0 will increase "Small guns" by the amount set in "FixedSkillInc"  
Skill=0  
; Skill2 Added only by this mod, and only works with it.  
; Skill2=1 will increase "Big guns" by the amount set in "FixedSkill2Inc"  
Skill2=1  
### End of the example  
</details>

### Poison 
**(Requires "SpeedInterfaceCounterAnims = 2" and "AllowUnsafeScripting = 1 or 2") in ddraw.ini)**  
This is a rework of the original poison mechanics, designed to make it more dangerous for both the player and NPCs.

- Now not only the player takes poison damage, but all creatures without poison immunity.
- Poison damage depends on combat difficulty settings.
- Poison damage triggers at the end of each of the poisoned creature's turns in combat, or every 5 seconds when out of combat..
- If you (or NPC) accumulate more than 100 units of poison, instant death occurs.
- Now the tails of radscorpions can be used to apply poison to the player’s or Сompanions' piercing and cutting weapons.
- NPCs and Companions can apply poison to their weapons themselves if they have a radscorpion tail in their inventory.
- NPCs and Companions, when poisoned, can use an antidote(or healing items) if it's available in their inventory. They can use it during combat, while out of combat, when moving on the global map, and even while resting.
- Added a new perk "Poison Mastery", available from level 6 and requiring science above 50 or naturalist skill above 70. This perk adds poison damage when using Needler's ammunition and also increases the effectiveness of all poisoned weapons.

### Healing 
**(Requires "SpeedInterfaceCounterAnims = 2" and "AllowUnsafeScripting = 1 or 2") in ddraw.ini)**  
Replaces instant stimpak healing with healing over time.

- All creatures with a healing rate higher than 5 begin to regenerate a portion of their health every 5 seconds (equivalent to 1 combat round).
- Using a Stimpak restores a small amount of health (1-3 HP) and increases the healing rate by 20 for 15 seconds (3 rounds). Afterwards, it imposes a penalty of -25 to the healing rate for 1 minute.
- Using a Stimpack increases "healing rate" for 15 seconds (or rounds). Critters start regenerating when, the "healing_rate" must be greater than 5.
- The Super Stimpak instantly restores health based on the maximum HP and the current "healing_rate", but not less than 60 HP, while temporarily reducing the "healing_rate" by an average of 20 units (depending on the actual HP restored). The delayed damage from the Super Stimpak is proportional to the amount of actual HP restored and the difference between the "healing_rate" and the penalty to the "healing_rate". Additionally, the Super Stimpak can heal broken limbs if this feature is enabled in the ".ini" file.
- Fast Metabolism (trait) enhances the effect of Stimpaks and Super Stimpaks;
- Some monsters have passive health regeneration: wanamingos/centaurs (if enabled in the ".ini" file).
- Fire and Plasma damage temporarily reduces the target's regeneration rate and may even stop it completely.
- Added a new bonus perk called "Regeneration", which is automatically added if the player's base "healing rate" is greater than 5. This perk adds a "healing_rate"-based chance to heal crippled limbs when HP is restored. 

### Medical Tools
Changes the way the First Aid Kit, Doctor's Bag, and Paramedic's Bag are used.

- The use of the First Aid and Doctor skills without tools are unchanged.
- The skill boosts from the First Aid Kit and Doctor's Bag remained the same +20%, and +40% for the upgraded versions.
- Removed element of randomness in the number of uses of medical tools, now First Aid Kits and Doctor's Bag have an indicator of the remaining materials. First aid kit can be used 5 times until it is depleted, and the doctor's bag 3 times. Upgraded versions (paramedic bag) can be used up to 10 times.
- Removed the daily limit on the use of medical tools. The number of uses is limited only by the remaining supplies in The First Aid Kit/ Doctor's Bag.
- Each use of medical tools is guaranteed to restore a certain amount of health, ranging from the lowest possible (failed skill check) to the average and maximum values (successful skill check).
- The "Healer" perk adds an extra 4–10 (2–5 for et_tu) HP healed per perk level. 
- Healing HP with a First Aid Kits or Doctor's Bag does not grant experience points, but healing a disability with a doctor's bag grants 50 experience points for each limb healed.
- Healing effectiveness is capped at 300% for both types of medical tools.

FA tools:
- Can be used during combat. Also, NPCs and companions can use it. 
- Costs 2 AP.
- Healing efficiency equal to that of a stimpack is achieved at ~80% First Aid skill.

DOC tools:
- Can be used during combat if equipped and the Doctor's skill is 50 or more. Also, NPCs and companions can use it.
- Costs 6 AP. Cost decreases as skill increases. (Costs 5 AP at skill 100%, 4 AP at skill 150%, and so on up to 2 AP at skill 250%).
- The effectiveness of healing per AP/skill is higher than that of First Aid Kits. The amount of healing also depends on your maximum health and the severity of the injuries you received.
- The chance to heal an injury is calculated for each limb separately and capped at 100% ( 80% Doctor skill + 20% bonus from Doctor's Bag or 60% Doctor skill + 40% bonus Paramedics Bag).

### Explosion injury
Damage from grenades (including plasma grenades as well as EMP for robots), grenade launchers, and other explosive weapons that exceeds 15% (35% for robots or 10% with EMP) of the !current! health points can cause damage to the arms/legs/eyes.  
(The probability of cripling is configured in the ".ini" file and also depends on some S.P.E.C.I.A.L. of the target)
- An explosive hand injury can cause weapons to fall out of hand.

### Misses
Changes how misses work in a more "logical" way.

- Expanded the area for hitting a random target in the path of a bullet / throwing weapon.
- To hit the eyes and groin, it is now necessary that the target be turned to face you, now it will not work to hit the eyes by shooting in the back of the head. Successful aimed shot to the eyes while the target isn't facing the attacker will always turn into a headshot; the same happens if the target is liying face down. Instead of the groin, shots and melee hits from the back or rear will hit the torso or one of the legs.
- The position of body parts (and accordingly, the possibility of hitting them) changes depending on the animation of the target (if target lies face up or down, lies on its side, etc.)
- Misses of aimed attacks now have a small chance to hit an adjacent body part.

Example: Purple highlights new possible targets if the shot misses the initial target (crosshair).
![Misses](images/Misstohit.jpg)

#### Random bodypart hit
NPCs will now use aimed attacks targeting different parts of the body against the player and other NPCs.
- NPCs's aimed hit chance depends on the combat difficulty settings.
- Alternate mode for the player can also be enabled, adding a chance to hit a random body part with unaimed attacks.

### Sneak
Removes randomness from the sneak skill. Now the detection area does not depend on random dice rolls and gradually decreases with increasing skill level and the general illumination of the map.
 - Added a low light condition penalty to the NPC perception range: from 8% (basement light) to 40% (darkness).

#### Sneak Detection 
** (It is recommended to switch graphics to DirectX 9 for best performance, and also set "DontTurnOffSneakIfYouRun=1" in ddraw.ini for convenience)** 
![Sneak](images/SNEAK.gif)  
Color-coded sneak detection that works for both the original and new sneak mechanics.  
While the sneaking player is within sight of an observing NPC, that NPC will be highlighted:
- Green - Player not detected, safe to approach.
- Yellow - Player not detected, but will be detected if approaching 4 steps closer.
- Orange - Player not detected, but will be detected if approaching 1 step closer.
- Bright Red - Player has been detected.
- Dark Red - (Steal mod only) Player has been detected, but the NPC will not notice an attempt to steal from other NPCs.
- Gray   - (Fog of War disabled) Player not detected, but will be detected if line of sight becomes unblocked.

### Steal
**(Requires "AllowUnsafeScripting = 1 or 2") in ddraw.ini)**  
The original mechanics of pickpocketing did not take into account the perception of the target. And also, the probability of unsuccessful pickpocketing did not depend on skill and was always the same for both 85 and 300 skill levels (approximately 15%).  
Another frustrating aspect of the original pickpocketing mechanics was that failing to pickpocket would trigger a battle involving every city resident.
The new Steal skill mechanic is an attempt to remedy these issues.

![Steal](images/SHOW_STEAL_CHANCE.gif)
Basic moments:
- Displays the chance of stealing when you hover over an item.
- If the chance of stealing is 0%, then when you right-click on an item in the Pip-Boy window, the required minimum value for attempting to steal this item will be displayed.
- If there is more than one item in a stack, the steal chance is displayed for the maximum number of items that can be stolen with the greatest success. Right click to see the probability of stealing a larger amount of items.

- If a pickpocket fails, instead of starting a fight with the player, one of the scenes will be played and a penalty will be imposed on selling, buying and speech skill checks in dialogues.
- Penalties will gradually decrease and disappear if the player has not been caught pickpocketing in that city for a week or has not visited it for a long time.
- The targets of an unsuccessful pickpocket will remember for a couple of days that the player has already tried to steal from them and next time their reaction will be harsher.
- Experience for successful stealing/planting is awarded even if the success streak is interrupted by fail.

- The calculation of the probability of a successful steal is similar to the original formula with the addition of dependence on the target's perception and the player's steal skill.
- If the Steal skill is developed over 140%, then for every 1 point, the maximum steal chance is increased by 0.1%, up to a maximum of 99%.
- When the skill exceeds 155 + (the target's current perception x 5), it becomes possible to steal **weapons and items from the hands of the NPC.**
- To peep into a target's pocket, you need to meet the minimum skill requirements.
- In the case of an unsuccessful attempt to peep into a target's pocket, the target can sometimes become hostile. The presence of the 'Harmless' perk reduces this chance.

Modifiers that increase the skill requirement and reduce the chance of a successful pickpocket include:
- The player stands in front of the target.
- The player is seen by the target's nearby allies.
Modifiers that reduce the chance of a successful pickpocket include:
- The weight and size of the item (if the "Pickpocket" perk is not taken).
- The number of items stolen in a row.

Modifiers that reduce skill requirements and increase the chance of a successful pickpocket include:
- Sneaking mode. Bonus depends on the sneak skill level + a significant increase in the bonus if the target cannot see the player.
- Low light conditions: caves, cellars, nights, etc. — the darker it is, the easier it is to get into your pocket, adjusted for the presence of the "Night Vision" perk.
- The target is unconscious / blinded (bonus depends on the severity of the condition).

Additional settings that can be activated include:
- The first attempt to steal will always have a 100% success chance if you have reached the minimum skill level. (workaround to reduce saves/loads)
- Subsequent attempts, in order to avoid abuse of experience for stealing, will be calculated according to the formula.
- Complication of stealing items depending on their cost, the more expensive the more difficult.
- Complicated stealing from merchants.

### Swing&Thrust
With the setting enabled, swing attacks and thrusts will now have different properties.

1. **Knives**:
   - **Swing Attack**:
     - Increases the chance to hit based on the target's agility and the attacker's melee skill.
     - On lightly armored targets, a swing attack is more likely to deal maximum damage than minimum damage.
   - **Thrust Attack**:
     - Penetrates some of the target's Damage Resistance (DR) and Damage Threshold (DT) based on the attacker's melee damage stat and maximum knife damage.
     - Increases the base chance of a critical hit by 1.5 times.

2. **Sledgehammers, Clubs, Cattle Prods**:
   - **Swing Attack**:
     - Swings no longer have knockback but instead have a chance to knock down based on the damage dealt.
   - **Thrust Attack**:
     - Has increased attack range.
     - Deals up to 40% more damage to targets that are pressed against another object (such as walls, creatures, or scenery) and cannot be knocked back further or if they hit an object while "sliding".

### AntiCritical
If enabled, prevents status effects (crippling, blindness, knockout, and instant death) when receiving/dealing 0 damage on a critical hit (player and/or NPCs).

### StealthBoy AutoSneak
If enabled, Sneaking Mode is automatically applied when using a charged Stealthboy.

### Stats Recalculation
When changing the base Endurance value to a new even value (through perks and implants but not drugs), it retroactively recalculates the maximum amount of health gained from previous levels, allowing you to start the game with an odd Endurance value and later make it even without losing the progress of maximum health.

An additional option for ODD Endurance value that changes the formula for increasing health points per level.
Each point of Endurance now increases maximum health by +0.5 HP per level, rounded up every even level, instead of +1 HP per 2 points of Endurance.

When base intelligence increases (through perks and implants but not drugs), the player is given skill points according to the formula: (number of level-ups) * (intelligence - initial intelligence) * 2.

## Compatibility
- All components are compatible with most "Fallout 2"-based games. Compatibility with Nevada, Sonora, or Fallout et tu can be enabled in `mods/F2MechanicsMiniRework.ini`  
- Fully compatible with [__FO2tweaks__](https://github.com/BGforgeNet/FO2tweaks) and Fallout 2: Weapons Redone 2.3d.
- All components except for the [Steal](#steal), [Healing](#healing) and [MedToolsMod](#medical-tools) are compatible with [__EcCo__](https://github.com/phobos2077/fo2_ecco/tree/master) for Fallout 2.  

### Setting up compatibility with the EcCo 
#### Healing Mod
In the "misc.ini" [HEALING_DRUGS] (Fallout 2\mods\ecco folder)  
 - Set "healing_skill_max=0" (or set "RegenMod=0" in "F2MechanicsMiniRework.ini" to disable my tweak) 
 
In the "misc.ini" [HEALING_SKILLS] (Fallout 2\mods\ecco folder)  
 - Set "skill_use_mod=0"
- Set "skill_item_91=0" 
- Set "skill_item_47=0" 
- Set "skill_item_409=0" 
- Set "skill_item_408=0" (or set "MedToolsMod=0" in "F2MechanicsMiniRework.ini" to disable my tweak)
#### Steal mod
##### Full compatibility
In the "misc.ini" [STEAL] (Fallout 2\mods\ecco folder)  
- Set "enable_tweaks=0" 
 
In the "mods/F2MechanicsMiniRework.ini" [MAIN]  
 - Set "FO2_ECCO=0"  
##### Partial Compatibility
- Partial compatibility with EcCo steal mod is enabled by setting FO2_ECCO=1 in the `mods/F2MechanicsMiniRework.ini` file.
- Partial compatibility includes:  
	- When the steal skill exceeds 155 + (the target's current perception x 5), it becomes possible to steal weapons and items from the hands of the NPC.
	- To peep into a target's pocket, you need to meet minimum skill requirements.




## Uninstallation
Delete both `mods/F2MechanicsMiniRework.*` files.
