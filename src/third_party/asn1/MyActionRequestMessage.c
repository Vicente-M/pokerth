/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "MyActionRequestMessage.h"

static int
memb_myRelativeBet_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 10000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_MyActionRequestMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MyActionRequestMessage, gameId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MyActionRequestMessage, gameState),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_NetGameState,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameState"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MyActionRequestMessage, myAction),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_NetPlayerAction,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"myAction"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MyActionRequestMessage, myRelativeBet),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_myRelativeBet_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"myRelativeBet"
		},
};
static ber_tlv_tag_t asn_DEF_MyActionRequestMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (25 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MyActionRequestMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 1 }, /* gameId at 459 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 3, -1, 0 }, /* myRelativeBet at 462 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 1, 0, 1 }, /* gameState at 460 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 2, -1, 0 } /* myAction at 461 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MyActionRequestMessage_specs_1 = {
	sizeof(struct MyActionRequestMessage),
	offsetof(struct MyActionRequestMessage, _asn_ctx),
	asn_MAP_MyActionRequestMessage_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MyActionRequestMessage = {
	"MyActionRequestMessage",
	"MyActionRequestMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_MyActionRequestMessage_tags_1,
	sizeof(asn_DEF_MyActionRequestMessage_tags_1)
		/sizeof(asn_DEF_MyActionRequestMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_MyActionRequestMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_MyActionRequestMessage_tags_1)
		/sizeof(asn_DEF_MyActionRequestMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_MyActionRequestMessage_1,
	4,	/* Elements count */
	&asn_SPC_MyActionRequestMessage_specs_1	/* Additional specs */
};

