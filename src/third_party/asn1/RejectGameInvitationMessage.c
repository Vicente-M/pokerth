/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "RejectGameInvitationMessage.h"

static asn_TYPE_member_t asn_MBR_RejectGameInvitationMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RejectGameInvitationMessage, gameId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RejectGameInvitationMessage, myRejectReason),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_RejectGameInvReason,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"myRejectReason"
		},
};
static ber_tlv_tag_t asn_DEF_RejectGameInvitationMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (18 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RejectGameInvitationMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* gameId at 409 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 1, 0, 0 } /* myRejectReason at 411 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RejectGameInvitationMessage_specs_1 = {
	sizeof(struct RejectGameInvitationMessage),
	offsetof(struct RejectGameInvitationMessage, _asn_ctx),
	asn_MAP_RejectGameInvitationMessage_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RejectGameInvitationMessage = {
	"RejectGameInvitationMessage",
	"RejectGameInvitationMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RejectGameInvitationMessage_tags_1,
	sizeof(asn_DEF_RejectGameInvitationMessage_tags_1)
		/sizeof(asn_DEF_RejectGameInvitationMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_RejectGameInvitationMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_RejectGameInvitationMessage_tags_1)
		/sizeof(asn_DEF_RejectGameInvitationMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_RejectGameInvitationMessage_1,
	2,	/* Elements count */
	&asn_SPC_RejectGameInvitationMessage_specs_1	/* Additional specs */
};

