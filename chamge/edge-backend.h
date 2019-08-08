/**
 *  Copyright 2019 SK Telecom, Co., Ltd.
 *    Author: Jeongseok Kim <jeongseok.kim@sk.com>
 *
 */

#ifndef __CHAMGE_EDGE_BACKEND_H__
#define __CHAMGE_EDGE_BACKEND_H__

#if !defined(__CHAMGE_INSIDE__) && !defined(CHAMGE_COMPILATION)
#error "Only <chamge/chamge.h> can be included directly."
#endif

#include <glib-object.h>
#include <chamge/types.h>
#include <chamge/node-backend.h>

G_BEGIN_DECLS

#define CHAMGE_TYPE_EDGE_BACKEND       (chamge_edge_backend_get_type ())
G_DECLARE_DERIVABLE_TYPE (ChamgeEdgeBackend, chamge_edge_backend, CHAMGE, EDGE_BACKEND, ChamgeNodeBackend)

struct _ChamgeEdgeBackendClass
{
  ChamgeNodeBackend parent_class;

  gchar* (* request_target_uri)         (ChamgeEdgeBackend *self, GError **error);
};

ChamgeEdgeBackend     *chamge_edge_backend_new (void);

G_END_DECLS

#endif // __CHAMGE_EDGE_BACKEND_H__

