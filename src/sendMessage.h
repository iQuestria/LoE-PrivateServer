#ifndef SENDMESSAGE_H
#define SENDMESSAGE_H

#include "message.h"

// Resend the udp message if we didn't get an ACK before this timeouts (3000 sounds reasonable)
#define UDP_RESEND_TIMEOUT 1000
// If we send multiple reliable messages before this timeouts, group them before sending. (100 seems reasonable)
#define UDP_GROUPING_TIMEOUT 100
// DO *NOT* USE the following options unless for debugging. Drops reliable UDP packets at random.
#define UDP_SIMULATE_PACKETLOSS false
#define UDP_PERCENT_DROPPED 50

#endif // SENDMESSAGE_H
