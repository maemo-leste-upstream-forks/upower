/*
 * Generated by gdbus-codegen 2.41.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __UP_WAKEUPS_GLUE_H__
#define __UP_WAKEUPS_GLUE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.UPower.Wakeups */

#define UP_TYPE_WAKEUPS_GLUE (up_wakeups_glue_get_type ())
#define UP_WAKEUPS_GLUE(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), UP_TYPE_WAKEUPS_GLUE, UpWakeupsGlue))
#define UP_IS_WAKEUPS_GLUE(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), UP_TYPE_WAKEUPS_GLUE))
#define UP_WAKEUPS_GLUE_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), UP_TYPE_WAKEUPS_GLUE, UpWakeupsGlueIface))

struct _UpWakeupsGlue;
typedef struct _UpWakeupsGlue UpWakeupsGlue;
typedef struct _UpWakeupsGlueIface UpWakeupsGlueIface;

struct _UpWakeupsGlueIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_get_data) (
    UpWakeupsGlue *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_total) (
    UpWakeupsGlue *object,
    GDBusMethodInvocation *invocation);

  gboolean  (*get_has_capability) (UpWakeupsGlue *object);

  void (*data_changed) (
    UpWakeupsGlue *object);

  void (*total_changed) (
    UpWakeupsGlue *object,
    guint arg_value);

};

GType up_wakeups_glue_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *up_wakeups_glue_interface_info (void);
guint up_wakeups_glue_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void up_wakeups_glue_complete_get_total (
    UpWakeupsGlue *object,
    GDBusMethodInvocation *invocation,
    guint value);

void up_wakeups_glue_complete_get_data (
    UpWakeupsGlue *object,
    GDBusMethodInvocation *invocation,
    GVariant *data);



/* D-Bus signal emissions functions: */
void up_wakeups_glue_emit_total_changed (
    UpWakeupsGlue *object,
    guint arg_value);

void up_wakeups_glue_emit_data_changed (
    UpWakeupsGlue *object);



/* D-Bus method calls: */
void up_wakeups_glue_call_get_total (
    UpWakeupsGlue *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean up_wakeups_glue_call_get_total_finish (
    UpWakeupsGlue *proxy,
    guint *out_value,
    GAsyncResult *res,
    GError **error);

gboolean up_wakeups_glue_call_get_total_sync (
    UpWakeupsGlue *proxy,
    guint *out_value,
    GCancellable *cancellable,
    GError **error);

void up_wakeups_glue_call_get_data (
    UpWakeupsGlue *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean up_wakeups_glue_call_get_data_finish (
    UpWakeupsGlue *proxy,
    GVariant **out_data,
    GAsyncResult *res,
    GError **error);

gboolean up_wakeups_glue_call_get_data_sync (
    UpWakeupsGlue *proxy,
    GVariant **out_data,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
gboolean up_wakeups_glue_get_has_capability (UpWakeupsGlue *object);
void up_wakeups_glue_set_has_capability (UpWakeupsGlue *object, gboolean value);


/* ---- */

#define UP_TYPE_WAKEUPS_GLUE_PROXY (up_wakeups_glue_proxy_get_type ())
#define UP_WAKEUPS_GLUE_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), UP_TYPE_WAKEUPS_GLUE_PROXY, UpWakeupsGlueProxy))
#define UP_WAKEUPS_GLUE_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), UP_TYPE_WAKEUPS_GLUE_PROXY, UpWakeupsGlueProxyClass))
#define UP_WAKEUPS_GLUE_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), UP_TYPE_WAKEUPS_GLUE_PROXY, UpWakeupsGlueProxyClass))
#define UP_IS_WAKEUPS_GLUE_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), UP_TYPE_WAKEUPS_GLUE_PROXY))
#define UP_IS_WAKEUPS_GLUE_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), UP_TYPE_WAKEUPS_GLUE_PROXY))

typedef struct _UpWakeupsGlueProxy UpWakeupsGlueProxy;
typedef struct _UpWakeupsGlueProxyClass UpWakeupsGlueProxyClass;
typedef struct _UpWakeupsGlueProxyPrivate UpWakeupsGlueProxyPrivate;

struct _UpWakeupsGlueProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  UpWakeupsGlueProxyPrivate *priv;
};

struct _UpWakeupsGlueProxyClass
{
  GDBusProxyClass parent_class;
};

GType up_wakeups_glue_proxy_get_type (void) G_GNUC_CONST;

void up_wakeups_glue_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
UpWakeupsGlue *up_wakeups_glue_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
UpWakeupsGlue *up_wakeups_glue_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void up_wakeups_glue_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
UpWakeupsGlue *up_wakeups_glue_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
UpWakeupsGlue *up_wakeups_glue_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define UP_TYPE_WAKEUPS_GLUE_SKELETON (up_wakeups_glue_skeleton_get_type ())
#define UP_WAKEUPS_GLUE_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), UP_TYPE_WAKEUPS_GLUE_SKELETON, UpWakeupsGlueSkeleton))
#define UP_WAKEUPS_GLUE_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), UP_TYPE_WAKEUPS_GLUE_SKELETON, UpWakeupsGlueSkeletonClass))
#define UP_WAKEUPS_GLUE_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), UP_TYPE_WAKEUPS_GLUE_SKELETON, UpWakeupsGlueSkeletonClass))
#define UP_IS_WAKEUPS_GLUE_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), UP_TYPE_WAKEUPS_GLUE_SKELETON))
#define UP_IS_WAKEUPS_GLUE_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), UP_TYPE_WAKEUPS_GLUE_SKELETON))

typedef struct _UpWakeupsGlueSkeleton UpWakeupsGlueSkeleton;
typedef struct _UpWakeupsGlueSkeletonClass UpWakeupsGlueSkeletonClass;
typedef struct _UpWakeupsGlueSkeletonPrivate UpWakeupsGlueSkeletonPrivate;

struct _UpWakeupsGlueSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  UpWakeupsGlueSkeletonPrivate *priv;
};

struct _UpWakeupsGlueSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType up_wakeups_glue_skeleton_get_type (void) G_GNUC_CONST;

UpWakeupsGlue *up_wakeups_glue_skeleton_new (void);


G_END_DECLS

#endif /* __UP_WAKEUPS_GLUE_H__ */
