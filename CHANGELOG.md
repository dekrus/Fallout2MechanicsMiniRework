### Latest Version  v1.92 
##### SecondaryAttack Mod
- Fallout Sonora: Fixed shotgun knockback.
##### MedicalToolsMod
- Fallout Sonora: fixed use of the doctor's bag.
##### Regen & Poison mod
- Fallout Sonora: Super stimpack now reduces strength on use, as described in the game.
- Fallout Sonora: Food that previously provided a bonus to healing rate now instead provides a temporary bonus to maximum health.


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