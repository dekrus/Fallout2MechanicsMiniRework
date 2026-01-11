### Latest Test Version v2.0.0
- Added compatibility with **SFALL 5.1+**.
- Fixed typos and grammar mistakes throughout the text.
- Refactored code for multiple scripts.
- Mods now automatically detect conflicts with the **EcCo** mod.  
  When starting a new game or loading a save for the first time, prompts appear allowing you to choose which mods to keep active and which to disable.
### Regen & Poison Mod
- Fixed bugs when used with the **CombatControl Mod** enabled.
- Rounding calculations now use percentage chances (rounded up or down) based on the original value.
- Regeneration and poison timers are now unique per creature and fully synchronized with other event queues (e.g., drugs, radiation).
- Added options to assign PIDs to weapons and creatures whose attacks always deal poison damage.
- Added options to assign PIDs to weapons that can be coated with poison, even if they are not melee.
- Added interface indicators for active regeneration and burn effects.
- Added basic compatibility with **Megamod** and **Olympus2207**.
### Secondary Attack Mod
- Added **aimed burst fire mode** for assault rifles (can also be enabled for other burst-fire weapons).
- **Double Tap Rework:** Now fires two rapid shots in a single animation instead of applying a discount to the next shot. NPCs can use this ability if enabled in the `.ini` file.
- Energy weapon attacks now use modified projectiles and include extra animations and sounds for alternate fire.
- **PULSE and EMP ranged weapons:** Added an option to allow lightning to jump to previously hit targets.
- Damage descriptions now use text from game files instead of the vanilla Fallout 2 text for better cross-version compatibility.
- Added the ability to assign PIDs to weapons for alternate fire types that normally would not support them.
### Traits Plus
- Fixed correct damage display in inventory for the **Heavy Handed** and **Bruiser** traits.
- **One Hander:** Fixed the penalty to one-handed weapon accuracy when both arms are crippled.
- **Bloody Mess:** Fixed the turn-ending issue when bonus APs for a kill were gained on the last AP attack.
### Stats Recalculation Mod
- Fixed HP decreasing when loading a saved game.
### Sneak Detection Mod
- Sneak detection now correctly factors in **local light sources** (e.g., flares, lanterns, campfires) and dark corners, not just the overall map lighting.
### Steal Mod
- Fixed a bug where damage resistance would stack if armor was removed during the player's "caught stealing" animation.
### Skill Books Mod
- Added missing skill books for **Sonora** and **Nevada**.
- Added commentary messages when certain NPCs read books (can be disabled in settings).


### Latest Version v1.99.0
##### TraitsPlus
- Added a mod that adds new unique properties to the character's starting traits.
##### Sneak Detection Mod
- Sneak mode is retained when moving to a new location. On the global map, sneak mode is only retained if the player has the "Silent Running" perk or if both the outdoorsman and sneak skills are above 100.
##### Regen & Poison mod
- The "healing_rate" value is now shown ranging from -40 to 40 in the character menu.
- An HP regeneration bonus of 1-4 HP per tick, depending on the "healing_rate" value, is always added to the HP regeneration rate. This bonus enhances healing in the early stages of the game and when the character has low maximum health.
- Poisoned wanamingos and centaurs regenerate less health.
- The Super Stimpak now restores health based on the critter's maximum HP and the current "healing_rate," but not less than 60 HP (previously always 60 HP without scaling).
- The delayed damage from the Super Stimpak is proportional to the amount of actual HP restored and the difference between the current "healing_rate" and the healing cost.
##### SecondaryAttackMod
- Alternative attacks no longer critically hit additional targets by default. This can be re-enabled in the ".ini" file. If "TraitsPlus=1" is enabled and the player has the 'Finesse' trait, critical hits are possible with alternative attacks.
##### Steal mod
- NPCs and players turn to face each other during conversation. (Can be disabled in options with "FaceToFaceDialog")
- Added support for extended inventory (sfall version 4.4.4 and higher).
- During the "scene" of an unsuccessful pickpocket, critical hits can injure the player.
- Penalties for failed pickpocket attempts when interacting with the victim and witnesses take effect immediately, while other townspeople learn about it with a delay of 5 in-game minutes.
- Witnesses of a failed pickpocket become suspicious of the player and react more harshly to subsequent attempts to steal from them.
- Killing all witnesses of a failed pickpocket before rumors spread prevents the increase of penalties in the town.
- The total number of unsuccessful thefts now has a greater impact on NPC reactions in the town.
- An NPC about to attack the player will follow the player with its gaze as long as the player is within its line of sight.
##### Swing&Thrust
- Fixed the display of damage numbers when attacking creatures immune to knockback.

###  Version v1.98.4
##### Regen & Poison mod
- Fixed an issue where NPCs used stimpaks excessively, even after their healing rate had reached the maximum.
##### MedicalToolsMod
- Added number of remaining uses to the description of FA Kit/Doctor's Bag/e.t.c. (Copied from EcCo mod)
##### Steal mod
- Fixed display of messages about successful steal from allies who are not in the player’s party.
- Fixed a possible crash when stealthily stealing from an initially hostile NPC.



### Version v1.98.3
##### Regen & Poison mod
- Fixing a bug introduced in v1.98.2 where destroy_p_proc did not proc for creatures that died from poison.
 
### Version v1.98.2
- Geckos and plants are no longer considered intelligent creatures and cannot use drugs or objects on themselves.
##### Regen & Poison mod
- Fixed possible disabling of the game interface in some cases.
- Fixed an issue with Stimpak and healing powder duration for sfall version 5+.
- Poisoned intelligent creatures can now use stimpaks and various healing items to save their lives if they do not have an antidote.
- Poisoning the target during an attack now occurs after the attack animation, and not at its beginning.
- A critical miss dealing damage from a poisoned weapon to the attacker now poisons the attacker.
- The amount of poisoning received by companions depends on the ingame combat difficulty settings (50%,75%,100%).
- The maximum poison level for instant death is now configurable in the .ini file and can be completely disabled.
##### SecondaryAttackMod
- Fixed unwielding of items from the player's hands if the NPC uses an alternative attack with a pistol/SMG.

### Version v1.98.1
##### Swing&Thrust
- Added effects for blunt melee weapons (sledgehammers, clubs, cattle prods).
##### MedicalToolsMod
- Fixed the charge consumption of the entire stack of medical items(instead of one item) when used by NPCs (any method of use) and by the player (used on an any game object from the inventory).
- NPCs will now use the FA Kit/Doctor's Bag with the lowest remaining charge first.
##### Regen & Poison mod
- Fixed: Duplicate message about player damage from poison outside of combat mode.

### Version v1.98
##### SecondaryAttack Mod
- Added "chain shot" for PULSE and EMP ranged weapons.
- Added a mode that allows NPCs to use alternative weapon attacks, the frequency and "adequacy" of use depend on the intelligence of the NPC.
- Added a mode where each single attack (and for shotguns also a burst) will cause the effect of an alternative attack (without targeted shots to the torso).
- Improved: Animations for the effects of alternative attacks are now fully consistent with the combat speed settings in the game options.
- Fixed: Plasma explosion in alternative attack mode will no longer hit targets through walls and other non-shootable obstacles.
- Reduced base energy consumption and increased the number of targets when using the alternative fire mode with laser weapons.
##### Steal mod
- Added support for extended inventory (sfall version 5.0.6.0 and higher).
- Fixed: NPCs who died while punishing a player for stealing from them will no longer come back from the dead to finish the job.
##### Regen & Poison mod
- Fixed: The corpses of party members who died from poisoning while moving around the global map will no longer "haunt" the player.
- Fixed: Dead NPCs will no longer express their displeasure when attempting to poison them with a poison syringe.
##### Sneak Detection Mod
- The sneak detection now takes into account movement and is displayed 1 tile forward if the player is moving towards an NPC (or vice versa), allowing a little more time to react.
##### Stats Recalculation Mod
- Added support for sfall version 5.0.6.0 and higher.

### Version  v1.96 
##### Steal mod
- Fixed stealing chance at negative steal skill values.
- Fixed crash on failed steal from some NPCs.
- Disabled displaying the chance of successful steal if EcCo partial compatibility is enabled.

### Version  v1.95 
##### Steal mod
- Fixed the display of the chance of stealing for fall version 5+.
- Fixed stealing items without weight, size and price.
- Fixed the calculation and the placement of the text of the chance of stealing.

### Version  v1.94 
##### Steal mod
- Added display of the chance of successful stealing when hovering the mouse over an item.
- Prevents the delayed attack trigger from going off during a failed steal animation. The trigger will fire ~4 seconds after the end of the animation.
- Fixed the animation and sound of NPCs re-equipping their weapons during a failed theft animation.

### Version  v1.93 
##### Steal mod
- The original Fallout 2 aggression system for failed pickpockets has been reworked.
- Added a temporary penalty to the selling price, buying price, and speech skill checks in dialogues for each failed pickpocket in the town.
- Added option for partial compatibility with ECCO mod for Fallout 2.

### Version  v1.92 
##### SecondaryAttack Mod
- Fallout Sonora: Fixed shotgun knockback.
##### MedicalToolsMod
- Fallout Sonora: fixed use of the doctor's bag.
- Prevents the use of the medical tools if sfall direct control mod is enabled.
##### Regen & Poison mod
- Fallout Sonora: Super stimpack now reduces strength on use, as described in the game.
- Fallout Sonora: Food that previously provided a bonus to healing rate now instead provides a temporary bonus to maximum health.
- Prevents the use of the radscorpion's tail if sfall direct control mod is enabled.


### Version  v1.91 
##### Skill Books mod
- Fixed detection of book.ini file presence.
- Fixed description of perk "comprehension" (russian language).
- Addition for Fallout: Sonora. If you set "FixedSkillInc" and "FixedSkill2Inc" to 0 or less, then the increase in skills will match the description of the books (+4/+2).

### Version  v1.90 
- A new mod has been added that allows you to apply skill books to party members, as well as change the amount of bonus skill points when reading books.

### Version  v1.84 
##### Regen & Poison mod
- Poisoned companions and other NPCs will use the antidote more often if they have it in their inventory.
##### SecondaryAttack Mod
- Improved compatibility with new weapons in Fallout 1.5: Resurrection.
##### Explosion injury mod
- Dropped weapons can fall on a tile occupied by another creature.
##### Stats Recalculation Mod
- Fixed incorrect recalculation of statistics when used in combination with the Direct Party Control mod.


### Version  v1.83 
- Added separate Fallout 1.5: Resurrection compatibility option.
- Correction of typos in the ".ini" file.
- Some scripts renamed to change the load order.
##### Explosion injury mod
- Fixed: weapon drop chance when NPC hands are crippled by explosive weapons.
##### Stats Recalculation Mod
- Added an option to change the formula for max health gain per level for ODD endurance values.

### Version  v1.82
- Fixed: game crash caused by executing "obj_pid" code during COMBATDAMAGE script hook in some scripts.
- Correction of errors and typos in the English version of the modification.
##### Miss Mod
- Fixed: potential game crash when weapons fall out of the hands of some NPCs while taking damage from a knife.
##### SecondaryAttack Mod
- Reduced the chance of knocking down the enemy with an alternative shotgun attack.
##### Sneak Detection Mod
- Fixed: display of dark red color on Hi-Res patch (Mash) when Fog Of War is enabled.

### Version  v1.81
##### SecondaryAttack Mod
- Added double tap ability for single fire of pistols and submachine guns.
- Added knockback ability for single fire of shotguns.
##### Sneak Detection Mod
- Script optimization.

### Version  v1.8
- Added a new module that retroactively recalculates maximum health and skill points when changing SPECIAL.

### Version  v1.751
##### SecondaryAttackMod
- Fixed game version recognition.
- Fallout Nevada and Resurrection: damage animations now scale with in-game combat speed settings.
##### MedicalToolsMod
- Fixed display of text when using any skills if the Doctor/First Aid skill cannot be applied to the target.

### Version  v1.74
##### SecondaryAttackMod
- Improved mod stability.

### Version  v1.73
##### SecondaryAttackMod
- Disabled the ability to activate an alternative firing mode when shooting at scenery objects(doors, etc.).
- Fixed display of damage numbers when laser and gauss weapons miss critters with subsequent hits on scenery objects.
- Non-primary targets now become hostile towards the player after being hit in the alternate attack mode.(Excludes companions in player's party).
- Invisible targets (hidden by game scripts) are ignored when selecting additional targets and will not take damage.
- Decreased penalty to hit chance for each additional target on the line.
- Further improved compatibility with Fallout: Sonora(Now plasma aoe damage to player allies will not give experience points).
- Plasma projectile appearance changes when fired in alternate attack mode. Now also in case of a miss.

### Version  v1.72
##### SecondaryAttackMod
- Further improved compatibility with Fallout: Sonora.
- Small tweaks to script code.

### Version 1.71
##### SecondaryAttackMod
- Improved Compatibility with Fallout: Sonora.
- The presence of the "Finesse" trait now correctly affects the defense of targets.
- The presence of the "Bloody Mess" trait now affects the death animation.
- Added a setting that allows you to ignore the presence of the SNIPER perk when determining the probability of a critical hit on additional targets.
- Fixes for some damage and animation mismatch.

### Version 1.7
##### SecondaryAttackMod
- Added new module that allows to perform alternative attacks with Laser,Plasma and Gauss weapons.
##### Miss mod
- Fixed: critters could make aimed attacks with a rocket launcher.

### Version 1.62
##### Miss mod
- Fixed bullets being able to shoot through impenetrable objects on misses.

### Version 1.61
- Fixed crashes when receiving damage on an unaccounted version of the sfall.

### Version 1.6
- Added new module that automatically turns on sneak mode when using Stealthboy.
- Added new module that prevent status effects from a critical hit with 0 damage.
##### Regen & Poison mod
- Poison damage now scales with ingame combat difficulty settings.
- Added a setting to increase poison damage to enemy NPCs.
- Changed the balance of healing with stimpaks. Penalties last 1 minute, instead of 1 hour. Super Stim Penalty lasts 2 hours instead of 24.
##### Miss mod
- Weapons now drop out of hand after damage animation instead of before.
- Dropped weapons no longer fall behind walls and objects.
##### Sneak Detection mod
- Speeded up the refresh rate and added the ability to set the refresh rate when highlighting NPCs during stealth detection.
##### Explosion injury mod
- Сhance of injury now depends on the ingame combat difficulty settings.
- Added an injury rate setting separately for the player and companions.

### Version 1.5
- Added new module for medical tool usage.
##### Regen & Poison mod
- Added ability to use Radscorpion Tails for NPCs on their own.
- Added option in .ini to enable limb healing when using a super stipack.
- Fixed typos.

### Version 1.4
##### Regen & Poison mod
- Fixed regeneration penalty if the target takes fire or plasma damage.
- Lethal poison damage should no longer knock back the target.
##### Miss mod
- Restored weapon drop chance when receiving a critical hit in arm.
##### Sneak Detection mod
- Fixed outline during combat if the player was in stealth mode before it starts.
##### Explosion injury mod
- Added: Explosive hand injury can cause weapons to fall out of hand.

### Version 1.3
##### Regen & Poison mod
- Pop-up damage numbers are displayed adjusted for line-of-sight blocking in combat depending on the fog of war option enabled.
- Increased the effectiveness of the "Poison Mastery" perk.
##### Miss mod
- Boxer and "biker" models in knockout state now have the correct conditions for eye and groin hits.
##### Steal mod
- Reduced the influence of witnesses on pickpocketing difficulty.
##### Sneak Detection mod
- Added dependency of the outline on HR Fog of War and "ObjCanSeeObj_ShootThru_Fix" in "ddraw.ini".
- Added new outline colors Purple and Gray.

### Version 1.2
##### Regen mod
- Nevada food rebalance (Healing rate replaced with various stats).
##### Steal mod
- Increase the effectiveness of steal skill.
##### Sneak Detection mod
- Correction of updating the outline of critters that not have perception script.
- Increase the effectiveness of sneak skill.

### Version 1.11
##### Steal mod
- Brahmins no longer report crimes.
##### Miss mod
- Fix crashes caused by attacks from certain angles.
##### Sneak Detection mod
- Correction of updating the outline of critters.

### Version 1.1
##### Poison mod
- Preventing all robots from being poisoned. 
- Fixed death animation from poisoning if fog of war is enabled.
##### Sneak Detection mod
- Correction of night vision in robots / floaters / aliens.
##### Regen mod
- Added message to require "UnsafeScripting" to be enabled in ddraw.ini if "UnsafeRegenModScripting" is enabled in F2MechanicsMiniRework.ini.

### Version 1
Iinitial release.