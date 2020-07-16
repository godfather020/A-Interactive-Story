#include <iostream>
#include <cstdlib>
#include <string>
#include <bits/stdc++.h>

int main() {

    int user_choice = 0,user_choice1 = 0;
    std::string inventory[12] = {"CAMERA", "DICTIONARY OF CIRCUS TERMS", "MIRROR", "PEPPY,YOUR PET SNAKE", "CHOCOLATE BARS", "TALCUM POWDER", "BAG OF PEANUTS", "BUNCH OF BANANAS", "YOUR LUCKY BASEBALL CAP", "BALL OF TWINE", "BULLWHIP"};
    int inventory_choice = 0,previous = 0,pre = 0;
    std::string user_inventory[3];
    int userinventory = 0;
    std::cout << "ARE YOU READY FOR POWER PLAY!?\n"
                 "In this special edition GIVE YOURSELF GOOSEBUMPS, you've got to\n"
                 "choose the right POWER objects to take with you. Choose wrong and you're\n"
                 " gone!\n"
                 "At the Circus of Fear, you'll need to be prepared for anything - and\n"
                 "everything - that can go wrong. Like walking the tightrope after it's been cut\n"
                 "with shears! And outsmarting an evil ringmistress who wants to turn you into\n"
                 "the Kid Who Lives in a Jar!\n"
                 "So stop clowning around and make your first choices. Because it all\n"
                 "depends on you. Will you hit it big under the big top? Or will something big\n"
                 "get to you before the finale?\n"
                 "NOW, CHOOSE THREE POWER OBJECTS, AND\n"
                 "GET READY TO PLAY WITH POWER!\n\n\n ";
    std::cout << "*** TRAPPED IN THE CIRCUS OF FEAR ***\n\n\n";
    std::cout << "BEFORE YOU JOIN THE CIRCUS  READ THIS!\n\n"
                 "Congratulations! After a week at circus camp, you and your friend Richie\n"
                 "have been selected to spend a week as guest performers in a real-life circus.\n"
                 "But this is no ordinary three-ring adventure.\n"
                 "This is a terrifying circus of doom!\n"
                 "Only if you make the right choices will you and Richie survive your\n"
                 "bone-chilling experience under the big top.\n"
                 "Since this is a special GIVE YOURSELF GOOSEBUMPS, you get to\n"
                 "take three things with you for extra help. Read through the list of objects on\n"
                 "the next two pages. Then decide what you think you will need.\n"
                 "But remember, you may take only three things. No more!\n"
                 "What will you need most when the going gets tough?\n"
                 "It's up to you to choose.\n\nChoose any three things from the list below. Then pack your bags and\n"
                 "head for the circus!\n\n"
                 "1) CAMERA: Great for taking pictures of the other circus performers you\n"
                 "meet. Also useful for recording proof of evildoing (if by some strange chance\n"
                 "you run into any trouble during this adventure).\n\n"
                 "2) DICTIONARY OF CIRCUS TERMS: A small book that will teach you\n"
                 "the cool words and phrases used by circus folk.\n\n"
                 "3) MIRROR: Useful for putting on clown makeup (and for looking over\n"
                 "your shoulder).\n\n"
                 "4) PEPPY, YOUR PET SNAKE: Not necessarily useful, but you can take\n"
                 "him everywhere with you (and you're not sure you can trust your family to\n"
                 "remember to feed him).\n\n"
                 "5) CHOCOLATE BARS: You might want to take these along if you love\n"
                 "chocolate. That way, you'll be prepared if you get a craving.\n\n"
                 "6) TALCUM POWDER: The professional trapeze artists use talcum to keep\n"
                 "their hands from slipping when they grip the bars. You might want some if\n"
                 "you plan to do any swinging.\n\n"
                 "7) BAG OF PEANUTS: A tasty treat for you (and a good bribe for angry\n"
                 "elephants).\n\n"
                 "8) BUNCH OF BANANAS: Not only are they high in potassium, but the\n"
                 "peels are useful if you want to get involved with the clown acts.\n\n9) YOUR LUCKY BASEBALL CAP: You wore it every day at circus camp.\n"
                 "Nothing bad happened to you. You figure maybe the cap kept you safe.\n\n"
                 "10) BALL OF TWINE: Useful for tying things together, reconnecting broken\n"
                 "ropes, etc.\n\n"
                 "11) BULLWHIP: A fifteen-foot-long leather whip might come in handy if you\n"
                 "run into any lions or tigers on the loose!\n\n";
    std::cout << "Choose Three Items! And Start the Adventure.\n";
    while (userinventory < 3){

        for (int i = 0; i < 1; i++) {
            std::cin >> inventory_choice;

            if (inventory_choice == 1) {
                    user_inventory[userinventory].append(inventory[0]);
                    userinventory++;
            } else if (inventory_choice == 2) {
                    user_inventory[userinventory].append(inventory[1]);
                    userinventory++;
            } else if (inventory_choice == 3) {
                    user_inventory[userinventory].append(inventory[2]);
                    userinventory++;
            } else if (inventory_choice == 4) {
                    user_inventory[userinventory].append(inventory[3]);
                    userinventory++;
            } else if (inventory_choice == 5) {
                    user_inventory[userinventory].append(inventory[4]);
                    userinventory++;
            } else if (inventory_choice == 6) {
                    user_inventory[userinventory].append(inventory[5]);
                    userinventory++;
            } else if (inventory_choice == 7) {
                    user_inventory[userinventory].append(inventory[6]);
                    userinventory++;
            } else if (inventory_choice == 8) {
                    user_inventory[userinventory].append(inventory[7]);
                    userinventory++;
            } else if (inventory_choice == 9) {
                    user_inventory[userinventory].append(inventory[8]);
                    userinventory++;
            } else if (inventory_choice == 10) {
                    user_inventory[userinventory].append(inventory[9]);
                    userinventory++;
            } else if (inventory_choice == 11) {
                    user_inventory[userinventory].append(inventory[10]);
                    userinventory++;
            } else if (inventory_choice > 11) {
                    std::cout << "Choose Again!\n";
            }else {
                    std::cout << "Plz Choose!\n";
            }
        }
        if (previous == inventory_choice || pre == inventory_choice){
            std::cout << "You Already Choose That Item. Choose AGAIN!\n";
            userinventory--;
            user_inventory[userinventory].erase();
        }
        pre = previous;
        previous = inventory_choice;
    }

    std::cout << "YOUR INVENTORY.\n";

    std::cout << user_inventory[0] << ", " << user_inventory[1] << ", " << user_inventory[2] << "\n\n";

    std::cout << "Welcome! a voice booms at you over a microphone. Welcome to the\n"
                 "most astounding show on Earth!\n"
                 "You step into a dimly lit circus tent. Rope shadows dance on the pointed\n"
                 "canvas tops. The smell of animals fills your nose.\n"
                 "Good-bye, honey, your mom calls from the entryway. She blows you a\n"
                 "kiss. Have fun.\n"
                 "Okay, Mom  bye, you mumble. You're distracted by how spooky the\n"
                 "circus tent looks. So gloomy. So creepy.\n"
                 "How come it's so dark in here? Richie Fieldston whispers at your side.\n"
                 "He brushes his red hair out of his eyes.\n"
                 "I don't know, you answer. And where is everyone?\n"
                 "You and Richie were in circus camp together this summer. You learned\n"
                 "how to fly on the trapeze, do clown acts, and ride bareback on a horse.\n"
                 "You were both so good at it, you won the chance to spend a whole week\n"
                 "in a real circus.\n"
                 "What are you two waiting for? a female voice commands over the\n"
                 "microphone. Come on down, you lucky kids. And make it fast!\n"
                 "You squint into the darkness. The voice sounds familiar.\n"
                 "Mistress Barbara? you call. Is that you?\n"
                 "The name's not Barbara, the voice snaps. It's Barbarous!\nBarbarous? You gulp. You and your mom met the ringmistress of the\n"
                 "circus outside. She seemed sweet and friendly.\n"
                 "But she doesn't sound so sweet now!\n"
                 "Hurry up! her voice booms over the microphone.\n"
                 "Come on, Richie! you exclaim. We'd better get down there!\n"
                 "You hustle down the dim aisle. Richie follows reluctantly behind you.\n"
                 "You toss your backpack down on a chair in the front row and step onto the\n"
                 "sawdust-covered floor of the main ring. Richie plops down in a chair.\n"
                 "Suddenly the lights snap on. Bright, glaring lights that almost blind you.\n"
                 "In the next instant, a curtain swings back. Mistress Barbarous steps out\n"
                 "holding a cordless microphone. She is wearing black leather pants, a red satin\n"
                 "blouse, and a snug black vest. She smiles wickedly at you and claps her hands\n"
                 "three times.\n"
                 "Let the fun begin! she bellows into the microphone.\n"
                 "From behind her, a man in a black cape rides into the ring, standing on a\n"
                 "horse.\n"
                 "He's carrying a huge silver knife!\n"
                 "And he's pointing it at you!\nSWOOSH! The man on the horse gallops right by you - so fast and\n"
                 "close, he nearly knocks you down.\n"
                 "You! Mistress Barbarous cries. She points at you as she strides into the\n"
                 "middle of the ring. Move it! Get over there so Morton the Knife Thrower can\n"
                 "practice!\n"
                 "She points at a huge white board. It's a target with an outline of a person\n"
                 "painted on it.\n"
                 "You know from circus camp what to do. You're supposed to stand in front\n"
                 "of the board with your arms out like the painted outline. Then the knife\n"
                 "thrower will throw knives at you.\n"
                 "Missing you. You hope!\n"
                 "You glance at the man on the horse. And at his sharp, sparkling knife.\n"
                 "This could be really dangerous, you realize.\n"
                 "Maybe you could still catch up with your mom outside. Then again, if you\n"
                 "defy Mistress Barbarous's orders, there's no telling what might happen.\n"
                 "Well?\n\n";

    std::cout << "1) If you stand in front of the board.\n";
    std::cout << "2) If you run to catch up with your mom.\n";

    std::cin >> user_choice;

    // LOOP 1

    while (user_choice != 0) {
        if (user_choice == 1) {
            std::cout << "You stand in front of the target and stretch out your arms and legs to\n"
                         "match the white outline.\n"
                         "Remember to hold still, Richie calls to you. He sounds nervous. But not\n"
                         "anywhere near as nervous as you are.\n"
                         "You're petrified!\n"
                         "Your heart pounds in rhythm with the horse's hooves stomping around the\n"
                         "ring.\n"
                         "BA-BOOM. BA-BOOM. BA-BOOM.\n"
                         "Don't move! the knife thrower warns. Not an inch. Not unless you\n"
                         "want to get hurt!\n"
                         "With a horrible glint in his eye, he pulls back his arm and throws the\n"
                         "huge, gleaming knife.\n"
                         "It looks like the knife is coming straight at your heart!\n"
                         "Are you going to just stand there? Or should you try to leap out of the\n"
                         "way?\n\n";

            std::cout << "1) If you leap out of the way.\n";
            std::cout << "2) If you stand still.\n";
            user_choice = 0;
            std::cin >> user_choice1;

        } else if (user_choice == 2) {
            std::cout << "Get into place! Barbarous demands over the microphone.\n"
                         "Forget it! you shout. I'm out of here.\n"
                         "You spin around and race up the aisle. You wave to Richie as you zip past\n"
                         "him. I hope he leaves, too, you think.\n"
                         "You run. Out of the creepy tent. Through the dust of the parking lot,\n"
                         "where your mom's minivan is heading for the road.\n"
                         "Mom! you shout, waving your arms frantically. Wait! Come back!\n"
                         "Your mom has the window rolled up.\n"
                         "Oh, no! She can't hear me, you realize.\n"
                         "But she glances over. She sees you waving and waves back.\n"
                         "Bye! she mouths. She flashes you a big smile and then pulls out of the\n"
                         "parking lot.\n"
                         "Why didn't she stop? you wonder.\n"
                         "You hear a nasty little laugh. Behind you. You whirl around.\n"
                         "It's Mistress Barbarous. Waving and smiling good-bye to your mom\n"
                         "behind your back.\n"
                         "No wonder your mom left! She thought you and Barbarous were happily\n"
                         "waving good-bye.\n"
                         "Back inside! Mistress Barbarous says through clenched teeth.\nMistress Barbarous grabs your arm. Hard. And marches you back into the\n"
                         "tent.\n"
                         "You don't put up a fight. After all, what choice do you have? Your mom is\n"
                         "gone. And she's not coming back for a week.\n"
                         "Inside the tent, the knife thrower is still racing around and around the\n"
                         "ring. He looks impatient.\n"
                         "What's going on? Is everything okay? Richie asks you as Mistress\n"
                         "Barbarous leads you past him and into the ring.\n"
                         "Everything is just great! Sit back down! Mistress Barbarous snaps at\n"
                         "Richie. Your friend is about to become a real circus star. Do your stuff,\n"
                         "circus kid, she adds to you. She pushes you toward the white target board.\n"
                         "Good luck! she spits. You'll need it! Morton's not very good!\n"
                         "Not very good? You gulp as you hurry to take your place.\n"
                         "Not very good!\nYou stand in front of the target and stretch out your arms and legs to\n"
                         "match the white outline.\n"
                         "Remember to hold still, Richie calls to you. He sounds nervous. But not\n"
                         "anywhere near as nervous as you are.\n"
                         "You're petrified!\n"
                         "Your heart pounds in rhythm with the horse's hooves stomping around the\n"
                         "ring.\n"
                         "BA-BOOM. BA-BOOM. BA-BOOM.\n"
                         "Don't move! the knife thrower warns. Not an inch. Not unless you\n"
                         "want to get hurt!\n"
                         "With a horrible glint in his eye, he pulls back his arm and throws the\n"
                         "huge, gleaming knife.\n"
                         "It looks like the knife is coming straight at your heart!\n"
                         "Are you going to just stand there? Or should you try to leap out of the\n"
                         "way?\n\n";

            std::cout << "1) If you leap out of the way.\n";
            std::cout << "2) If you stand still.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        } else {
            std::cout << "Wrong choice! Choose Again!.\n";
            std::cin >> user_choice;
        }
    }

    user_choice = 1;
    while (user_choice != 0){
        if (user_choice1 == 1){
            std::cout << "No way are you going to stick around and get stuck!\n"
                         "Yikes! you cry as you leap away from the board.\n"
                         "THWAP! The knife pierces the wooden target. Stabbing it right through\n"
                         "the heart!\n"
                         "Whoa! Richie cries.\n"
                         "What kind of circus is this? If you hadn't moved you'd be dead!\n"
                         "Richie, let's get out of here! you yell. Come on!\n"
                         "You and Richie race toward the closest exit. It's a slit in the tent flaps.\n"
                         "Catch them! Mistress Barbarous screams over the microphone. Don't\n"
                         "let them get away!\n"
                         "You and Richie dash out of the main tent and into a large backstage tent.\n"
                         "Costumes and pieces of circus equipment are scattered on the floor.\n"
                         "What's going on? Richie cries. He shoots you a terrified glance. Are\n"
                         "they trying to kill us or what?\n"
                         "I don't know! you yell. But look out!\n"
                         "A clown car is barreling straight at you.\n"
                         "Trying to run you down.\n"
                         "Jump! you shout. Out of the way!\nYou leap out of the way of the speeding clown car.\n"
                         "The car screeches to a halt. The doors fly open, and circus clowns start\n"
                         "pouring out.\n"
                         "A skinny clown with a rainbow wig pushes Richie facedown and puts a\n"
                         "giant clown shoe on his back.\n"
                         "Help me! Richie shouts.\n"
                         "You step over to try to help him, but you freeze in your tracks.\n"
                         "A huge clown with a green face and a hideous, glaring smile is stalking\n"
                         "toward you. His teeth are horrible. They're black.\n"
                         "His arms are outstretched. Reaching for you. As if he wants to grab you\n"
                         "by the throat.\n"
                         "He's too far away to reach me, you think.\n"
                         "But it doesn't matter.\n"
                         "Because his arms suddenly start to stretch and grow!\n"
                         "The arms grow skinnier and skinnier as they lengthen.\n"
                         "Nooooo! you scream.\n"
                         "The long arms reach you!\n"
                         "Then the clown's white-gloved hands close around your throat.\nLet me go! you manage to croak, even though the evil clown's hands\n"
                         "are clamped around your throat.\n"
                         "Psst, a voice near you says. You feel a tug on your sleeve.\n"
                         "You glance down. A cute little clown in a frilly pink suit is trying to get\n"
                         "your attention. His cheeks are round and rosy. Blue glitter stars are painted\n"
                         "around his eyes.\n"
                         "The clown who's choking you doesn't notice the other clown.\n"
                         "Hi. I'm Mr. Peepers. Got anything to eat? the pudgy little clown\n"
                         "whispers to you. If you do, I'll help you get free.\n"
                         "But did you bring any food with you on this adventure?\n";

            std::cout << "1) To give the clown the chocolate bars.\n";
            std::cout << "2) To give him the bag of peanuts.\n";
            std::cout << "3) To give him the bunch of bananas.\n";
            std::cout << "4) If you didn't bring any food.\n";
            std::cout << "5) Check Inventory\n";
            user_choice = 0;
            std::cin >> user_choice1;
        }
        else if (user_choice1 == 2){
            std::cout << "THWACK!\n"
                         "You should have ducked!\n"
                         "Ooooohh, Richie cries, turning his eyes away.\n"
                         "He can't stand to look at you. You're pinned to the board like a butterfly\n"
                         "in a science project.\n"
                         "That's it, Morton, Mistress Barbarous says with a sigh to the knife\n"
                         "thrower. You have the worst aim I've ever seen. You're fired.\n"
                         "Too bad for Morton.\n"
                         "But it's much worse for you!\n\nTHE END!!\n\n\n";
            user_choice = 0;
            user_choice1 = 0;

        } else{
            std::cout << "Wrong Choice! Choose Again!\n";
            std::cin >> user_choice1;
        }
    }

    // LOOP 2

    user_choice = 1;
    while (user_choice != 0){
        if (user_choice1 == 1 and (user_inventory[0] == inventory[4] or user_inventory[1] == inventory[4] or user_inventory[2] == inventory[4])){
            std::cout << "Your face turns red as the cruel clown squeezes your throat. Tighter.\n"
                         "Tighter.\n"
                         "But you turn your head and manage to squeak out an answer to the tiny\n"
                         "clown beside you.\n"
                         "Chocolate, you gasp. I've got chocolate bars in my backpack.\n"
                         "Chocolate! Goody, goody! Mr. Peepers exclaims. I'll help you!\n"
                         "In the blink of an eye, Mr. Peepers picks up a huge wooden mallet and\n"
                         "swings it at the mean clown's knees.\n"
                         "WHACK! WHACK!\n"
                         "Yeowwwwww! the huge clown cries in pain. He lets go of you!\n"
                         "You drop to your hands and knees, panting hard. You can breathe! You're\n"
                         "so thankful!\n"
                         "Come on! Mr. Peepers yells. He pulls you to your feet. Let's go!\nDust flies up under your feet as you and Mr. Peepers run through the\n"
                         "circus tents.\n"
                         "What about Richie? you think. He's in trouble, too!\n"
                         "I have to go back for my friend! you shout to Mr. Peepers. You turn to\n"
                         "go help Richie, but then you see the evil clown stretching his arms again. The\n"
                         "awful white hands are coming for you!\n"
                         "Never mind! you scream. Let's go!\n"
                         "Mr. Peepers ducks under a lion cage. You follow. You both crawl on your\n"
                         "bellies to the other side. Then you hide behind a large leather trunk.\n"
                         "You watch as the clown hands search everywhere for you. But they can't\n"
                         "find your hiding place. Finally they give up and shrink away.\n"
                         "We did it! you exclaim. Thank you so much!\n"
                         "You're welcome. Now, where's my chocolate? Mr. Peepers holds out\n"
                         "his hand expectantly.\n"
                         "It's in my backpack, you answer, breathing hard. I left it in the main\n"
                         "tent.\n"
                         "All right, follow me, Mr. Peepers orders you.\n"
                         "B-b-but Mistress Barbarous is in there! you stammer. She was trying\n"
                         "to kill me before!\nAll right, all right, Mr. Peepers grumbles. I'll go and get your bag. You\n"
                         "wait here!\n"
                         "You cower behind the leather trunk, hoping that no one finds you. Sweat\n"
                         "trickles down the back of your neck.\n"
                         "I'll get my backpack, find Richie, and get out of this madhouse, you\n"
                         "think.\n"
                         "Suddenly you hear the pitter-patter of little feet. It's Mr. Peepers. He\n"
                         "clutches your backpack in his tiny hands.\n"
                         "Here! I found it! he announces. Now it's chocolate time!\n"
                         "You unzip the pack and give Mr. Peepers all three candy bars. He earned\n"
                         "them.\n"
                         "Mmmm, goody, goody! he chuckles. He unwraps one, stuffs it into his\n"
                         "mouth whole, and grins.\n"
                         "I have to go find my friend Richie, you declare. You pull your pack\n"
                         "onto your shoulders. But before I go, can you please tell me what is going on\n"
                         "here? Why is everyone out to get us?\n"
                         "Mr. Peepers shakes his head sadly.\nMistress Barbarous is evil, Mr. Peepers whispers. Chocolate drool drips\n"
                         "down his chin. Her whole family is evil. They have magic powers.\n"
                         "Barbarous, Morton the Knife Thrower, Geyorg the Clown, the Great Bostini,\n"
                         "who is the lion tamer, and Mistress Barbarous's two sisters. All of them. She\n"
                         "gets her power from -\n"
                         "But before the clown can finish, you hear a familiar voice. One that sends\n"
                         "chills up your spine.\n"
                         "Aha! Mistress Barbarous cries. Caught you!\n"
                         "You stare up at her.\n"
                         "Mistress Barbarous is standing at the far side of the tent with her hands on\n"
                         "her hips. She looks furious.\n"
                         "How dare you run away from me? she bellows. You're in big trouble,\n"
                         "circus kid!\nMistress Barbarous takes a step closer to you.\n"
                         "You want to dart away as fast as you can. Away from the dangerous\n"
                         "ringmistress.\n"
                         "But which way? She's blocking the exit.\n"
                         "You have only two other choices. You see the flap that you and Mr.\n"
                         "Peepers raced through earlier. It leads into the big tent. Maybe the clowns will\n"
                         "be gone by now! And maybe you can find Richie. Then you two could escape\n"
                         "together.\n"
                         "You also notice a sign pointing to another flap. It reads SIDESHOW.\n"
                         "Hmmm. There might be a way out through there.\n"
                         "But the very idea of a sideshow makes your skin crawl. The freaky\n"
                         "exhibits would probably be extra-disgusting in a crazy circus like this one.\n"
                         "Now come over here! Mistress Barbarous demands as she draws nearer.\n"
                         "Hurry, Mr. Peepers squeals. Which way are you going to run?\n\n";

            std::cout << "1) If you race into the sideshow.\n";
            std::cout << "2) If you run into the big tent, say good-bye to Mr. Peepers now.\n";
            std::cin >> user_choice1;
            user_choice = 0;
            for (int i = 0; i < 3; ++i) {
                if (user_inventory[i] == inventory[4]){
                    user_inventory[i].erase();
                }
            }
        }
        else if (user_choice1 == 2 and (user_inventory[0] == inventory[6] or user_inventory[1] == inventory[6] or user_inventory[2] == inventory[6])){
            std::cout << "Yes! you gasp to the tiny clown at your side. I have food. I've got a\n"
                         "bag of peanuts.\n"
                         "Peanuts? Mr. Peepers sputters. Peanuts? Do I look like an elephant?\n"
                         "What would I want with a bag of peanuts?\n"
                         "Give me a break! you whisper with the last of your breath. Please help\n"
                         "me!\n"
                         "Don't you have any chocolate bars? the pudgy clown demands.\n"
                         "Too bad you can't answer him. You just gasped your last breath.\n"
                         "Oh, well. Nice try.\n"
                         "At least you've learned something for next time. And this is a rule that\n"
                         "will get you through all kinds of tricky situations, both in GOOSEBUMPS\n"
                         "and in real life:\n"
                         "Chocolate can almost always save the day!\n\nTHE END!!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 3 and (user_inventory[0] == inventory[7] or user_inventory[1] == inventory[7] or user_inventory[2] == inventory[7])){
            std::cout << "You brought bananas from home. Luckily, you stuck one in your pocket.\n"
                         "You can barely speak, because the giant clown is choking you. But you\n"
                         "reach into your pocket and pull out the banana.\n"
                         "You toss it to the pudgy clown.\n"
                         "Just a banana? the clown complains. No chocolate?\n"
                         "You said you'd help, you choke out.\n"
                         "Yeah, yeah. Mr. Peepers peels the banana, eats it, and tosses the peel to\n"
                         "the ground in front of the huge, evil clown.\n"
                         "Hey, look at me! Mr. Peepers yells. Then he deliberately steps on the\n"
                         "peel. He slips and lands with a dramatic SPLAT!\n"
                         "Ha-ha! the huge clown laughs, letting go of your throat.\n"
                         "You fall to the ground, gasping for air.\n"
                         "You're so psyched that you're free!\n"
                         "But then the huge clown takes a step forward and slips on the banana peel\n"
                         "himself.\n"
                         "Whoops! he cries in delight, falling.\n"
                         "Falling ... falling ... falling your way!\nThere's a fifty-fifty chance that you can dodge the huge falling clown.\n"
                         "It all depends on which way you move.\n"
                         "To the right? Or left?\n"
                         "Flip a coin.\n\n";

            std::cout << "3) If it comes up heads, jump to the right.\n";
            std::cout << "4) If it's tails, dodge left.\n";
            user_choice = 0;
            std::cin >> user_choice1;
            for (int i = 0; i < 3; ++i) {
                if (user_inventory[i] == inventory[7]){
                    user_inventory[i].erase();
                }
            }
        }
        else if (user_choice1 == 4){
            std::cout << "I don't have any food. You choke out the words as the evil clown's\n"
                         "fingers tighten around your neck.\n"
                         "Mr. Peepers shrugs and starts to walk away. You know he's your only\n"
                         "chance!\n"
                         "Wait! you gasp. You think fast.\n"
                         "Your mom gave you some money to spend during the week. I'll buy you\n"
                         "something to eat if you help me! you whisper desperately.\n"
                         "Okay, the little clown agrees.\n"
                         "He reaches into a deep pocket in his clown suit and whips out a seltzer\n"
                         "bottle. With a quick flick of his thumb, Mr. Peepers blasts the evil clown in\n"
                         "the face with seltzer water.\n"
                         "Aaahhhh! the giant clown screams, letting go of you and backing away.\n"
                         "Your heart races as you gulp in big breaths of air.\n"
                         "The bad clown is howling and writhing in agony.\n"
                         "You stare at him to see why he's screaming so much. After all, it's just\n"
                         "seltzer!\n"
                         "Yikes! Your mouth drops open. His clown makeup is running in rivers\n"
                         "down his cheeks.\n"
                         "But underneath the green makeup, there's no face!\nThe huge clown puts his hands up to cover the horror underneath.\n"
                         "Under the makeup there's no flesh. No skin. Just bones!\n"
                         "Just a gruesome, worm-eaten skull.\n"
                         "It's horrifying! You're frozen with fear.\n"
                         "Come on, Mr. Peepers yells. We've got to get away now! Once he puts\n"
                         "his face back on he'll come after you again! Run!\n"
                         "The pudgy clown turns and bolts out of the tent. You run! Your heart\n"
                         "pounds like a bass drum.\n"
                         "You follow Mr. Peepers to a smaller tent next to the big top. This tent is\n"
                         "filled with food machines: a hot dog cooker, nachos, popcorn, peanuts, a\n"
                         "cotton candy machine. But the tent is deserted.\n"
                         "There's no one to sell the food to you.\n"
                         "Cotton candy, Mr. Peepers demands. He seemed so cute before. Now\n"
                         "he's all red in the face. I want cotton candy! Now!\nBut there's no one here! you protest. I don't know how to make cotton\n"
                         "candy!\n"
                         "Figure it out! Mr. Peepers screams, jumping up and down. Make it for\n"
                         "me now, or I'll tell the big, mean clown where you are!\n"
                         "Okay, okay, you say quickly. Man, what a whiner!\n"
                         "You flip on the cotton candy machine. You've watched people make it, so\n"
                         "you sort of know what to do. You pour a packet of pink sugar into the bowl.\n"
                         "Hurry! the clown screams. Yummy, yummy, yum-yum-yum!\n"
                         "The fuzzy pink candy starts to build up on the sides of the metal bowl.\n"
                         "You need a paper cone to twirl it up. But you can't find one.\n"
                         "Do you see any of those paper cones? you ask the tiny clown as you\n"
                         "search.\n"
                         "Never mind that! he snaps. Just use your hands!\n"
                         "Your hands? That kind of sounds like fun!\n"
                         "But the sugar is spinning pretty fast.\n"
                         "Is it really a good idea?\n\n";

            std::cout << "5) To use your hands for the cotton candy.\n";
            std::cout << "6) To refuse.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 5){
            std::cout << user_inventory[0] << ", " << user_inventory[1] << ", " << user_inventory[2] << "\n";
            std::cin >> user_choice1;
        }
        else if (user_choice1 > 0){
            std::cout << "You Don't have this Item. Choose Again.\n";
            std::cin >> user_choice1;
        } else {
            user_choice = 0;
        }
    }

    //LOOP 3

    user_choice = 1;
    while (user_choice != 0){
        if (user_choice1 == 1){
            std::cout << "Quick! The sideshow! you yell to Mr. Peepers. You both dash away\n"
                         "from Mistress Barbarous and into the sideshow.\n"
                         "Come back here, you little imps! Mistress Barbarous shouts. She lunges\n"
                         "toward you. But she trips!\n"
                         "BAM! She wipes out!\n"
                         "Good! you think. More time to get away.\n"
                         "But that's when the wretched, rotten smell of the sideshow fills your nose.\n"
                         "Whoa! you exclaim. You can't help but stop. The smell is so bad it\n"
                         "makes you feel faint.\n"
                         "And then you see the exhibits.\n"
                         "You gasp in horror.\nYour stomach flips over as you stare open-mouthed at the sideshow\n"
                         "exhibits.\n"
                         "The Lizard Boy ...\n"
                         "The Girl with Five Tongues ...\n"
                         "The Bearded Girl ...\n"
                         "And that smell! It's coming from a cage that's dark inside. You can't\n"
                         "make out what's in it, but a sign over the exhibit reads: SEE IT! SMELL IT! AND\n"
                         "FOR AN EXTRA $5 YOU CAN TASTE IT! THE KID WITH ROTTEN FLESH!\n"
                         "Disgusting! Revolting! No way do you want to see it. The stench alone\n"
                         "makes you stagger and fall to your knees.\n"
                         "Then you lock eyes with the Lizard Boy. The giant lizard is as big as you\n"
                         "are. His face looks almost human.\n"
                         "Except that it's covered in scales!\n"
                         "Something in the Lizard Boy's eyes looks familiar. Normal.\n"
                         "Then, with a flash of dread, you recognize him. It's Danny Mendleson! A\n"
                         "kid who was at circus camp with you last year! Last year he won the chance\n"
                         "to spend a week in this circus.\n"
                         "Be careful, he whispers. Don't let Barbarous catch you, or you'll end\n"
                         "up here forever. Like me!\nH-h-how did this happen to you? you stammer.\n"
                         "It happened to all of us, Danny says, nodding at the other sideshow\n"
                         "exhibits. We came here as normal kids. But Barbarous trapped us and used\n"
                         "her magic on us. Now we're freaks.\n"
                         "And we'll be here forever, the Girl with Five Tongues moans. Her other\n"
                         "tongues repeat the last word, like an echo. Forever-forever-forever-forever.\n"
                         "The eerie echo makes your skin crawl.\n"
                         "I've got to find Richie and get out of here! you declare. But how do I\n"
                         "do it?\n"
                         "I don't know, Danny says. We all tried to run away. To escape. But\n"
                         "Barbarous always caught us.\n"
                         "Someone's coming, Mr. Peepers declares. He's been keeping watch\n"
                         "while you talk to your friend. Probably Mistress Barbarous!\n"
                         "Quick! Hide! Danny whispers.\n"
                         "No! Run! Mr. Peepers instructs you.\n"
                         "Hide or run? Hide or run? Quick, choose!\n\n";

            std::cout << "1) If you're a fast runner.\n";
            std::cout << "2) If not, you'd better hide.\n";
            std::cin >> user_choice1;
            user_choice = 0;

        }
        else if (user_choice1 == 2){
            std::cout << "You dash into the big tent and glance around.\n"
                         "Empty. Quiet. No knife thrower.\n"
                         "Good! You sling your backpack over one shoulder and wonder what to do\n"
                         "next.\n"
                         "That's when you feel something drop onto your head.\n"
                         "You put your hand up and cautiously touch your hair.\n"
                         "Yuck! It's wet! Just a drop, but slimy!\n"
                         "Who's above you? Someone is up there in the dark at the top of the tent,\n"
                         "dropping slimy goop into your hair!\n"
                         "You tilt your head back and gaze up.\n"
                         "A figure is perched on a small wooden platform. The platform that the\n"
                         "trapeze artists swing from.\n"
                         "From the way he's crouching, you're afraid he's going to drop on you at\n"
                         "any moment!\nYou turn to race toward the exit. You've got to get out of the way before\n"
                         "the slime guy drops down!\n"
                         "But you freeze in your tracks.\n"
                         "Mistress Barbarous is standing by the exit. She's talking to one of the\n"
                         "circus performers. Probably telling him to be on the lookout for you!\n"
                         "If she spots you, you're dead.\n"
                         "Pssst! From above, you hear the guy on the perch.\n"
                         "It's me, Richie! he calls down in a loud whisper. Come hide with me!\n"
                         "You see a ladder leading up to the platform. You could climb it and hide\n"
                         "with your friend.\n"
                         "But maybe you should just make a run for it. You don't want to be in this\n"
                         "creepy circus for one minute longer!\n"
                         "Make up your mind - before Mistress Barbarous sees you!\n\n";

            std::cout << "3) To climb up and hide with Richie.\n";
            std::cout << "4) To run past Mistress Barbarous.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 3){
            std::cout << "The coin comes up heads, so you lurch to the right to avoid the giant\n"
                         "slipping-and-sliding clown.\n"
                         "Oops. Wrong way.\n"
                         "Whoa! the clown cries as his feet fly up in the air.\n"
                         "With a huge, groaning crash, he comes down on top of you.\n"
                         "SPLAT.\n"
                         "You'd like to cry Ouch! but you can't.\n"
                         "You'd like to tell him to get off you - but you can't.\n"
                         "You'd even like to start this story over and forget about the bananas next\n"
                         "time....\n"
                         "Hey, now that's something you can do!\n\nTHE END!\n\n\n";
            user_choice = 0;
            user_choice1 = 0;
        }
        else if (user_choice1 == 4){
            std::cout << "You dart to the left.\n"
                         "Aaaahhhhhhh! you scream, watching the huge clown flip in the air.\n"
                         "WHAM! He hits the ground right where you were standing a second ago.\n"
                         "Phew. You're safe!\n"
                         "Or are you?\n"
                         "Run! Mr. Peepers urges you. Get out of here before he kills you!\n"
                         "You glance at the huge clown on the ground.\n"
                         "His elastic arms have begun to stretch out again! Toward your throat!\n"
                         "You scramble to your feet and take off.\n"
                         "And watch out for Mistress Barbarous, the pudgy clown calls after you.\n"
                         "She and her whole family. They're bad. They do things....\n"
                         "His voice trails off behind you as you dash back to the big tent. Toward\n"
                         "the exit. It seems like the best place to run.\n"
                         "The only problem is: The last time you were under the big top, a maniac\n"
                         "knife thrower was trying to kill you!\n"
                         "Is he still there?\nYou dash into the big tent and glance around.\n"
                         "Empty. Quiet. No knife thrower.\n"
                         "Good! You sling your backpack over one shoulder and wonder what to do\n"
                         "next.\n"
                         "That's when you feel something drop onto your head.\n"
                         "You put your hand up and cautiously touch your hair.\n"
                         "Yuck! It's wet! Just a drop, but slimy!\n"
                         "Who's above you? Someone is up there in the dark at the top of the tent,\n"
                         "dropping slimy goop into your hair!\n"
                         "You tilt your head back and gaze up.\n"
                         "A figure is perched on a small wooden platform. The platform that the\n"
                         "trapeze artists swing from.\n"
                         "From the way he's crouching, you're afraid he's going to drop on you at\n"
                         "any moment!\nYou turn to race toward the exit. You've got to get out of the way before\n"
                         "the slime guy drops down!\n"
                         "But you freeze in your tracks.\n"
                         "Mistress Barbarous is standing by the exit. She's talking to one of the\n"
                         "circus performers. Probably telling him to be on the lookout for you!\n"
                         "If she spots you, you're dead.\n"
                         "Pssst! From above, you hear the guy on the perch.\n"
                         "It's me, Richie! he calls down in a loud whisper. Come hide with me!\n"
                         "You see a ladder leading up to the platform. You could climb it and hide\n"
                         "with your friend.\n"
                         "But maybe you should just make a run for it. You don't want to be in this\n"
                         "creepy circus for one minute longer!\n"
                         "Make up your mind - before Mistress Barbarous sees you!\n\n";

            std::cout << "3) To climb up and hide with Richie.\n";
            std::cout << "4) To run past Mistress Barbarous.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }//51 38
        else if (user_choice1 == 5){
            std::cout << "Plunge your hands into the spinning sugar?\n"
                         "Why not? you think. It'll be fun.\n"
                         "Carefully, you ball your hands into fists. Then you dip them both into the\n"
                         "machine.\n"
                         "Little by little, you begin to pick up the cotton candy, wrapping it around\n"
                         "and around your hands.\n"
                         "Yummy! Yummy! Let me have it! Mr. Peepers demands, drooling with\n"
                         "anticipation.\n"
                         "You hold out your fists toward the greedy clown.\n"
                         "I hope he's a careful eater, you think.\n"
                         "Hold it right there! commands an icy voice.\n"
                         "It's Mistress Barbarous! No!\n"
                         "You spin around and gasp.\n"
                         "Her eyes -\n"
                         "They're flaming purple!\nMistress Barbarous's eyes are terrifying pools of glowing purple fire. She\n"
                         "glances at your cotton-candy wrapped hands and laughs.\n"
                         "Candy Hands! she declares with delight.\n"
                         "In the next instant, she shoots a bolt of purple light out of her eyes.\n"
                         "As the bolt hits, you feel a strange charge of energy. A tremendous shock.\n"
                         "Your try to wriggle your fingers. You can't even feel them!\n"
                         "You stare down at your hands.\n"
                         "Instead of fingers, five tufts of cotton candy spring from each palm.\n"
                         "Horror fills you.\n"
                         "Nooooooo! you cry.\nMistress Barbarous laughs an evil laugh.\n"
                         "Please change my hands back! you beg her. Please!\n"
                         "Hey! I want my cotton candy! Mr. Peepers demands. He jumps up and\n"
                         "takes a huge chomp out of your left pinky.\n"
                         "Instantly, the cotton candy grows back. It's magic!\n"
                         "A moment later, Richie walks in. His face is miserable. And he's hiding\n"
                         "his own hands behind his back.\n"
                         "What happened to you? you ask him with a gulp.\n"
                         "He pulls his hands out to show you. He's got five sticks of butter instead\n"
                         "of fingers!\n"
                         "Butterfingers, he says glumly. For the popcorn machine.\n"
                         "You two will work here, in the food tent, Mistress Barbarous decides.\n"
                         "You'll be our special attractions to get kids to buy more candy and popcorn.\n"
                         "What a brilliant idea!\n"
                         "You'll never be able to leave the circus now. But at least you'll get free\n"
                         "cotton candy for the rest of your life!\n\nTHE END!\n\n\n";
            user_choice = 0;
            user_choice1 = 0;
        }
        else if (user_choice1 == 6){
            std::cout <<"Forget it, you tell the pudgy clown. I'm not putting my hands in there.\n"
                         "It might hurt!\n"
                         "But I want cotton candy! Mr. Peepers screams. Cheater! Cheater!\n"
                         "Cheater!\n"
                         "Wow, you think. This guy acts as if he's already had enough sugar for one\n"
                         "day.\n"
                         "But you promised. So you've got to keep your word.\n"
                         "Quickly you glance around the tent. You spot some pinwheels. You grab\n"
                         "one, rip the top off, and use the stick to catch the airy spun sugar in the cotton\n"
                         "candy machine. When you've scooped up a big wad of it, you hand it to the\n"
                         "clown.\n"
                         "Yummy! Thank you! Mr. Peepers coos.\n"
                         "Okay, whatever, you mutter.\n"
                         "You scratch your head. Now what?\n"
                         "You have two things to do - find Richie and escape from the circus. But\n"
                         "first, you want to go and pick up your backpack. You left it in the main tent\n"
                         "under the big top.\n"
                         "You just pray that the knife thrower isn't still waiting in there!\nYou dash into the big tent and glance around.\n"
                         "Empty. Quiet. No knife thrower.\n"
                         "Good! You sling your backpack over one shoulder and wonder what to do\n"
                         "next.\n"
                         "That's when you feel something drop onto your head.\n"
                         "You put your hand up and cautiously touch your hair.\n"
                         "Yuck! It's wet! Just a drop, but slimy!\n"
                         "Who's above you? Someone is up there in the dark at the top of the tent,\n"
                         "dropping slimy goop into your hair!\n"
                         "You tilt your head back and gaze up.\n"
                         "A figure is perched on a small wooden platform. The platform that the\n"
                         "trapeze artists swing from.\n"
                         "From the way he's crouching, you're afraid he's going to drop on you at\n"
                         "any moment!\nYou turn to race toward the exit. You've got to get out of the way before\n"
                         "the slime guy drops down!\n"
                         "But you freeze in your tracks.\n"
                         "Mistress Barbarous is standing by the exit. She's talking to one of the\n"
                         "circus performers. Probably telling him to be on the lookout for you!\n"
                         "If she spots you, you're dead.\n"
                         "Pssst! From above, you hear the guy on the perch.\n"
                         "It's me, Richie! he calls down in a loud whisper. Come hide with me!\n"
                         "You see a ladder leading up to the platform. You could climb it and hide\n"
                         "with your friend.\n"
                         "But maybe you should just make a run for it. You don't want to be in this\n"
                         "creepy circus for one minute longer!\n"
                         "Make up your mind - before Mistress Barbarous sees you!\n\n";

            std::cout << "3) To climb up and hide with Richie.\n";
            std::cout << "4) To run past Mistress Barbarous.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 > 6){
            std::cout << "Wrong Choice! Choose Again!\n";
            std::cin >> user_choice1;
        }
        else {

            user_choice = 0;
        }
    }

    // LOOP 4

    user_choice = 1;
    while (user_choice != 0){
        if (user_choice1 == 1){
            std::cout << "You're one of the fastest kids you know. You're fast, real fast.\n"
                         "Later, guys! you cry. I'll try to come back for you!\n"
                         "You glance over at Mr. Peepers.\n"
                         "That way! he instructs you, pointing to the other end of the sideshow\n"
                         "tent.\n"
                         "You take off like lightning. But as you burst through the tent flaps into the\n"
                         "sunshine, you hear a man's voice behind you. Calling.\n"
                         "Hey, kid! Wait up! That was amazing! I clocked you at two-point-three\n"
                         "seconds for that sprint! A world record!\n"
                         "The voice sounds friendly.\n"
                         "Come back! he calls. I can make you a star!\n"
                         "Hmmm ...\n\n";

            std::cout << "1) If you go back to the sideshow.\n";
            std::cout << "2) If you keep running.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 2){
            std::cout << "I want to hide! you tell Danny the Lizard Boy. But where?\n"
                         "Come in here, he whispers.\n"
                         "Quickly you slip into the cage with the Lizard Boy.\n"
                         "Get down, Danny commands. He points to the corner with his tail.\n"
                         "You lie down on the cold cement floor near the Lizard Boy's piles of\n"
                         "straw and food. Using his tail, Danny covers you with dusty straw. You try not\n"
                         "to sneeze.\n"
                         "You keep very still as someone steps into the sideshow.\n"
                         "The sound of heels clicking on the cement floor comes closer and closer.\n"
                         "Is it Mistress Barbarous? You can't tell.\n"
                         "You hold your breath and pray that the straw will cover you enough to\n"
                         "keep you hidden....\nWhat is that smell? a male voice booms.\n"
                         "It's definitely not Mistress Barbarous!\n"
                         "But you could still be in trouble, you realize.\n"
                         "The footsteps come closer. A big black boot tip pokes into the straw by\n"
                         "your face.\n"
                         "I smell fresh young meat! the voice bellows.\n"
                         "In the next instant, he pries away the straw you're hiding under. He grabs\n"
                         "you by the shoulders.\n"
                         "No, Bostini! Mr. Peepers's voice shouts. Leave the kid alone!\n"
                         "Bostini? The Great Bostini? He's the lion tamer Mr. Peepers warned you\n"
                         "about. One of Mistress Barbarous's dangerous relatives.\n"
                         "Bostini opens his mouth wide. Incredibly wide!\n"
                         "He growls at you. Roooarrrr!\n"
                         "That's when you notice his teeth.\n"
                         "They're pointed. Long. Razor sharp.\n"
                         "They're the teeth of a lion!\n"
                         "Aaaaaahhhhh! you scream in terror.\nThe Great Bostini's horrible lion teeth snap in the air, inches from your\n"
                         "nose.\n"
                         "Ahhhh! you scream.\n"
                         "Panic fills you. You kick at Bostini. He's enormous - nearly seven feet\n"
                         "tall! His long black hair is greased back.\n"
                         "Bostini roars again, baring his deadly teeth.\n"
                         "It's terrifying!\n"
                         "You have to do something!\n"
                         "Desperately, you reach into your backpack. Do you have anything that\n"
                         "might work to fight the lion tamer?\n"
                         "What do you have with you?\n\n";

            std::cout << "3) If you have a camera, maybe the flash will blind him. Take Bostini's\n"
                         "picture.\n";
            std::cout << "4) If you have talcum powder, throw it in his face.\n";
            std::cout << "5) If you don't have either of these.\n";
            std::cout << "6) Check Inventory.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 3){
            std::cout << "What are you doing up there? you call softly. And how come you\n"
                         "dropped slime on my head?\n"
                         "My mouth was open. I drooled by accident, Richie whispers. Hurry!\n"
                         "Climb the ladder. No one will find us up here.\n"
                         "You start climbing. Whoops! It's too late for you to take this advice:\n"
                         "Never hide anywhere with someone who drools. Because you know\n"
                         "what? If Richie drools, it won't be long till he also starts hiccuping or\n"
                         "burping.\n"
                         "Which is exactly what he does, the minute you get up there.\n"
                         "Brrrruuuup! Oh, excuse me, Richie mutters.\n"
                         "Aha! Mistress Barbarous calls when she hears him belch. Caught\n"
                         "you!\n"
                         "She pulls out an ancient pendant from around her neck and a mirror from\n"
                         "her pocket. She uses these two items to work a terrible spell. Within seconds,\n"
                         "she has transformed the two of you into conjoined twins. Joined at the\n"
                         "stomach!\n"
                         "That's right. You now share a tummy with Richie Fieldston. Which means\n"
                         "that when he burps, you burp! You two are a big hit in the sideshow. People\n"
                         "love to bring you things to eat.\n"
                         "Please, Richie, you beg him every day. No beans!\n\nTHE END\n\n\n";
            user_choice = 0;
            user_choice1 = 0;
        }
        else if (user_choice1 == 4){
            std::cout << "You decide to sneak past Mistress Barbarous at the exit. It seems like the\n"
                         "best chance you'll get to escape!\n"
                         "I'm getting out of here, you whisper up to Richie.\n"
                         "You slink along the shadows at the edge of the tent. You hide behind\n"
                         "poles. You duck under the seats.\n"
                         "Mistress Barbarous is talking with one of the circus performers. She's\n"
                         "showing him some sort of large poster that she holds in her hands.\n"
                         "Here's my chance, you think. If they stay busy, maybe I can sneak past\n"
                         "them. Just slip out, behind Mistress Barbarous's back....\n"
                         "As you approach, Mistress Barbarous unrolls the poster and holds it up in\n"
                         "full view.\n"
                         "You want to scream when you glimpse what's on it.\nThe bold black headline across the top of the poster reads: SEE IT TODAY!\n"
                         "THE NEWEST ADDITION TO THE SIDESHOW: THE KID WHO LIVES IN A JAR!\n"
                         "And underneath is a picture of you! Trapped in a jar of slimy, oozy liquid!\n"
                         "Your heart pounds. If you don't get out of here, Mistress Barbarous is\n"
                         "going to seal you in a jar!\n"
                         "Mistress Barbarous starts to roll up the poster. She's going to see you!\n"
                         "You crouch down and lift the bottom of the tent. Maybe you can squeeze\n"
                         "out under the side.\n"
                         "You flop down onto your stomach. You squeeze under the canvas,\n"
                         "crawling out of the tent to freedom.\n"
                         "You stand up to brush yourself off outside. Free!\n"
                         "Where do you think you're going? a stern voice behind you demands.\nYour head whips around. It's a police officer!\n"
                         "Oh, thank goodness! you exclaim. You're so glad to see him! Thank\n"
                         "goodness you found me! The lady who runs this circus is nuts. She's trying to\n"
                         "put me in a jar of something. And she's got this poster, and -\n"
                         "The police officer pulls out a pair of handcuffs.\n"
                         "Hold it right there, he orders. He cuffs you and drags you toward the\n"
                         "front of the circus. I don't want to hear bad talk about the ring-mistress,\n"
                         "understand? She may be crazy, but she's my boss. Besides -\n"
                         "You glance down and notice something. This guy is wearing clown shoes!\n"
                         "He's a clown cop!\n"
                         "I like crazy things! Crazy, wacky things! he says in a silly voice. He\n"
                         "pulls out a rubber horn and starts honking it like mad.\n"
                         "Hey, boss! I found this kid trying to escape, the clown cop tells Mistress\n"
                         "Barbarous as he shoves you toward her.\n"
                         "She narrows her eyes at you.\nTake the cuffs off the kid, Mistress Barbarous commands the clown. I\n"
                         "can handle this.\n"
                         "Don't try anything funny, the clown policeman warns you. He unlocks\n"
                         "your handcuffs. That's my job! Ha-ha-ha!\n"
                         "He somersaults away, laughing at his own joke.\n"
                         "Mistress Barbarous grabs your arm. She has an amazing grip. She\n"
                         "squeezes so hard, her hand almost bruises you.\n"
                         "Come on, circus kid, she snaps. You're way too much trouble. I'm\n"
                         "putting you in the sideshow right now!\n"
                         "You gulp. Can she really do what you saw on the poster? you wonder.\n"
                         "Can she put you in a jar?\nMistress Barbarous drags you into a long, narrow tent.\n"
                         "The sideshow.\n"
                         "It's dark. Spooky and completely dark.\n"
                         "Now, where are the lights in here? Barbarous mumbles to herself. She\n"
                         "searches with her free hand for a light switch.\n"
                         "Hey, you think. While she's searching for the light switch, maybe I can\n"
                         "find something, too! Something that might help me get out of here. A\n"
                         "weapon!\n"
                         "You wave your hands frantically in the dark.\n"
                         "Your hand brushes against something scaly. You grab it.\n"
                         "It feels like the tail of a lizard! Not much of a weapon - but maybe it's\n"
                         "better than nothing. How desperate are you?\n"
                         "Where is that switch? Barbarous growls furiously.\n"
                         "You don't have much time!\n"
                         "Are you going to use the scaly thing as a weapon or not?\n\n";

            std::cout << "7) If you've already been in the sideshow, you know what you're\n"
                         "touching.\n";
            std::cout << "8) If this is your first visit to the sideshow.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 > 8){
            std::cout << "Wrong Choice! Choose Again!\n";
            std::cin >> user_choice1;
        }
        else {
            user_choice = 0;
        }
    }

    // LOOP 5

    user_choice = 1;
    while (user_choice != 0){
        if (user_choice1 == 1){
            std::cout << "A world record? Cool!\n"
                         "The guy sounds nice, and obviously he has good taste if he's calling you\n"
                         "amazing....\n"
                         "Your steps slow as you turn around and go back.\n"
                         "Inside the sideshow tent, a tall man in green pants and a white pirate-style\n"
                         "silk shirt smiles at you.\n"
                         "I'm Pietro - and you're fantastic! he says with a broad grin. What\n"
                         "speed! Have you ever thought about a career as a runner?\n"
                         "You mean like at the Olympics? you ask, pumping his hand.\n"
                         "No, Pietro replies, shaking his head. I mean like running around and\n"
                         "around the circus ring with the lions and tigers chasing you.\n"
                         "Pietro's eyes sparkle with a mischievous glint.\nPietro laughs when he sees the horrified look on your face.\n"
                         "No, no. He chuckles, shaking his head. Don't worry, it's not\n"
                         "dangerous. Here's what will happen: You'll lead a parade of clowns,\n"
                         "unicyclists, and animals out into the ring.\n"
                         "Okay, you say cautiously. Sounds easy so far.\n"
                         "Good, Pietro exclaims. Then you'll start to run. The clowns won't be\n"
                         "able to keep up, so they'll fall all over the place acting goofy.\n"
                         "Here's the tricky part, he continues. The lions, tigers, and unicyclists\n"
                         "chase you. You'll run faster and faster, looking over your shoulder like you're\n"
                         "scared! Finally, you run away and head backstage. What do you think? Want\n"
                         "to be in the show?\n"
                         "Yeah! you exclaim. It sounds like fun!\n"
                         "But what about Mistress Barbarous? you ask. She's been out to get me\n"
                         "ever since I got here!\nDon't worry, I can handle Mistress Barbarous, Pietro says. She just\n"
                         "likes to scare the newcomers. Come on! Let's go practice! He leads you into\n"
                         "the big top.\n"
                         "That evening, you're nervous but excited for your circus debut. You wear\n"
                         "a cool blue outfit with silver streaks down the sides.\n"
                         "Your cue comes and you race out into the ring. The clowns chase you,\n"
                         "then flop to the ground, exhausted. Everyone cheers.\n"
                         "Now the animals chase you.\n"
                         "A giant lion is right on your tail. You race even faster.\n"
                         "The crowd goes wild.\n"
                         "It looks like the ferocious lion is really chasing you!\n"
                         "It even feels like he's chasing you. Whoa.\n"
                         "GRRRRROAR! he thunders.\n"
                         "TWANG! Your shoelace comes untied. You fly through the air - and land\n"
                         "flat on your face.\n"
                         "And the lion pounces!\nYou cower on the ground with your hands covering your head.\n"
                         "The lion lands on you with a deafening CRUNCH! He lies there, dazed.\n"
                         "The audience gasps.\n"
                         "It's five hundred pounds of beast against ... what? Seventy, eighty\n"
                         "pounds?\n"
                         "You'd have to be pretty lucky to survive that!\n"
                         "Well? How lucky are you?\n"
                         "Do you have your lucky baseball cap with you?\n\n";

            std::cout << "1) If you do.\n";
            std::cout << "2) If you don't.\n";
            std::cout << "7) Check Inventory.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 2){
            std::cout << "A star? Forget it. You've heard enough lies from these circus people. You\n"
                         "want to go home!\n"
                         "So you keep running. Straight across the parking lot. Down the road. Up a\n"
                         "hill. Down another road.\n"
                         "It's six long miles home, but you make it. Panting and out of breath, you\n"
                         "drag into your room, flop down on your bed, and fall into a deep sleep.\n"
                         "You sleep for eight days straight! By the time you wake up, the circus has\n"
                         "moved on to another town.\n"
                         "It's too late to help any of the kids stuck in the sideshow! And too late to\n"
                         "help Richie.\n"
                         "Sure, you escaped safely, but you left your friends behind.\n"
                         "And you don't think you'll get to the good endings in this story if you\n"
                         "abandon your friends, do you?\n"
                         "No way.\n"
                         "So go back to the beginning and try again. Because one thing's for sure.\n"
                         "This is not a happy\n\nTHE END\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 3 and (user_inventory[0] == inventory[0] or user_inventory[1] == inventory[0] or user_inventory[2] == inventory[0])){
            std::cout << "You find the camera in your backpack and whip it out. You aim it right at\n"
                         "the evil lion tamer's face.\n"
                         "FLASH!\n"
                         "A bright flare of light pops in Bostini's eyes.\n"
                         "Aaaahhhh! he cries, roaring even more loudly. But for an instant he lets\n"
                         "go of you.\n"
                         "It's just long enough for you to get away.\n"
                         "Run! the Lizard Boy shouts, urging you on.\n"
                         "You dash out of the Lizard Boy's cage and race toward the sideshow exit.\n"
                         "Behind you, though, you hear the Great Bostini calling.\n"
                         "Wait! I'll help you escape if you let me see the picture. I've always\n"
                         "wanted a good picture of myself.\n"
                         "Hmmm. With Bostini on your side, your chances of escaping from the\n"
                         "circus are much better.\n"
                         "But what if he's lying to you? After all, he just tried to eat you!\n\n";

            std::cout << "3) To wait and show the picture to Bostini.\n";
            std::cout << "4) To keep on running.\n";
            std::cin >> user_choice1;
            user_choice = 0;
            for (int i = 0; i < 3; i++) {
                if (user_inventory[i] == inventory[0]){
                    user_inventory[i].erase();
                }
            }
        }
        else if (user_choice1 == 4 and (user_inventory[0] == inventory[5] or user_inventory[1] == inventory[5] or user_inventory[2] == inventory[5])){
            std::cout << "Your hand falls on the can of talcum powder. You grab it. It just might\n"
                         "work! You yank off the cap and dump the white dust into your palm.\n"
                         "Ha! you cry as you throw the powder in the Great Bostini's face.\n"
                         "Grrrr! The lion tamer growls angrily. His head snaps back. The talcum\n"
                         "powder hits his nose.\n"
                         "And he starts to sneeze.\n"
                         "Ah - ah - ah ...\nAAAAAHH-CHOO! the Great Bostini cries.\n"
                         "His head snaps forward in a great convulsive sneeze. His mouth opens\n"
                         "wide enough for a television to fit inside.\n"
                         "Then it chomps closed with a terrible snap.\n"
                         "Unfortunately, it snaps shut ... on you! His teeth close around your neck,\n"
                         "biting your head right off.\n"
                         "He swallows your head in one gulp. But there's one part he doesn't like.\n"
                         "Your ears!\n"
                         "He burps them up.\n"
                         "Perfect, Mistress Barbarous coos as she enters the sideshow tent. She\n"
                         "uses her magic powers to stick the ears onto the sides of your neck. Now you\n"
                         "have no head, but you can hear everything just fine.\n"
                         "We have a new attraction for the sideshow, Mistress Barbarous\n"
                         "announces. The Eerie Ear-ie Kid!\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 5){
            std::cout << "You don't have the camera. You don't have the talcum powder. And the\n"
                         "rest of the stuff you brought seems useless. There's nothing you can do except\n"
                         "scream your guts out.\n"
                         "Help! you yell. You cower away from the lion tamer's razor-sharp teeth.\n"
                         "Too bad no one hears you. No one except Mr. Peepers. And Mr. Peepers\n"
                         "can't stand the sight of violence, so he squeezes his eyes shut.\n"
                         "And so should you. Because you definitely don't want to see what\n"
                         "happens next. It's too gory and disgusting for words!\n"
                         "But have you ever watched those TV programs about wild animals eating\n"
                         "their prey?\n"
                         "That should give you some idea of what happens to you in\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 6){
            std::cout << user_inventory[0] << ", " << user_inventory[1] << ", " << user_inventory[2] << "\n";
            std::cin >> user_choice1;
        }
        else if (user_choice1 == 7){
            std::cout << "I can't hit Mistress Barbarous with this lizard! you think. This is Danny\n"
                         "Mendleson. Barbarous turned him into the Lizard Boy!\n"
                         "The lights blare on.\n"
                         "Yup, you were right. You're holding Danny's tail.\n"
                         "Drop that lizard! Mistress Barbarous commands. He's our star\n"
                         "attraction!\n"
                         "You do as she says, setting Danny's tail gently on the floor.\n"
                         "Hey! Danny cries when he sees it's you. You're back! You've got to\n"
                         "get away from her!\n"
                         "Oh, be quiet! Barbarous snaps. Freaks, meet your new roommate: the\n"
                         "Kid Who Lives in a Jar!\n"
                         "Noooo! you shout. You try to break free from her grasp. But it's no\n"
                         "good....\nNow, get in your jar! Mistress Barbarous growls at you. She pushes you\n"
                         "toward a four-foot-tall jar filled with oozing gray goop. It's the same jar you\n"
                         "saw in the poster.\n"
                         "Don't do it! the Lizard Boy calls. Whatever you do, don't get into that\n"
                         "jar!\n"
                         "The Girl with Five Tongues shouts, Run!\n"
                         "It comes out, Run-run-run-run-run!\n"
                         "She's too strong! you cry. I can't break away!\n"
                         "Even with you kicking at her, Mistress Barbarous is able to lift you up.\n"
                         "She starts to shove you into the huge jar.\n"
                         "Your hand dips into the cold, sticky gel. It's so disgusting you feel like\n"
                         "you might retch. Plus, it smells terrible. Worse than the smell of rotting flesh!\n"
                         "No! the Lizard Boy cries. Make a deal with her!\n"
                         "You have no idea what he's talking about - but you would give anything\n"
                         "to stay out of the jar. So you call out.\n"
                         "I want to make a deal! you shout, struggling to keep Barbarous from\n"
                         "pushing you into the stinky jar.\nMistress Barbarous holds you over the jar of goo. Her eyes narrow as she\n"
                         "glares at you.\n"
                         "What kind of a deal? she demands.\n"
                         "Offer her something, the Lizard Boy advises you in a whisper.\n"
                         "Something she might want!\n"
                         "Offer her something? What would she want?\n"
                         "What have you got?\n\n";

            std::cout << "5) If you brought along your lucky baseball cap, the camera, or the\n"
                         "dictionary of circus terms.\n";
            std::cout << "6) If you didn't bring any of those things.\n";
            std::cout << "7) Check Inventory.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 8) {
            std::cout << "Ah, here's the switch! Mistress Barbarous exclaims.\n"
                         "CLICK! Bright lights illuminate the sideshow.\n"
                         "You choke back a terrified scream.\n"
                         "Your hand is clutching the tail of a giant lizard with the face of a boy!\n"
                         "You're touching one of the sideshow freaks!\n"
                         "You drop the tail in disgust.\n"
                         "I see you've met the Lizard Boy! Mistress Barbarous chuckles. I'm\n"
                         "sure you two will become good friends!\n"
                         "The crazy thing is: He looks sort of familiar.\n"
                         "The whole tent is filled with freaky kids!\n"
                         "There's a girl with five tongues. She can't even close her mouth! The five\n"
                         "tongues flop out onto her chin. It's so gross!\n"
                         "Next to her is a dog girl. She has the body of a girl but the head of a dog!\n"
                         "And instead of fingers she has paws!\n"
                         "Run! the Lizard Boy warns you. Run - or she'll turn you into a freak,\n"
                         "just like us!\n"
                         "Shut up! Barbarous shouts at the Lizard Boy. Shut up or I'll make you\n"
                         "into a pair of lizard-skin boots!\nI won't shut up! the Lizard Boy yells at Mistress Barbarous. I'm going\n"
                         "to tell this kid the truth about you!\n"
                         "Yeah, the Dog Girl barks. She turns her hound face toward you. We\n"
                         "were all normal kids once. But now ... rrrrrufff!\n"
                         "You stare hard at the Lizard Boy.\n"
                         "Hey, you blurt out as it hits you. Aren't you ... ?\n"
                         "Danny Mendleson, the boy says, nodding sadly.\n"
                         "Your stomach tightens into a knot.\n"
                         "Danny Mendleson! He was last year's winner at circus camp. He won the\n"
                         "chance to join the circus for a week. And then he disappeared!\n"
                         "I'm Merrill Thornbush, the Girl with Five Tongues pipes up. I won at\n"
                         "circus camp two years ago. I've been here ever since.\n"
                         "Since-since-since-since, the other four tongues echo.\n"
                         "Oh, no, you think. This must be where all the circus kids end up!\nNow, get in your jar! Mistress Barbarous growls at you. She pushes you\n"
                         "toward a four-foot-tall jar filled with oozing gray goop. It's the same jar you\n"
                         "saw in the poster.\n"
                         "Don't do it! the Lizard Boy calls. Whatever you do, don't get into that\n"
                         "jar!\n"
                         "The Girl with Five Tongues shouts, Run!\n"
                         "It comes out, Run-run-run-run-run!\n"
                         "She's too strong! you cry. I can't break away!\n"
                         "Even with you kicking at her, Mistress Barbarous is able to lift you up.\n"
                         "She starts to shove you into the huge jar.\n"
                         "Your hand dips into the cold, sticky gel. It's so disgusting you feel like\n"
                         "you might retch. Plus, it smells terrible. Worse than the smell of rotting flesh!\n"
                         "No! the Lizard Boy cries. Make a deal with her!\n"
                         "You have no idea what he's talking about - but you would give anything\n"
                         "to stay out of the jar. So you call out.\n"
                         "I want to make a deal! you shout, struggling to keep Barbarous from\n"
                         "pushing you into the stinky jar.\nMistress Barbarous holds you over the jar of goo. Her eyes narrow as she\n"
                         "glares at you.\n"
                         "What kind of a deal? she demands.\n"
                         "Offer her something, the Lizard Boy advises you in a whisper.\n"
                         "Something she might want!\n"
                         "Offer her something? What would she want?\n"
                         "What have you got?\n\n";

            std::cout << "5) If you brought along your lucky baseball cap, the camera, or the\n"
                         "dictionary of circus terms.\n";
            std::cout << "6) If you didn't bring any of those things.\n";
            std::cout << "7) Check Inventory.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 > 7){
            std::cout << "Wrong Choice! Choose Again!\n";
            std::cin >> user_choice1;
        }
        else if (user_choice1 > 0) {
            std::cout << "You Don't have this Item. Choose Again.\n";
            std::cin >> user_choice1;
        }
        else {
            user_choice = 0;
        }
    }

    // LOOP 6

    user_choice = 1;
    while (user_choice != 0){
        if (user_choice1 == 1){
            std::cout << "Way to go! You brought your lucky baseball cap with you!\n"
                         "And you wore it for the big performance.\n"
                         "The lion falling on you didn't hurt a bit! And it turns out he doesn't want\n"
                         "to eat you after all - he just ran over you by accident. He couldn't stop fast\n"
                         "enough.\n"
                         "You gently push the lion off you and spring to your feet.\n"
                         "The audience roars with applause.\n"
                         "You're a huge hit! The crowd can't get enough of you.\n"
                         "You feel so lucky that you decide to walk the tightrope, even though you\n"
                         "never practiced it.\n"
                         "But there's no net! Pietro objects. Don't be foolish!\n"
                         "I'm incredibly lucky! you boast. Stand back!\n"
                         "The crowd goes wild.\n"
                         "You've only got one problem. You've turned to a very unlucky.\n"
                         "You lose your balance on the wire and fall to the floor. Oooh, too bad.\n"
                         "Your hopes for a circus career have just been dashed to the ground!\n\nTHE END!\n\n\n";
            user_choice = 0;
            user_choice1 = 0;
        }
        else if (user_choice1 == 2){
            std::cout << "You don't have your lucky baseball cap. Tough luck!\n"
                         "You'll have to rely on your wits instead!\n"
                         "In the puzzle below, the word LIONS is written forwards, backwards, up,\n"
                         "and down.\n"
                         "Circle all the lions. Then count them.\n"
                         "After you count them, multiply by four.\n"
                         "That's the page number you should turn to next.\n"
                         "If you find all the lions and do the math correctly, you'll be very lucky.\n"
                         "There's a hint waiting for you on the correct page!\n"
                         "But if you get the wrong answer ...\n"
                         "Ooooh. Bad luck.\n"
                         "then you'll be hopelessly lost in the story!\n"
                         "Good luck!\n\nL I O N S I S S 0\nI S N O N O S I L\nO N I S O N S L I\nN O L L I O N S O\nS N O I L I L O N\nO I S N S N O I S\n\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 3){
            std::cout << "Okay, you think. I'll trust him. With his help, I'll be able to get out of\n"
                         "here! Besides, something in his voice sounds sincere. Like he really will help\n"
                         "me if I show him the photo.\n"
                         "You stop and turn to face the lion tamer.\n"
                         "Let me see, he says eagerly, hurrying toward you.\n"
                         "You show him the camera screen.\n"
                         "The Great Bostini stares at the photo for a minute. His face twists into a\n"
                         "look of anguish, anger, and pain.\n"
                         "Noooo! he cries, opening his mouth in a wide roar\nWhat's wrong? you ask. You gaze at the picture - and flinch. Oh, no!\n"
                         "Bostini's eyes are closed. And his mouth looks weird.\n"
                         "What made you think you could take a good picture of a freak like\n"
                         "Bostini? That's what he wanted, a good picture of himself.\n"
                         "I look awful! he shouts.\n"
                         "And he starts to cry! You can't believe it. He's just a big baby!\n"
                         "This is my chance to escape! you think.\n"
                         "You dart for the exit to the sideshow. As you run, you turn and take a few\n"
                         "more photographs of the sideshow exhibits.\n"
                         "Why not? If you get out of there alive, you'll want to tell people what\n"
                         "you've seen. No one will believe you unless you have proof.\n"
                         "FLASH. FLASH. FLASH.\n"
                         "You snap the pictures, then run for the exit.\n"
                         "The minute you dash through the tent flap, though, you come face to face\n"
                         "with something huge. Something gray. Something with a trunk.\nLuckily the huge gray thing with the trunk outside the tent isn't an\n"
                         "elephant. It's a car! A newspaper reporter's car!\n"
                         "Help! you scream. Get me out of here!\n"
                         "What's up, kid? the newspaper reporter asks.\n"
                         "This place is a nightmare! you shout. Get me out of here, and I'll give\n"
                         "you a great story!\n"
                         "The reporter drives you straight to the newspaper office. You tell him all\n"
                         "about the horrible circus. You show him the photos of the Lizard Boy and the\n"
                         "other sideshow creatures.\n"
                         "Wow, the reporter says. This is a front-page story!\n"
                         "You're so glad you're safe and that the newspaper staff believe your story.\n"
                         "You were worried that they'd laugh at you.\n"
                         "No one laughs at you ... until the paper comes out the next day. Then\n"
                         "your whole town has a good chuckle at your expense.\n"
                         "You didn't give your story to a real newspaper. You gave it to one of those\n"
                         "cheap supermarket tabloids.\n"
                         "The headline reads: KID FINDS LIZARD TWIN AT THE CIRCUS!\n"
                         "It shows a photo of you right next to a shot of the Lizard Boy.\n"
                         "Let's just call you Lizardo from now on. Everyone else does!\n\nTHE END!\n\n\n";

            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 4){
            std::cout << "Wait! Bostini calls. The photo! I want to see it!\n"
                         "No way! you shout. It would be too risky to trust him. You've got to\n"
                         "find Richie and get out of here.\n"
                         "The last time you saw Richie, a clown had him pinned to the ground with\n"
                         "a giant shoe. That was in the backstage tent. So that's where you go!\n"
                         "Crowds of circus people mill around in the backstage tent. They're\n"
                         "dressed in their costumes, drinking coffee and reading the newspaper. A few\n"
                         "of them glance at you, then look away in boredom.\n"
                         "Richie is nowhere to be seen.\n"
                         "Hmmm, you think. I need help to find Richie and get out of here. Maybe\n"
                         "one of these circus people can be trusted.\n"
                         "But which one?\nYou glance at a woman in a pink leotard. She has a pink sequined snake\n"
                         "sewn on the front of her costume. She smiles at you. A good sign, you think.\n"
                         "Then you take another look at the snake on her costume.\n"
                         "It's a cobra! Whoa!\n"
                         "Hi, I'm Sara the Human Snake, she says sweetly. You must be one of\n"
                         "our young guest performers. Would you like me to show you some cool tricks\n"
                         "on the trapeze?\n"
                         "Um - sure, you agree. But can I ask you a few questions first? In\n"
                         "your head, you add: Like, how do I get out of this horrible circus?\n"
                         "Oh, come on. Sara giggles, taking your hand and leading you toward\n"
                         "the main tent. Let's have some fun on the ropes first. We can talk later! She\n"
                         "grins at you playfully.\n"
                         "Okay, you think. If I go and work out with her for a while, maybe she'll\n"
                         "help me escape.\n"
                         "Then again, maybe she's leading you to Mistress Barbarous!\n"
                         "Do you dare trust her?\n"
                         "That depends. How much do you like snakes?\n\n";

            std::cout << "1) If you brought your pet snake from home, you'll probably trust her.\n";
            std::cout << "2) If you didn't bring your pet snake.\n";
            std::cout << "8) Check Inventory.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 5 and ((user_inventory[0] == inventory[0] or user_inventory[0] == inventory[1] or user_inventory[0] == inventory[8]) or (user_inventory[1] == inventory[0] or user_inventory[1] == inventory[1] or user_inventory[1] == inventory[8]) or (user_inventory[2] == inventory[0] or user_inventory[2] == inventory[1] or user_inventory[2] == inventory[8]))){
            std::cout << "Don't put me in the jar! you implore Mistress Barbarous as you stare\n"
                         "down at the gross goop. I've got something cool, and I'll give it to you - if\n"
                         "you let me out of here!\n"
                         "What is it? Barbarous asks. She eyes you suspiciously.\n"
                         "You're going to love it! you assure her. It's -\n\n";

            std::cout << "3) If you say a camera,\n";
            std::cout << "4) If you say my lucky baseball cap,\n";
            std::cout << "5) If you say a dictionary of circus terms,\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 6){
            std::cout << "You think quickly about the stuff you brought to the circus.\n"
                         "None of it seems like something this crazed ringmistress would want.\n"
                         "You're not going to be able to make a deal with her.\n"
                         "There's only one thing you can think of to do: Scream your head off!\n"
                         "Help me! you scream. Somebody come quick!\n"
                         "A second later, a bulky, muscular man with a huge mustache rushes into\n"
                         "the sideshow.\n"
                         "What's going on? he asks, scowling at Mistress Barbarous.\n"
                         "The sound of his voice makes her jump. And she drops you into the jar!\n"
                         "It's awful. The stinky goop covers your whole body. Ugh!\n"
                         "Nothing, Janos, Mistress Barbarous snaps. I just hired a new person\n"
                         "for the sideshow, that's all.\n"
                         "No, she didn't! you shout from the jar. She didn't hire me! She\n"
                         "kidnapped me! I want out of here!\n"
                         "Barbarous, are you up to your old tricks? Janos demands.\n"
                         "Back off! Mistress Barbarous snarls. She pulls out a carved jade\n"
                         "pendant on a cord from inside her blouse.\n"
                         "No! Janos cries. Please, not the pendant!\nJanos backs fearfully away from the pendant.\n"
                         "Go, Mistress Barbarous commands. This is none of your business.\n"
                         "Okay, Janos agrees, giving a little nod in your direction. What's your\n"
                         "rush? I'm going. I'm going.\n"
                         "Suddenly you realize something. He's trying to give you a signal. Trying\n"
                         "to tell you that now is your chance to escape!\n"
                         "Barbarous's back is turned. She's watching Janos. He's leaving very\n"
                         "slowly.\n"
                         "He backs out of the sideshow. One slow step at a time ...\n"
                         "Thanks, Janos! you think as you climb out of the jar.\n"
                         "While Barbarous is still watching him leave, you run out the other way.\n"
                         "You're covered in the disgusting glop, but you don't stop to try to wipe it off.\n"
                         "You race as fast as you can!\nYou tear through the opening at the end of the sideshow tent. To the\n"
                         "outdoors.\n"
                         "Yes! You're free!\n"
                         "But you stink worse than a dead skunk. It's from the slime covering you.\n"
                         "Outside, you spot a large, fenced-in area where a man with a huge hose is\n"
                         "washing the elephants.\n"
                         "Do you think you have time to stop and get the slime washed off? You\n"
                         "smell so bad it's making you dizzy!\n"
                         "Or do you just want to keep going - until you're far away from this\n"
                         "circus of doom?\n\n";

            std::cout << "6) If you ask the man to hose you off.\n";
            std::cout << "7) If you keep running.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 7){
            std::cout << user_inventory[0]<< ", " << user_inventory[1] << ", " << user_inventory[2] << "\n";
            std::cin >> user_choice1;
        }
        else if (user_choice1 > 8 and user_choice1 != 24){
            std::cout << "Wrong Choice! Choose Again!\n";
            std::cin >> user_choice1;
        }
        else {
            user_choice = 0;
        }
    }

    // LOOP 7

    user_choice = 1;
    while (user_choice != 0){
        if (user_choice1 == 1 and (user_inventory[0] == inventory[3] or user_inventory[1] == inventory[3] or user_inventory[2] == inventory[3])){
            std::cout << "You can feel your pet snake, Peppy, curled up in the pocket of your khaki\n"
                         "shorts. You love snakes. Sara the Human Snake gives you a good feeling.\n"
                         "Even though she does have a cobra on her costume.\n"
                         "You decide to trust her.\n"
                         "Okay, you tell Sara the Human Snake. Let's hit the ropes.\n"
                         "Sara leads you into the big top.\n"
                         "Follow me, she instructs. And hold on tight!\n"
                         "She begins to climb a rope ladder that hangs down from the highest point\n"
                         "on the roof.\n"
                         "You follow and climb up the rope rungs. You feel the ladder sway as the\n"
                         "two of you climb.\n"
                         "But then you feel something strange.\n"
                         "TWANG! The rope jerks.\n"
                         "Someone is following you up the ladder!\nYou gaze down and see another young woman in a pink leotard. Except\n"
                         "she has a black snake sewn on her costume. Another cobra.\n"
                         "Otherwise she looks exactly like Sara the Human Snake!\n"
                         "Twins? Uh-oh. Doesn't Mistress Barbarous have twin sisters?\n"
                         "Who's that? you call up to Sara.\n"
                         "Oh, no! That's Susan, my sister, Sara moans. She gets really jealous\n"
                         "when I work out with anyone besides her.\n"
                         "Hey, what are you doing, Sara? Susan yells. She sounds really angry.\n"
                         "Who's your new friend?\n"
                         "I'm just here for a week, you say, trying to sound friendly.\n"
                         "Really? she sneers. Well, be careful, I'd hate for you to fall. TWANG!\n"
                         "She shoves the ladder.\n"
                         "You glare down at her. She has a cold glint in her eye - and a huge pair\n"
                         "of steel shears in her hands!\n"
                         "Climb faster, kid, she shouts at you. Or you won't have anything to\n"
                         "climb on!\n"
                         "Then she scales the ladder as fast as lightning. She's right under your\n"
                         "rung.\n"
                         "Leave my friend alone, Sara cries.\n"
                         "But it's too late. Susan cuts the rung under your feet!\nAaahhh! you cry. You kick frantically, trying to find another rung to\n"
                         "stand on. You hold on with your hands for dear life.\n"
                         "Good luck with your new friend, Sara! Susan cries. She jumps off the\n"
                         "ladder and hooks a trapeze. She lets out an evil chuckle as she sails away.\n"
                         "Hold on, Sara cries. I'll try to help you.\n"
                         "Oh, no, you won't! Susan screams. She flies over and the two of them\n"
                         "start fighting above you on the ladder!\n"
                         "It trembles and shakes. Great! Just what you need! Now it's even harder\n"
                         "to hold on!\n"
                         "Uh-oh. What's that tickling feeling?\n"
                         "Your pet snake chooses that moment to slither out of your pocket and\n"
                         "slide up your arm. Up toward your armpit!\n"
                         "This is not a good time to be tickled.\n"
                         "A snake? Ooohh! I love snakes! Susan cries from above.\n"
                         "Oh, no! Sara's sweet voice cries down to you. Look out!\nYou glance up. What you see is so scary you almost let go of the rope in\n"
                         "horror.\n"
                         "Susan has changed into a giant black snake!\n"
                         "Hide your pet snake! Sara screams from above you. Whenever my\n"
                         "sister sees a snake she changes into one!\n"
                         "Hiss! The evil Susan slinks down toward you.\n"
                         "Quickly you grab Peppy and stuff him into your pocket. You sway,\n"
                         "dangling by one arm.\n"
                         "Phew! It works! Susan changes from a snake back into a trapeze artist.\n"
                         "But your hand is so tired. You can't hold on any longer!\n"
                         "You let go - and drop.\n"
                         "Ahhhhhh! you scream.\nYou plunge to the ground, screaming your head off.\n"
                         "But as you fall, your old friend Mr. Peepers comes to the rescue! He\n"
                         "shoves a big trampoline under you.\n"
                         "BOING! You bounce. You're breathless and shaken, but okay.\n"
                         "Listen up, kid. Mr. Peepers lectures you as you climb off the\n"
                         "trampoline. Never bring a snake to the circus. They'll get you into a lot of\n"
                         "trouble.\n"
                         "He's right. You'll never survive the circus if all you've got is chocolate, a\n"
                         "camera, and a snake.\n"
                         "But since you made it this far, you get a break. Go back to and\n"
                         "choose again.\n"
                         "The chocolate bars are good. And the camera is okay. But pick something\n"
                         "besides Peppy, your pet snake!\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 2){
            std::cout << "Thanks a lot, you tell Sara. But I'm looking for my friend right now.\n"
                         "Maybe later.\n"
                         "Yeah, whatever, she says. As she turns away, you glimpse something\n"
                         "flickering out of the corner of her mouth.\n"
                         "It looks like a forked tongue!\n"
                         "You probably just made a very good choice!\n"
                         "You hurry on through the crowds of circus people. Leaving the backstage\n"
                         "tent, you find yourself in the clowns' dressing room. It's strangely quiet as\n"
                         "you step inside.\n"
                         "Richie? you call out softly. No answer.\n"
                         "There are no clowns in sight. The little clown car sits empty off to the\n"
                         "side. Dressing tables with mirrors and lights line the sides of the tent. This is\n"
                         "where the clowns put on their makeup.\n"
                         "Richie's not in here, you think. Where should I look now?\n"
                         "You're trying to decide when you hear a voice over the microphone\n"
                         "system. It's Mistress Barbarous!\n"
                         "Attention, staff, she says. Our two young visitors are lost. Keep your\n"
                         "eyes open. Bring them to me if you spot them!\n"
                         "Your throat tightens up when you hear that. Now everyone in the whole\n"
                         "circus will be looking for you!\nYou glance nervously around, trying to make up your mind. You've got\n"
                         "three choices.\n"
                         "You can keep searching for Richie.\n"
                         "Or, since you're here in the clown tent, you can disguise yourself as a\n"
                         "clown.\n"
                         "Or you can hide and hope that Richie comes to find you.\n"
                         "Choose!\n\n";

            std::cout << "1) To search for Richie.\n";
            std::cout << "2) To disguise yourself as a clown.\n";
            std::cout << "3) To hide and wait for Richie.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 3 and (user_inventory[0] == inventory[0] or user_inventory[1] == inventory[0] or user_inventory[2] == inventory[0])){
            std::cout << "Here, take it. Take my camera! you offer, desperate to escape.\n"
                         "Mistress Barbarous eyes the camera hanging around your neck.\n"
                         "Okay, I will! she exclaims. She drops you and grabs it.\n"
                         "Say cheese, she sings, pointing the camera at the Lizard Boy. No, wait.\n"
                         "Say moldy cheese! Because that's what your scaly skin looks like! Ha-ha!\n"
                         "Then she pushes the button.\n"
                         "Nothing happens.\n"
                         "Uh-oh. The battery must be dead!\n"
                         "This is a piece of junk! Barbarous growls, tossing the camera to the\n"
                         "floor.\n"
                         "CRASH!\n"
                         "Well, if it wasn't junk before, it is now!\n"
                         "Get in the jar! she roars at you.\n"
                         "No! Wait! you plead. Don't make me get in there. I'll do anything you\n"
                         "want! Anything!\n"
                         "Anything? Barbarous repeats with a twisted smile.\nThere is something you could do besides be the Kid Who Lives in a Jar,\n"
                         "she offers with a mean gleam in her eye. You can be the human cannonball!\n"
                         "Okay! you agree eagerly. It sounds better than the goop jar. Dangerous,\n"
                         "but less disgusting.\n"
                         "Mistress Barbarous pulls a strange jade pendant from around her neck.\n"
                         "The pendant is carved with a face. Then she takes a small, ancient mirror\n"
                         "from the pocket of her black velvet vest.\n"
                         "Holding the jade pendant in one hand, she gazes at the reflection of the\n"
                         "jade face in the mirror.\n"
                         "Suddenly, a beam of light travels from the pendant to Mistress\n"
                         "Barbarous's eyes!\n"
                         "Instantly, her eyes turn purple. Then her whole face seems to glow with a\n"
                         "purplish light.\n"
                         "Then her purple eyes stare with an odd evil power directly at you!\nThe instant Mistress Barbarous shoots that strange purple glare at you,\n"
                         "you feel your body begin to change.\n"
                         "Slowly, painfully, you double over. Then you double over again. And\n"
                         "again!\n"
                         "Noooo! you scream when you realize what's happening.\n"
                         "You aren't just going to be shot out of a cannon.\n"
                         "You're going to become a cannonball!\n"
                         "Your whole body is rolling itself up! Before you know it, you are a ballshaped\n"
                         "human being who can't walk or talk.\n"
                         "In fact, you can't do anything except fly out of a cannon at thirty miles\n"
                         "per hour.\n"
                         "But it's better than life in a jar.\n"
                         "Actually, flying through the air is fun! You like the applause from the\n"
                         "audience. On some nights you really enjoy yourself. You have a ball!\n"
                         "In fact, you are a ball!\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 4 and (user_inventory[0] == inventory[8] or user_inventory[1] == inventory[8] or user_inventory[2] == inventory[8])){
            std::cout << "Everybody needs a lucky baseball cap, you tell Mistress Barbarous.\n"
                         "Okay, hand it over, she demands. She plunks you down on the ground.\n"
                         "You pull off your cap and place it gently in her hands.\n"
                         "Now can you please tell me the way out of this crazy place? you beg\n"
                         "her.\n"
                         "Mistress Barbarous pulls the cap onto her head.\n"
                         "You know, this hat does feel lucky! she exclaims.\n"
                         "See? I told you! you say. Now, which way is the exit?\n"
                         "I feel so lucky! I feel like the best ballplayer there ever was! she shouts.\n"
                         "She looks so excited. Too excited!\n"
                         "Mistress Barbarous picks you up and hurls you through the air.\n"
                         "SPLAT! You land in the jar of smelly goop.\n"
                         "What a lucky throw! Mistress Barbarous boasts. She strides over,\n"
                         "clamps the lid on the jar, and seals it closed.\n"
                         "Lucky for her. Unlucky for you.\n"
                         "You're doomed to float in the disgusting gray goop for the rest of your\n"
                         "life.\n"
                         "But look on the bright side - you'll never run out of hair gel.\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 5 and (user_inventory[0] == inventory[1] or user_inventory[1] == inventory[1] or user_inventory[2] == inventory[1])){
            std::cout << "I've got a dictionary of circus terms, you offer. It's really cool. It tells\n"
                         "you what stuff means. Like ‘salto.' That's a certain trick on the trapeze. Or the\n"
                         "‘catcher.' That's -\n"
                         "Barbarous begins to laugh. She laughs so hard that she drops you.\n"
                         "SPLAT! Right into the goop!\n"
                         "What an idiot! she snaps. I own this circus. Do you really think I need\n"
                         "a dictionary to tell me what a salto is? Oh! You're funny! You're really\n"
                         "funny!\n"
                         "The ringmistress doubles over, howling with laughter.\n"
                         "Which is fine with you. While she's laughing you climb out of the jar and\n"
                         "sneak away from her.\n"
                         "Ha-ha-ha! she howls behind you.\n"
                         "Slipping and sliding in your goop-covered shoes, you start to run.\nYou tear through the opening at the end of the sideshow tent. To the\n"
                         "outdoors.\n"
                         "Yes! You're free!\n"
                         "But you stink worse than a dead skunk. It's from the slime covering you.\n"
                         "Outside, you spot a large, fenced-in area where a man with a huge hose is\n"
                         "washing the elephants.\n"
                         "Do you think you have time to stop and get the slime washed off? You\n"
                         "smell so bad it's making you dizzy!\n"
                         "Or do you just want to keep going - until you're far away from this\n"
                         "circus of doom?\n\n";

            std::cout << "4) If you ask the man to hose you off.\n";
            std::cout << "5) If you keep running.\n";
            std::cin >> user_choice1;
            user_choice = 0;
            for (int i = 0; i < 3; i++) {
                if (user_inventory[i] == inventory[1]){
                    user_inventory[i].erase();
                }
            }
        }
        else if (user_choice1 == 6){
            std::cout << "Excuse me, would you mind spraying me off? you call to the man with\n"
                         "the hose.\n"
                         "He nods and aims the hose at you.\n"
                         "Whoa! The strong blast of water knocks you down. You manage to stand\n"
                         "up again, but the blasting stream pushes you backwards. Back toward the big\n"
                         "top.\n"
                         "Stop! you shout, waving your arms and trying to signal to the man to\n"
                         "stop squirting you.\n"
                         "But he just laughs and turns up the water pressure.\n"
                         "You stumble backwards.\n"
                         "Back into the circus tent.\n"
                         "And into Mistress Barbarous's waiting arms!\nYou just can't stay away, can you? Barbarous taunts, grinning at you.\n"
                         "You stare up at her in terror.\n"
                         "Mistress Barbarous is so evil! What will she do to me now? you wonder.\n"
                         "Your teeth chatter from cold and fear.\n"
                         "She drags you into the center ring under the big top and shoves you down\n"
                         "to the dirt. Then she quickly backs away, leaving you there.\n"
                         "You struggle to your feet ... and gasp.\n"
                         "All around you, circus acts are going on! Deadly acts!\n"
                         "The knife thrower on horseback rides around and around the center ring.\n"
                         "Aiming his knife at you.\n"
                         "Above you on trapezes are two women in pink leotards. They look ready\n"
                         "to jump. Right on top of you!\n"
                         "Three ferocious lions are wandering around loose. They roar and growl.\n"
                         "Welcome, circus kid! Barbarous bellows over the microphone.\n"
                         "Welcome to your first - and last - performance under the big top!\nWild, loud circus music starts to play.\n"
                         "Spotlights sweep across the circus rings. You're afraid to move a muscle.\n"
                         "Then the clown car speeds into the center ring, almost running you down.\n"
                         "Your heart starts hammering when you see the first clown step out of the\n"
                         "car. It's the clown who can stretch his body!\n"
                         "His name is written on his shirt: GEYORG THE CLOWN.\n"
                         "Geyorg stretches his arms out long, grabbing you by the shoulders. Then\n"
                         "he stretches his legs!\n"
                         "Up, up he goes. Lifting you up with him.\n"
                         "A moment later, he's fifteen feet tall. And you're dangling in midair!\n"
                         "Don't drop me! you plead with him.\n"
                         "Ha-ha-ha! he roars with laughter.\n"
                         "You cling to his costume so you won't fall.\nYou clutch at the sleeves of Geyorg's costume. Holding on for dear life.\n"
                         "Then he starts shaking his long arms!\n"
                         "He's trying to shake you off!\n"
                         "You'll plunge to the ground!\n"
                         "Below, the lions are watching and circling.\n"
                         "They're waiting for you to drop into their midst. A tasty little snack!\n"
                         "You scan the floor, looking for some way out.\n"
                         "There's a trampoline right below you. If you let go of the clown, you\n"
                         "might survive the fall.\n"
                         "But once you stop bouncing - will you survive the lion attack?\n"
                         "That depends ...\n"
                         "Did you bring the bullwhip with you?\n\n";

            std::cout << "6) If you have the bullwhip.\n";
            std::cout << "7) If you don't have the bullwhip.\n";
            std::cout << "8) Check Inventory.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 7){
            std::cout << "You keep running. Who cares how bad you smell? You just want to get as\n"
                         "far away from the circus as you can!\n"
                         "Feet pounding, you race toward the road. A few cars drive by, but none of\n"
                         "them stop when you wave to them. In fact, the drivers hold their noses. You\n"
                         "must really smell awful.\n"
                         "Finally you come to a gas station. You call your mom and beg her to come\n"
                         "get you immediately.\n"
                         "When she picks you up, all she can say is, Honey, you smell awful!\n"
                         "And the stink never fades. No matter how hard you scrub!\n"
                         "At school, your teacher holds her nose every time you walk into the\n"
                         "classroom. Your friends won't eat lunch with you. Even your parents ask you\n"
                         "to stay in your room with the door shut.\n"
                         "One year later, the circus comes back to town. Sadly, you make the\n"
                         "decision to return.\n"
                         "Hi! We knew you'd be back, the Lizard Boy says. He and all the other\n"
                         "freaks are happy to see you.\n"
                         "You climb into your jar and pull the lid closed.\n"
                         "The sideshow is the only place you belong now.\n"
                         "Yes, this ending stinks, but hey! So do you!\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 24){
            std::cout << "Congratulations! You spotted all the lions and did the math correctly! You\n"
                         "may not be lucky - but you're smart!\n"
                         "You didn't need that lucky baseball cap after all.\n"
                         "For your reward, you get to survive being knocked over by the lion.\n"
                         "You also get three hints.\n"
                         "Hint #1: When you choose your objects again at the start of the story, take\n"
                         "the thing that helps people to get a good look at themselves.\n"
                         "Hint #2: Running from danger almost never gets you anywhere.\n"
                         "Hint #3: When you go out in the sun, wear sunscreen. This won't help\n"
                         "you get through this story, but it will help you in real life!\n"
                         "Now go back and begin the adventure again. And don't even\n"
                         "think about taking your lucky baseball cap if you want to outsmart Mistress\n"
                         "Barbarous in\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 8){
            std::cout << user_inventory[0] << ", " << user_inventory[1] << ", " << user_inventory[2] << "\n";
            std::cin >> user_choice1;
        }
        else if (user_choice1 > 8){
            std::cout << "Wrong Choice! Choose Again!\n";
            std::cin >> user_choice1;
        }
        else if (user_choice1 > 0) {
            std::cout << "You Don't have this Item. Choose Again.\n";
            std::cin >> user_choice1;
        }
        else {
            user_choice = 0;
        }
    }

    // LOOP 8

    user_choice = 1;
    while (user_choice != 0){
        if (user_choice1 == 1){
            std::cout << "You decide to go searching for Richie. You exit the clown tent through the\n"
                         "back. It leads into a small, dark tent that has candlelight flickering inside.\n"
                         "Soft, eerie violin music draws you in.\n"
                         "A huge trunk full of glittering costumes stands open. You glimpse a\n"
                         "dressing table covered with candles. Seated next to the table is a small, bentbacked\n"
                         "gypsy. He looks about a hundred years old. He's playing the violin.\n"
                         "Your friend is not here, the gypsy announces.\n"
                         "Weird. How did he know you were looking for someone?\n"
                         "You shiver, wondering if this gypsy is friend or foe.\n"
                         "But before you can ask him anything, you hear a growl.\n"
                         "Behind you.\n"
                         "All the hair on your neck stands on end.\nYou turn around slowly - and see two large mammals with manes.\n"
                         "One of them is a lion.\n"
                         "The other is Mistress Barbarous! Her black hair swirls around her just like\n"
                         "a mane.\n"
                         "The lion stares at you and licks his chops.\n"
                         "Mistress Barbarous glares at you with a look of pure hate in her eyes.\n"
                         "They both look as if they want to rip you to shreds!\n"
                         "Baku, kill! Mistress Barbarous commands the huge lion.\n"
                         "The deadly beast leaps at you. Paws outstretched. Teeth bared. Claws\n"
                         "slashing the air.\nAaahhh! you scream as the lion knocks you to the ground.\n"
                         "For an instant, your heart stops.\n"
                         "I'm in for it, you think. This is the end!\n"
                         "Baku's razor-sharp teeth graze your throat.\n"
                         "But in the next instant, you hear something. A soft note. From the violin.\n"
                         "The gypsy is playing a soothing song.\n"
                         "The giant lion rolls off you instantly. And he drops into a deep sleep!\n"
                         "It's amazing. You can't believe your eyes. The ferocious beast is now\n"
                         "curled up like a napping kitten.\n"
                         "Baku! Wake up! Mistress Barbarous shouts. Wake up!\n"
                         "But it's no use. She wheels around to face the kindly gypsy. Ramon!\n"
                         "You'll be sorry you did that! And I'll make the kid here sorry, too!\n"
                         "She reaches for a cord that she's wearing around her neck.\nMistress Barbarous's eyes narrow as she lifts the cord that hangs around\n"
                         "her neck. Dangling from it is an ancient-looking jade pendant, carved with the\n"
                         "image of a face.\n"
                         "You'll be sorry, Mistress Barbarous repeats. She quickly pulls out a\n"
                         "small mirror. She dangles the pendant in front of it and gazes at the reflection.\n"
                         "Your mouth falls open as you see a beam of purple light shoot from the\n"
                         "pendant face in the mirror to Mistress Barbarous's eyes!\n"
                         "Mistress Barbarous glances up at Ramon the Gypsy. Her eyes are pools of\n"
                         "glowing purple light. You swallow hard.\n"
                         "No! Ramon cries as the purple energy bolt shoots from her eyes to his.\n"
                         "A second later, the gypsy begins to play his violin wildly. Faster and faster.\n"
                         "Like a train picking up speed.\n"
                         "And the violin bow in his hands begins to grow.\n"
                         "You can't believe your eyes.\n"
                         "The bow grows longer and longer.\n"
                         "And a sharp blade shoots out of the tip!\nThe knife-tipped bow seems to have a mind of its own!\n"
                         "It lunges and leaps for you while the gypsy plays the music. And Ramon\n"
                         "can't stop playing!\n"
                         "You dodge frantically out of the blade's way. Mistress Barbarous stands\n"
                         "on the other side of the tent, still holding the pendant and the mirror. She taps\n"
                         "her foot to the music.\n"
                         "Dance, circus kid! she commands. She shoots bolts from her purple\n"
                         "eyes at you.\n"
                         "Instantly, you begin to dance. You can't help it.\n"
                         "A deadly, dangerous dance!\nNo matter how hard you try, you can't stop dancing.\n"
                         "Stay calm, you try to tell yourself. That's what you learned in circus\n"
                         "camp. And think! What can you do?\n"
                         "If you have a mirror with you, maybe you can try to catch the reflection of\n"
                         "Barbarous's pendant and aim it into your own eyes!\n"
                         "But that might be dangerous. Who knows what will happen if you gaze at\n"
                         "the magic pendant?\n"
                         "On the other hand, if you have the bullwhip, you might be able to whip\n"
                         "the violin out of the gypsy's hands.\n\n";

            std::cout << "1) If you have the mirror and you want to use it.\n";
            std::cout << "2) If you have the bullwhip and you want to use it.\n";
            std::cout << "3) If you don't have either.\n";
            std::cout << "4) Check Inventory.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 2){
            std::cout << "You decide to dress up as a clown. That way you can search for Richie\n"
                         "and not be noticed!\n"
                         "You start by pulling on a crazy clown wig. Green.\n"
                         "Your hands shake. Hurry! you urge yourself. You've got to finish before\n"
                         "anyone comes in.\n"
                         "You sit at the makeup table to put on white clown-face paint. You add a\n"
                         "huge, frowning black mouth and blue triangles around your eyes.\n"
                         "Within minutes, you don't even recognize yourself!\n"
                         "All you need now is a costume. A bunch of them are hanging on a rack\n"
                         "behind you.\n"
                         "You pick a suit that's half red and half green, split right down the middle.\n"
                         "The costume is big and floppy, much too big for you. But so what? Clowns\n"
                         "always wear baggy clothes, right?\n"
                         "For a final touch, you pull on a pair of giant clown shoes.\n"
                         "Perfect! you think, staring at yourself in the mirror. Now I can go\n"
                         "anywhere, and no one will know it's me!\n"
                         "Boldly, you walk right out into the middle of the big tent.\n"
                         "And, BAM! Right into Mistress Barbarous!\nMistress Barbarous grabs you by both arms. You notice a thick rope coil\n"
                         "hanging from her belt. A lasso!\n"
                         "Hey, clown, I'm looking for two kids, she snarls. Have you seen\n"
                         "them?\n"
                         "Your heart pounds. You shake your head silently.\n"
                         "But you shake it a little too hard. Your wig flies off!\n"
                         "Ha-ha-ha! Mistress Barbarous howls with laughter. You almost tricked\n"
                         "me, kid! Almost! The last word becomes a growl.\n"
                         "You try to break into a run, but the big clown shoes trip you! In a flash\n"
                         "Mistress Barbarous uncoils the lasso.\n"
                         "Before you know it, you're tied up like a calf at a rodeo!\nMistress Barbarous kneels beside you and stares into your eyes. Her\n"
                         "whole face lights up with a purplish glow.\n"
                         "So you want to be a clown? she demands, glaring at you with purple\n"
                         "eyes. Fine! A clown you will be. Forever!\n"
                         "You gasp as a purple lightning bolt shoots out of her eyes and streaks to\n"
                         "your face.\n"
                         "Mistress Barbarous laughs. Here, have a look, she says, holding up a\n"
                         "small mirror for you to see.\n"
                         "You gaze fearfully into the glass.\n"
                         "The makeup looks different. More real. More permanent.\n"
                         "It is permanent! The clown face will never come off!\n"
                         "But now that Mistress Barbarous has worked her magic on you, she\n"
                         "leaves you alone. The rest of the week in the circus flies by. The shows are\n"
                         "great. Little kids laugh and point at your clown face. It's a blast!\n"
                         "It's not such a blast when the week ends and you have to go home,\n"
                         "though. Little kids still laugh and point. Everyone does.\n"
                         "But at least when the teacher calls you the class clown it's not entirely\n"
                         "your fault!\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 3){
            std::cout << "You decide to hide. You're sure Richie will come looking for you. Then\n"
                         "you can escape together.\n"
                         "But where should you hide? You glance around quickly - and spot the\n"
                         "clown car.\n"
                         "Hmmm, you think. That ought to be a good hiding place.\n"
                         "And besides, you've always wanted to see inside a clown car. To find out\n"
                         "how they fit so many clowns inside such a small space.\n"
                         "You hurry over to the little car. It's painted bright yellow, with a siren on\n"
                         "top.\n"
                         "You open the door. It's dark inside. You can't see anything as you creep\n"
                         "in.\n"
                         "Ouch! a voice cries.\nYou freeze. Panicked.\n"
                         "You've just stepped on someone. But who?\n"
                         "Get off my foot! the voice in the clown car says.\n"
                         "Hey! You recognize that voice.\n"
                         "Richie? you ask.\n"
                         "Yeah! he cries. I'm so glad you found me! I was just hiding here,\n"
                         "hoping you would come!\n"
                         "Excellent! you exclaim. Let's get out of here!\n"
                         "You reach for the handle. But before Richie can answer you, the car door\n"
                         "flies open, and a clown climbs in.\n"
                         "Then another clown.\n"
                         "And another, and another, and another ...\n"
                         "Ouch! Richie screams as you and he are squashed against the back of\n"
                         "the car.\n"
                         "Hey, get out! you cry. There's not enough room!\n"
                         "But the clowns don't listen to you. They keep coming and coming and\n"
                         "coming.\n"
                         "They call clown makeup pancake makeup.\n"
                         "Now you know why - you're squashed as flat as a pancake, and you\n"
                         "wish you could make up another ending to this story!\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 4){
            std::cout << "Excuse me, would you mind spraying me off? you call to the man with\n"
                         "the hose.\n"
                         "He nods and aims the hose at you.\n"
                         "Whoa! The strong blast of water knocks you down. You manage to stand\n"
                         "up again, but the blasting stream pushes you backwards. Back toward the big\n"
                         "top.\n"
                         "Stop! you shout, waving your arms and trying to signal to the man to\n"
                         "stop squirting you.\n"
                         "But he just laughs and turns up the water pressure.\n"
                         "You stumble backwards.\n"
                         "Back into the circus tent.\n"
                         "And into Mistress Barbarous's waiting arms!\nYou just can't stay away, can you? Barbarous taunts, grinning at you.\n"
                         "You stare up at her in terror.\n"
                         "Mistress Barbarous is so evil! What will she do to me now? you wonder.\n"
                         "Your teeth chatter from cold and fear.\n"
                         "She drags you into the center ring under the big top and shoves you down\n"
                         "to the dirt. Then she quickly backs away, leaving you there.\n"
                         "You struggle to your feet ... and gasp.\n"
                         "All around you, circus acts are going on! Deadly acts!\n"
                         "The knife thrower on horseback rides around and around the center ring.\n"
                         "Aiming his knife at you.\n"
                         "Above you on trapezes are two women in pink leotards. They look ready\n"
                         "to jump. Right on top of you!\n"
                         "Three ferocious lions are wandering around loose. They roar and growl.\n"
                         "Welcome, circus kid! Barbarous bellows over the microphone.\n"
                         "Welcome to your first - and last - performance under the big top!\nWild, loud circus music starts to play.\n"
                         "Spotlights sweep across the circus rings. You're afraid to move a muscle.\n"
                         "Then the clown car speeds into the center ring, almost running you down.\n"
                         "Your heart starts hammering when you see the first clown step out of the\n"
                         "car. It's the clown who can stretch his body!\n"
                         "His name is written on his shirt: GEYORG THE CLOWN.\n"
                         "Geyorg stretches his arms out long, grabbing you by the shoulders. Then\n"
                         "he stretches his legs!\n"
                         "Up, up he goes. Lifting you up with him.\n"
                         "A moment later, he's fifteen feet tall. And you're dangling in midair!\n"
                         "Don't drop me! you plead with him.\n"
                         "Ha-ha-ha! he roars with laughter.\n"
                         "You cling to his costume so you won't fall.\nYou clutch at the sleeves of Geyorg's costume. Holding on for dear life.\n"
                         "Then he starts shaking his long arms!\n"
                         "He's trying to shake you off!\n"
                         "You'll plunge to the ground!\n"
                         "Below, the lions are watching and circling.\n"
                         "They're waiting for you to drop into their midst. A tasty little snack!\n"
                         "You scan the floor, looking for some way out.\n"
                         "There's a trampoline right below you. If you let go of the clown, you\n"
                         "might survive the fall.\n"
                         "But once you stop bouncing - will you survive the lion attack?\n"
                         "That depends ...\n"
                         "Did you bring the bullwhip with you?\n\n";

            std::cout << "5) If you have the bullwhip.\n";
            std::cout << "6) If you don't have the bullwhip.\n";
            std::cout << "4) Check Inventory.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 5){
            std::cout << "You keep running. Who cares how bad you smell? You just want to get as\n"
                         "far away from the circus as you can!\n"
                         "Feet pounding, you race toward the road. A few cars drive by, but none of\n"
                         "them stop when you wave to them. In fact, the drivers hold their noses. You\n"
                         "must really smell awful.\n"
                         "Finally you come to a gas station. You call your mom and beg her to come\n"
                         "get you immediately.\n"
                         "When she picks you up, all she can say is, Honey, you smell awful!\n"
                         "And the stink never fades. No matter how hard you scrub!\n"
                         "At school, your teacher holds her nose every time you walk into the\n"
                         "classroom. Your friends won't eat lunch with you. Even your parents ask you\n"
                         "to stay in your room with the door shut.\n"
                         "One year later, the circus comes back to town. Sadly, you make the\n"
                         "decision to return.\n"
                         "Hi! We knew you'd be back, the Lizard Boy says. He and all the other\n"
                         "freaks are happy to see you.\n"
                         "You climb into your jar and pull the lid closed.\n"
                         "The sideshow is the only place you belong now.\n"
                         "Yes, this ending stinks, but hey! So do you!\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 6 and (user_inventory[0] == inventory[10] or user_inventory[1] == inventory[10] or user_inventory[2] == inventory[10])){
            std::cout << "You have the bullwhip coiled in your back pocket, so you decide to drop.\n"
                         "If the lions attack, you'll whip them!\n"
                         "You let go of Geyorg's costume. With your arms stretched out wide, you\n"
                         "sail down to the trampoline below.\n"
                         "BOING!\n"
                         "You hit the trampoline dead center - and bounce back up!\n"
                         "Perfect!\n"
                         "BOING!\n"
                         "You're up in the air ... then down ...\n"
                         "BOING!\n"
                         "It's fun! Too much fun.\n"
                         "So much fun that you forget that Mistress Barbarous and all her evil\n"
                         "relatives are trying to kill you!\n"
                         "Then - THWAP!\n"
                         "A knife breezes past you, almost slicing your ear.\nThe flashing knife reminds you that you're in terrible trouble. Here's what\n"
                         "you're up against:\n"
                         "1) Morton the Knife Thrower is trying to kill you.\n"
                         "2) The twin trapeze artists are lurking above.\n"
                         "3) Geyorg the Clown wants to crunch you.\n"
                         "4) The lions are waiting to tear you to shreds.\n"
                         "You've got problems! You'd better think fast and decide what to do.\n"
                         "Should you jump off the trampoline? On the floor you'll be able to use the\n"
                         "whip on the animals - and on the knife thrower, too.\n"
                         "Or should you keep bouncing on the trampoline and try to bounce so high\n"
                         "that you're out of reach? You see an empty trapeze above you. Maybe you\n"
                         "can reach it....\n"
                         "THWAP! The knives keep coming! Hurry!\n\n";

            std::cout << "7) To keep bouncing.\n";
            std::cout << "8) If you think you can handle the lions.\n";
            std::cin >> user_choice1;
            user_choice = 0;
            for (int i = 0; i < 3; i++) {
                if (user_inventory[i] == inventory[10]){
                    user_inventory[i].erase();
                }
            }
        }
        else if (user_choice1 == 7){
            std::cout << "You didn't bring the bullwhip.\n"
                         "No way are you going to let go and drop to the floor where those lions are\n"
                         "waiting!\n"
                         "Not without a whip of some sort.\n"
                         "You hold on tight. Tighter. Praying that Geyorg the Clown can't shake\n"
                         "you off and make you fall.\n"
                         "But suddenly you have something else to worry about.\n"
                         "One of the women in pink leotards swings toward you on a rope. You\n"
                         "glance at her costume - and see a cobra sewn on the front. In black sequins.\n"
                         "Does that ring a bell?\n"
                         "If you've met the twin sisters before, you'll know whether you can trust\n"
                         "this twin. If not, you'll have to guess.\n\n";

            std::cout << "9) If you trust this twin, take her hand.\n";
            std::cout << "10) If you don't trust her.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 8){
            std::cout << user_inventory[0] << ", " << user_inventory[1] << ", " << user_inventory[2] << "\n";
            std::cin >> user_choice1;
        }
        else if (user_choice1 > 10){
            std::cout << "Wrong Choice! Choose Again!\n";
            std::cin >> user_choice1;
        }
        else if (user_choice1 > 0) {
            std::cout << "You Don't have this Item. Choose Again.\n";
            std::cin >> user_choice1;
        }
        else {
            user_choice = 0;
        }
    }

    // LOOP 9

    user_choice = 1;
    while (user_choice != 0){
        if (user_choice1 == 1){
            std::cout << "It might be risky. But you have no choice. You reach into your pocket and\n"
                         "pull out the small mirror you brought from home.\n"
                         "As you dance, you hold up the mirror and aim it at the pendant. You can\n"
                         "barely hold the mirror still, your feet are moving so fast.\n"
                         "But all at once ...\n"
                         "ZZZZZAP!\n"
                         "Yes! You've caught the reflection of the magic pendant!\n"
                         "The purple energy bolt shoots out of your mirror and straight into your\n"
                         "eyes.\n"
                         "The light fills your eyes. Blinding, searing pain!\n"
                         "Owwwww! you scream, dropping the mirror and covering your eyes.\nFor an instant, your eyes burn fiercely.\n"
                         "Mistake, you think. This was a horrible mistake.\n"
                         "But then you feel a strange sensation of power. It shoots from your\n"
                         "eyeballs to your brain.\n"
                         "I don't want to dance anymore, you think.\n"
                         "Instantly, your feet stop moving. Yes! It works!\n"
                         "You feel so powerful! Suddenly you know that anything you want,\n"
                         "anything you think, will come true!\n"
                         "You don't belong in a circus, you shout at Mistress Barbarous. You\n"
                         "belong in a zoo!\n"
                         "Without doing anything else, you simply stare at her and imagine her as\n"
                         "an ape.\n"
                         "ZAPPPP!\n"
                         "Nooooo! she cries as the purple beam hits her. In a split second, she is\n"
                         "transformed into a large, hairy gorilla.\n"
                         "Wow! you exclaim, your mouth gaping open. Cool!\n"
                         "You take the pendant from the ape's hand. Then you turn your purple gaze\n"
                         "on Ramon. Stop playing, you command.\n"
                         "Ramon drops his bow, exhausted.\n"
                         "What are you going to do with the pendant? he asks nervously.\nI'm not sure, you answer. You clutch the pendant in your fist. Do you\n"
                         "think it'll keep working for me, the same way it worked for Mistress\n"
                         "Barbarous?\n"
                         "Of course, Ramon replies. They all use that pendant! Everyone in her\n"
                         "family. Geyorg the Clown, the Great Bostini, her sisters - they use it every\n"
                         "day. Otherwise their strange powers will go away.\n"
                         "You mean if they don't use the pendant, then they'll just be normal?\n"
                         "you ask.\n"
                         "Ramon nods.\n"
                         "Okay, you say. Then I have an idea. Come with me.\nYour heart pounds with nervous excitement as you and Ramon race\n"
                         "through the circus toward the sideshow.\n"
                         "Keep your eyes open, you tell him. If you see Bostini or one of the\n"
                         "others, let me know.\n"
                         "With Ramon standing guard, you slip into the sideshow. You grasp the\n"
                         "mirror tightly in one hand, the pendant in the other.\n"
                         "You're back! the Lizard Boy cries happily. Then he spots the pendant.\n"
                         "Oh, no! Keep that thing away from us! It's evil.\n"
                         "No, it's not, you assure him. It can do good, too! Watch.\n"
                         "You position the pendant so that the face is reflected in your mirror. Then\n"
                         "you stare at the reflection.\n"
                         "ZAPPP! The purple energy bolt zips to your eyes.\n"
                         "Danny Mendleson, be yourself again, you command, staring at the\n"
                         "Lizard Boy.\n"
                         "BZZZT! In a flash, the Lizard Boy changes back into a normal kid. The\n"
                         "same kid you met a year ago at camp.\n"
                         "Thanks! Danny yells, jumping up and down with joy.\n"
                         "Don't thank me yet, you answer. We've got a ways to go.\nDanny tells you the real, human names of the rest of the sideshow freaks,\n"
                         "and you use the pendant and mirror to change them back into kids. At last\n"
                         "there's only one left.\n"
                         "What's that kid's name? you ask Danny as you point at the Bucket of\n"
                         "Human Slobber.\n"
                         "It's a hideous-looking bucket of milky slime with two eyes floating on top\n"
                         "of the liquid. And red hair.\n"
                         "I don't know, Danny moans. He just arrived today.\n"
                         "Richie? you cry, your eyes opening wide.\n"
                         "In answer, the two floating eyeballs blink at you frantically.\n"
                         "Richie Fieldston, be yourself! you command, using the pendant's\n"
                         "power.\n"
                         "In a flash, the Bucket of Human Slobber changes into the red-haired kid\n"
                         "you came to the circus with.\n"
                         "Yuck! Richie says, shaking off the last drops of slobber.\n"
                         "Yeah! all the other circus kids cry.\n"
                         "What now? Merrill Thornbush, who used to be the Girl with Five\n"
                         "Tongues, asks you.\n"
                         "Now we do what we came here to do! We put on a show! you\n"
                         "announce.\nThat night, you're the ringmaster of the new All-Star Kid Circus! You,\n"
                         "Richie, and all the other sideshow kids are the stars!\n"
                         "Richie rides bareback on a horse. Danny Mendleson juggles five clubs of\n"
                         "fire. Merrill does an amazing trapeze act with the boy who used to be the Kid\n"
                         "with Rotten Flesh. Now he's a normal kid named Elliot Glass.\n"
                         "The other circus performers, the regular clowns, acrobats, and jugglers,\n"
                         "help out in the show. They're delighted that the reign of Mistress Barbarous\n"
                         "and her evil relatives is over.\n"
                         "But what about the pendant? Richie whispers to you near the end of the\n"
                         "show. If it falls into the wrong hands -\n"
                         "That will never happen! you interrupt. Just watch.\n"
                         "As a grand finale to the circus you clap your hands three times. Three\n"
                         "magnificent elephants parade into the ring.\n"
                         "They put their front legs in the air and stand up.\n"
                         "You race forward and position the pendant on the ground in front of the\n"
                         "biggest elephant. When she lowers her huge front feet, she crushes the jade to\n"
                         "smithereens.\n"
                         "Good night, everyone! you address the crowd over the microphone.\n"
                         "I'm proud to announce that this is a very happy\n\nEND!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 2){
            std::cout << "As you dance, you pull the bullwhip out of your backpack. With a snap of\n"
                         "your wrist, you crack the leather whip in the gypsy's direction.\n"
                         "Too bad! Not only does the whip not hit the violin, but it curls around in\n"
                         "the air and lashes back at you!\n"
                         "The whip wraps itself around your body!\n"
                         "Noooo! you cry as you fall to the floor. You can't move a muscle! The\n"
                         "whip is wrapped around your body like a cobra!\n"
                         "Mistress Barbarous roars with laughter. She draws nearer.\n"
                         "Quick! What else did you bring with you?\n"
                         "Nothing.\n"
                         "You wouldn't be on this page unless you had the chocolate bars, the\n"
                         "camera, and the bullwhip.\n"
                         "You know the rules. You were only allowed to bring three things. Face it!\n"
                         "You've run out of props.\n"
                         "You're whipped!\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 3){
            std::cout << "What did you bring with you? Some talcum powder? A ball of twine? A\n"
                         "camera? Your pet snake?\n"
                         "Your mind races, trying desperately to think of ways to use the things\n"
                         "you've brought to the circus.\n"
                         "But your mind isn't fast enough.\n"
                         "The gypsy's violin bow slices forward.\n"
                         "Right at your throat!\nYou whirl away, dancing faster and faster to escape the knife-tipped bow.\n"
                         "What an act! Mistress Barbarous cries. I'm a genius!\n"
                         "The good news is: You don't get stabbed by Ramon's deadly bow. You\n"
                         "learn how to dance around it!\n"
                         "The bad news is: You have to dance around it every single night!\n"
                         "You and Ramon are the new stars of the circus. Your act is called Ramon\n"
                         "and the Dance-Crazy Kid.\n"
                         "While he plays, you dance wildly around the circus rings. You whirl and\n"
                         "twirl, your feet flying up in a pattern of crazy rhythms. The audience cheers,\n"
                         "especially when you take your bow at the end of the big show, and you're still\n"
                         "dancing!\n"
                         "What they don't know is that you're always dancing! The magic of the\n"
                         "charm never wears off. You dance day and night ... week after week ... year\n"
                         "after year ...\n"
                         "You're a regular dancing fool!\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 4){
            std::cout << user_inventory[0] << ", " << user_inventory[1] << ", " << user_inventory[2] << "\n";
            std::cin >> user_choice1;
        }
        else if (user_choice1 == 5 and (user_inventory[0] == inventory[10] or user_inventory[1] == inventory[10] or user_inventory[2] == inventory[10])){
            std::cout << "You have the bullwhip coiled in your back pocket, so you decide to drop.\n"
                         "If the lions attack, you'll whip them!\n"
                         "You let go of Geyorg's costume. With your arms stretched out wide, you\n"
                         "sail down to the trampoline below.\n"
                         "BOING!\n"
                         "You hit the trampoline dead center - and bounce back up!\n"
                         "Perfect!\n"
                         "BOING!\n"
                         "You're up in the air ... then down ...\n"
                         "BOING!\n"
                         "It's fun! Too much fun.\n"
                         "So much fun that you forget that Mistress Barbarous and all her evil\n"
                         "relatives are trying to kill you!\n"
                         "Then - THWAP!\n"
                         "A knife breezes past you, almost slicing your ear.\nThe flashing knife reminds you that you're in terrible trouble. Here's what\n"
                         "you're up against:\n"
                         "1) Morton the Knife Thrower is trying to kill you.\n"
                         "2) The twin trapeze artists are lurking above.\n"
                         "3) Geyorg the Clown wants to crunch you.\n"
                         "4) The lions are waiting to tear you to shreds.\n"
                         "You've got problems! You'd better think fast and decide what to do.\n"
                         "Should you jump off the trampoline? On the floor you'll be able to use the\n"
                         "whip on the animals - and on the knife thrower, too.\n"
                         "Or should you keep bouncing on the trampoline and try to bounce so high\n"
                         "that you're out of reach? You see an empty trapeze above you. Maybe you\n"
                         "can reach it....\n"
                         "THWAP! The knives keep coming! Hurry!\n\n";

            std::cout << "1) To keep bouncing.\n";
            std::cout << "2) If you think you can handle the lions.\n";
            std::cin >> user_choice1;
            user_choice = 0;
            for (int i = 0; i < 3; i++) {
                if (user_inventory[i] == inventory[10]){
                    user_inventory[i].erase();
                }
            }
        }
        else if (user_choice1 == 6){
            std::cout << "You didn't bring the bullwhip.\n"
                         "No way are you going to let go and drop to the floor where those lions are\n"
                         "waiting!\n"
                         "Not without a whip of some sort.\n"
                         "You hold on tight. Tighter. Praying that Geyorg the Clown can't shake\n"
                         "you off and make you fall.\n"
                         "But suddenly you have something else to worry about.\n"
                         "One of the women in pink leotards swings toward you on a rope. You\n"
                         "glance at her costume - and see a cobra sewn on the front. In black sequins.\n"
                         "Does that ring a bell?\n"
                         "If you've met the twin sisters before, you'll know whether you can trust\n"
                         "this twin. If not, you'll have to guess.\n\n";

            std::cout << "3) If you trust this twin, take her hand.\n";
            std::cout << "4) If you don't trust her.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 7){
            std::cout << "You decide to keep bouncing. Higher ... higher ...\n"
                         "You throw your whole body into the next bounce.\n"
                         "Your arms circle around like windmills. Your legs push hard as they hit\n"
                         "the trampoline.\n"
                         "It works. You sail into the air. Up ... up ...\n"
                         "Yes! You've bounced high enough to reach the trapeze swing!\n"
                         "You grip it with your hands. Then you somersault to a sitting position.\n"
                         "THWAP! Another knife sails by, underneath you.\n"
                         "Ha! you taunt the knife thrower. You can't reach me! I'm too high!\n"
                         "You laugh as Morton hurls one knife after another at you. They all fall\n"
                         "short of the target.\n"
                         "But we have news for you.\n"
                         "You laughed too soon.\nThe knife thrower finally realizes that he can't reach you by throwing his\n"
                         "knives up in the air.\n"
                         "But there is something else he can do with them.\n"
                         "What is he doing? you wonder as he spins on his heel. He aims his knives\n"
                         "toward the corner of the tent.\n"
                         "Right at the place where all the ropes are tied and staked to the ground.\n"
                         "He aims at one rope in particular. The rope that holds all the trapeze\n"
                         "equipment in the air ...\n"
                         "The one holding you in the air!\n"
                         "THWAP!\n"
                         "Aaaaagh! you shriek as you plummet to the ground.\n"
                         "Talk about cutting short your circus career!\n\nTHE END\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 8){
            std::cout << "You decide to face the dangers on the floor. You take a deep breath to\n"
                         "steel yourself. Ready, you murmur.\n"
                         "Time to deal with the lions, the knife thrower, Mistress Barbarous - and\n"
                         "whatever else is out to get you!\n"
                         "You grip the bullwhip tightly as you jump off the trampoline. You land on\n"
                         "the dirt floor.\n"
                         "GRRRRR! the lions growl hungrily.\n"
                         "The hairs on the back of your neck prickle.\n"
                         "The three furry beasts circle you. They look ravenous.\n"
                         "In the center ring! Mistress Barbarous announces over her microphone.\n"
                         "It's today's main attraction - lunch!\n"
                         "You rub your sweaty forehead with the back of your hand. Hup! you\n"
                         "yell, cracking your whip at the lions.\n"
                         "The lions back away a step.\n"
                         "But the knife thrower doesn't.\n"
                         "WHHHSSSSSHH! A knife sails so close to your head, it parts your hair.\n"
                         "You can't help screaming!\nYou're so scared, your heart feels as if it has jumped up into your throat.\n"
                         "But you try not to let the fear show.\n"
                         "The knife thrower draws another knife. In a flash, you crack your whip at\n"
                         "him. You knock the knife away.\n"
                         "Ow! he screams, popping his fingers into his mouth.\n"
                         "Yes! you shout triumphantly.\n"
                         "Barbarous flies into action. She blows a whistle. It brings a clown\n"
                         "ambulance racing into the ring. The siren blares as the clowns rush to the\n"
                         "knife thrower's side.\n"
                         "The clowns make the lions nervous. They pace and roar, ripping the air\n"
                         "with their razor claws.\n"
                         "Lions ... clowns ... acrobats ... knife throwers ...\n"
                         "You're completely surrounded.\n"
                         "It's big trouble under the big top!\nSomething horrible is going to happen, you realize.\n"
                         "But what?\n"
                         "Mistress Barbarous reaches for the large green jade pendant she wears\n"
                         "around her neck. She lifts the pendant in one hand and takes out a small,\n"
                         "ancient-looking mirror with the other.\n"
                         "A chill of dread creeps up your spine. That pendant is dangerous. You're\n"
                         "sure of it!\n"
                         "You raise your whip, ready to snap it and knock the pendant and mirror\n"
                         "out of Barbarous's hands.\n"
                         "But right then, one of the lions crouches, tail lashing. He's about to spring\n"
                         "at you!\n"
                         "Now you've got two targets! But which is more dangerous? The lion -\n"
                         "or Mistress Barbarous?\n"
                         "You have one split second to decide!\n\n";

            std::cout << "5) If you crack the whip at the lion.\n";
            std::cout << "6) If you crack the whip at Mistress Barbarous.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 9){
            std::cout << "The woman in the pink leotard swings toward you. I'm Susan the\n"
                         "Human Snake, she calls in a sweet voice.\n"
                         "When she comes within a few feet of you, she reaches out.\n"
                         "Thank goodness, you think. She's going to help you!\n"
                         "Help you get away from the clown ...\n"
                         "You start to take her hand. But as you lean out, she grabs your ankles\n"
                         "instead!\n"
                         "An instant later, she lets her whole body drop so that she's hanging on to\n"
                         "the bottom of your legs. Her weight drags at you.\n"
                         "You were having trouble holding on to Geyorg before.\n"
                         "Now you're doomed!\n"
                         "Ahhh! you cry. Get off me!\n"
                         "You try to kick her loose. But she holds on tight, laughing.\n"
                         "Your hands ache from clutching the clown's costume so tightly. What are\n"
                         "you going to do?\n"
                         "Then you remember: You brought some stuff from home.\n"
                         "But will any of it help you now?\n\n";

            std::cout << "7) If you brought the ball of twine.\n";
            std::cout << "8) If you don't have the twine.\n";
            std::cout << "9) Check Inventory.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 10){
            std::cout << "No way are you going to trust this person, you decide.\n"
                         "Which is a very smart move.\n"
                         "Maybe you knew, and maybe you were only guessing. Either way, you're\n"
                         "right. The woman with the black cobra on her costume is Susan, the twin\n"
                         "sister of Sara the Human Snake.\n"
                         "Sara's the nice one. Susan is pure evil.\n"
                         "Unfortunately, right then Geyorg the huge clown gives one final shake of\n"
                         "his arms.\n"
                         "You can't help it. He shakes you so hard, you let go of his costume.\n"
                         "You close your eyes.\n"
                         "Helllllp! you scream as you hurtle toward the ground.\nSsshhhh! Stop screaming. It's all right, a voice murmurs in your ear.\n"
                         "Huh? What happened? Where am I? you croak, opening your eyes.\n"
                         "You're home in bed, of course, your mom tells you. But you've got to\n"
                         "wake up. It's time to get ready for your week at the circus. Remember?\n"
                         "Oh, no, you think. This was all just a dream?\n"
                         "You shudder.\n"
                         "Man, oh, man. If that was just a dream, you can't imagine how scary the\n"
                         "real thing will be!\n"
                         "I changed my mind. I think I'll just stay home, you tell your mom.\n"
                         "And that's exactly what you do in\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 > 9){
            std::cout << "Wrong Choice! Choose Again!\n";
            std::cin >> user_choice1;
        }
        else if (user_choice1 > 0) {
            std::cout << "You Don't have this Item. Choose Again.\n";
            std::cin >> user_choice1;
        }
        else {
            user_choice = 0;
        }
    }

    // LOOP 10

    user_choice = 1;
    while (user_choice != 0){
        if (user_choice1 == 1){
            std::cout << "You decide to keep bouncing. Higher ... higher ...\n"
                         "You throw your whole body into the next bounce.\n"
                         "Your arms circle around like windmills. Your legs push hard as they hit\n"
                         "the trampoline.\n"
                         "It works. You sail into the air. Up ... up ...\n"
                         "Yes! You've bounced high enough to reach the trapeze swing!\n"
                         "You grip it with your hands. Then you somersault to a sitting position.\n"
                         "THWAP! Another knife sails by, underneath you.\n"
                         "Ha! you taunt the knife thrower. You can't reach me! I'm too high!\n"
                         "You laugh as Morton hurls one knife after another at you. They all fall\n"
                         "short of the target.\n"
                         "But we have news for you.\n"
                         "You laughed too soon.\nThe knife thrower finally realizes that he can't reach you by throwing his\n"
                         "knives up in the air.\n"
                         "But there is something else he can do with them.\n"
                         "What is he doing? you wonder as he spins on his heel. He aims his knives\n"
                         "toward the corner of the tent.\n"
                         "Right at the place where all the ropes are tied and staked to the ground.\n"
                         "He aims at one rope in particular. The rope that holds all the trapeze\n"
                         "equipment in the air ...\n"
                         "The one holding you in the air!\n"
                         "THWAP!\n"
                         "Aaaaagh! you shriek as you plummet to the ground.\n"
                         "Talk about cutting short your circus career!\n\nTHE END\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 2){
            std::cout << "You decide to face the dangers on the floor. You take a deep breath to\n"
                         "steel yourself. Ready, you murmur.\n"
                         "Time to deal with the lions, the knife thrower, Mistress Barbarous - and\n"
                         "whatever else is out to get you!\n"
                         "You grip the bullwhip tightly as you jump off the trampoline. You land on\n"
                         "the dirt floor.\n"
                         "GRRRRR! the lions growl hungrily.\n"
                         "The hairs on the back of your neck prickle.\n"
                         "The three furry beasts circle you. They look ravenous.\n"
                         "In the center ring! Mistress Barbarous announces over her microphone.\n"
                         "It's today's main attraction - lunch!\n"
                         "You rub your sweaty forehead with the back of your hand. Hup! you\n"
                         "yell, cracking your whip at the lions.\n"
                         "The lions back away a step.\n"
                         "But the knife thrower doesn't.\n"
                         "WHHHSSSSSHH! A knife sails so close to your head, it parts your hair.\n"
                         "You can't help screaming!\nYou're so scared, your heart feels as if it has jumped up into your throat.\n"
                         "But you try not to let the fear show.\n"
                         "The knife thrower draws another knife. In a flash, you crack your whip at\n"
                         "him. You knock the knife away.\n"
                         "Ow! he screams, popping his fingers into his mouth.\n"
                         "Yes! you shout triumphantly.\n"
                         "Barbarous flies into action. She blows a whistle. It brings a clown\n"
                         "ambulance racing into the ring. The siren blares as the clowns rush to the\n"
                         "knife thrower's side.\n"
                         "The clowns make the lions nervous. They pace and roar, ripping the air\n"
                         "with their razor claws.\n"
                         "Lions ... clowns ... acrobats ... knife throwers ...\n"
                         "You're completely surrounded.\n"
                         "It's big trouble under the big top!\nSomething horrible is going to happen, you realize.\n"
                         "But what?\n"
                         "Mistress Barbarous reaches for the large green jade pendant she wears\n"
                         "around her neck. She lifts the pendant in one hand and takes out a small,\n"
                         "ancient-looking mirror with the other.\n"
                         "A chill of dread creeps up your spine. That pendant is dangerous. You're\n"
                         "sure of it!\n"
                         "You raise your whip, ready to snap it and knock the pendant and mirror\n"
                         "out of Barbarous's hands.\n"
                         "But right then, one of the lions crouches, tail lashing. He's about to spring\n"
                         "at you!\n"
                         "Now you've got two targets! But which is more dangerous? The lion -\n"
                         "or Mistress Barbarous?\n"
                         "You have one split second to decide!\n\n";

            std::cout << "1) If you crack the whip at the lion.\n";
            std::cout << "2) If you crack the whip at Mistress Barbarous.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 3){
            std::cout << "The woman in the pink leotard swings toward you. I'm Susan the\n"
                         "Human Snake, she calls in a sweet voice.\n"
                         "When she comes within a few feet of you, she reaches out.\n"
                         "Thank goodness, you think. She's going to help you!\n"
                         "Help you get away from the clown ...\n"
                         "You start to take her hand. But as you lean out, she grabs your ankles\n"
                         "instead!\n"
                         "An instant later, she lets her whole body drop so that she's hanging on to\n"
                         "the bottom of your legs. Her weight drags at you.\n"
                         "You were having trouble holding on to Geyorg before.\n"
                         "Now you're doomed!\n"
                         "Ahhh! you cry. Get off me!\n"
                         "You try to kick her loose. But she holds on tight, laughing.\n"
                         "Your hands ache from clutching the clown's costume so tightly. What are\n"
                         "you going to do?\n"
                         "Then you remember: You brought some stuff from home.\n"
                         "But will any of it help you now?\n\n";

            std::cout << "3) If you brought the ball of twine.\n";
            std::cout << "4) If you don't have the twine.\n";
            std::cout << "5) Check Inventory.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 4){
            std::cout << "No way are you going to trust this person, you decide.\n"
                         "Which is a very smart move.\n"
                         "Maybe you knew, and maybe you were only guessing. Either way, you're\n"
                         "right. The woman with the black cobra on her costume is Susan, the twin\n"
                         "sister of Sara the Human Snake.\n"
                         "Sara's the nice one. Susan is pure evil.\n"
                         "Unfortunately, right then Geyorg the huge clown gives one final shake of\n"
                         "his arms.\n"
                         "You can't help it. He shakes you so hard, you let go of his costume.\n"
                         "You close your eyes.\n"
                         "Helllllp! you scream as you hurtle toward the ground.\nSsshhhh! Stop screaming. It's all right, a voice murmurs in your ear.\n"
                         "Huh? What happened? Where am I? you croak, opening your eyes.\n"
                         "You're home in bed, of course, your mom tells you. But you've got to\n"
                         "wake up. It's time to get ready for your week at the circus. Remember?\n"
                         "Oh, no, you think. This was all just a dream?\n"
                         "You shudder.\n"
                         "Man, oh, man. If that was just a dream, you can't imagine how scary the\n"
                         "real thing will be!\n"
                         "I changed my mind. I think I'll just stay home, you tell your mom.\n"
                         "And that's exactly what you do in\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 5){
            std::cout << "CRACK! You snap the whip at the lion.\n"
                         "Hold on! Wait just a second!\n"
                         "You think a lion is more dangerous than the ringmistress?\n"
                         "No, no, no!\n"
                         "You obviously haven't spent enough time around her, or you'd know\n"
                         "better.\n"
                         "Remember when Mistress Barbarous called you lunch?\n"
                         "Well, she wasn't talking about what the lions were going to eat. She was\n"
                         "talking about her own idea of a tasty meal!\n"
                         "Sorry! You almost reached a good ending in this story. But almost isn't\n"
                         "good enough. So stop reading.\n"
                         "Why don't you go and make yourself a little snack?\n"
                         "After all, that's what Mistress Barbarous is doing!\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 6){
            std::cout << "Who's more dangerous? The lion or Mistress Barbarous?\n"
                         "Barbarous, you decide. Definitely - Barbarous!\n"
                         "You whirl and snap your whip at her.\n"
                         "CRACCCK! The leather lash curls around her hand, knocking the mirror\n"
                         "away.\n"
                         "Aaahh! she screams as the whip stings her hand.\n"
                         "GRRRRR!\n"
                         "You glance over your shoulder. Whoa! The lion is springing at you!\n"
                         "Duck! a voice calls from high above.\n"
                         "Duck? Who said that?\n"
                         "Who cares!\n"
                         "Just do it!\nYou throw yourself flat just in time.\n"
                         "One instant later the lion sails toward you....\n"
                         "But because you ducked, he flies over your head and lands on Morton the\n"
                         "Knife Thrower instead.\n"
                         "Nooooo! Morton cries as the lion topples him.\n"
                         "You stand up and dust yourself off.\n"
                         "Duck again! the voice calls from above.\n"
                         "You hit the ground. Then you roll over and peer into the dark area of\n"
                         "ropes and platforms at the top of the tent.\n"
                         "It's Richie! you think. This time you recognized his voice.\n"
                         "He's been hiding up there this whole time!\n"
                         "A second lion leaps over you. But this time, the lion doesn't even seem to\n"
                         "be aiming for you. He's leaping at the Great Bostini, the lion tamer, who's\n"
                         "been standing near the lion cages at the side of the ring.\n"
                         "With a horrible growl, the lion rips Bostini's costume to shreds.\n"
                         "The lion is going crazy! Attacking his master!\n"
                         "Help me! Please! Bostini begs you.\nYou don't like Bostini, but you're too nice to stand around and watch a\n"
                         "person being torn to shreds.\n"
                         "Fearlessly, you crack your bullwhip at the lion.\n"
                         "The beast flinches and growls at you. But then it rolls off Bostini and\n"
                         "saunters to the side of the ring.\n"
                         "Excellent! you congratulate yourself.\n"
                         "Don't get smart, circus kid! Mistress Barbarous shouts at you. She puts\n"
                         "her fingers to her mouth and whistles.\n"
                         "Immediately, a tall white horse gallops into the ring. Barbarous jumps up\n"
                         "and stands on its back. I'm going to get another mirror, she calls as she\n"
                         "rides toward an exit. Then you'll be sorry you ever touched that whip!\n"
                         "If she gets another mirror you're as good as dead! Richie calls down\n"
                         "from above. She uses it for her magic!\n"
                         "Uh-oh. He's right. If she gets another mirror ...\n"
                         "Hey! Do you have a mirror?\n\n";

            std::cout << "6) If you brought the mirror with you.\n";
            std::cout << "7) If you didn't.\n";
            std::cout << "5) Check Inventory.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 7 and (user_inventory[0] == inventory[9] or user_inventory[1] == inventory[9] or user_inventory[2] == inventory[9])){
            std::cout << "The ball of twine? Yes! You've got it.\n"
                         "You can think of about two million ways you could use it to get out of this\n"
                         "situation. For instance:\n"
                         "1) You could quickly loop a few loops and make a lasso. Then you could\n"
                         "take aim and toss it, hoping to catch the loop on the end of a trapeze swing\n"
                         "behind you. Then you could pull the trapeze toward you, do a flip over the\n"
                         "bar, and swing away to freedom.\n"
                         "2) You could use the twine to tie up Geyorg's hands. Then you could slide\n"
                         "down one of his skinny legs as if it were a firefighter's pole.\n"
                         "3) You could cut a piece of twine, tie the ends together, and start playing\n"
                         "cat's cradle to confuse and distract all the circus performers below who are\n"
                         "trying to kill you.\n"
                         "4) You could make a -\n"
                         "Hold it! You're taking too long to make up your mind.\nA rope ladder! you finally decide. I'll make a rope ladder.\n"
                         "But while you were making up your mind, Geyorg the clown was busy,\n"
                         "too. He's stretched his fingers like pretzels. They're bending around\n"
                         "backwards - reaching for the ball of twine.\n"
                         "Before you can even start on your rope ladder, Geyorg snatches the twine\n"
                         "from your grasp!\n"
                         "Oops.\n"
                         "The chance of surviving this adventure just slipped from your grasp as\n"
                         "well!\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 8){
            std::cout << "You don't have the twine.\n"
                         "Oh, well. It doesn't matter that much anyway.\n"
                         "Because a minute later, you lose your grip.\n"
                         "Susan flies through the air and grabs on to a trapeze.\n"
                         "You reach out for one, desperately. But you miss.\n"
                         "You begin to tumble forward, then fall.\n"
                         "But you're a circus performer! So you don't just fall flat on your face.\n"
                         "No way.\n"
                         "You twist in the air, then do two-and-a-half backwards flips and a triple\n"
                         "pike.\n"
                         "Then you fall flat on your face.\n"
                         "Needless to say, you won't be performing that trick again!\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 9){
            std::cout << user_inventory[0] << ", " << user_inventory[1] << ", " << user_inventory[2] << "\n";
            std::cin >> user_choice1;
        }
        else if (user_choice1 > 7){
            std::cout << "Wrong Choice! Choose Again!\n";
            std::cin >> user_choice1;
        }
        else if (user_choice1 > 0) {
            std::cout << "You Don't have this Item. Choose Again.\n";
            std::cin >> user_choice1;
        }
        else {

            user_choice = 0;
        }
    }

    // LOOP 11

    user_choice = 1;
    while (user_choice != 0){
        if (user_choice1 == 1){
            std::cout << "CRACK! You snap the whip at the lion.\n"
                         "Hold on! Wait just a second!\n"
                         "You think a lion is more dangerous than the ringmistress?\n"
                         "No, no, no!\n"
                         "You obviously haven't spent enough time around her, or you'd know\n"
                         "better.\n"
                         "Remember when Mistress Barbarous called you lunch?\n"
                         "Well, she wasn't talking about what the lions were going to eat. She was\n"
                         "talking about her own idea of a tasty meal!\n"
                         "Sorry! You almost reached a good ending in this story. But almost isn't\n"
                         "good enough. So stop reading.\n"
                         "Why don't you go and make yourself a little snack?\n"
                         "After all, that's what Mistress Barbarous is doing!\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 2){
            std::cout << "Who's more dangerous? The lion or Mistress Barbarous?\n"
                         "Barbarous, you decide. Definitely - Barbarous!\n"
                         "You whirl and snap your whip at her.\n"
                         "CRACCCK! The leather lash curls around her hand, knocking the mirror\n"
                         "away.\n"
                         "Aaahh! she screams as the whip stings her hand.\n"
                         "GRRRRR!\n"
                         "You glance over your shoulder. Whoa! The lion is springing at you!\n"
                         "Duck! a voice calls from high above.\n"
                         "Duck? Who said that?\n"
                         "Who cares!\n"
                         "Just do it!\nYou throw yourself flat just in time.\n"
                         "One instant later the lion sails toward you....\n"
                         "But because you ducked, he flies over your head and lands on Morton the\n"
                         "Knife Thrower instead.\n"
                         "Nooooo! Morton cries as the lion topples him.\n"
                         "You stand up and dust yourself off.\n"
                         "Duck again! the voice calls from above.\n"
                         "You hit the ground. Then you roll over and peer into the dark area of\n"
                         "ropes and platforms at the top of the tent.\n"
                         "It's Richie! you think. This time you recognized his voice.\n"
                         "He's been hiding up there this whole time!\n"
                         "A second lion leaps over you. But this time, the lion doesn't even seem to\n"
                         "be aiming for you. He's leaping at the Great Bostini, the lion tamer, who's\n"
                         "been standing near the lion cages at the side of the ring.\n"
                         "With a horrible growl, the lion rips Bostini's costume to shreds.\n"
                         "The lion is going crazy! Attacking his master!\n"
                         "Help me! Please! Bostini begs you.\nYou don't like Bostini, but you're too nice to stand around and watch a\n"
                         "person being torn to shreds.\n"
                         "Fearlessly, you crack your bullwhip at the lion.\n"
                         "The beast flinches and growls at you. But then it rolls off Bostini and\n"
                         "saunters to the side of the ring.\n"
                         "Excellent! you congratulate yourself.\n"
                         "Don't get smart, circus kid! Mistress Barbarous shouts at you. She puts\n"
                         "her fingers to her mouth and whistles.\n"
                         "Immediately, a tall white horse gallops into the ring. Barbarous jumps up\n"
                         "and stands on its back. I'm going to get another mirror, she calls as she\n"
                         "rides toward an exit. Then you'll be sorry you ever touched that whip!\n"
                         "If she gets another mirror you're as good as dead! Richie calls down\n"
                         "from above. She uses it for her magic!\n"
                         "Uh-oh. He's right. If she gets another mirror ...\n"
                         "Hey! Do you have a mirror?\n\n";

            std::cout << "1) If you brought the mirror with you.\n";
            std::cout << "2) If you didn't.\n";
            std::cout << "3) Check Inventory.\n";
            std::cin >> user_choice1;
            user_choice = 0;
        }
        else if (user_choice1 == 3 and (user_inventory[0] == inventory[9] or user_inventory[1] == inventory[9] or user_inventory[2] == inventory[9])){
            std::cout << "The ball of twine? Yes! You've got it.\n"
                         "You can think of about two million ways you could use it to get out of this\n"
                         "situation. For instance:\n"
                         "1) You could quickly loop a few loops and make a lasso. Then you could\n"
                         "take aim and toss it, hoping to catch the loop on the end of a trapeze swing\n"
                         "behind you. Then you could pull the trapeze toward you, do a flip over the\n"
                         "bar, and swing away to freedom.\n"
                         "2) You could use the twine to tie up Geyorg's hands. Then you could slide\n"
                         "down one of his skinny legs as if it were a firefighter's pole.\n"
                         "3) You could cut a piece of twine, tie the ends together, and start playing\n"
                         "cat's cradle to confuse and distract all the circus performers below who are\n"
                         "trying to kill you.\n"
                         "4) You could make a -\n"
                         "Hold it! You're taking too long to make up your mind.\nA rope ladder! you finally decide. I'll make a rope ladder.\n"
                         "But while you were making up your mind, Geyorg the clown was busy,\n"
                         "too. He's stretched his fingers like pretzels. They're bending around\n"
                         "backwards - reaching for the ball of twine.\n"
                         "Before you can even start on your rope ladder, Geyorg snatches the twine\n"
                         "from your grasp!\n"
                         "Oops.\n"
                         "The chance of surviving this adventure just slipped from your grasp as\n"
                         "well!\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 4){
            std::cout << "You don't have the twine.\n"
                         "Oh, well. It doesn't matter that much anyway.\n"
                         "Because a minute later, you lose your grip.\n"
                         "Susan flies through the air and grabs on to a trapeze.\n"
                         "You reach out for one, desperately. But you miss.\n"
                         "You begin to tumble forward, then fall.\n"
                         "But you're a circus performer! So you don't just fall flat on your face.\n"
                         "No way.\n"
                         "You twist in the air, then do two-and-a-half backwards flips and a triple\n"
                         "pike.\n"
                         "Then you fall flat on your face.\n"
                         "Needless to say, you won't be performing that trick again!\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 5){
            std::cout << user_inventory[0]<< ", " << user_inventory[1] << ", " << user_inventory[2] << "\n";
            std::cin >> user_choice1;
        }
        else if (user_choice1 == 6 and (user_inventory[0] == inventory[2] or user_inventory[1] == inventory[2] or user_inventory[2] == inventory[2])){
            std::cout << "You brought a mirror along with you. And suddenly you have a plan.\n"
                         "Quickly, you pull the mirror out of your pocket and flash it at Mistress\n"
                         "Barbarous.\n"
                         "A mirror? you shout, taunting her. You want a mirror? Well, I have\n"
                         "one! Come and get it.\n"
                         "Her eyes gleam when she sees it. She seems desperate.\n"
                         "Hey! she shouts, turning her horse toward you. Give that to me, you\n"
                         "little brat! I need it now!\n"
                         "No way! you cry, backing away.\n"
                         "Barbarous gallops straight toward you. She leans down, trying to grab the\n"
                         "mirror out of your hands. The magic pendant dangles from her fist.\n"
                         "You let Barbarous get close. Very close.\n"
                         "Then you snatch the pendant from her fist.\n"
                         "WHACK! It swings into the mirror - and the mirror shatters.\n"
                         "No! Barbarous cries. What have you done? Noooooooo!\nAs you stare, Mistress Barbarous brings her horse to a halt and slides off\n"
                         "to the ground. Then she suddenly throws her hands up to cover her face.\n"
                         "You back away from her. The pendant is safe in your fist.\n"
                         "Noooooo! It's happening! she moans. You! You've ruined\n"
                         "everything....\n"
                         "Your mouth falls open in shock as smoke billows up from Mistress\n"
                         "Barbarous's body.\n"
                         "Right in front of you, Mistress Barbarous begins to change shape. First\n"
                         "she shrinks in size. Then fur sprouts all over her body! Then she falls forward\n"
                         "onto all fours.\n"
                         "I can't believe it! you murmur.\n"
                         "Mistress Barbarous has turned into a weasel! A coal-black weasel!\n"
                         "She bares her sharp teeth at you, then darts away.\n"
                         "Richie drops down from the ceiling on a rope.\n"
                         "What is going on? Richie asks. I've never seen anything like it. Ever!\n"
                         "All around you, Mistress Barbarous's relatives are changing shape.\n"
                         "Changing into animals!\nYou and Richie stare at the torn costume that the Great Bostini was\n"
                         "wearing only a minute ago.\n"
                         "Now it's being worn by a small chimpanzee.\n"
                         "The twin sister trapeze artists transform into harmless little garden snakes.\n"
                         "And Morton the Knife Thrower changes, too. Into a white miniature\n"
                         "poodle!\n"
                         "What a joke! you laugh, pointing at the yapping dog.\n"
                         "Look at that! Richie exclaims.\n"
                         "You spin around and see Geyorg the Clown. He is slowly taking off his\n"
                         "clown suit.\n"
                         "You gasp. Underneath, he's not a human being at all!\n"
                         "He's a skeleton!\nI can't believe it! you gasp. You stare at the decrepit clown skeleton in\n"
                         "horror.\n"
                         "As the last traces of the magic wear off, Geyorg's bones disconnect from\n"
                         "each other and crumble to the ground.\n"
                         "What is going on here? Richie moans again.\n"
                         "In answer, Mr. Peepers the clown races up and hugs your legs.\n"
                         "You did it! You took Barbarous's powers away! he shouts. Now none\n"
                         "of them will ever be human again!\n"
                         "Yes! you and Richie cheer. You high-five each other.\n"
                         "Wow, Richie says. Now let's get out of here!\n"
                         "Not yet, you tell him. We've got to free the kids in the sideshow first.\n"
                         "Come on.\n"
                         "You race to the clown tent and find a hand mirror. Then you take it and\n"
                         "the pendant to the sideshow tent.\n"
                         "With Mr. Peepers telling you what to do, you stare at the reflection of the\n"
                         "pendant in the mirror.\n"
                         "ZZZAAPPP! A purple beam of energy bolts into your eyes and lights up\n"
                         "your face.\n"
                         "Using the powers of the pendant, you change all the sideshow kids back\n"
                         "into normal human beings.\nThat night, you're the ringmaster of the new All-Star Kid Circus! You,\n"
                         "Richie, and all the other sideshow kids are the stars!\n"
                         "Richie rides bareback on a horse. Danny Mendleson juggles five clubs of\n"
                         "fire. Merrill does an amazing trapeze act with the boy who used to be the Kid\n"
                         "with Rotten Flesh. Now he's a normal kid named Elliot Glass.\n"
                         "The other circus performers, the regular clowns, acrobats, and jugglers,\n"
                         "help out in the show. They're delighted that the reign of Mistress Barbarous\n"
                         "and her evil relatives is over.\n"
                         "But what about the pendant? Richie whispers to you near the end of the\n"
                         "show. If it falls into the wrong hands -\n"
                         "That will never happen! you interrupt. Just watch.\n"
                         "As a grand finale to the circus you clap your hands three times. Three\n"
                         "magnificent elephants parade into the ring.\n"
                         "They put their front legs in the air and stand up.\n"
                         "You race forward and position the pendant on the ground in front of the\n"
                         "biggest elephant. When she lowers her huge front feet, she crushes the jade to\n"
                         "smithereens.\n"
                         "Good night, everyone! you address the crowd over the microphone.\n"
                         "I'm proud to announce that this is a very happy\n\nEND\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 7){
            std::cout << "You have to stop Mistress Barbarous from getting another mirror!\n"
                         "You stare down at your hand.\n"
                         "Hey. I've got a whip! you realize. And the lions seem to be obeying your\n"
                         "commands. That gives you an idea....\n"
                         "CRACK! You snap the whip in the air.\n"
                         "Hup! Lions! you address the three killer animals. Attack!\n"
                         "You point at Barbarous, who is racing away on her horse.\n"
                         "Attack! Attack! you shout, cracking your whip and pointing at\n"
                         "Barbarous.\n"
                         "The lions roar. They heard you! Excellent!\n"
                         "The only thing is: Cats don't understand pointing.\n"
                         "When you command them to attack, they attack you!\n"
                         "You know, it's not polite to point.\n"
                         "And in this case, it's not safe, either!\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 > 3){
            std::cout << "Wrong Choice! Choose Again!\n";
            std::cin >> user_choice1;
        }
        else if (user_choice1 > 0) {
            std::cout << "You Don't have this Item. Choose Again.\n";
            std::cin >> user_choice1;
        }
        else {

            user_choice = 0;
        }
    }

    // LOOP 12

    user_choice = 1;
    while (user_choice != 0){
        if (user_choice1 == 1 and (user_inventory[0] == inventory[2] or user_inventory[1] == inventory[2] or user_inventory[2] == inventory[2])){
            std::cout << "You brought a mirror along with you. And suddenly you have a plan.\n"
                         "Quickly, you pull the mirror out of your pocket and flash it at Mistress\n"
                         "Barbarous.\n"
                         "A mirror? you shout, taunting her. You want a mirror? Well, I have\n"
                         "one! Come and get it.\n"
                         "Her eyes gleam when she sees it. She seems desperate.\n"
                         "Hey! she shouts, turning her horse toward you. Give that to me, you\n"
                         "little brat! I need it now!\n"
                         "No way! you cry, backing away.\n"
                         "Barbarous gallops straight toward you. She leans down, trying to grab the\n"
                         "mirror out of your hands. The magic pendant dangles from her fist.\n"
                         "You let Barbarous get close. Very close.\n"
                         "Then you snatch the pendant from her fist.\n"
                         "WHACK! It swings into the mirror - and the mirror shatters.\n"
                         "No! Barbarous cries. What have you done? Noooooooo!\nAs you stare, Mistress Barbarous brings her horse to a halt and slides off\n"
                         "to the ground. Then she suddenly throws her hands up to cover her face.\n"
                         "You back away from her. The pendant is safe in your fist.\n"
                         "Noooooo! It's happening! she moans. You! You've ruined\n"
                         "everything....\n"
                         "Your mouth falls open in shock as smoke billows up from Mistress\n"
                         "Barbarous's body.\n"
                         "Right in front of you, Mistress Barbarous begins to change shape. First\n"
                         "she shrinks in size. Then fur sprouts all over her body! Then she falls forward\n"
                         "onto all fours.\n"
                         "I can't believe it! you murmur.\n"
                         "Mistress Barbarous has turned into a weasel! A coal-black weasel!\n"
                         "She bares her sharp teeth at you, then darts away.\n"
                         "Richie drops down from the ceiling on a rope.\n"
                         "What is going on? Richie asks. I've never seen anything like it. Ever!\n"
                         "All around you, Mistress Barbarous's relatives are changing shape.\n"
                         "Changing into animals!\nYou and Richie stare at the torn costume that the Great Bostini was\n"
                         "wearing only a minute ago.\n"
                         "Now it's being worn by a small chimpanzee.\n"
                         "The twin sister trapeze artists transform into harmless little garden snakes.\n"
                         "And Morton the Knife Thrower changes, too. Into a white miniature\n"
                         "poodle!\n"
                         "What a joke! you laugh, pointing at the yapping dog.\n"
                         "Look at that! Richie exclaims.\n"
                         "You spin around and see Geyorg the Clown. He is slowly taking off his\n"
                         "clown suit.\n"
                         "You gasp. Underneath, he's not a human being at all!\n"
                         "He's a skeleton!\nI can't believe it! you gasp. You stare at the decrepit clown skeleton in\n"
                         "horror.\n"
                         "As the last traces of the magic wear off, Geyorg's bones disconnect from\n"
                         "each other and crumble to the ground.\n"
                         "What is going on here? Richie moans again.\n"
                         "In answer, Mr. Peepers the clown races up and hugs your legs.\n"
                         "You did it! You took Barbarous's powers away! he shouts. Now none\n"
                         "of them will ever be human again!\n"
                         "Yes! you and Richie cheer. You high-five each other.\n"
                         "Wow, Richie says. Now let's get out of here!\n"
                         "Not yet, you tell him. We've got to free the kids in the sideshow first.\n"
                         "Come on.\n"
                         "You race to the clown tent and find a hand mirror. Then you take it and\n"
                         "the pendant to the sideshow tent.\n"
                         "With Mr. Peepers telling you what to do, you stare at the reflection of the\n"
                         "pendant in the mirror.\n"
                         "ZZZAAPPP! A purple beam of energy bolts into your eyes and lights up\n"
                         "your face.\n"
                         "Using the powers of the pendant, you change all the sideshow kids back\n"
                         "into normal human beings.\nThat night, you're the ringmaster of the new All-Star Kid Circus! You,\n"
                         "Richie, and all the other sideshow kids are the stars!\n"
                         "Richie rides bareback on a horse. Danny Mendleson juggles five clubs of\n"
                         "fire. Merrill does an amazing trapeze act with the boy who used to be the Kid\n"
                         "with Rotten Flesh. Now he's a normal kid named Elliot Glass.\n"
                         "The other circus performers, the regular clowns, acrobats, and jugglers,\n"
                         "help out in the show. They're delighted that the reign of Mistress Barbarous\n"
                         "and her evil relatives is over.\n"
                         "But what about the pendant? Richie whispers to you near the end of the\n"
                         "show. If it falls into the wrong hands -\n"
                         "That will never happen! you interrupt. Just watch.\n"
                         "As a grand finale to the circus you clap your hands three times. Three\n"
                         "magnificent elephants parade into the ring.\n"
                         "They put their front legs in the air and stand up.\n"
                         "You race forward and position the pendant on the ground in front of the\n"
                         "biggest elephant. When she lowers her huge front feet, she crushes the jade to\n"
                         "smithereens.\n"
                         "Good night, everyone! you address the crowd over the microphone.\n"
                         "I'm proud to announce that this is a very happy\n\nEND\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 2){
            std::cout << "You have to stop Mistress Barbarous from getting another mirror!\n"
                         "You stare down at your hand.\n"
                         "Hey. I've got a whip! you realize. And the lions seem to be obeying your\n"
                         "commands. That gives you an idea....\n"
                         "CRACK! You snap the whip in the air.\n"
                         "Hup! Lions! you address the three killer animals. Attack!\n"
                         "You point at Barbarous, who is racing away on her horse.\n"
                         "Attack! Attack! you shout, cracking your whip and pointing at\n"
                         "Barbarous.\n"
                         "The lions roar. They heard you! Excellent!\n"
                         "The only thing is: Cats don't understand pointing.\n"
                         "When you command them to attack, they attack you!\n"
                         "You know, it's not polite to point.\n"
                         "And in this case, it's not safe, either!\n\nTHE END!\n\n\n";
            user_choice1 = 0;
            user_choice = 0;
        }
        else if (user_choice1 == 3){
            std::cout << user_inventory[0]<< ", " << user_inventory[1] << ", " << user_inventory[2] << "\n";
            std::cin >> user_choice1;
        }
        else if (user_choice1 > 0) {
            std::cout << "You Don't have this Item. Choose Again.\n";
            std::cin >> user_choice1;
        }
        else {
            std::cout << "Play Again!\n";
            user_choice = 0;
        }
    }

    return 0;
}
