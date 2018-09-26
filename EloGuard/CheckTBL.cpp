/* Coded by WithCreative 08.07.2018 */
#define _CRT_SECURE_NO_WARNINGS
#include "HashBase.h"
#include "encrypt.h"
#include <stdio.h>
#include <cstdint>

#define bzero(b,len) (memset((b), '\0', (len)), (void) 0)

struct tblFile
{
	string name;
	string elo;
	string checksum;
};

struct sFile
{
	string name;
	string checksum;
};

/*tblFile tblFiles[254] = {
	{ "ACHIEVE_com.tbl", "3ef6887159c757995a6fd1b03739ade46b3c7d05" },
	{ "ACHIEVE_main.tbl", "f3be616c2110437af3df441c70f2a929c61c8259" },
	{ "ACHIEVE_mon.tbl", "2383ca62c47dea5ce2200dcd8adfe09056e50003" },
	{ "ACHIEVE_normal.tbl", "62b20de9d8cad12a28fa4e02cfb8c62d741dac93" },
	{ "ACHIEVE_title.tbl", "01fc6498f94c0b634735b7ac5a94d4e26ed71a6e" },
	{ "ACHIEVE_war.tbl", "b90cc9fca5ffe97da933fb8b79bbaee046879830" },
	{ "bossmodrca01.n3camera", "0daf93c398bc7f7714ae2c77df85d9116c117734" },
	{ "BossPhase.tbl", "0036be1e01c205f7a80dc2dd03db7c28b08fe5bf" },
	{ "bossphase_us.tbl", "0036be1e01c205f7a80dc2dd03db7c28b08fe5bf" },
	{ "bossshout_us.tbl", "59992b040617c11cd4912548983802b63b682dc4" },
	{ "caption_us.tbl", "c0ef13a6f90f7efa26f845120d180f6ff74da30d" },
	{ "ca_bung_1th.n3camera", "b8a2e695f762d4c678bcf8510a51a54e93883cf3" },
	{ "Chat_Seedmsg_us.tbl", "730873a9547b8fabda7082cd96f043bf48e7b8c3" },
	{ "chrtypepartitem.tbl", "b7f77f9f6be5e4686ca23b2c7c301ae88da56467" },
	{ "Cloak.tbl", "fc6af60f63da97aaa6172e80e9674bd8cd926c9b" },
	{ "Cloak_pvp.tbl", "e801fc7f81dbb8d3cf626d793a05c78006c58835" },
	{ "cml.tbl", "45c033a9f7fc15793dc4f686e9e54265f6655928" },
	{ "Connect_image.tbl", "57be9411a91949c24833373931641517a5e4d1e7" },
	{ "defaultcamera.n3camera", "6c786a39779a8dd35d4209501e30168f4d4f6d1f" },
	{ "defaultlight.n3light", "591348ab037343d6d213a75a1d6f5b59bfb94b98" },
	{ "del.tbl", "76e7a4fae740473a9a9daa440ac89485834d3772" },
	{ "DisguiseRing.tbl", "1e07fdd9f0271885f80efcedfa8e246c27261e04" },
	{ "DisguiseRing_us.tbl", "4c4307175d830e7a81992883798c5ee3dd2c046c" },
	{ "FAQ_us.tbl", "757e6211bd2b25fc5dca2ca8d88e741c4f6dc4e2" },
	{ "File_us.tbl", "b1b4d84672eca82bfb68a62725fd5ffdb888e331" },
	{ "fortune_us.tbl", "52bba498d378e25ce3e8ae5c1e4e62d4c24e4953" },
	{ "fx.tbl", "3d78861a47c0045f8003f1bc42b2fdb908debcd6" },
	{ "guidefx.tbl", "8a48095670a0b552de5cb8d6e8e1fe94a58a2a4e" },
	{ "happykor_a01.n3camera", "5a2e83782a9b4422c2b50921adbd32e0b623bb03" },
	{ "happykor_a02.n3camera", "254541b28fcf9dc3b43f1de634dbcad7e6102520" },
	{ "happykor_a033.n3camera", "b3cd1a144e7d81392e6e10ec4167c094e5d141a9" },
	{ "Help_Large_Class_us.tbl", "453a32c5ed1c555d24e59f420d97e532f1bdef4d" },
	{ "Help_Medium_Class_us.tbl", "e39a9f016ae46861eac5e81f019d47cc611dcc6c" },
	{ "Help_Small_Class_us.tbl", "3898050c50d4d44b2601c77315156de44b9bbcf0" },
	{ "INDUN_SCHEDULE.tbl", "842b716a90c5a7f6565ea20a0e8954a42c9972dc" },
	{ "INDUN_SCHEDULE_us.tbl", "564797ac6ce7bd3631cf6e9f8e33c8f0369e8a8c" },
	{ "itemcrash_us.tbl", "30e24b4acfc384bad0385a5ceffa155413cc7630" },
	{ "itemsell_table.tbl", "b2aa46881d26f632ca10685576516297ecf568c3" },
	{ "Item_Exchange.tbl", "75bc0bf8818f85ce8a23c273ce613792a044595c" },
	{ "Item_Exchange_exp.tbl", "8f04462508f2940aa62f718da4501734a7e7b0ab" },
	{ "Item_Exchange_us.tbl", "b3bc1b471f63046b57621d0eb7849aac738a8a25" },
	{ "Item_Ext_0.tbl", "621dea2f09e98becb50a90a5417bd8fb6b199759" },
	{ "Item_Ext_0_tk.tbl", "202a1800713dc353401eee473cb96d49510df3b8" },
	{ "Item_Ext_0_us.tbl", "21b445694da1e2f534e20803db0402a0f95ea968" },
	{ "Item_Ext_10.tbl", "3bf93a087309849fdc5e86feb13c9c86e5ca8f4f" },
	{ "Item_Ext_10_tk.tbl", "ee7c92788724fb83994642ae7ba90da7fbcff2f7" },
	{ "Item_Ext_10_us.tbl", "c5f7519a1ba499f2c66701d056f3da393e5c90a3" },
	{ "Item_Ext_11.tbl", "3e92a407997f4a29fe258772dce7921d11346942" },
	{ "Item_Ext_11_tk.tbl", "a6fae522f2881b9cf93e3e5688fe66624020bcc3" },
	{ "Item_Ext_11_us.tbl", "5c8e2c599baadc4febea53dac9ea3fcaa82fed06" },
	{ "Item_Ext_12_tk.tbl", "3b99c0a8eefe67bb1c04904e12e4d932e5da6ff7" },
	{ "Item_Ext_12_us.tbl", "c3e6e816876f201f0b338744f18b19528a6ac8e4" },
	{ "Item_Ext_13.tbl", "6434d6a31c1c47b66bc22b91761b98c311f9155b" },
	{ "Item_Ext_13_tk.tbl", "88b7b30df47936967ee10cc6bfcc56c72c871c72" },
	{ "Item_Ext_13_us.tbl", "4ae568dd354e73d23a99a502b56034b4a6ead872" },
	{ "Item_Ext_14.tbl", "d3635a0603197bdb05ede64b7225e5b3fd1f83e7" },
	{ "Item_Ext_14_tk.tbl", "9b92c2a2d82a651b153112eaa50181520b401be2" },
	{ "Item_Ext_14_us.tbl", "f1b49fea540bce5652ca4be5745e1f5f59ae927c" },
	{ "Item_Ext_15.tbl", "bc40101fdc051c53f9c2c97f8d2cd215be7bb402" },
	{ "Item_Ext_15_tk.tbl", "e27312d4d0431071054fe49ae43587c3846d158d" },
	{ "Item_Ext_15_us.tbl", "6a6d99f79f161247b9c8fcd8655196f026faf29d" },
	{ "Item_Ext_16.tbl", "06d56fae0391c841851ecb386216ee97b3635593" },
	{ "Item_Ext_16_tk.tbl", "edcbb8b76c7ff468eb2dd419c735ddd8676466a9" },
	{ "Item_Ext_16_us.tbl", "890e2de07f983bf0be2e0e59fa51c61f95f012c6" },
	{ "Item_Ext_17.tbl", "713f4fa9d71fb44d802085a7d84dfe4ec3731dd7" },
	{ "Item_Ext_17_tk.tbl", "cff38953193a1ecf89f78eecfe229a75cf360e48" },
	{ "Item_Ext_17_us.tbl", "069a78430523ed2f4f55052508163e03941f3800" },
	{ "Item_Ext_18.tbl", "3ba552ba9cf3615d97c9ef5e215b47886f57d839" },
	{ "Item_Ext_18_tk.tbl", "95a82c8829f3949e6819f0e7b7459ec9583f922a" },
	{ "Item_Ext_18_us.tbl", "9d58f5c859411d2a01172ca823489a8d0c3e211d" },
	{ "Item_Ext_19.tbl", "49982fbeaacfafdb368d60e1ab135492fc14078e" },
	{ "Item_Ext_19_tk.tbl", "7421fac96b02b996c3cb8d1dcda9929d9e450bdc" },
	{ "Item_Ext_19_us.tbl", "c193b9beb5e1d3b1699047f64cf6a0039387f69a" },
	{ "Item_Ext_1_tk.tbl", "88079510e455d49636ec77eb2eba1f68665ee4a9" },
	{ "Item_Ext_1_us.tbl", "e0589f83cfe48d0474f730964b8e80db2fdb85a8" },
	{ "Item_Ext_20.tbl", "7015d1402bd661663a8ab336524c4f64e01d4b7c" },
	{ "Item_Ext_20_tk.tbl", "2c90e26c33c74277a7cf1d01cc12a28177d6e756" },
	{ "Item_Ext_20_us.tbl", "95de427c20da61f697452233f3a614fc4ae89562" },
	{ "Item_Ext_21_tk.tbl", "db3c28ecbe53b27f80ed77f300e538379a97bdcd" },
	{ "Item_Ext_21_us.tbl", "e5d05d37530fcaccf778c5b804755bf75a49f75f" },
	{ "Item_Ext_22.tbl", "37bde6faeb0ee37c2cb6da9f858e0d10417e7980" },
	{ "Item_Ext_22_tk.tbl", "fbb046df8644783e76f7384034522843ac0b67a7" },
	{ "Item_Ext_22_us.tbl", "b010c526a5d7a22996dfccf5b473f96583a79585" },
	{ "Item_Ext_23.tbl", "e60c3a26b7feb86dbdeabc071836bdb79fdacf54" },
	{ "Item_Ext_23_tk.tbl", "98d12c38f117cf80f90f5c877f66b4a319bda45e" },
	{ "Item_Ext_23_us.tbl", "84da4d5fad4feae53d9fe5d8b2a8b07828a9c79b" },
	{ "Item_Ext_24_tk.tbl", "097e991c5aaea0eac5492f3d9ef1feb3e4175b20" },
	{ "Item_Ext_24_us.tbl", "9405017147ff8c6c3de6c63397253c9a53f9ef7f" },
	{ "Item_Ext_25_tk.tbl", "eebd7bc0a206433309ceae31d5a2d74d2767d757" },
	{ "Item_Ext_25_us.tbl", "c7b48206e0a511ab26291005d4aaf9abb0cc03aa" },
	{ "Item_Ext_26_tk.tbl", "856afe7fff851feedd5362480005c70b548659f1" },
	{ "Item_Ext_26_us.tbl", "6ca71ce9adaa2d50cb7ffd350fbbbe83c24a8077" },
	{ "Item_Ext_27_tk.tbl", "68d97a97ca73732393706a0ba63d032230586110" },
	{ "Item_Ext_27_us.tbl", "3f39c7010dcf3d6e7d8684b844b948fc05495af1" },
	{ "Item_Ext_28_tk.tbl", "4915be239b27c563f59b3090a15b698e350897e9" },
	{ "Item_Ext_28_us.tbl", "3d4be6e65ddfcbc3f1065c06f8e42726e875cebd" },
	{ "Item_Ext_29_tk.tbl", "8d963c1f2ceb1a8d383a28f5e462385f69999c0e" },
	{ "Item_Ext_29_us.tbl", "51a0332b32ace6c020810f43b7a9f89382236845" },
	{ "Item_Ext_2_tk.tbl", "673a67c426c7760d32c499471161b45d759cfd27" },
	{ "Item_Ext_2_us.tbl", "3a69696b907cc75d252dfa4f4d1d686d25c724a3" },
	{ "Item_Ext_30_tk.tbl", "8544a020cb8a924722c4ddc128a34d090b597c91" },
	{ "Item_Ext_30_us.tbl", "bdff2b4f2321bebc12304affa78e75cb06fcf386" },
	{ "Item_Ext_31_tk.tbl", "b1cd12ef4a5dbe2f0e38ad8208b1db66596a20a4" },
	{ "Item_Ext_31_us.tbl", "f2caccddf97a11c26ba08d8d950804bdb6244e5d" },
	{ "Item_Ext_32_tk.tbl", "3c3c744ee5c10c44a2010106e7918fd09a974d4a" },
	{ "Item_Ext_32_us.tbl", "0ec4fa2c53cc0c839d72509579370ffb77e1496e" },
	{ "Item_Ext_33_tk.tbl", "9c5a73baf13a371435d769e8efeda699a820ce46" },
	{ "Item_Ext_33_us.tbl", "1aa2388d6db1cae80e902ac7728ee0b2912ded43" },
	{ "Item_Ext_34_tk.tbl", "08aa1e23e9ee4cde9000e667c55f3d5103e74c5e" },
	{ "Item_Ext_34_us.tbl", "31e65343a0db3fe6bec052c6a0d135229cb5db6c" },
	{ "Item_Ext_35_tk.tbl", "d8939bf73944c86326ef0c8d8f6ce10959f364fc" },
	{ "Item_Ext_35_us.tbl", "6725f17be6fd802493abe9f22bbb973ddb3deaf3" },
	{ "Item_Ext_36_tk.tbl", "cd564d4741fdb29aa5050c43b9553c7c18c3f342" },
	{ "Item_Ext_36_us.tbl", "67081d07c0d397391f73b99259c48bc98cc177ec" },
	{ "Item_Ext_37_tk.tbl", "4eca033bb5992bac5e9533cd9bdf6e00c12cac37" },
	{ "Item_Ext_37_us.tbl", "a7d09e9e89f132193321141b3ee12a2e6a99a0d8" },
	{ "Item_Ext_38_tk.tbl", "8fd8438fef7648e0967b8b33e791254727fc42a1" },
	{ "Item_Ext_38_us.tbl", "fd5a1b86e4bc21feadf01e0ccb6b6ef1706c561a" },
	{ "Item_Ext_39_tk.tbl", "014f34dd5dc5f273afafcb5e7c76308b0c6d861f" },
	{ "Item_Ext_39_us.tbl", "9aec87d7c0e1234cbc771ad7e69ce93851fa76aa" },
	{ "Item_Ext_3_tk.tbl", "31b531910a74b9f449d1ad4d55bc52abd8ef8b0f" },
	{ "Item_Ext_3_us.tbl", "f488246a008b4974e61aae8ac84f8b7c25e24db9" },
	{ "Item_Ext_40_tk.tbl", "c046ec904d1031699289c4396c51cb0399d153cd" },
	{ "Item_Ext_40_us.tbl", "a195e17dc14c91fe72dfb90849fc3a48cede3292" },
	{ "Item_Ext_41_tk.tbl", "153577809b3976572973b7fe4a42906e178a0537" },
	{ "Item_Ext_41_us.tbl", "a601e3ec4e2702e56434e07251b85b9a2a119cce" },
	{ "Item_Ext_42_tk.tbl", "9d224f9d4854e69954b8226b9e85b7e2b0b7df11" },
	{ "Item_Ext_42_us.tbl", "896a2c9486d2f6ba15e74f97464216d0143a3dbd" },
	{ "Item_Ext_43_tk.tbl", "83c71ade293f0fe418c97614be5247ab04db9c7a" },
	{ "item_ext_43_us.tbl", "2fbc171ca8292e1aefad76c284c2e794e6a649ca" },
	{ "Item_Ext_44_tk.tbl", "e365e2d5125d9b9575e799d736a11c4cd259da04" },
	{ "item_ext_44_us.tbl", "13194a004cadf24ecf8e98720000b5efc9a8bdaa" },
	{ "Item_Ext_4_tk.tbl", "94beadd75c82907c76551a0f376710313b1bc03f" },
	{ "Item_Ext_4_us.tbl", "45fa7d1b0c35ea9f230bb1f0fd447d741f157dea" },
	{ "Item_Ext_5_tk.tbl", "9352fca4fd85e5d090171a62e3b937c0b2ea97a5" },
	{ "Item_Ext_5_us.tbl", "8259ddb065d8c1a0b9ce8ed9b45fc8aa14a4a0cf" },
	{ "Item_Ext_6_tk.tbl", "8a61b2ebf845a7a2dd33af17b629be10eb624dac" },
	{ "Item_Ext_6_us.tbl", "68eb088fb7287b5e84013f10f9277817eb392edf" },
	{ "Item_Ext_7_tk.tbl", "d67d5fbe9252da3ace81d75601c5d3918c976057" },
	{ "Item_Ext_7_us.tbl", "2cc33a0b0f407a8e695469f59b32f272d3049567" },
	{ "Item_Ext_8.tbl", "8107bcb8fb06099d0df6379486a973e2082d377d" },
	{ "Item_Ext_8_tk.tbl", "5c064f8c1d5f084c8c232a2257adcb199252e6b5" },
	{ "Item_Ext_8_trk.tbl", "007dbc9293901e467decba9c5fe1a4da822b183d" },
	{ "Item_Ext_8_us.tbl", "d818156031c0bea2170141125f040368232be6de" },
	{ "Item_Ext_9.tbl", "a5472ea731cf61a8adbc4f81c50b071b51c1910f" },
	{ "Item_Ext_9_tk.tbl", "3d6b5e90ed6483f074704a8bdfe3acd25dbe4f5d" },
	{ "Item_Ext_9_us.tbl", "e9e824843809b0323468c9e15e70371154c89193" },
	{ "item_op.tbl", "088d4ac2d9dbca7700ad68a15de55afab3047a73" },
	{ "Item_Org_tk.tbl", "037675410bd9a6695cb1135726af4945bfa96c97" },
	{ "Item_Org_us.tbl", "89d328e5453c9924659f8795984e7cc947586c6c" },
	{ "item_user_buy_armor_tk.tbl", "f2ccd56a36898e7c3caaf21aea59e874397d22b7" },
	{ "item_user_buy_armor_us.tbl", "f2ccd56a36898e7c3caaf21aea59e874397d22b7" },
	{ "item_user_buy_nomal_tk.tbl", "9ccb58c0c81f58a082e10c563408c575c6eb8f32" },
	{ "item_user_buy_nomal_us.tbl", "8d4d9945d516ec6b259bcaa9f0d447a08f4d7ba7" },
	{ "item_user_buy_noma_us.tbl", "d733ad432e3ee6286a4c50c8b213e4f76b8ab0ec" },
	{ "item_user_buy_wepon_tk.tbl", "a320df8b5554c1ff5764979c5877a488ff336c79" },
	{ "item_user_buy_wepon_us.tbl", "a320df8b5554c1ff5764979c5877a488ff336c79" },
	{ "kurian_wing_persp1.n3camera", "867929d59c44afc0f7db716fffbd4938792bd4be" },
	{ "K_NPC_TK.tbl", "97040bd0e16428f13648859a50ee48de65ee8473" },
	{ "K_NPC_US.tbl", "5c8eba1a4808e2ec2fe57f24be6baa049543e368" },
	{ "meme_1st_1p_a01.n3camera", "3a37fd66cd8de8b37d0dc6cadde1e3c988670e65" },
	{ "meme_1st_1p_a33.n3camera", "1def622f432e79625c7e0d51770c1b4096bc927f" },
	{ "meme_1st_1p_a45.n3camera", "c105e57b1e373d6d508dcb094cdbe20dd6d2c46e" },
	{ "meme_1st_1p_a46.n3camera", "fe9ab2443e0905e19313fc42fb70b5933219bbc6" },
	{ "meme_1st_1p_a47.n3camera", "2660f76acc8971994e9789b8d7ba16a4a268d852" },
	{ "MixLargeTbl_tk.tbl", "cbaaf699535464754287aba0ca3a044288e4edba" },
	{ "MixLargeTbl_us.tbl", "1d4a2bbf6536710b928b49d9731e35b4bad81c3a" },
	{ "mixtable_tk.tbl", "632586e6fe838ef0809004422d47ce95eb3a6e8a" },
	{ "mixtable_us.tbl", "443dda660f8b4ee58a34efdf2da00b084a61ed93" },
	{ "MOB.tbl", "57dd2781fc4d1516461b26cc6a49f47c9010241c" },
	{ "mob_tk.tbl", "7ce53b891a0fcf94922db59f51e782f209d04b61" },
	{ "mob_us.tbl", "b2c024465c35e44e2f3f8563d824c01a8b11629b" },
	{ "modify_us.tbl", "7acfa1a156e6b9249a3cab91d976f9daa5ec4530" },
	{ "MON.tbl", "3c21bdb4cc89c0dd72b14c0cf05217d13538145b" },
	{ "montalk_us.tbl", "f97d9b2d45443c6c9da40cd4cb4b9d259515e120" },
	{ "move_sound.tbl", "938a9c7ae2088cb367e37aa1b7c98d926d609bc1" },
	{ "movie_scene.tbl", "2744369d9e02487dfdbf638ad6368c819686b491" },
	{ "ms_mehmed_a01.n3camera", "6fb729cd20155af7f8ed5b589492b817c02e3d6e" },
	{ "m_pulreton_3th_end1.n3camera", "745138dab7805f2248e429e1d1d0c14f37c6c942" },
	{ "m_pulreton_3th_end2.n3camera", "79f72182956f9ade94b8bcc4db775fdff00022e9" },
	{ "NewChrValue.tbl", "141570c61c9641f26348b4c6224f50be462cbb56" },
	{ "nomal_camera_a01.n3camera", "869324f8c5e87659482251a0264bfc2d79e12216" },
	{ "NPC.tbl", "60f0888d8ae61595430bf7caa275d1cd788d720f" },
	{ "NpcMenu_us.tbl", "1a6910c7f7d4b4633fb1ab6a843596210f6a663e" },
	{ "NpcMon_Restriction.tbl", "6956814ecab4344c151976ff4b288e77744ae2fc" },
	{ "NpcMopMap_Info.tbl", "35e50bd571d17abea726f6dc63e24125bc039a26" },
	{ "NpcMopMap_info_tk.tbl", "d0b665d9be645c673325d39256fc5ddacfcc36fd" },
	{ "NpcMopMap_info_us.tbl", "7bd3816759088eb8b65ef69817f3c501c08e8b0f" },
	{ "NPC_Looks.tbl", "ae3a7a154fef7f3508688d01bf220e7b03ebffe5" },
	{ "NPC_Shout_us.tbl", "7bbdb397dbcc1ce97bc7dbe1c665a96e86c29354" },
	{ "NPC_tk.tbl", "dc4eaa7097bafd6eff6c54a8657462f0292feda5" },
	{ "NPC_us.tbl", "2d3898d45bd105100e1a4055c54e4525547de943" },
	{ "persp.n3camera", "610e657682a00c9b3a66c3d83da97f2ddf76592d" },
	{ "persp1.n3camera", "e5c9c7d4fca6ba2e5ce3246a0863e468d9aebdc3" },
	{ "Pet_exchange.tbl", "dc898d8517a3981ccc0371db3996d45b25b4face" },
	{ "piece_Exchange_us.tbl", "729e07910b65612dfde5682914d9319b2e6bafb7" },
	{ "Player_experience.tbl", "7abf495ddad4d82e184295ff760bde5b6847c3d2" },
	{ "potu_persp1.n3camera", "dc82ffdc78dbdda90c5076e4bc096407aa576058" },
	{ "pury_2st_a01.n3camera", "24ad66053eb1258da5cd5a8e045301e104d9429e" },
	{ "Quest_Guide_tk.tbl", "78336bb25e7301718eea1fd7ad17a57129bac106" },
	{ "Quest_guide_us.tbl", "87c2f34eb3ce54b9f0cd1fd65f5fe163ad8ca803" },
	{ "Quest_Helper_us.tbl", "e27822258a72db3cd39bd7c082c917054c9b140a" },
	{ "Quest_image.tbl", "636ce98921915affa1eac32058bc53aa81ba56e5" },
	{ "Quest_image_us.tbl", "b80ac6cf611c86925ce1f1e58797a22066a3307d" },
	{ "Quest_Item_Desc.tbl", "aa8761ebd33e21a17372b9d5f4ed4623a1e5bdca" },
	{ "Quest_Menu.tbl", "8d283c0f0edc97d2520a5e322233088f6df4f492" },
	{ "Quest_Menu_TK.tbl", "f4319f47cf63668ad1d910d3bd8f7899538c7eb2" },
	{ "quest_menu_tr.tbl", "dbdfe63d57426b28c1deb7294c041c6f51155a20" },
	{ "Quest_Menu_us.tbl", "b2aba73176e3f523ef9a515104df8b0859a88cdb" },
	{ "quest_noparty.tbl", "ae4ac4630bffc231be1f4d6c89eed837496caa15" },
	{ "quest_npc_desc_tk.tbl", "d11112a2f4abf121c0b1d2e3b726b9e859fd5dbb" },
	{ "Quest_Talk.tbl", "af16dbf8c911a670e9b011a2d1f0198f7c06b075" },
	{ "Quest_Talk_nc.tbl", "ee9bee9ce11fa528ddea2e24189449701daf7c75" },
	{ "quest_talk_tr.tbl", "5eae66c54e1c27bb6caed95126a173552fc5daf0" },
	{ "RamdomTip_us.tbl", "078a11da98307fd770176145ccb91ebd1de66e11" },
	{ "Review_Cospre_us.tbl", "39dcbdbcebe657cdef25b44148aa41794edd393f" },
	{ "Review_Transform_us.tbl", "53eb9947449640fa7cf2741eee32367091a9903a" },
	{ "scheduler_us.tbl", "65f475c2adc8a0340b75b87fc7b409ff5fd26ee2" },
	{ "Seed_Msg_us.tbl", "769b1ea3d96cdef194f9f1d639c7655b7d4141c7" },
	{ "Set_item.tbl", "a5ba0094337512bc7c9337cb79a5d09007119220" },
	{ "set_Item_tk.tbl", "6e18b85b71dd06ed28f3a5f5400d0eb58aa454f0" },
	{ "set_item_us.tbl", "7a105086137778dbfafda630cb4b56e7834bd974" },
	{ "SkillMagicTable_tk.tbl", "fcc56ca557ea88433748df2b62374a67a36a6393" },
	{ "SkillMagicTable_us.tbl", "6073aae1fa647890d0e072417e37eeb6ca908cc0" },
	{ "Skill_Magic_1.tbl", "3f98e2257eaab4c1fe382db59e6d61af2114087e" },
	{ "Skill_Magic_2.tbl", "b5e27c9ee2966cb87167e05ff523efb43c84e3ef" },
	{ "Skill_Magic_3.tbl", "3c87748cdd5279284ef2b6f5302e4f37a356b11b" },
	{ "Skill_Magic_4.tbl", "519c70a273036f0e3f48fc7a0c37d7c15b37756b" },
	{ "Skill_Magic_5.tbl", "c7e76aac3eb17ceda4df6001bb2760857c1e746e" },
	{ "Skill_Magic_6.tbl", "f464f2b869a87576193e1a7f1c71fdc91e8199be" },
	{ "Skill_Magic_7.tbl", "540678ca3d876efc207ba401777c1b99fbd6d5b8" },
	{ "Skill_Magic_8.tbl", "32a0f15d0b42e5db598508b9e4ab81d039fa7ccc" },
	{ "skill_magic_9.tbl", "f00ecaab1778e2b9946a4ee64dc39361ef2f0898" },
	{ "skill_magic_Cast_MsgOut.tbl", "49c261adb47350b11e273e74b013a543a663b086" },
	{ "skill_magic_Cast_MsgOut_tk.tbl", "719a2b95cfc8700e6614c048f2cf0d6a768dee1a" },
	{ "skill_magic_cast_msgout_us.tbl", "3f823d314b6a809ea1be774b0db4c4f93dbef15d" },
	{ "skill_magic_Effect_MsgOut.tbl", "086917d30cd254ab37cdec1a559600b9b282a99c" },
	{ "skill_magic_effect_msgout_us.tbl", "7eb72286d0379a08411fb1530bab18be89e3bb37" },
	{ "Skill_Magic_Main_tk.tbl", "fb2204e069acb384e5fb40e64ee6fc43b9310e95" },
	{ "Skill_Magic_Main_us.tbl", "8dcce5656d7cf1734f8bf067eca301b8c00f4600" },
	{ "Slander_us.tbl", "d29d1cd1ba8b7352611abba81eb85f824fbf6e02" },
	{ "sound.tbl", "00894890995c4ca98367a46cd27695dc010994e5" },
	{ "st_s_pulreton_3th_2010a02.n3camera", "3c8db81694f941e71d10ed13d3ca1e0dad063f8a" },
	{ "SystemMsg_us.tbl", "9e31704a730bd480d81b8f0b5fe2e179ded7d517" },
	{ "Texts_us.tbl", "0018bdd2ca23fb4877bf5f94d5f39fa9ac1b1ad9" },
	{ "Tiptable_us.tbl", "825ac50743333e6abd116d4cc1b6f7f5714a7bbc" },
	{ "UIs_us.tbl", "9b499964e26e6b4f14adb5ed3584d70835d9349d" },
	{ "UI_Help_us.tbl", "78867b00d7533b957d918044a946bb4955e4d319" },
	{ "UPC_DefaultLooks.tbl", "adedba0dd3119bb55d75fef9f290eeeebf901b9e" },
	{ "upc_el_kurian_persp1.n3camera", "d4382b13d086d53239345666074b9692af847e37" },
	{ "warpinfo.tbl", "e48fe464e122423d76ee2ea2d1d91eea564b5c91" },
	{ "web_address_us.tbl", "8d9aba1bd645b2a5ad48809c2b62b9eb34f4c0df" },
	{ "Wing.tbl", "f97e156ce2f71f6d47c2c46a982b324a844a6da5" },
	{ "Zones.tbl", "2752d7c8967b95027031b9181126925fa008e8ed" }
};
*/
string Skill_Magic_1;
string Skill_Magic_2;
string Skill_Magic_3;
string Skill_Magic_4;
string Skill_Magic_5;
string Skill_Magic_6;
string Skill_Magic_7;
string Skill_Magic_8;
string Skill_Magic_9;
string Skill_Magic_Main_tk;
string Skill_Magic_Main_us;
string SkillMagicTable_tk;
string SkillMagicTable_us;
string Item_Org_tk;
string Item_Org_us;

tblFile tblFiles[15] = {
		{"Skill_Magic_1.tbl", "Skill_Magic_1.elo", "0"},
		{"Skill_Magic_2.tbl", "Skill_Magic_2.elo", "0"},
		{"Skill_Magic_3.tbl", "Skill_Magic_3.elo", "0"},
		{"Skill_Magic_4.tbl", "Skill_Magic_4.elo", "0"},
		{"Skill_Magic_5.tbl", "Skill_Magic_5.elo", "0"},
		{"Skill_Magic_6.tbl", "Skill_Magic_6.elo", "0"},
		{"Skill_Magic_7.tbl", "Skill_Magic_7.elo", "0"},
		{"Skill_Magic_8.tbl", "Skill_Magic_8.elo", "0"},
		{"Skill_Magic_9.tbl", "Skill_Magic_9.elo", "0"},
		{"Skill_Magic_Main_tk.tbl", "Skill_Magic_Main_tk.elo", "0"},
		{"Skill_Magic_Main_us.tbl", "Skill_Magic_Main_us.elo", "0"},
		{"SkillMagicTable_tk.tbl", "SkillMagicTable_tk.elo", "0"},
		{"SkillMagicTable_us.tbl", "SkillMagicTable_us.elo", "0"},
		{"Item_Org_tk.tbl", "Item_Org_tk.elo", "0"},
		{"Item_Org_us.tbl", "Item_Org_us.elo", "0"}
};

sFile pFiles[8] = {
	{ "dsetup.dll", "43b484c90c452d72f343b3abe5862dfe7325f060" },
	{ "OpenAL32.dll", "8316319341a0f9054e19e4a7b21df3dc49386fee" },
	{ "libvorbisfile.dll", "e827f8fae6ce43f320e980480a2be327d235cc4a" },
	{ "wrap_oal.dll", "c093ce5a4f7dc40f7f604945bd1facfb2c805c4b" },
	{ "D3DX9_43.dll", "f5944df4142983714a6d9955e6e393d9876c1e11" },
	{ "XIGNCODE\\x3.xem", "aa0bf297574b8ae1f2917c660ebdf8b07dfc69af" },
	{ "soundbackends\\directsound_win32.dll", "65ab8eea4df1ebaf56da7762f67f6fab0cfa3103" },
	{ "soundbackends\\windowsaudiosession_win32.dll", "0a855652bd0303fe379c178136137d30a552bc5c" }
};
string key = "ztyp3kbng5301";


string get_file_content(string file) {
	std::ifstream ifs(file.c_str());
	std::string content( (std::istreambuf_iterator<char>(ifs) ),
                       (std::istreambuf_iterator<char>()    ) );
	return content;
}

void Initialize() {
	Skill_Magic_1 = decrypt(get_file_content("Data/Skill_Magic_1.elo"), key);
	Skill_Magic_2 = decrypt(get_file_content("Data/Skill_Magic_2.elo"), key);
	Skill_Magic_3 = decrypt(get_file_content("Data/Skill_Magic_3.elo"), key);
	Skill_Magic_4 = decrypt(get_file_content("Data/Skill_Magic_4.elo"), key);
	Skill_Magic_5 = decrypt(get_file_content("Data/Skill_Magic_5.elo"), key);
	Skill_Magic_6 = decrypt(get_file_content("Data/Skill_Magic_6.elo"), key);
	Skill_Magic_7 = decrypt(get_file_content("Data/Skill_Magic_7.elo"), key);
	Skill_Magic_8 = decrypt(get_file_content("Data/Skill_Magic_8.elo"), key);
	Skill_Magic_9 = decrypt(get_file_content("Data/Skill_Magic_9.elo"), key);
	Skill_Magic_Main_tk = decrypt(get_file_content("Data/Skill_Magic_Main_tk.elo"), key);
	Skill_Magic_Main_us = decrypt(get_file_content("Data/Skill_Magic_Main_us.elo"), key);
	SkillMagicTable_tk = decrypt(get_file_content("Data/SkillMagicTable_tk.elo"), key);
	SkillMagicTable_us = decrypt(get_file_content("Data/SkillMagicTable_us.elo"), key);
	Item_Org_tk = decrypt(get_file_content("Data/Item_Org_tk.elo"), key);
	Item_Org_us = decrypt(get_file_content("Data/Item_Org_us.elo"), key);

	tblFiles[0].checksum = Skill_Magic_1;
	tblFiles[1].checksum = Skill_Magic_2;
	tblFiles[2].checksum = Skill_Magic_3;
	tblFiles[3].checksum = Skill_Magic_4;
	tblFiles[4].checksum = Skill_Magic_5;
	tblFiles[5].checksum = Skill_Magic_6;
	tblFiles[6].checksum = Skill_Magic_7;
	tblFiles[7].checksum = Skill_Magic_8;
	tblFiles[8].checksum = Skill_Magic_9;
	tblFiles[9].checksum = Skill_Magic_Main_tk;
	tblFiles[10].checksum = Skill_Magic_Main_us;
	tblFiles[11].checksum = SkillMagicTable_tk;
	tblFiles[12].checksum = SkillMagicTable_us;
	tblFiles[13].checksum = Item_Org_tk;
	tblFiles[14].checksum = Item_Org_us;
}

void DumpTBL() {
	fstream textfile;
	while (true) {
		bool d = false;
		textfile.open("EloGuard\\log.txt", ios::out | ios::app);
		for each(tblFile tbl in tblFiles) {
			string hash = hashfile("Data\\" + tbl.name);
			if (hash != tbl.checksum) {
				d = true;
				textfile << "----------------------------------------------------------------- " << endl;
				textfile << tbl.name << " has been modified." << endl;
			}
		}
		if(d) {
			ShellExecuteA(NULL, "open", "EloGuard\\EloGuard GUI.exe", "-openlog log.txt", NULL, SW_SHOWNORMAL);
			exit(0);
		}
		Sleep(10 * 1000);
	}
}

void DumpFiles() {
	fstream textfile;
	while (true) {
		bool d = false;
		textfile.open("EloGuard\\log.txt", ios::out | ios::app);
		for each(sFile pFile in pFiles) {
			string hashm = hashfile(pFile.name);
			if (hashm != pFile.checksum) {
				d = true;
				textfile << "----------------------------------------------------------------- " << endl;
				textfile << pFile.name << " has been modified." << endl;
			}
		}
		if(d) {
			ShellExecuteA(NULL, "open", "EloGuard\\EloGuard GUI.exe", "-openlog log.txt", NULL, SW_SHOWNORMAL);
			exit(0);
		}
		Sleep(15 * 1000);
	}
}