/*
 ============================================================================
 Name        : gst-mfx-enc.h
 Author      : Heiher <admin@heiher.info>
 Version     : 0.0.1
 Copyright   : Copyright (C) 2012 everyone.
 Description : 
 ============================================================================
 */

#ifndef __GST_MFX_ENC_H__
#define __GST_MFX_ENC_H__

#include <gst/gst.h>

G_BEGIN_DECLS

#define GST_TYPE_MFX_ENC (gst_mfx_enc_get_type ())
#define GST_MFX_ENC(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GST_TYPE_MFX_ENC, GstMfxEnc))
#define GST_IS_MFX_ENC(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GST_TYPE_MFX_ENC))
#define GST_MFX_ENC_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GST_TYPE_MFX_ENC, GstMfxEncClass))
#define GST_IS_MFX_ENC_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GST_TYPE_MFX_ENC))
#define GST_MFX_ENC_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GST_TYPE_MFX_ENC, GstMfxEncClass))

typedef struct _GstMfxEnc GstMfxEnc;
typedef struct _GstMfxEncClass GstMfxEncClass;

struct _GstMfxEnc
{
    GstElement parent_instance;
};

struct _GstMfxEncClass
{
    GstElementClass parent_class;
};

GType gst_mfx_enc_get_type (void);

G_END_DECLS

#endif /* __GST_MFX_ENC_H__ */

