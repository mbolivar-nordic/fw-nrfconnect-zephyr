/*
 * Copyright (c) 2018-2019 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

void ull_slave_setup(memq_link_t *link, struct node_rx_hdr *rx,
		     struct node_rx_ftr *ftr, struct lll_conn *lll);
void ull_slave_done(struct node_rx_event_done *done, uint32_t *ticks_drift_plus,
		    uint32_t *ticks_drift_minus);
void ull_slave_latency_cancel(struct ll_conn *conn, uint16_t handle);
void ull_slave_ticker_cb(uint32_t ticks_at_expire, uint32_t remainder,
			 uint16_t lazy, void *param);
