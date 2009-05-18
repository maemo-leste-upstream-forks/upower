/* Generated by dbus-binding-tool; do not edit! */


#ifndef __dbus_glib_marshal_dkp_device_MARSHAL_H__
#define __dbus_glib_marshal_dkp_device_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

#ifdef G_ENABLE_DEBUG
#define g_marshal_value_peek_boolean(v)  g_value_get_boolean (v)
#define g_marshal_value_peek_char(v)     g_value_get_char (v)
#define g_marshal_value_peek_uchar(v)    g_value_get_uchar (v)
#define g_marshal_value_peek_int(v)      g_value_get_int (v)
#define g_marshal_value_peek_uint(v)     g_value_get_uint (v)
#define g_marshal_value_peek_long(v)     g_value_get_long (v)
#define g_marshal_value_peek_ulong(v)    g_value_get_ulong (v)
#define g_marshal_value_peek_int64(v)    g_value_get_int64 (v)
#define g_marshal_value_peek_uint64(v)   g_value_get_uint64 (v)
#define g_marshal_value_peek_enum(v)     g_value_get_enum (v)
#define g_marshal_value_peek_flags(v)    g_value_get_flags (v)
#define g_marshal_value_peek_float(v)    g_value_get_float (v)
#define g_marshal_value_peek_double(v)   g_value_get_double (v)
#define g_marshal_value_peek_string(v)   (char*) g_value_get_string (v)
#define g_marshal_value_peek_param(v)    g_value_get_param (v)
#define g_marshal_value_peek_boxed(v)    g_value_get_boxed (v)
#define g_marshal_value_peek_pointer(v)  g_value_get_pointer (v)
#define g_marshal_value_peek_object(v)   g_value_get_object (v)
#else /* !G_ENABLE_DEBUG */
/* WARNING: This code accesses GValues directly, which is UNSUPPORTED API.
 *          Do not access GValues directly in your code. Instead, use the
 *          g_value_get_*() functions
 */
#define g_marshal_value_peek_boolean(v)  (v)->data[0].v_int
#define g_marshal_value_peek_char(v)     (v)->data[0].v_int
#define g_marshal_value_peek_uchar(v)    (v)->data[0].v_uint
#define g_marshal_value_peek_int(v)      (v)->data[0].v_int
#define g_marshal_value_peek_uint(v)     (v)->data[0].v_uint
#define g_marshal_value_peek_long(v)     (v)->data[0].v_long
#define g_marshal_value_peek_ulong(v)    (v)->data[0].v_ulong
#define g_marshal_value_peek_int64(v)    (v)->data[0].v_int64
#define g_marshal_value_peek_uint64(v)   (v)->data[0].v_uint64
#define g_marshal_value_peek_enum(v)     (v)->data[0].v_long
#define g_marshal_value_peek_flags(v)    (v)->data[0].v_ulong
#define g_marshal_value_peek_float(v)    (v)->data[0].v_float
#define g_marshal_value_peek_double(v)   (v)->data[0].v_double
#define g_marshal_value_peek_string(v)   (v)->data[0].v_pointer
#define g_marshal_value_peek_param(v)    (v)->data[0].v_pointer
#define g_marshal_value_peek_boxed(v)    (v)->data[0].v_pointer
#define g_marshal_value_peek_pointer(v)  (v)->data[0].v_pointer
#define g_marshal_value_peek_object(v)   (v)->data[0].v_pointer
#endif /* !G_ENABLE_DEBUG */


/* NONE:STRING,UINT,UINT,POINTER (/tmp/dbus-binding-tool-c-marshallers.S28IRU:1) */
extern void dbus_glib_marshal_dkp_device_VOID__STRING_UINT_UINT_POINTER (GClosure     *closure,
                                                                         GValue       *return_value,
                                                                         guint         n_param_values,
                                                                         const GValue *param_values,
                                                                         gpointer      invocation_hint,
                                                                         gpointer      marshal_data);
void
dbus_glib_marshal_dkp_device_VOID__STRING_UINT_UINT_POINTER (GClosure     *closure,
                                                             GValue       *return_value G_GNUC_UNUSED,
                                                             guint         n_param_values,
                                                             const GValue *param_values,
                                                             gpointer      invocation_hint G_GNUC_UNUSED,
                                                             gpointer      marshal_data)
{
  typedef void (*GMarshalFunc_VOID__STRING_UINT_UINT_POINTER) (gpointer     data1,
                                                               gpointer     arg_1,
                                                               guint        arg_2,
                                                               guint        arg_3,
                                                               gpointer     arg_4,
                                                               gpointer     data2);
  register GMarshalFunc_VOID__STRING_UINT_UINT_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;

  g_return_if_fail (n_param_values == 5);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_VOID__STRING_UINT_UINT_POINTER) (marshal_data ? marshal_data : cc->callback);

  callback (data1,
            g_marshal_value_peek_string (param_values + 1),
            g_marshal_value_peek_uint (param_values + 2),
            g_marshal_value_peek_uint (param_values + 3),
            g_marshal_value_peek_pointer (param_values + 4),
            data2);
}
#define dbus_glib_marshal_dkp_device_NONE__STRING_UINT_UINT_POINTER	dbus_glib_marshal_dkp_device_VOID__STRING_UINT_UINT_POINTER

/* NONE:STRING,POINTER (/tmp/dbus-binding-tool-c-marshallers.S28IRU:2) */
extern void dbus_glib_marshal_dkp_device_VOID__STRING_POINTER (GClosure     *closure,
                                                               GValue       *return_value,
                                                               guint         n_param_values,
                                                               const GValue *param_values,
                                                               gpointer      invocation_hint,
                                                               gpointer      marshal_data);
void
dbus_glib_marshal_dkp_device_VOID__STRING_POINTER (GClosure     *closure,
                                                   GValue       *return_value G_GNUC_UNUSED,
                                                   guint         n_param_values,
                                                   const GValue *param_values,
                                                   gpointer      invocation_hint G_GNUC_UNUSED,
                                                   gpointer      marshal_data)
{
  typedef void (*GMarshalFunc_VOID__STRING_POINTER) (gpointer     data1,
                                                     gpointer     arg_1,
                                                     gpointer     arg_2,
                                                     gpointer     data2);
  register GMarshalFunc_VOID__STRING_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;

  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_VOID__STRING_POINTER) (marshal_data ? marshal_data : cc->callback);

  callback (data1,
            g_marshal_value_peek_string (param_values + 1),
            g_marshal_value_peek_pointer (param_values + 2),
            data2);
}
#define dbus_glib_marshal_dkp_device_NONE__STRING_POINTER	dbus_glib_marshal_dkp_device_VOID__STRING_POINTER

/* NONE:POINTER (/tmp/dbus-binding-tool-c-marshallers.S28IRU:3) */
#define dbus_glib_marshal_dkp_device_VOID__POINTER	g_cclosure_marshal_VOID__POINTER
#define dbus_glib_marshal_dkp_device_NONE__POINTER	dbus_glib_marshal_dkp_device_VOID__POINTER

G_END_DECLS

#endif /* __dbus_glib_marshal_dkp_device_MARSHAL_H__ */

#include <dbus/dbus-glib.h>
static const DBusGMethodInfo dbus_glib_dkp_device_methods[] = {
  { (GCallback) dkp_device_refresh, dbus_glib_marshal_dkp_device_NONE__POINTER, 0 },
  { (GCallback) dkp_device_get_history, dbus_glib_marshal_dkp_device_NONE__STRING_UINT_UINT_POINTER, 50 },
  { (GCallback) dkp_device_get_statistics, dbus_glib_marshal_dkp_device_NONE__STRING_POINTER, 158 },
};

const DBusGObjectInfo dbus_glib_dkp_device_object_info = {
  0,
  dbus_glib_dkp_device_methods,
  3,
"org.freedesktop.DeviceKit.Power.Device\0Refresh\0A\0\0org.freedesktop.DeviceKit.Power.Device\0GetHistory\0A\0type\0I\0s\0timespan\0I\0u\0resolution\0I\0u\0data\0O\0F\0N\0a(udu)\0\0org.freedesktop.DeviceKit.Power.Device\0GetStatistics\0A\0type\0I\0s\0data\0O\0F\0N\0a(dd)\0\0\0",
"org.freedesktop.DeviceKit.Power.Device\0Changed\0\0",
"org.freedesktop.DeviceKit.Power.Device\0native-path\0org.freedesktop.DeviceKit.Power.Device\0vendor\0org.freedesktop.DeviceKit.Power.Device\0model\0org.freedesktop.DeviceKit.Power.Device\0serial\0org.freedesktop.DeviceKit.Power.Device\0update-time\0org.freedesktop.DeviceKit.Power.Device\0type\0org.freedesktop.DeviceKit.Power.Device\0power-supply\0org.freedesktop.DeviceKit.Power.Device\0has-history\0org.freedesktop.DeviceKit.Power.Device\0has-statistics\0org.freedesktop.DeviceKit.Power.Device\0online\0org.freedesktop.DeviceKit.Power.Device\0energy\0org.freedesktop.DeviceKit.Power.Device\0energy-empty\0org.freedesktop.DeviceKit.Power.Device\0energy-full\0org.freedesktop.DeviceKit.Power.Device\0energy-full-design\0org.freedesktop.DeviceKit.Power.Device\0energy-rate\0org.freedesktop.DeviceKit.Power.Device\0voltage\0org.freedesktop.DeviceKit.Power.Device\0time-to-empty\0org.freedesktop.DeviceKit.Power.Device\0time-to-full\0org.freedesktop.DeviceKit.Power.Device\0percentage\0org.freedesktop.DeviceKit.Power.Device\0is-present\0org.freedesktop.DeviceKit.Power.Device\0state\0org.freedesktop.DeviceKit.Power.Device\0is-rechargeable\0org.freedesktop.DeviceKit.Power.Device\0capacity\0org.freedesktop.DeviceKit.Power.Device\0technology\0\0"
};

