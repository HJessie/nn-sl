START_DEFINE_SIGNATURES()

DEFINE_SIGNATURE(u8asym_f32,
                 TENSOR(Input, UINT8, ASYMM),
                 TENSOR(Output, FP32, NO_QUANT))

DEFINE_SIGNATURE(u8sym_f32,
                 TENSOR(Input, UINT8, SYMM),
                 TENSOR(Output, FP32, NO_QUANT))

DEFINE_SIGNATURE(i8asym_f32,
                 TENSOR(Input, INT8, ASYMM),
                 TENSOR(Output, FP32, NO_QUANT))

DEFINE_SIGNATURE(i8sym_f32,
                 TENSOR(Input, INT8, SYMM),
                 TENSOR(Output, FP32, NO_QUANT))

DEFINE_SIGNATURE(u8asym_f16,
                 TENSOR(Input, UINT8, ASYMM),
                 TENSOR(Output, FP16, NO_QUANT))

DEFINE_SIGNATURE(u8sym_f16,
                 TENSOR(Input, UINT8, SYMM),
                 TENSOR(Output, FP16, NO_QUANT))

DEFINE_SIGNATURE(i8sym_f16,
                 TENSOR(Input, INT8, SYMM),
                 TENSOR(Output, FP16, NO_QUANT))

DEFINE_SIGNATURE(i8asym_f16,
                 TENSOR(Input, INT8, ASYMM),
                 TENSOR(Output, FP16, NO_QUANT))

DEFINE_SIGNATURE(i8asymm_i8asymm,
                 TENSOR(Input, INT8, ASYMM),
                 TENSOR(Output, INT8, ASYMM))

DEFINE_SIGNATURE(i8symm_i8symm,
                 TENSOR(Input, INT8, SYMM),
                 TENSOR(Output, INT8, SYMM))

DEFINE_SIGNATURE(i8asymm_u8asymm,
                 TENSOR(Input, INT8, ASYMM),
                 TENSOR(Output, UINT8, ASYMM))

DEFINE_SIGNATURE(u8asymm_u8asymm,
                 TENSOR(Input, UINT8, ASYMM),
                 TENSOR(Output, UINT8, ASYMM))

DEFINE_SIGNATURE(u8asymm_i8asymm,
                 TENSOR(Input, UINT8, ASYMM),
                 TENSOR(Output, INT8, ASYMM))

DEFINE_SIGNATURE(u4asymm_u8asymm,
                 TENSOR(Input, UINT4, ASYMM),
                 TENSOR(Output, UINT8, ASYMM))

DEFINE_SIGNATURE(u4symm_u8asymm,
                 TENSOR(Input, UINT4, SYMM),
                 TENSOR(Output, UINT8, ASYMM))

DEFINE_SIGNATURE(u8asymm_u4asymm,
                 TENSOR(Input, UINT8, ASYMM),
                 TENSOR(Output, UINT4, ASYMM))

DEFINE_SIGNATURE(u8asymm_u4symm,
                 TENSOR(Input, UINT8, ASYMM),
                 TENSOR(Output, UINT4, SYMM))

DEFINE_SIGNATURE(i4asymm_u8asymm,
                 TENSOR(Input, INT4, ASYMM),
                 TENSOR(Output, UINT8, ASYMM))

DEFINE_SIGNATURE(i4symm_u8asymm,
                 TENSOR(Input, INT4, SYMM),
                 TENSOR(Output, UINT8, ASYMM))

DEFINE_SIGNATURE(u8asymm_i4asymm,
                 TENSOR(Input, UINT8, ASYMM),
                 TENSOR(Output, INT4, ASYMM))

DEFINE_SIGNATURE(u8asymm_i4symm,
                 TENSOR(Input, UINT8, ASYMM),
                 TENSOR(Output, INT4, SYMM))

ADD_SIGNATURE(u8asym_f32,
              u8sym_f32,
              i8asym_f32,
              i8sym_f32,
              u8asym_f16,
              u8sym_f16,
              i8sym_f16,
              i8asym_f16,
              i8asymm_i8asymm,
              i8symm_i8symm,
              i8asymm_u8asymm,
              u8asymm_u8asymm,
              u8asymm_i8asymm,
              u4asymm_u8asymm,
              u4symm_u8asymm,
              u8asymm_u4asymm,
              u8asymm_u4symm,
              i4asymm_u8asymm,
              i4symm_u8asymm,
              u8asymm_i4asymm,
              u8asymm_i4symm)