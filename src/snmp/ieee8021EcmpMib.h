/*****************************************************************************

 @(#) src/snmp/ieee8021ecmpmib.h

 -----------------------------------------------------------------------------

 Copyright (c) 2008-2015  Monavacon Limited <http://www.monavacon.com/>
 Copyright (c) 2001-2008  OpenSS7 Corporation <http://www.openss7.com/>
 Copyright (c) 1997-2001  Brian F. G. Bidulock <bidulock@openss7.org>

 All Rights Reserved.

 This program is free software; you can redistribute it and/or modify it under
 the terms of the GNU Affero General Public License as published by the Free
 Software Foundation; version 3 of the License.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for more
 details.

 You should have received a copy of the GNU Affero General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>, or
 write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA
 02139, USA.

 -----------------------------------------------------------------------------

 U.S. GOVERNMENT RESTRICTED RIGHTS.  If you are licensing this Software on
 behalf of the U.S. Government ("Government"), the following provisions apply
 to you.  If the Software is supplied by the Department of Defense ("DoD"), it
 is classified as "Commercial Computer Software" under paragraph 252.227-7014
 of the DoD Supplement to the Federal Acquisition Regulations ("DFARS") (or any
 successor regulations) and the Government is acquiring only the license rights
 granted herein (the license rights customarily provided to non-Government
 users).  If the Software is supplied to any unit or agency of the Government
 other than DoD, it is classified as "Restricted Computer Software" and the
 Government's rights in the Software are defined in paragraph 52.227-19 of the
 Federal Acquisition Regulations ("FAR") (or any successor regulations) or, in
 the cases of NASA, in paragraph 18.52.227-86 of the NASA Supplement to the FAR
 (or any successor regulations).

 -----------------------------------------------------------------------------

 Commercial licensing and support of this software is available from OpenSS7
 Corporation at a fee.  See http://www.openss7.com/

 *****************************************************************************/

#ifndef __LOCAL_IEEE8021ECMPMIB_H__
#define __LOCAL_IEEE8021ECMPMIB_H__

/*
 * This file was generated by mib2c and is intended for use as a mib module
 * for the ucd-snmp snmpd agent.
 */

extern const char sa_program[];
extern int sa_fclose;			/* default close files between requests */
extern int sa_changed;			/* indication to reread MIB configuration */
extern int sa_stats_refresh;		/* indications that statistics, the mib or its tables need to be refreshed */
extern int sa_request;			/* request number for per-request actions */

/* our storage structure(s) */
struct ieee8021EcmpMib_data {
	struct ieee8021EcmpMib_data *ieee8021EcmpMib_old;
	uint ieee8021EcmpMib_rsvs;
	uint ieee8021EcmpMib_tsts;
	uint ieee8021EcmpMib_sets;
	uint ieee8021EcmpMib_request;
};
struct ieee8021QBridgeEcmpFdbTable_data {
	struct ieee8021QBridgeEcmpFdbTable_data *ieee8021QBridgeEcmpFdbTable_old;
	uint ieee8021QBridgeEcmpFdbTable_rsvs;
	uint ieee8021QBridgeEcmpFdbTable_tsts;
	uint ieee8021QBridgeEcmpFdbTable_sets;
	uint ieee8021QBridgeEcmpFdbTable_request;
	uint ieee8021QBridgeEcmpFdbTable_refs;
	uint ieee8021QBridgeEcmpFdbTable_id;
	ulong ieee8021QBridgeFdbComponentId;	/* NoAccess */
	ulong ieee8021QBridgeFdbId;	/* NoAccess */
	uint8_t *ieee8021QBridgeTpFdbAddress;	/* NoAccess */
	size_t ieee8021QBridgeTpFdbAddressLen;
	uint8_t *ieee8021QBridgeEcmpFdbPortList;	/* ReadOnly */
	size_t ieee8021QBridgeEcmpFdbPortListLen;
};
struct ieee8021EcmpFlowFilterCtlTable_data {
	struct ieee8021EcmpFlowFilterCtlTable_data *ieee8021EcmpFlowFilterCtlTable_old;
	uint ieee8021EcmpFlowFilterCtlTable_rsvs;
	uint ieee8021EcmpFlowFilterCtlTable_tsts;
	uint ieee8021EcmpFlowFilterCtlTable_sets;
	uint ieee8021EcmpFlowFilterCtlTable_request;
	uint ieee8021EcmpFlowFilterCtlTable_refs;
	uint ieee8021EcmpFlowFilterCtlTable_id;
	ulong ieee8021BridgeBasePortComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	long ieee8021EcmpFlowFilterCtlVid;	/* NoAccess */
	long ieee8021EcmpFlowFilterCtlEnabled;	/* ReadOnly */
	long ieee8021EcmpFlowFilterCtlHashGen;	/* ReadOnly */
	long ieee8021EcmpFlowFilterCtlTtl;	/* ReadWrite */
};
struct ieee8021EcmpEctStaticTable_data {
	struct ieee8021EcmpEctStaticTable_data *ieee8021EcmpEctStaticTable_old;
	uint ieee8021EcmpEctStaticTable_rsvs;
	uint ieee8021EcmpEctStaticTable_tsts;
	uint ieee8021EcmpEctStaticTable_sets;
	uint ieee8021EcmpEctStaticTable_request;
	uint ieee8021EcmpEctStaticTable_refs;
	uint ieee8021EcmpEctStaticTable_id;
	ulong ieee8021SpbTopIx;		/* NoAccess */
	long ieee8021EcmpEctStaticEntryTieBreakMask;	/* NoAccess */
	uint8_t *ieee8021EcmpEctStaticEntryBridgePriority;	/* Create */
	size_t ieee8021EcmpEctStaticEntryBridgePriorityLen;
	long ieee8021EcmpEctStaticEntryRowStatus;	/* Create */
};
struct ieee8021EcmpTopSrvTable_data {
	struct ieee8021EcmpTopSrvTable_data *ieee8021EcmpTopSrvTable_old;
	uint ieee8021EcmpTopSrvTable_rsvs;
	uint ieee8021EcmpTopSrvTable_tsts;
	uint ieee8021EcmpTopSrvTable_sets;
	uint ieee8021EcmpTopSrvTable_request;
	uint ieee8021EcmpTopSrvTable_refs;
	uint ieee8021EcmpTopSrvTable_id;
	ulong ieee8021SpbmTopSrvEntryTopIx;	/* NoAccess */
	uint8_t *ieee8021SpbmTopSrvEntrySysId;	/* NoAccess */
	size_t ieee8021SpbmTopSrvEntrySysIdLen;
	ulong ieee8021SpbmTopSrvEntryIsid;	/* NoAccess */
	long ieee8021SpbmTopSrvEntryBaseVid;	/* NoAccess */
	uint8_t *ieee8021SpbmTopSrvEntryMac;	/* NoAccess */
	size_t ieee8021SpbmTopSrvEntryMacLen;
	long ieee8021EcmpTopSrvEntryTsBit;	/* ReadOnly */
	long ieee8021EcmpTopSrvEntryTieBreakMask;	/* ReadOnly */
};
struct ieee8021QBridgePortVlanTtlStatisticsTable_data {
	struct ieee8021QBridgePortVlanTtlStatisticsTable_data *ieee8021QBridgePortVlanTtlStatisticsTable_old;
	uint ieee8021QBridgePortVlanTtlStatisticsTable_rsvs;
	uint ieee8021QBridgePortVlanTtlStatisticsTable_tsts;
	uint ieee8021QBridgePortVlanTtlStatisticsTable_sets;
	uint ieee8021QBridgePortVlanTtlStatisticsTable_request;
	uint ieee8021QBridgePortVlanTtlStatisticsTable_refs;
	uint ieee8021QBridgePortVlanTtlStatisticsTable_id;
	ulong ieee8021BridgeBasePortComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	ulong ieee8021QBridgeVlanIndex;	/* NoAccess */
	struct counter64 ieee8021QBridgeTpVlanPortTtlDiscards;	/* ReadOnly */
};

/* storage declarations */
extern struct ieee8021EcmpMib_data *ieee8021EcmpMibStorage;
extern struct header_complex_index *ieee8021QBridgeEcmpFdbTableStorage;
extern struct header_complex_index *ieee8021EcmpFlowFilterCtlTableStorage;
extern struct header_complex_index *ieee8021EcmpEctStaticTableStorage;
extern struct header_complex_index *ieee8021EcmpTopSrvTableStorage;
extern struct header_complex_index *ieee8021QBridgePortVlanTtlStatisticsTableStorage;

/* enum definitions from the covered mib sections */

#define IEEE8021ECMPFLOWFILTERCTLENABLED_TRUE    1
#define IEEE8021ECMPFLOWFILTERCTLENABLED_FALSE   2

#define IEEE8021ECMPFLOWFILTERCTLHASHGEN_TRUE    1
#define IEEE8021ECMPFLOWFILTERCTLHASHGEN_FALSE   2

#define IEEE8021ECMPTOPSRVENTRYTSBIT_TRUE        1
#define IEEE8021ECMPTOPSRVENTRYTSBIT_FALSE       2

/* notifications */

/* scalars accessible only for notify */

/* object id definitions */
extern oid ieee8021QBridgeEcmpFdbGroup_oid[11];
extern oid ieee8021EcmpFlowFilterCtlGroup_oid[11];
extern oid ieee8021EcmpEctStaticGroup_oid[11];
extern oid ieee8021EcmpTopSrvGroup_oid[11];
extern oid ieee8021QBridgePortVlanTtlStatisticsGroup_oid[11];
extern oid ieee8021EcmpCompliance_oid[11];
extern oid ieee8021EcmpFlowFilteringCompliance_oid[11];

/* function prototypes */
/* trap function prototypes */

/* variable function prototypes */
void init_ieee8021EcmpMib(void);
void deinit_ieee8021EcmpMib(void);
int term_ieee8021EcmpMib(int majorID, int minorID, void *serverarg, void *clientarg);
FindVarMethod var_ieee8021EcmpMib;
struct ieee8021EcmpMib_data *ieee8021EcmpMib_create(void);
struct ieee8021EcmpMib_data *ieee8021EcmpMib_duplicate(struct ieee8021EcmpMib_data *);
int ieee8021EcmpMib_destroy(struct ieee8021EcmpMib_data **);
int ieee8021EcmpMib_add(struct ieee8021EcmpMib_data *);
void parse_ieee8021EcmpMib(const char *, char *);
SNMPCallback store_ieee8021EcmpMib;
void refresh_ieee8021EcmpMib(int);
FindVarMethod var_ieee8021QBridgeEcmpFdbTable;
struct ieee8021QBridgeEcmpFdbTable_data *ieee8021QBridgeEcmpFdbTable_create(void);
struct ieee8021QBridgeEcmpFdbTable_data *ieee8021QBridgeEcmpFdbTable_duplicate(struct ieee8021QBridgeEcmpFdbTable_data *);
int ieee8021QBridgeEcmpFdbTable_destroy(struct ieee8021QBridgeEcmpFdbTable_data **);
int ieee8021QBridgeEcmpFdbTable_add(struct ieee8021QBridgeEcmpFdbTable_data *);
int ieee8021QBridgeEcmpFdbTable_del(struct ieee8021QBridgeEcmpFdbTable_data *);
void parse_ieee8021QBridgeEcmpFdbTable(const char *, char *);
SNMPCallback store_ieee8021QBridgeEcmpFdbTable;
void refresh_ieee8021QBridgeEcmpFdbTable(int);
FindVarMethod var_ieee8021EcmpFlowFilterCtlTable;
struct ieee8021EcmpFlowFilterCtlTable_data *ieee8021EcmpFlowFilterCtlTable_create(void);
struct ieee8021EcmpFlowFilterCtlTable_data *ieee8021EcmpFlowFilterCtlTable_duplicate(struct ieee8021EcmpFlowFilterCtlTable_data *);
int ieee8021EcmpFlowFilterCtlTable_destroy(struct ieee8021EcmpFlowFilterCtlTable_data **);
int ieee8021EcmpFlowFilterCtlTable_add(struct ieee8021EcmpFlowFilterCtlTable_data *);
int ieee8021EcmpFlowFilterCtlTable_del(struct ieee8021EcmpFlowFilterCtlTable_data *);
void parse_ieee8021EcmpFlowFilterCtlTable(const char *, char *);
SNMPCallback store_ieee8021EcmpFlowFilterCtlTable;
void refresh_ieee8021EcmpFlowFilterCtlTable(int);
FindVarMethod var_ieee8021EcmpEctStaticTable;
struct ieee8021EcmpEctStaticTable_data *ieee8021EcmpEctStaticTable_create(void);
struct ieee8021EcmpEctStaticTable_data *ieee8021EcmpEctStaticTable_duplicate(struct ieee8021EcmpEctStaticTable_data *);
int ieee8021EcmpEctStaticTable_destroy(struct ieee8021EcmpEctStaticTable_data **);
int ieee8021EcmpEctStaticTable_add(struct ieee8021EcmpEctStaticTable_data *);
int ieee8021EcmpEctStaticTable_del(struct ieee8021EcmpEctStaticTable_data *);
void parse_ieee8021EcmpEctStaticTable(const char *, char *);
SNMPCallback store_ieee8021EcmpEctStaticTable;
void refresh_ieee8021EcmpEctStaticTable(int);
FindVarMethod var_ieee8021EcmpTopSrvTable;
struct ieee8021EcmpTopSrvTable_data *ieee8021EcmpTopSrvTable_create(void);
struct ieee8021EcmpTopSrvTable_data *ieee8021EcmpTopSrvTable_duplicate(struct ieee8021EcmpTopSrvTable_data *);
int ieee8021EcmpTopSrvTable_destroy(struct ieee8021EcmpTopSrvTable_data **);
int ieee8021EcmpTopSrvTable_add(struct ieee8021EcmpTopSrvTable_data *);
int ieee8021EcmpTopSrvTable_del(struct ieee8021EcmpTopSrvTable_data *);
void parse_ieee8021EcmpTopSrvTable(const char *, char *);
SNMPCallback store_ieee8021EcmpTopSrvTable;
void refresh_ieee8021EcmpTopSrvTable(int);
FindVarMethod var_ieee8021QBridgePortVlanTtlStatisticsTable;
struct ieee8021QBridgePortVlanTtlStatisticsTable_data *ieee8021QBridgePortVlanTtlStatisticsTable_create(void);
struct ieee8021QBridgePortVlanTtlStatisticsTable_data *ieee8021QBridgePortVlanTtlStatisticsTable_duplicate(struct ieee8021QBridgePortVlanTtlStatisticsTable_data *);
int ieee8021QBridgePortVlanTtlStatisticsTable_destroy(struct ieee8021QBridgePortVlanTtlStatisticsTable_data **);
int ieee8021QBridgePortVlanTtlStatisticsTable_add(struct ieee8021QBridgePortVlanTtlStatisticsTable_data *);
int ieee8021QBridgePortVlanTtlStatisticsTable_del(struct ieee8021QBridgePortVlanTtlStatisticsTable_data *);
void parse_ieee8021QBridgePortVlanTtlStatisticsTable(const char *, char *);
SNMPCallback store_ieee8021QBridgePortVlanTtlStatisticsTable;
void refresh_ieee8021QBridgePortVlanTtlStatisticsTable(int);

WriteMethod write_ieee8021EcmpFlowFilterCtlTtl;
WriteMethod write_ieee8021EcmpEctStaticEntryBridgePriority;
WriteMethod write_ieee8021EcmpEctStaticEntryRowStatus;
#endif				/* __LOCAL_IEEE8021ECMPMIB_H__ */
