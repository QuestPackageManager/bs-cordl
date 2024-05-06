#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Burst/Intrinsics/zzzz__v128_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(v256)
namespace Unity::Burst::Intrinsics {
struct v128;
}
// Forward declare root types
namespace Unity::Burst::Intrinsics {
struct v256;
}
// Write type traits
MARK_VAL_T(::Unity::Burst::Intrinsics::v256);
// Type: Unity.Burst.Intrinsics::v256
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: ::Unity.Burst.Intrinsics::v256
struct CORDL_TYPE v256 {
public:
  // Declarations
  /// @brief Field Byte0, offset 0x0, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte0, put = __cordl_internal_set_Byte0)) uint8_t Byte0;

  /// @brief Field Byte1, offset 0x1, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte1, put = __cordl_internal_set_Byte1)) uint8_t Byte1;

  /// @brief Field Byte10, offset 0xa, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte10, put = __cordl_internal_set_Byte10)) uint8_t Byte10;

  /// @brief Field Byte11, offset 0xb, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte11, put = __cordl_internal_set_Byte11)) uint8_t Byte11;

  /// @brief Field Byte12, offset 0xc, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte12, put = __cordl_internal_set_Byte12)) uint8_t Byte12;

  /// @brief Field Byte13, offset 0xd, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte13, put = __cordl_internal_set_Byte13)) uint8_t Byte13;

  /// @brief Field Byte14, offset 0xe, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte14, put = __cordl_internal_set_Byte14)) uint8_t Byte14;

  /// @brief Field Byte15, offset 0xf, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte15, put = __cordl_internal_set_Byte15)) uint8_t Byte15;

  /// @brief Field Byte16, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte16, put = __cordl_internal_set_Byte16)) uint8_t Byte16;

  /// @brief Field Byte17, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte17, put = __cordl_internal_set_Byte17)) uint8_t Byte17;

  /// @brief Field Byte18, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte18, put = __cordl_internal_set_Byte18)) uint8_t Byte18;

  /// @brief Field Byte19, offset 0x13, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte19, put = __cordl_internal_set_Byte19)) uint8_t Byte19;

  /// @brief Field Byte2, offset 0x2, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte2, put = __cordl_internal_set_Byte2)) uint8_t Byte2;

  /// @brief Field Byte20, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte20, put = __cordl_internal_set_Byte20)) uint8_t Byte20;

  /// @brief Field Byte21, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte21, put = __cordl_internal_set_Byte21)) uint8_t Byte21;

  /// @brief Field Byte22, offset 0x16, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte22, put = __cordl_internal_set_Byte22)) uint8_t Byte22;

  /// @brief Field Byte23, offset 0x17, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte23, put = __cordl_internal_set_Byte23)) uint8_t Byte23;

  /// @brief Field Byte24, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte24, put = __cordl_internal_set_Byte24)) uint8_t Byte24;

  /// @brief Field Byte25, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte25, put = __cordl_internal_set_Byte25)) uint8_t Byte25;

  /// @brief Field Byte26, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte26, put = __cordl_internal_set_Byte26)) uint8_t Byte26;

  /// @brief Field Byte27, offset 0x1b, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte27, put = __cordl_internal_set_Byte27)) uint8_t Byte27;

  /// @brief Field Byte28, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte28, put = __cordl_internal_set_Byte28)) uint8_t Byte28;

  /// @brief Field Byte29, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte29, put = __cordl_internal_set_Byte29)) uint8_t Byte29;

  /// @brief Field Byte3, offset 0x3, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte3, put = __cordl_internal_set_Byte3)) uint8_t Byte3;

  /// @brief Field Byte30, offset 0x1e, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte30, put = __cordl_internal_set_Byte30)) uint8_t Byte30;

  /// @brief Field Byte31, offset 0x1f, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte31, put = __cordl_internal_set_Byte31)) uint8_t Byte31;

  /// @brief Field Byte4, offset 0x4, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte4, put = __cordl_internal_set_Byte4)) uint8_t Byte4;

  /// @brief Field Byte5, offset 0x5, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte5, put = __cordl_internal_set_Byte5)) uint8_t Byte5;

  /// @brief Field Byte6, offset 0x6, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte6, put = __cordl_internal_set_Byte6)) uint8_t Byte6;

  /// @brief Field Byte7, offset 0x7, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte7, put = __cordl_internal_set_Byte7)) uint8_t Byte7;

  /// @brief Field Byte8, offset 0x8, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte8, put = __cordl_internal_set_Byte8)) uint8_t Byte8;

  /// @brief Field Byte9, offset 0x9, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte9, put = __cordl_internal_set_Byte9)) uint8_t Byte9;

  /// @brief Field Double0, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_Double0, put = __cordl_internal_set_Double0)) double_t Double0;

  /// @brief Field Double1, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_Double1, put = __cordl_internal_set_Double1)) double_t Double1;

  /// @brief Field Double2, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Double2, put = __cordl_internal_set_Double2)) double_t Double2;

  /// @brief Field Double3, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Double3, put = __cordl_internal_set_Double3)) double_t Double3;

  /// @brief Field Float0, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_Float0, put = __cordl_internal_set_Float0)) float_t Float0;

  /// @brief Field Float1, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_Float1, put = __cordl_internal_set_Float1)) float_t Float1;

  /// @brief Field Float2, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_Float2, put = __cordl_internal_set_Float2)) float_t Float2;

  /// @brief Field Float3, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_Float3, put = __cordl_internal_set_Float3)) float_t Float3;

  /// @brief Field Float4, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Float4, put = __cordl_internal_set_Float4)) float_t Float4;

  /// @brief Field Float5, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_Float5, put = __cordl_internal_set_Float5)) float_t Float5;

  /// @brief Field Float6, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Float6, put = __cordl_internal_set_Float6)) float_t Float6;

  /// @brief Field Float7, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_Float7, put = __cordl_internal_set_Float7)) float_t Float7;

  /// @brief Field Hi128, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_Hi128, put = __cordl_internal_set_Hi128))::Unity::Burst::Intrinsics::v128 Hi128;

  /// @brief Field Lo128, offset 0x0, size 0x10
  __declspec(property(get = __cordl_internal_get_Lo128, put = __cordl_internal_set_Lo128))::Unity::Burst::Intrinsics::v128 Lo128;

  /// @brief Field SByte0, offset 0x0, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte0, put = __cordl_internal_set_SByte0)) int8_t SByte0;

  /// @brief Field SByte1, offset 0x1, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte1, put = __cordl_internal_set_SByte1)) int8_t SByte1;

  /// @brief Field SByte10, offset 0xa, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte10, put = __cordl_internal_set_SByte10)) int8_t SByte10;

  /// @brief Field SByte11, offset 0xb, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte11, put = __cordl_internal_set_SByte11)) int8_t SByte11;

  /// @brief Field SByte12, offset 0xc, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte12, put = __cordl_internal_set_SByte12)) int8_t SByte12;

  /// @brief Field SByte13, offset 0xd, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte13, put = __cordl_internal_set_SByte13)) int8_t SByte13;

  /// @brief Field SByte14, offset 0xe, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte14, put = __cordl_internal_set_SByte14)) int8_t SByte14;

  /// @brief Field SByte15, offset 0xf, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte15, put = __cordl_internal_set_SByte15)) int8_t SByte15;

  /// @brief Field SByte16, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte16, put = __cordl_internal_set_SByte16)) int8_t SByte16;

  /// @brief Field SByte17, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte17, put = __cordl_internal_set_SByte17)) int8_t SByte17;

  /// @brief Field SByte18, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte18, put = __cordl_internal_set_SByte18)) int8_t SByte18;

  /// @brief Field SByte19, offset 0x13, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte19, put = __cordl_internal_set_SByte19)) int8_t SByte19;

  /// @brief Field SByte2, offset 0x2, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte2, put = __cordl_internal_set_SByte2)) int8_t SByte2;

  /// @brief Field SByte20, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte20, put = __cordl_internal_set_SByte20)) int8_t SByte20;

  /// @brief Field SByte21, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte21, put = __cordl_internal_set_SByte21)) int8_t SByte21;

  /// @brief Field SByte22, offset 0x16, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte22, put = __cordl_internal_set_SByte22)) int8_t SByte22;

  /// @brief Field SByte23, offset 0x17, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte23, put = __cordl_internal_set_SByte23)) int8_t SByte23;

  /// @brief Field SByte24, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte24, put = __cordl_internal_set_SByte24)) int8_t SByte24;

  /// @brief Field SByte25, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte25, put = __cordl_internal_set_SByte25)) int8_t SByte25;

  /// @brief Field SByte26, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte26, put = __cordl_internal_set_SByte26)) int8_t SByte26;

  /// @brief Field SByte27, offset 0x1b, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte27, put = __cordl_internal_set_SByte27)) int8_t SByte27;

  /// @brief Field SByte28, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte28, put = __cordl_internal_set_SByte28)) int8_t SByte28;

  /// @brief Field SByte29, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte29, put = __cordl_internal_set_SByte29)) int8_t SByte29;

  /// @brief Field SByte3, offset 0x3, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte3, put = __cordl_internal_set_SByte3)) int8_t SByte3;

  /// @brief Field SByte30, offset 0x1e, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte30, put = __cordl_internal_set_SByte30)) int8_t SByte30;

  /// @brief Field SByte31, offset 0x1f, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte31, put = __cordl_internal_set_SByte31)) int8_t SByte31;

  /// @brief Field SByte4, offset 0x4, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte4, put = __cordl_internal_set_SByte4)) int8_t SByte4;

  /// @brief Field SByte5, offset 0x5, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte5, put = __cordl_internal_set_SByte5)) int8_t SByte5;

  /// @brief Field SByte6, offset 0x6, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte6, put = __cordl_internal_set_SByte6)) int8_t SByte6;

  /// @brief Field SByte7, offset 0x7, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte7, put = __cordl_internal_set_SByte7)) int8_t SByte7;

  /// @brief Field SByte8, offset 0x8, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte8, put = __cordl_internal_set_SByte8)) int8_t SByte8;

  /// @brief Field SByte9, offset 0x9, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte9, put = __cordl_internal_set_SByte9)) int8_t SByte9;

  /// @brief Field SInt0, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_SInt0, put = __cordl_internal_set_SInt0)) int32_t SInt0;

  /// @brief Field SInt1, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_SInt1, put = __cordl_internal_set_SInt1)) int32_t SInt1;

  /// @brief Field SInt2, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_SInt2, put = __cordl_internal_set_SInt2)) int32_t SInt2;

  /// @brief Field SInt3, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_SInt3, put = __cordl_internal_set_SInt3)) int32_t SInt3;

  /// @brief Field SInt4, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_SInt4, put = __cordl_internal_set_SInt4)) int32_t SInt4;

  /// @brief Field SInt5, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_SInt5, put = __cordl_internal_set_SInt5)) int32_t SInt5;

  /// @brief Field SInt6, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_SInt6, put = __cordl_internal_set_SInt6)) int32_t SInt6;

  /// @brief Field SInt7, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_SInt7, put = __cordl_internal_set_SInt7)) int32_t SInt7;

  /// @brief Field SLong0, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_SLong0, put = __cordl_internal_set_SLong0)) int64_t SLong0;

  /// @brief Field SLong1, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_SLong1, put = __cordl_internal_set_SLong1)) int64_t SLong1;

  /// @brief Field SLong2, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_SLong2, put = __cordl_internal_set_SLong2)) int64_t SLong2;

  /// @brief Field SLong3, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_SLong3, put = __cordl_internal_set_SLong3)) int64_t SLong3;

  /// @brief Field SShort0, offset 0x0, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort0, put = __cordl_internal_set_SShort0)) int16_t SShort0;

  /// @brief Field SShort1, offset 0x2, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort1, put = __cordl_internal_set_SShort1)) int16_t SShort1;

  /// @brief Field SShort10, offset 0x14, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort10, put = __cordl_internal_set_SShort10)) int16_t SShort10;

  /// @brief Field SShort11, offset 0x16, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort11, put = __cordl_internal_set_SShort11)) int16_t SShort11;

  /// @brief Field SShort12, offset 0x18, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort12, put = __cordl_internal_set_SShort12)) int16_t SShort12;

  /// @brief Field SShort13, offset 0x1a, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort13, put = __cordl_internal_set_SShort13)) int16_t SShort13;

  /// @brief Field SShort14, offset 0x1c, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort14, put = __cordl_internal_set_SShort14)) int16_t SShort14;

  /// @brief Field SShort15, offset 0x1e, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort15, put = __cordl_internal_set_SShort15)) int16_t SShort15;

  /// @brief Field SShort2, offset 0x4, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort2, put = __cordl_internal_set_SShort2)) int16_t SShort2;

  /// @brief Field SShort3, offset 0x6, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort3, put = __cordl_internal_set_SShort3)) int16_t SShort3;

  /// @brief Field SShort4, offset 0x8, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort4, put = __cordl_internal_set_SShort4)) int16_t SShort4;

  /// @brief Field SShort5, offset 0xa, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort5, put = __cordl_internal_set_SShort5)) int16_t SShort5;

  /// @brief Field SShort6, offset 0xc, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort6, put = __cordl_internal_set_SShort6)) int16_t SShort6;

  /// @brief Field SShort7, offset 0xe, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort7, put = __cordl_internal_set_SShort7)) int16_t SShort7;

  /// @brief Field SShort8, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort8, put = __cordl_internal_set_SShort8)) int16_t SShort8;

  /// @brief Field SShort9, offset 0x12, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort9, put = __cordl_internal_set_SShort9)) int16_t SShort9;

  /// @brief Field UInt0, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_UInt0, put = __cordl_internal_set_UInt0)) uint32_t UInt0;

  /// @brief Field UInt1, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_UInt1, put = __cordl_internal_set_UInt1)) uint32_t UInt1;

  /// @brief Field UInt2, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_UInt2, put = __cordl_internal_set_UInt2)) uint32_t UInt2;

  /// @brief Field UInt3, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_UInt3, put = __cordl_internal_set_UInt3)) uint32_t UInt3;

  /// @brief Field UInt4, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_UInt4, put = __cordl_internal_set_UInt4)) uint32_t UInt4;

  /// @brief Field UInt5, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_UInt5, put = __cordl_internal_set_UInt5)) uint32_t UInt5;

  /// @brief Field UInt6, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_UInt6, put = __cordl_internal_set_UInt6)) uint32_t UInt6;

  /// @brief Field UInt7, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_UInt7, put = __cordl_internal_set_UInt7)) uint32_t UInt7;

  /// @brief Field ULong0, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_ULong0, put = __cordl_internal_set_ULong0)) uint64_t ULong0;

  /// @brief Field ULong1, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_ULong1, put = __cordl_internal_set_ULong1)) uint64_t ULong1;

  /// @brief Field ULong2, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ULong2, put = __cordl_internal_set_ULong2)) uint64_t ULong2;

  /// @brief Field ULong3, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ULong3, put = __cordl_internal_set_ULong3)) uint64_t ULong3;

  /// @brief Field UShort0, offset 0x0, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort0, put = __cordl_internal_set_UShort0)) uint16_t UShort0;

  /// @brief Field UShort1, offset 0x2, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort1, put = __cordl_internal_set_UShort1)) uint16_t UShort1;

  /// @brief Field UShort10, offset 0x14, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort10, put = __cordl_internal_set_UShort10)) uint16_t UShort10;

  /// @brief Field UShort11, offset 0x16, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort11, put = __cordl_internal_set_UShort11)) uint16_t UShort11;

  /// @brief Field UShort12, offset 0x18, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort12, put = __cordl_internal_set_UShort12)) uint16_t UShort12;

  /// @brief Field UShort13, offset 0x1a, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort13, put = __cordl_internal_set_UShort13)) uint16_t UShort13;

  /// @brief Field UShort14, offset 0x1c, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort14, put = __cordl_internal_set_UShort14)) uint16_t UShort14;

  /// @brief Field UShort15, offset 0x1e, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort15, put = __cordl_internal_set_UShort15)) uint16_t UShort15;

  /// @brief Field UShort2, offset 0x4, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort2, put = __cordl_internal_set_UShort2)) uint16_t UShort2;

  /// @brief Field UShort3, offset 0x6, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort3, put = __cordl_internal_set_UShort3)) uint16_t UShort3;

  /// @brief Field UShort4, offset 0x8, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort4, put = __cordl_internal_set_UShort4)) uint16_t UShort4;

  /// @brief Field UShort5, offset 0xa, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort5, put = __cordl_internal_set_UShort5)) uint16_t UShort5;

  /// @brief Field UShort6, offset 0xc, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort6, put = __cordl_internal_set_UShort6)) uint16_t UShort6;

  /// @brief Field UShort7, offset 0xe, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort7, put = __cordl_internal_set_UShort7)) uint16_t UShort7;

  /// @brief Field UShort8, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort8, put = __cordl_internal_set_UShort8)) uint16_t UShort8;

  /// @brief Field UShort9, offset 0x12, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort9, put = __cordl_internal_set_UShort9)) uint16_t UShort9;

  constexpr uint8_t const& __cordl_internal_get_Byte0() const;

  constexpr uint8_t& __cordl_internal_get_Byte0();

  constexpr uint8_t const& __cordl_internal_get_Byte1() const;

  constexpr uint8_t& __cordl_internal_get_Byte1();

  constexpr uint8_t const& __cordl_internal_get_Byte10() const;

  constexpr uint8_t& __cordl_internal_get_Byte10();

  constexpr uint8_t const& __cordl_internal_get_Byte11() const;

  constexpr uint8_t& __cordl_internal_get_Byte11();

  constexpr uint8_t const& __cordl_internal_get_Byte12() const;

  constexpr uint8_t& __cordl_internal_get_Byte12();

  constexpr uint8_t const& __cordl_internal_get_Byte13() const;

  constexpr uint8_t& __cordl_internal_get_Byte13();

  constexpr uint8_t const& __cordl_internal_get_Byte14() const;

  constexpr uint8_t& __cordl_internal_get_Byte14();

  constexpr uint8_t const& __cordl_internal_get_Byte15() const;

  constexpr uint8_t& __cordl_internal_get_Byte15();

  constexpr uint8_t const& __cordl_internal_get_Byte16() const;

  constexpr uint8_t& __cordl_internal_get_Byte16();

  constexpr uint8_t const& __cordl_internal_get_Byte17() const;

  constexpr uint8_t& __cordl_internal_get_Byte17();

  constexpr uint8_t const& __cordl_internal_get_Byte18() const;

  constexpr uint8_t& __cordl_internal_get_Byte18();

  constexpr uint8_t const& __cordl_internal_get_Byte19() const;

  constexpr uint8_t& __cordl_internal_get_Byte19();

  constexpr uint8_t const& __cordl_internal_get_Byte2() const;

  constexpr uint8_t& __cordl_internal_get_Byte2();

  constexpr uint8_t const& __cordl_internal_get_Byte20() const;

  constexpr uint8_t& __cordl_internal_get_Byte20();

  constexpr uint8_t const& __cordl_internal_get_Byte21() const;

  constexpr uint8_t& __cordl_internal_get_Byte21();

  constexpr uint8_t const& __cordl_internal_get_Byte22() const;

  constexpr uint8_t& __cordl_internal_get_Byte22();

  constexpr uint8_t const& __cordl_internal_get_Byte23() const;

  constexpr uint8_t& __cordl_internal_get_Byte23();

  constexpr uint8_t const& __cordl_internal_get_Byte24() const;

  constexpr uint8_t& __cordl_internal_get_Byte24();

  constexpr uint8_t const& __cordl_internal_get_Byte25() const;

  constexpr uint8_t& __cordl_internal_get_Byte25();

  constexpr uint8_t const& __cordl_internal_get_Byte26() const;

  constexpr uint8_t& __cordl_internal_get_Byte26();

  constexpr uint8_t const& __cordl_internal_get_Byte27() const;

  constexpr uint8_t& __cordl_internal_get_Byte27();

  constexpr uint8_t const& __cordl_internal_get_Byte28() const;

  constexpr uint8_t& __cordl_internal_get_Byte28();

  constexpr uint8_t const& __cordl_internal_get_Byte29() const;

  constexpr uint8_t& __cordl_internal_get_Byte29();

  constexpr uint8_t const& __cordl_internal_get_Byte3() const;

  constexpr uint8_t& __cordl_internal_get_Byte3();

  constexpr uint8_t const& __cordl_internal_get_Byte30() const;

  constexpr uint8_t& __cordl_internal_get_Byte30();

  constexpr uint8_t const& __cordl_internal_get_Byte31() const;

  constexpr uint8_t& __cordl_internal_get_Byte31();

  constexpr uint8_t const& __cordl_internal_get_Byte4() const;

  constexpr uint8_t& __cordl_internal_get_Byte4();

  constexpr uint8_t const& __cordl_internal_get_Byte5() const;

  constexpr uint8_t& __cordl_internal_get_Byte5();

  constexpr uint8_t const& __cordl_internal_get_Byte6() const;

  constexpr uint8_t& __cordl_internal_get_Byte6();

  constexpr uint8_t const& __cordl_internal_get_Byte7() const;

  constexpr uint8_t& __cordl_internal_get_Byte7();

  constexpr uint8_t const& __cordl_internal_get_Byte8() const;

  constexpr uint8_t& __cordl_internal_get_Byte8();

  constexpr uint8_t const& __cordl_internal_get_Byte9() const;

  constexpr uint8_t& __cordl_internal_get_Byte9();

  constexpr double_t const& __cordl_internal_get_Double0() const;

  constexpr double_t& __cordl_internal_get_Double0();

  constexpr double_t const& __cordl_internal_get_Double1() const;

  constexpr double_t& __cordl_internal_get_Double1();

  constexpr double_t const& __cordl_internal_get_Double2() const;

  constexpr double_t& __cordl_internal_get_Double2();

  constexpr double_t const& __cordl_internal_get_Double3() const;

  constexpr double_t& __cordl_internal_get_Double3();

  constexpr float_t const& __cordl_internal_get_Float0() const;

  constexpr float_t& __cordl_internal_get_Float0();

  constexpr float_t const& __cordl_internal_get_Float1() const;

  constexpr float_t& __cordl_internal_get_Float1();

  constexpr float_t const& __cordl_internal_get_Float2() const;

  constexpr float_t& __cordl_internal_get_Float2();

  constexpr float_t const& __cordl_internal_get_Float3() const;

  constexpr float_t& __cordl_internal_get_Float3();

  constexpr float_t const& __cordl_internal_get_Float4() const;

  constexpr float_t& __cordl_internal_get_Float4();

  constexpr float_t const& __cordl_internal_get_Float5() const;

  constexpr float_t& __cordl_internal_get_Float5();

  constexpr float_t const& __cordl_internal_get_Float6() const;

  constexpr float_t& __cordl_internal_get_Float6();

  constexpr float_t const& __cordl_internal_get_Float7() const;

  constexpr float_t& __cordl_internal_get_Float7();

  constexpr ::Unity::Burst::Intrinsics::v128 const& __cordl_internal_get_Hi128() const;

  constexpr ::Unity::Burst::Intrinsics::v128& __cordl_internal_get_Hi128();

  constexpr ::Unity::Burst::Intrinsics::v128 const& __cordl_internal_get_Lo128() const;

  constexpr ::Unity::Burst::Intrinsics::v128& __cordl_internal_get_Lo128();

  constexpr int8_t const& __cordl_internal_get_SByte0() const;

  constexpr int8_t& __cordl_internal_get_SByte0();

  constexpr int8_t const& __cordl_internal_get_SByte1() const;

  constexpr int8_t& __cordl_internal_get_SByte1();

  constexpr int8_t const& __cordl_internal_get_SByte10() const;

  constexpr int8_t& __cordl_internal_get_SByte10();

  constexpr int8_t const& __cordl_internal_get_SByte11() const;

  constexpr int8_t& __cordl_internal_get_SByte11();

  constexpr int8_t const& __cordl_internal_get_SByte12() const;

  constexpr int8_t& __cordl_internal_get_SByte12();

  constexpr int8_t const& __cordl_internal_get_SByte13() const;

  constexpr int8_t& __cordl_internal_get_SByte13();

  constexpr int8_t const& __cordl_internal_get_SByte14() const;

  constexpr int8_t& __cordl_internal_get_SByte14();

  constexpr int8_t const& __cordl_internal_get_SByte15() const;

  constexpr int8_t& __cordl_internal_get_SByte15();

  constexpr int8_t const& __cordl_internal_get_SByte16() const;

  constexpr int8_t& __cordl_internal_get_SByte16();

  constexpr int8_t const& __cordl_internal_get_SByte17() const;

  constexpr int8_t& __cordl_internal_get_SByte17();

  constexpr int8_t const& __cordl_internal_get_SByte18() const;

  constexpr int8_t& __cordl_internal_get_SByte18();

  constexpr int8_t const& __cordl_internal_get_SByte19() const;

  constexpr int8_t& __cordl_internal_get_SByte19();

  constexpr int8_t const& __cordl_internal_get_SByte2() const;

  constexpr int8_t& __cordl_internal_get_SByte2();

  constexpr int8_t const& __cordl_internal_get_SByte20() const;

  constexpr int8_t& __cordl_internal_get_SByte20();

  constexpr int8_t const& __cordl_internal_get_SByte21() const;

  constexpr int8_t& __cordl_internal_get_SByte21();

  constexpr int8_t const& __cordl_internal_get_SByte22() const;

  constexpr int8_t& __cordl_internal_get_SByte22();

  constexpr int8_t const& __cordl_internal_get_SByte23() const;

  constexpr int8_t& __cordl_internal_get_SByte23();

  constexpr int8_t const& __cordl_internal_get_SByte24() const;

  constexpr int8_t& __cordl_internal_get_SByte24();

  constexpr int8_t const& __cordl_internal_get_SByte25() const;

  constexpr int8_t& __cordl_internal_get_SByte25();

  constexpr int8_t const& __cordl_internal_get_SByte26() const;

  constexpr int8_t& __cordl_internal_get_SByte26();

  constexpr int8_t const& __cordl_internal_get_SByte27() const;

  constexpr int8_t& __cordl_internal_get_SByte27();

  constexpr int8_t const& __cordl_internal_get_SByte28() const;

  constexpr int8_t& __cordl_internal_get_SByte28();

  constexpr int8_t const& __cordl_internal_get_SByte29() const;

  constexpr int8_t& __cordl_internal_get_SByte29();

  constexpr int8_t const& __cordl_internal_get_SByte3() const;

  constexpr int8_t& __cordl_internal_get_SByte3();

  constexpr int8_t const& __cordl_internal_get_SByte30() const;

  constexpr int8_t& __cordl_internal_get_SByte30();

  constexpr int8_t const& __cordl_internal_get_SByte31() const;

  constexpr int8_t& __cordl_internal_get_SByte31();

  constexpr int8_t const& __cordl_internal_get_SByte4() const;

  constexpr int8_t& __cordl_internal_get_SByte4();

  constexpr int8_t const& __cordl_internal_get_SByte5() const;

  constexpr int8_t& __cordl_internal_get_SByte5();

  constexpr int8_t const& __cordl_internal_get_SByte6() const;

  constexpr int8_t& __cordl_internal_get_SByte6();

  constexpr int8_t const& __cordl_internal_get_SByte7() const;

  constexpr int8_t& __cordl_internal_get_SByte7();

  constexpr int8_t const& __cordl_internal_get_SByte8() const;

  constexpr int8_t& __cordl_internal_get_SByte8();

  constexpr int8_t const& __cordl_internal_get_SByte9() const;

  constexpr int8_t& __cordl_internal_get_SByte9();

  constexpr int32_t const& __cordl_internal_get_SInt0() const;

  constexpr int32_t& __cordl_internal_get_SInt0();

  constexpr int32_t const& __cordl_internal_get_SInt1() const;

  constexpr int32_t& __cordl_internal_get_SInt1();

  constexpr int32_t const& __cordl_internal_get_SInt2() const;

  constexpr int32_t& __cordl_internal_get_SInt2();

  constexpr int32_t const& __cordl_internal_get_SInt3() const;

  constexpr int32_t& __cordl_internal_get_SInt3();

  constexpr int32_t const& __cordl_internal_get_SInt4() const;

  constexpr int32_t& __cordl_internal_get_SInt4();

  constexpr int32_t const& __cordl_internal_get_SInt5() const;

  constexpr int32_t& __cordl_internal_get_SInt5();

  constexpr int32_t const& __cordl_internal_get_SInt6() const;

  constexpr int32_t& __cordl_internal_get_SInt6();

  constexpr int32_t const& __cordl_internal_get_SInt7() const;

  constexpr int32_t& __cordl_internal_get_SInt7();

  constexpr int64_t const& __cordl_internal_get_SLong0() const;

  constexpr int64_t& __cordl_internal_get_SLong0();

  constexpr int64_t const& __cordl_internal_get_SLong1() const;

  constexpr int64_t& __cordl_internal_get_SLong1();

  constexpr int64_t const& __cordl_internal_get_SLong2() const;

  constexpr int64_t& __cordl_internal_get_SLong2();

  constexpr int64_t const& __cordl_internal_get_SLong3() const;

  constexpr int64_t& __cordl_internal_get_SLong3();

  constexpr int16_t const& __cordl_internal_get_SShort0() const;

  constexpr int16_t& __cordl_internal_get_SShort0();

  constexpr int16_t const& __cordl_internal_get_SShort1() const;

  constexpr int16_t& __cordl_internal_get_SShort1();

  constexpr int16_t const& __cordl_internal_get_SShort10() const;

  constexpr int16_t& __cordl_internal_get_SShort10();

  constexpr int16_t const& __cordl_internal_get_SShort11() const;

  constexpr int16_t& __cordl_internal_get_SShort11();

  constexpr int16_t const& __cordl_internal_get_SShort12() const;

  constexpr int16_t& __cordl_internal_get_SShort12();

  constexpr int16_t const& __cordl_internal_get_SShort13() const;

  constexpr int16_t& __cordl_internal_get_SShort13();

  constexpr int16_t const& __cordl_internal_get_SShort14() const;

  constexpr int16_t& __cordl_internal_get_SShort14();

  constexpr int16_t const& __cordl_internal_get_SShort15() const;

  constexpr int16_t& __cordl_internal_get_SShort15();

  constexpr int16_t const& __cordl_internal_get_SShort2() const;

  constexpr int16_t& __cordl_internal_get_SShort2();

  constexpr int16_t const& __cordl_internal_get_SShort3() const;

  constexpr int16_t& __cordl_internal_get_SShort3();

  constexpr int16_t const& __cordl_internal_get_SShort4() const;

  constexpr int16_t& __cordl_internal_get_SShort4();

  constexpr int16_t const& __cordl_internal_get_SShort5() const;

  constexpr int16_t& __cordl_internal_get_SShort5();

  constexpr int16_t const& __cordl_internal_get_SShort6() const;

  constexpr int16_t& __cordl_internal_get_SShort6();

  constexpr int16_t const& __cordl_internal_get_SShort7() const;

  constexpr int16_t& __cordl_internal_get_SShort7();

  constexpr int16_t const& __cordl_internal_get_SShort8() const;

  constexpr int16_t& __cordl_internal_get_SShort8();

  constexpr int16_t const& __cordl_internal_get_SShort9() const;

  constexpr int16_t& __cordl_internal_get_SShort9();

  constexpr uint32_t const& __cordl_internal_get_UInt0() const;

  constexpr uint32_t& __cordl_internal_get_UInt0();

  constexpr uint32_t const& __cordl_internal_get_UInt1() const;

  constexpr uint32_t& __cordl_internal_get_UInt1();

  constexpr uint32_t const& __cordl_internal_get_UInt2() const;

  constexpr uint32_t& __cordl_internal_get_UInt2();

  constexpr uint32_t const& __cordl_internal_get_UInt3() const;

  constexpr uint32_t& __cordl_internal_get_UInt3();

  constexpr uint32_t const& __cordl_internal_get_UInt4() const;

  constexpr uint32_t& __cordl_internal_get_UInt4();

  constexpr uint32_t const& __cordl_internal_get_UInt5() const;

  constexpr uint32_t& __cordl_internal_get_UInt5();

  constexpr uint32_t const& __cordl_internal_get_UInt6() const;

  constexpr uint32_t& __cordl_internal_get_UInt6();

  constexpr uint32_t const& __cordl_internal_get_UInt7() const;

  constexpr uint32_t& __cordl_internal_get_UInt7();

  constexpr uint64_t const& __cordl_internal_get_ULong0() const;

  constexpr uint64_t& __cordl_internal_get_ULong0();

  constexpr uint64_t const& __cordl_internal_get_ULong1() const;

  constexpr uint64_t& __cordl_internal_get_ULong1();

  constexpr uint64_t const& __cordl_internal_get_ULong2() const;

  constexpr uint64_t& __cordl_internal_get_ULong2();

  constexpr uint64_t const& __cordl_internal_get_ULong3() const;

  constexpr uint64_t& __cordl_internal_get_ULong3();

  constexpr uint16_t const& __cordl_internal_get_UShort0() const;

  constexpr uint16_t& __cordl_internal_get_UShort0();

  constexpr uint16_t const& __cordl_internal_get_UShort1() const;

  constexpr uint16_t& __cordl_internal_get_UShort1();

  constexpr uint16_t const& __cordl_internal_get_UShort10() const;

  constexpr uint16_t& __cordl_internal_get_UShort10();

  constexpr uint16_t const& __cordl_internal_get_UShort11() const;

  constexpr uint16_t& __cordl_internal_get_UShort11();

  constexpr uint16_t const& __cordl_internal_get_UShort12() const;

  constexpr uint16_t& __cordl_internal_get_UShort12();

  constexpr uint16_t const& __cordl_internal_get_UShort13() const;

  constexpr uint16_t& __cordl_internal_get_UShort13();

  constexpr uint16_t const& __cordl_internal_get_UShort14() const;

  constexpr uint16_t& __cordl_internal_get_UShort14();

  constexpr uint16_t const& __cordl_internal_get_UShort15() const;

  constexpr uint16_t& __cordl_internal_get_UShort15();

  constexpr uint16_t const& __cordl_internal_get_UShort2() const;

  constexpr uint16_t& __cordl_internal_get_UShort2();

  constexpr uint16_t const& __cordl_internal_get_UShort3() const;

  constexpr uint16_t& __cordl_internal_get_UShort3();

  constexpr uint16_t const& __cordl_internal_get_UShort4() const;

  constexpr uint16_t& __cordl_internal_get_UShort4();

  constexpr uint16_t const& __cordl_internal_get_UShort5() const;

  constexpr uint16_t& __cordl_internal_get_UShort5();

  constexpr uint16_t const& __cordl_internal_get_UShort6() const;

  constexpr uint16_t& __cordl_internal_get_UShort6();

  constexpr uint16_t const& __cordl_internal_get_UShort7() const;

  constexpr uint16_t& __cordl_internal_get_UShort7();

  constexpr uint16_t const& __cordl_internal_get_UShort8() const;

  constexpr uint16_t& __cordl_internal_get_UShort8();

  constexpr uint16_t const& __cordl_internal_get_UShort9() const;

  constexpr uint16_t& __cordl_internal_get_UShort9();

  constexpr void __cordl_internal_set_Byte0(uint8_t value);

  constexpr void __cordl_internal_set_Byte1(uint8_t value);

  constexpr void __cordl_internal_set_Byte10(uint8_t value);

  constexpr void __cordl_internal_set_Byte11(uint8_t value);

  constexpr void __cordl_internal_set_Byte12(uint8_t value);

  constexpr void __cordl_internal_set_Byte13(uint8_t value);

  constexpr void __cordl_internal_set_Byte14(uint8_t value);

  constexpr void __cordl_internal_set_Byte15(uint8_t value);

  constexpr void __cordl_internal_set_Byte16(uint8_t value);

  constexpr void __cordl_internal_set_Byte17(uint8_t value);

  constexpr void __cordl_internal_set_Byte18(uint8_t value);

  constexpr void __cordl_internal_set_Byte19(uint8_t value);

  constexpr void __cordl_internal_set_Byte2(uint8_t value);

  constexpr void __cordl_internal_set_Byte20(uint8_t value);

  constexpr void __cordl_internal_set_Byte21(uint8_t value);

  constexpr void __cordl_internal_set_Byte22(uint8_t value);

  constexpr void __cordl_internal_set_Byte23(uint8_t value);

  constexpr void __cordl_internal_set_Byte24(uint8_t value);

  constexpr void __cordl_internal_set_Byte25(uint8_t value);

  constexpr void __cordl_internal_set_Byte26(uint8_t value);

  constexpr void __cordl_internal_set_Byte27(uint8_t value);

  constexpr void __cordl_internal_set_Byte28(uint8_t value);

  constexpr void __cordl_internal_set_Byte29(uint8_t value);

  constexpr void __cordl_internal_set_Byte3(uint8_t value);

  constexpr void __cordl_internal_set_Byte30(uint8_t value);

  constexpr void __cordl_internal_set_Byte31(uint8_t value);

  constexpr void __cordl_internal_set_Byte4(uint8_t value);

  constexpr void __cordl_internal_set_Byte5(uint8_t value);

  constexpr void __cordl_internal_set_Byte6(uint8_t value);

  constexpr void __cordl_internal_set_Byte7(uint8_t value);

  constexpr void __cordl_internal_set_Byte8(uint8_t value);

  constexpr void __cordl_internal_set_Byte9(uint8_t value);

  constexpr void __cordl_internal_set_Double0(double_t value);

  constexpr void __cordl_internal_set_Double1(double_t value);

  constexpr void __cordl_internal_set_Double2(double_t value);

  constexpr void __cordl_internal_set_Double3(double_t value);

  constexpr void __cordl_internal_set_Float0(float_t value);

  constexpr void __cordl_internal_set_Float1(float_t value);

  constexpr void __cordl_internal_set_Float2(float_t value);

  constexpr void __cordl_internal_set_Float3(float_t value);

  constexpr void __cordl_internal_set_Float4(float_t value);

  constexpr void __cordl_internal_set_Float5(float_t value);

  constexpr void __cordl_internal_set_Float6(float_t value);

  constexpr void __cordl_internal_set_Float7(float_t value);

  constexpr void __cordl_internal_set_Hi128(::Unity::Burst::Intrinsics::v128 value);

  constexpr void __cordl_internal_set_Lo128(::Unity::Burst::Intrinsics::v128 value);

  constexpr void __cordl_internal_set_SByte0(int8_t value);

  constexpr void __cordl_internal_set_SByte1(int8_t value);

  constexpr void __cordl_internal_set_SByte10(int8_t value);

  constexpr void __cordl_internal_set_SByte11(int8_t value);

  constexpr void __cordl_internal_set_SByte12(int8_t value);

  constexpr void __cordl_internal_set_SByte13(int8_t value);

  constexpr void __cordl_internal_set_SByte14(int8_t value);

  constexpr void __cordl_internal_set_SByte15(int8_t value);

  constexpr void __cordl_internal_set_SByte16(int8_t value);

  constexpr void __cordl_internal_set_SByte17(int8_t value);

  constexpr void __cordl_internal_set_SByte18(int8_t value);

  constexpr void __cordl_internal_set_SByte19(int8_t value);

  constexpr void __cordl_internal_set_SByte2(int8_t value);

  constexpr void __cordl_internal_set_SByte20(int8_t value);

  constexpr void __cordl_internal_set_SByte21(int8_t value);

  constexpr void __cordl_internal_set_SByte22(int8_t value);

  constexpr void __cordl_internal_set_SByte23(int8_t value);

  constexpr void __cordl_internal_set_SByte24(int8_t value);

  constexpr void __cordl_internal_set_SByte25(int8_t value);

  constexpr void __cordl_internal_set_SByte26(int8_t value);

  constexpr void __cordl_internal_set_SByte27(int8_t value);

  constexpr void __cordl_internal_set_SByte28(int8_t value);

  constexpr void __cordl_internal_set_SByte29(int8_t value);

  constexpr void __cordl_internal_set_SByte3(int8_t value);

  constexpr void __cordl_internal_set_SByte30(int8_t value);

  constexpr void __cordl_internal_set_SByte31(int8_t value);

  constexpr void __cordl_internal_set_SByte4(int8_t value);

  constexpr void __cordl_internal_set_SByte5(int8_t value);

  constexpr void __cordl_internal_set_SByte6(int8_t value);

  constexpr void __cordl_internal_set_SByte7(int8_t value);

  constexpr void __cordl_internal_set_SByte8(int8_t value);

  constexpr void __cordl_internal_set_SByte9(int8_t value);

  constexpr void __cordl_internal_set_SInt0(int32_t value);

  constexpr void __cordl_internal_set_SInt1(int32_t value);

  constexpr void __cordl_internal_set_SInt2(int32_t value);

  constexpr void __cordl_internal_set_SInt3(int32_t value);

  constexpr void __cordl_internal_set_SInt4(int32_t value);

  constexpr void __cordl_internal_set_SInt5(int32_t value);

  constexpr void __cordl_internal_set_SInt6(int32_t value);

  constexpr void __cordl_internal_set_SInt7(int32_t value);

  constexpr void __cordl_internal_set_SLong0(int64_t value);

  constexpr void __cordl_internal_set_SLong1(int64_t value);

  constexpr void __cordl_internal_set_SLong2(int64_t value);

  constexpr void __cordl_internal_set_SLong3(int64_t value);

  constexpr void __cordl_internal_set_SShort0(int16_t value);

  constexpr void __cordl_internal_set_SShort1(int16_t value);

  constexpr void __cordl_internal_set_SShort10(int16_t value);

  constexpr void __cordl_internal_set_SShort11(int16_t value);

  constexpr void __cordl_internal_set_SShort12(int16_t value);

  constexpr void __cordl_internal_set_SShort13(int16_t value);

  constexpr void __cordl_internal_set_SShort14(int16_t value);

  constexpr void __cordl_internal_set_SShort15(int16_t value);

  constexpr void __cordl_internal_set_SShort2(int16_t value);

  constexpr void __cordl_internal_set_SShort3(int16_t value);

  constexpr void __cordl_internal_set_SShort4(int16_t value);

  constexpr void __cordl_internal_set_SShort5(int16_t value);

  constexpr void __cordl_internal_set_SShort6(int16_t value);

  constexpr void __cordl_internal_set_SShort7(int16_t value);

  constexpr void __cordl_internal_set_SShort8(int16_t value);

  constexpr void __cordl_internal_set_SShort9(int16_t value);

  constexpr void __cordl_internal_set_UInt0(uint32_t value);

  constexpr void __cordl_internal_set_UInt1(uint32_t value);

  constexpr void __cordl_internal_set_UInt2(uint32_t value);

  constexpr void __cordl_internal_set_UInt3(uint32_t value);

  constexpr void __cordl_internal_set_UInt4(uint32_t value);

  constexpr void __cordl_internal_set_UInt5(uint32_t value);

  constexpr void __cordl_internal_set_UInt6(uint32_t value);

  constexpr void __cordl_internal_set_UInt7(uint32_t value);

  constexpr void __cordl_internal_set_ULong0(uint64_t value);

  constexpr void __cordl_internal_set_ULong1(uint64_t value);

  constexpr void __cordl_internal_set_ULong2(uint64_t value);

  constexpr void __cordl_internal_set_ULong3(uint64_t value);

  constexpr void __cordl_internal_set_UShort0(uint16_t value);

  constexpr void __cordl_internal_set_UShort1(uint16_t value);

  constexpr void __cordl_internal_set_UShort10(uint16_t value);

  constexpr void __cordl_internal_set_UShort11(uint16_t value);

  constexpr void __cordl_internal_set_UShort12(uint16_t value);

  constexpr void __cordl_internal_set_UShort13(uint16_t value);

  constexpr void __cordl_internal_set_UShort14(uint16_t value);

  constexpr void __cordl_internal_set_UShort15(uint16_t value);

  constexpr void __cordl_internal_set_UShort2(uint16_t value);

  constexpr void __cordl_internal_set_UShort3(uint16_t value);

  constexpr void __cordl_internal_set_UShort4(uint16_t value);

  constexpr void __cordl_internal_set_UShort5(uint16_t value);

  constexpr void __cordl_internal_set_UShort6(uint16_t value);

  constexpr void __cordl_internal_set_UShort7(uint16_t value);

  constexpr void __cordl_internal_set_UShort8(uint16_t value);

  constexpr void __cordl_internal_set_UShort9(uint16_t value);

  /// @brief Method .ctor, addr 0x3093364, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t a, double_t b, double_t c, double_t d);

  /// @brief Method .ctor, addr 0x3093344, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t a, float_t b, float_t c, float_t d, float_t e, float_t f, float_t g, float_t h);

  /// @brief Method .ctor, addr 0x3093214, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int16_t a, int16_t b, int16_t c, int16_t d, int16_t e, int16_t f, int16_t g, int16_t h, int16_t i, int16_t j, int16_t k, int16_t l, int16_t m, int16_t n, int16_t o, int16_t p);

  /// @brief Method .ctor, addr 0x30932fc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t f, int32_t g, int32_t h);

  /// @brief Method .ctor, addr 0x309337c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int64_t a, int64_t b, int64_t c, int64_t d);

  /// @brief Method .ctor, addr 0x3093120, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(int8_t a, int8_t b, int8_t c, int8_t d, int8_t e, int8_t f, int8_t g, int8_t h, int8_t i, int8_t j, int8_t k, int8_t l, int8_t m, int8_t n, int8_t o, int8_t p, int8_t q, int8_t r,
                    int8_t s, int8_t t, int8_t u, int8_t v, int8_t w, int8_t x, int8_t y, int8_t z, int8_t A, int8_t B, int8_t C, int8_t D, int8_t E, int8_t F);

  /// @brief Method .ctor, addr 0x3093288, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(uint16_t a, uint16_t b, uint16_t c, uint16_t d, uint16_t e, uint16_t f, uint16_t g, uint16_t h, uint16_t i, uint16_t j, uint16_t k, uint16_t l, uint16_t m, uint16_t n, uint16_t o,
                    uint16_t p);

  /// @brief Method .ctor, addr 0x3093320, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);

  /// @brief Method .ctor, addr 0x3093394, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint64_t a, uint64_t b, uint64_t c, uint64_t d);

  /// @brief Method .ctor, addr 0x3093020, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(uint8_t a, uint8_t b, uint8_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k, uint8_t l, uint8_t m, uint8_t n, uint8_t o, uint8_t p,
                    uint8_t q, uint8_t r, uint8_t s, uint8_t t, uint8_t u, uint8_t v, uint8_t w, uint8_t x, uint8_t y, uint8_t z, uint8_t A, uint8_t B, uint8_t C, uint8_t D, uint8_t E, uint8_t F);

  /// @brief Method .ctor, addr 0x3093108, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int8_t b);

  /// @brief Method .ctor, addr 0x3093008, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint8_t b);

  /// @brief Method .ctor, addr 0x3093358, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t f);

  /// @brief Method .ctor, addr 0x3093338, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t f);

  /// @brief Method .ctor, addr 0x3093370, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int64_t f);

  /// @brief Method .ctor, addr 0x3093388, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint64_t f);

  /// @brief Method .ctor, addr 0x30933a0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Burst::Intrinsics::v128 lo, ::Unity::Burst::Intrinsics::v128 hi);

  /// @brief Method .ctor, addr 0x3093208, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int16_t v);

  /// @brief Method .ctor, addr 0x30932f0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x309327c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint16_t v);

  /// @brief Method .ctor, addr 0x3093314, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  // Ctor Parameters []
  // @brief default ctor
  constexpr v256();

  // Ctor Parameters [CppParam { name: "Byte0", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte1", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte2",
  // ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte3", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte4", ty: "uint8_t", modifiers: "", def_value: None
  // }, CppParam { name: "Byte5", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte6", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte7", ty: "uint8_t",
  // modifiers: "", def_value: None }, CppParam { name: "Byte8", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte9", ty: "uint8_t", modifiers: "", def_value: None }, CppParam {
  // name: "Byte10", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte11", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte12", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "Byte13", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte14", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "Byte15", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte16", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte17", ty: "uint8_t", modifiers: "",
  // def_value: None }, CppParam { name: "Byte18", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte19", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "Byte20", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte21", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte22", ty: "uint8_t", modifiers: "",
  // def_value: None }, CppParam { name: "Byte23", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte24", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "Byte25", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte26", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte27", ty: "uint8_t", modifiers: "",
  // def_value: None }, CppParam { name: "Byte28", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte29", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "Byte30", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte31", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "SByte0", ty: "int8_t", modifiers: "",
  // def_value: None }, CppParam { name: "SByte1", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte2", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte3",
  // ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte4", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte5", ty: "int8_t", modifiers: "", def_value: None
  // }, CppParam { name: "SByte6", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte7", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte8", ty: "int8_t",
  // modifiers: "", def_value: None }, CppParam { name: "SByte9", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte10", ty: "int8_t", modifiers: "", def_value: None }, CppParam {
  // name: "SByte11", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte12", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte13", ty: "int8_t", modifiers:
  // "", def_value: None }, CppParam { name: "SByte14", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte15", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name:
  // "SByte16", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte17", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte18", ty: "int8_t", modifiers: "",
  // def_value: None }, CppParam { name: "SByte19", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte20", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name:
  // "SByte21", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte22", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte23", ty: "int8_t", modifiers: "",
  // def_value: None }, CppParam { name: "SByte24", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte25", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name:
  // "SByte26", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte27", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte28", ty: "int8_t", modifiers: "",
  // def_value: None }, CppParam { name: "SByte29", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte30", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name:
  // "SByte31", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "UShort0", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort1", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "UShort2", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort3", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "UShort4", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort5", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort6", ty: "uint16_t", modifiers:
  // "", def_value: None }, CppParam { name: "UShort7", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort8", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "UShort9", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort10", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort11", ty: "uint16_t", modifiers:
  // "", def_value: None }, CppParam { name: "UShort12", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort13", ty: "uint16_t", modifiers: "", def_value: None }, CppParam {
  // name: "UShort14", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort15", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "SShort0", ty: "int16_t",
  // modifiers: "", def_value: None }, CppParam { name: "SShort1", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort2", ty: "int16_t", modifiers: "", def_value: None },
  // CppParam { name: "SShort3", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort4", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort5", ty:
  // "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort6", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort7", ty: "int16_t", modifiers: "", def_value: None
  // }, CppParam { name: "SShort8", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort9", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort10", ty:
  // "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort11", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort12", ty: "int16_t", modifiers: "", def_value:
  // None }, CppParam { name: "SShort13", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort14", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort15",
  // ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "UInt0", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "UInt1", ty: "uint32_t", modifiers: "", def_value:
  // None }, CppParam { name: "UInt2", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "UInt3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "UInt4", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "UInt5", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "UInt6", ty: "uint32_t", modifiers: "", def_value: None
  // }, CppParam { name: "UInt7", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "SInt0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SInt1", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "SInt2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SInt3", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "SInt4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SInt5", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SInt6", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "SInt7", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ULong0", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "ULong1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "ULong2", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "ULong3", ty: "uint64_t", modifiers: "",
  // def_value: None }, CppParam { name: "SLong0", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "SLong1", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name:
  // "SLong2", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "SLong3", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "Float0", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "Float1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Float2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "Float3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Float4", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Float5", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "Float6", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Float7", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "Double0", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "Double1", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "Double2", ty: "double_t", modifiers:
  // "", def_value: None }, CppParam { name: "Double3", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "Lo128", ty: "::Unity::Burst::Intrinsics::v128", modifiers: "", def_value:
  // None }, CppParam { name: "Hi128", ty: "::Unity::Burst::Intrinsics::v128", modifiers: "", def_value: None }]
  constexpr v256(uint8_t Byte0, uint8_t Byte1, uint8_t Byte2, uint8_t Byte3, uint8_t Byte4, uint8_t Byte5, uint8_t Byte6, uint8_t Byte7, uint8_t Byte8, uint8_t Byte9, uint8_t Byte10, uint8_t Byte11,
                 uint8_t Byte12, uint8_t Byte13, uint8_t Byte14, uint8_t Byte15, uint8_t Byte16, uint8_t Byte17, uint8_t Byte18, uint8_t Byte19, uint8_t Byte20, uint8_t Byte21, uint8_t Byte22,
                 uint8_t Byte23, uint8_t Byte24, uint8_t Byte25, uint8_t Byte26, uint8_t Byte27, uint8_t Byte28, uint8_t Byte29, uint8_t Byte30, uint8_t Byte31, int8_t SByte0, int8_t SByte1,
                 int8_t SByte2, int8_t SByte3, int8_t SByte4, int8_t SByte5, int8_t SByte6, int8_t SByte7, int8_t SByte8, int8_t SByte9, int8_t SByte10, int8_t SByte11, int8_t SByte12, int8_t SByte13,
                 int8_t SByte14, int8_t SByte15, int8_t SByte16, int8_t SByte17, int8_t SByte18, int8_t SByte19, int8_t SByte20, int8_t SByte21, int8_t SByte22, int8_t SByte23, int8_t SByte24,
                 int8_t SByte25, int8_t SByte26, int8_t SByte27, int8_t SByte28, int8_t SByte29, int8_t SByte30, int8_t SByte31, uint16_t UShort0, uint16_t UShort1, uint16_t UShort2, uint16_t UShort3,
                 uint16_t UShort4, uint16_t UShort5, uint16_t UShort6, uint16_t UShort7, uint16_t UShort8, uint16_t UShort9, uint16_t UShort10, uint16_t UShort11, uint16_t UShort12, uint16_t UShort13,
                 uint16_t UShort14, uint16_t UShort15, int16_t SShort0, int16_t SShort1, int16_t SShort2, int16_t SShort3, int16_t SShort4, int16_t SShort5, int16_t SShort6, int16_t SShort7,
                 int16_t SShort8, int16_t SShort9, int16_t SShort10, int16_t SShort11, int16_t SShort12, int16_t SShort13, int16_t SShort14, int16_t SShort15, uint32_t UInt0, uint32_t UInt1,
                 uint32_t UInt2, uint32_t UInt3, uint32_t UInt4, uint32_t UInt5, uint32_t UInt6, uint32_t UInt7, int32_t SInt0, int32_t SInt1, int32_t SInt2, int32_t SInt3, int32_t SInt4,
                 int32_t SInt5, int32_t SInt6, int32_t SInt7, uint64_t ULong0, uint64_t ULong1, uint64_t ULong2, uint64_t ULong3, int64_t SLong0, int64_t SLong1, int64_t SLong2, int64_t SLong3,
                 float_t Float0, float_t Float1, float_t Float2, float_t Float3, float_t Float4, float_t Float5, float_t Float6, float_t Float7, double_t Double0, double_t Double1, double_t Double2,
                 double_t Double3, ::Unity::Burst::Intrinsics::v128 Lo128, ::Unity::Burst::Intrinsics::v128 Hi128) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Byte0_padding[0x0];
      /// @brief Field Byte0, offset: 0x0, size: 0x1, def value: None
      uint8_t ___Byte0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Byte0_padding_forAlignment[0x0];
      /// @brief Field Byte0, offset: 0x0, size: 0x1, def value: None
      uint8_t ___Byte0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1
      uint8_t ___Byte1_padding[0x1];
      /// @brief Field Byte1, offset: 0x1, size: 0x1, def value: None
      uint8_t ___Byte1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1 for alignment
      uint8_t ___Byte1_padding_forAlignment[0x1];
      /// @brief Field Byte1, offset: 0x1, size: 0x1, def value: None
      uint8_t ___Byte1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___Byte2_padding[0x2];
      /// @brief Field Byte2, offset: 0x2, size: 0x1, def value: None
      uint8_t ___Byte2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___Byte2_padding_forAlignment[0x2];
      /// @brief Field Byte2, offset: 0x2, size: 0x1, def value: None
      uint8_t ___Byte2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x3
      uint8_t ___Byte3_padding[0x3];
      /// @brief Field Byte3, offset: 0x3, size: 0x1, def value: None
      uint8_t ___Byte3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x3 for alignment
      uint8_t ___Byte3_padding_forAlignment[0x3];
      /// @brief Field Byte3, offset: 0x3, size: 0x1, def value: None
      uint8_t ___Byte3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___Byte4_padding[0x4];
      /// @brief Field Byte4, offset: 0x4, size: 0x1, def value: None
      uint8_t ___Byte4;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___Byte4_padding_forAlignment[0x4];
      /// @brief Field Byte4, offset: 0x4, size: 0x1, def value: None
      uint8_t ___Byte4_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x5
      uint8_t ___Byte5_padding[0x5];
      /// @brief Field Byte5, offset: 0x5, size: 0x1, def value: None
      uint8_t ___Byte5;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x5 for alignment
      uint8_t ___Byte5_padding_forAlignment[0x5];
      /// @brief Field Byte5, offset: 0x5, size: 0x1, def value: None
      uint8_t ___Byte5_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___Byte6_padding[0x6];
      /// @brief Field Byte6, offset: 0x6, size: 0x1, def value: None
      uint8_t ___Byte6;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___Byte6_padding_forAlignment[0x6];
      /// @brief Field Byte6, offset: 0x6, size: 0x1, def value: None
      uint8_t ___Byte6_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x7
      uint8_t ___Byte7_padding[0x7];
      /// @brief Field Byte7, offset: 0x7, size: 0x1, def value: None
      uint8_t ___Byte7;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x7 for alignment
      uint8_t ___Byte7_padding_forAlignment[0x7];
      /// @brief Field Byte7, offset: 0x7, size: 0x1, def value: None
      uint8_t ___Byte7_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___Byte8_padding[0x8];
      /// @brief Field Byte8, offset: 0x8, size: 0x1, def value: None
      uint8_t ___Byte8;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___Byte8_padding_forAlignment[0x8];
      /// @brief Field Byte8, offset: 0x8, size: 0x1, def value: None
      uint8_t ___Byte8_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x9
      uint8_t ___Byte9_padding[0x9];
      /// @brief Field Byte9, offset: 0x9, size: 0x1, def value: None
      uint8_t ___Byte9;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x9 for alignment
      uint8_t ___Byte9_padding_forAlignment[0x9];
      /// @brief Field Byte9, offset: 0x9, size: 0x1, def value: None
      uint8_t ___Byte9_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xa
      uint8_t ___Byte10_padding[0xa];
      /// @brief Field Byte10, offset: 0xa, size: 0x1, def value: None
      uint8_t ___Byte10;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xa for alignment
      uint8_t ___Byte10_padding_forAlignment[0xa];
      /// @brief Field Byte10, offset: 0xa, size: 0x1, def value: None
      uint8_t ___Byte10_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xb
      uint8_t ___Byte11_padding[0xb];
      /// @brief Field Byte11, offset: 0xb, size: 0x1, def value: None
      uint8_t ___Byte11;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xb for alignment
      uint8_t ___Byte11_padding_forAlignment[0xb];
      /// @brief Field Byte11, offset: 0xb, size: 0x1, def value: None
      uint8_t ___Byte11_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___Byte12_padding[0xc];
      /// @brief Field Byte12, offset: 0xc, size: 0x1, def value: None
      uint8_t ___Byte12;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___Byte12_padding_forAlignment[0xc];
      /// @brief Field Byte12, offset: 0xc, size: 0x1, def value: None
      uint8_t ___Byte12_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xd
      uint8_t ___Byte13_padding[0xd];
      /// @brief Field Byte13, offset: 0xd, size: 0x1, def value: None
      uint8_t ___Byte13;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xd for alignment
      uint8_t ___Byte13_padding_forAlignment[0xd];
      /// @brief Field Byte13, offset: 0xd, size: 0x1, def value: None
      uint8_t ___Byte13_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xe
      uint8_t ___Byte14_padding[0xe];
      /// @brief Field Byte14, offset: 0xe, size: 0x1, def value: None
      uint8_t ___Byte14;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xe for alignment
      uint8_t ___Byte14_padding_forAlignment[0xe];
      /// @brief Field Byte14, offset: 0xe, size: 0x1, def value: None
      uint8_t ___Byte14_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xf
      uint8_t ___Byte15_padding[0xf];
      /// @brief Field Byte15, offset: 0xf, size: 0x1, def value: None
      uint8_t ___Byte15;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xf for alignment
      uint8_t ___Byte15_padding_forAlignment[0xf];
      /// @brief Field Byte15, offset: 0xf, size: 0x1, def value: None
      uint8_t ___Byte15_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___Byte16_padding[0x10];
      /// @brief Field Byte16, offset: 0x10, size: 0x1, def value: None
      uint8_t ___Byte16;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___Byte16_padding_forAlignment[0x10];
      /// @brief Field Byte16, offset: 0x10, size: 0x1, def value: None
      uint8_t ___Byte16_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x11
      uint8_t ___Byte17_padding[0x11];
      /// @brief Field Byte17, offset: 0x11, size: 0x1, def value: None
      uint8_t ___Byte17;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x11 for alignment
      uint8_t ___Byte17_padding_forAlignment[0x11];
      /// @brief Field Byte17, offset: 0x11, size: 0x1, def value: None
      uint8_t ___Byte17_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x12
      uint8_t ___Byte18_padding[0x12];
      /// @brief Field Byte18, offset: 0x12, size: 0x1, def value: None
      uint8_t ___Byte18;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x12 for alignment
      uint8_t ___Byte18_padding_forAlignment[0x12];
      /// @brief Field Byte18, offset: 0x12, size: 0x1, def value: None
      uint8_t ___Byte18_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x13
      uint8_t ___Byte19_padding[0x13];
      /// @brief Field Byte19, offset: 0x13, size: 0x1, def value: None
      uint8_t ___Byte19;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x13 for alignment
      uint8_t ___Byte19_padding_forAlignment[0x13];
      /// @brief Field Byte19, offset: 0x13, size: 0x1, def value: None
      uint8_t ___Byte19_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x14
      uint8_t ___Byte20_padding[0x14];
      /// @brief Field Byte20, offset: 0x14, size: 0x1, def value: None
      uint8_t ___Byte20;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___Byte20_padding_forAlignment[0x14];
      /// @brief Field Byte20, offset: 0x14, size: 0x1, def value: None
      uint8_t ___Byte20_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x15
      uint8_t ___Byte21_padding[0x15];
      /// @brief Field Byte21, offset: 0x15, size: 0x1, def value: None
      uint8_t ___Byte21;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x15 for alignment
      uint8_t ___Byte21_padding_forAlignment[0x15];
      /// @brief Field Byte21, offset: 0x15, size: 0x1, def value: None
      uint8_t ___Byte21_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x16
      uint8_t ___Byte22_padding[0x16];
      /// @brief Field Byte22, offset: 0x16, size: 0x1, def value: None
      uint8_t ___Byte22;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x16 for alignment
      uint8_t ___Byte22_padding_forAlignment[0x16];
      /// @brief Field Byte22, offset: 0x16, size: 0x1, def value: None
      uint8_t ___Byte22_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x17
      uint8_t ___Byte23_padding[0x17];
      /// @brief Field Byte23, offset: 0x17, size: 0x1, def value: None
      uint8_t ___Byte23;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x17 for alignment
      uint8_t ___Byte23_padding_forAlignment[0x17];
      /// @brief Field Byte23, offset: 0x17, size: 0x1, def value: None
      uint8_t ___Byte23_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___Byte24_padding[0x18];
      /// @brief Field Byte24, offset: 0x18, size: 0x1, def value: None
      uint8_t ___Byte24;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___Byte24_padding_forAlignment[0x18];
      /// @brief Field Byte24, offset: 0x18, size: 0x1, def value: None
      uint8_t ___Byte24_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x19
      uint8_t ___Byte25_padding[0x19];
      /// @brief Field Byte25, offset: 0x19, size: 0x1, def value: None
      uint8_t ___Byte25;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x19 for alignment
      uint8_t ___Byte25_padding_forAlignment[0x19];
      /// @brief Field Byte25, offset: 0x19, size: 0x1, def value: None
      uint8_t ___Byte25_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1a
      uint8_t ___Byte26_padding[0x1a];
      /// @brief Field Byte26, offset: 0x1a, size: 0x1, def value: None
      uint8_t ___Byte26;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1a for alignment
      uint8_t ___Byte26_padding_forAlignment[0x1a];
      /// @brief Field Byte26, offset: 0x1a, size: 0x1, def value: None
      uint8_t ___Byte26_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1b
      uint8_t ___Byte27_padding[0x1b];
      /// @brief Field Byte27, offset: 0x1b, size: 0x1, def value: None
      uint8_t ___Byte27;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1b for alignment
      uint8_t ___Byte27_padding_forAlignment[0x1b];
      /// @brief Field Byte27, offset: 0x1b, size: 0x1, def value: None
      uint8_t ___Byte27_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1c
      uint8_t ___Byte28_padding[0x1c];
      /// @brief Field Byte28, offset: 0x1c, size: 0x1, def value: None
      uint8_t ___Byte28;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1c for alignment
      uint8_t ___Byte28_padding_forAlignment[0x1c];
      /// @brief Field Byte28, offset: 0x1c, size: 0x1, def value: None
      uint8_t ___Byte28_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1d
      uint8_t ___Byte29_padding[0x1d];
      /// @brief Field Byte29, offset: 0x1d, size: 0x1, def value: None
      uint8_t ___Byte29;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1d for alignment
      uint8_t ___Byte29_padding_forAlignment[0x1d];
      /// @brief Field Byte29, offset: 0x1d, size: 0x1, def value: None
      uint8_t ___Byte29_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1e
      uint8_t ___Byte30_padding[0x1e];
      /// @brief Field Byte30, offset: 0x1e, size: 0x1, def value: None
      uint8_t ___Byte30;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1e for alignment
      uint8_t ___Byte30_padding_forAlignment[0x1e];
      /// @brief Field Byte30, offset: 0x1e, size: 0x1, def value: None
      uint8_t ___Byte30_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1f
      uint8_t ___Byte31_padding[0x1f];
      /// @brief Field Byte31, offset: 0x1f, size: 0x1, def value: None
      uint8_t ___Byte31;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1f for alignment
      uint8_t ___Byte31_padding_forAlignment[0x1f];
      /// @brief Field Byte31, offset: 0x1f, size: 0x1, def value: None
      uint8_t ___Byte31_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___SByte0_padding[0x0];
      /// @brief Field SByte0, offset: 0x0, size: 0x1, def value: None
      int8_t ___SByte0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___SByte0_padding_forAlignment[0x0];
      /// @brief Field SByte0, offset: 0x0, size: 0x1, def value: None
      int8_t ___SByte0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1
      uint8_t ___SByte1_padding[0x1];
      /// @brief Field SByte1, offset: 0x1, size: 0x1, def value: None
      int8_t ___SByte1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1 for alignment
      uint8_t ___SByte1_padding_forAlignment[0x1];
      /// @brief Field SByte1, offset: 0x1, size: 0x1, def value: None
      int8_t ___SByte1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___SByte2_padding[0x2];
      /// @brief Field SByte2, offset: 0x2, size: 0x1, def value: None
      int8_t ___SByte2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___SByte2_padding_forAlignment[0x2];
      /// @brief Field SByte2, offset: 0x2, size: 0x1, def value: None
      int8_t ___SByte2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x3
      uint8_t ___SByte3_padding[0x3];
      /// @brief Field SByte3, offset: 0x3, size: 0x1, def value: None
      int8_t ___SByte3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x3 for alignment
      uint8_t ___SByte3_padding_forAlignment[0x3];
      /// @brief Field SByte3, offset: 0x3, size: 0x1, def value: None
      int8_t ___SByte3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___SByte4_padding[0x4];
      /// @brief Field SByte4, offset: 0x4, size: 0x1, def value: None
      int8_t ___SByte4;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___SByte4_padding_forAlignment[0x4];
      /// @brief Field SByte4, offset: 0x4, size: 0x1, def value: None
      int8_t ___SByte4_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x5
      uint8_t ___SByte5_padding[0x5];
      /// @brief Field SByte5, offset: 0x5, size: 0x1, def value: None
      int8_t ___SByte5;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x5 for alignment
      uint8_t ___SByte5_padding_forAlignment[0x5];
      /// @brief Field SByte5, offset: 0x5, size: 0x1, def value: None
      int8_t ___SByte5_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___SByte6_padding[0x6];
      /// @brief Field SByte6, offset: 0x6, size: 0x1, def value: None
      int8_t ___SByte6;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___SByte6_padding_forAlignment[0x6];
      /// @brief Field SByte6, offset: 0x6, size: 0x1, def value: None
      int8_t ___SByte6_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x7
      uint8_t ___SByte7_padding[0x7];
      /// @brief Field SByte7, offset: 0x7, size: 0x1, def value: None
      int8_t ___SByte7;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x7 for alignment
      uint8_t ___SByte7_padding_forAlignment[0x7];
      /// @brief Field SByte7, offset: 0x7, size: 0x1, def value: None
      int8_t ___SByte7_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___SByte8_padding[0x8];
      /// @brief Field SByte8, offset: 0x8, size: 0x1, def value: None
      int8_t ___SByte8;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___SByte8_padding_forAlignment[0x8];
      /// @brief Field SByte8, offset: 0x8, size: 0x1, def value: None
      int8_t ___SByte8_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x9
      uint8_t ___SByte9_padding[0x9];
      /// @brief Field SByte9, offset: 0x9, size: 0x1, def value: None
      int8_t ___SByte9;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x9 for alignment
      uint8_t ___SByte9_padding_forAlignment[0x9];
      /// @brief Field SByte9, offset: 0x9, size: 0x1, def value: None
      int8_t ___SByte9_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xa
      uint8_t ___SByte10_padding[0xa];
      /// @brief Field SByte10, offset: 0xa, size: 0x1, def value: None
      int8_t ___SByte10;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xa for alignment
      uint8_t ___SByte10_padding_forAlignment[0xa];
      /// @brief Field SByte10, offset: 0xa, size: 0x1, def value: None
      int8_t ___SByte10_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xb
      uint8_t ___SByte11_padding[0xb];
      /// @brief Field SByte11, offset: 0xb, size: 0x1, def value: None
      int8_t ___SByte11;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xb for alignment
      uint8_t ___SByte11_padding_forAlignment[0xb];
      /// @brief Field SByte11, offset: 0xb, size: 0x1, def value: None
      int8_t ___SByte11_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___SByte12_padding[0xc];
      /// @brief Field SByte12, offset: 0xc, size: 0x1, def value: None
      int8_t ___SByte12;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___SByte12_padding_forAlignment[0xc];
      /// @brief Field SByte12, offset: 0xc, size: 0x1, def value: None
      int8_t ___SByte12_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xd
      uint8_t ___SByte13_padding[0xd];
      /// @brief Field SByte13, offset: 0xd, size: 0x1, def value: None
      int8_t ___SByte13;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xd for alignment
      uint8_t ___SByte13_padding_forAlignment[0xd];
      /// @brief Field SByte13, offset: 0xd, size: 0x1, def value: None
      int8_t ___SByte13_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xe
      uint8_t ___SByte14_padding[0xe];
      /// @brief Field SByte14, offset: 0xe, size: 0x1, def value: None
      int8_t ___SByte14;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xe for alignment
      uint8_t ___SByte14_padding_forAlignment[0xe];
      /// @brief Field SByte14, offset: 0xe, size: 0x1, def value: None
      int8_t ___SByte14_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xf
      uint8_t ___SByte15_padding[0xf];
      /// @brief Field SByte15, offset: 0xf, size: 0x1, def value: None
      int8_t ___SByte15;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xf for alignment
      uint8_t ___SByte15_padding_forAlignment[0xf];
      /// @brief Field SByte15, offset: 0xf, size: 0x1, def value: None
      int8_t ___SByte15_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___SByte16_padding[0x10];
      /// @brief Field SByte16, offset: 0x10, size: 0x1, def value: None
      int8_t ___SByte16;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___SByte16_padding_forAlignment[0x10];
      /// @brief Field SByte16, offset: 0x10, size: 0x1, def value: None
      int8_t ___SByte16_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x11
      uint8_t ___SByte17_padding[0x11];
      /// @brief Field SByte17, offset: 0x11, size: 0x1, def value: None
      int8_t ___SByte17;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x11 for alignment
      uint8_t ___SByte17_padding_forAlignment[0x11];
      /// @brief Field SByte17, offset: 0x11, size: 0x1, def value: None
      int8_t ___SByte17_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x12
      uint8_t ___SByte18_padding[0x12];
      /// @brief Field SByte18, offset: 0x12, size: 0x1, def value: None
      int8_t ___SByte18;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x12 for alignment
      uint8_t ___SByte18_padding_forAlignment[0x12];
      /// @brief Field SByte18, offset: 0x12, size: 0x1, def value: None
      int8_t ___SByte18_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x13
      uint8_t ___SByte19_padding[0x13];
      /// @brief Field SByte19, offset: 0x13, size: 0x1, def value: None
      int8_t ___SByte19;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x13 for alignment
      uint8_t ___SByte19_padding_forAlignment[0x13];
      /// @brief Field SByte19, offset: 0x13, size: 0x1, def value: None
      int8_t ___SByte19_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x14
      uint8_t ___SByte20_padding[0x14];
      /// @brief Field SByte20, offset: 0x14, size: 0x1, def value: None
      int8_t ___SByte20;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___SByte20_padding_forAlignment[0x14];
      /// @brief Field SByte20, offset: 0x14, size: 0x1, def value: None
      int8_t ___SByte20_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x15
      uint8_t ___SByte21_padding[0x15];
      /// @brief Field SByte21, offset: 0x15, size: 0x1, def value: None
      int8_t ___SByte21;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x15 for alignment
      uint8_t ___SByte21_padding_forAlignment[0x15];
      /// @brief Field SByte21, offset: 0x15, size: 0x1, def value: None
      int8_t ___SByte21_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x16
      uint8_t ___SByte22_padding[0x16];
      /// @brief Field SByte22, offset: 0x16, size: 0x1, def value: None
      int8_t ___SByte22;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x16 for alignment
      uint8_t ___SByte22_padding_forAlignment[0x16];
      /// @brief Field SByte22, offset: 0x16, size: 0x1, def value: None
      int8_t ___SByte22_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x17
      uint8_t ___SByte23_padding[0x17];
      /// @brief Field SByte23, offset: 0x17, size: 0x1, def value: None
      int8_t ___SByte23;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x17 for alignment
      uint8_t ___SByte23_padding_forAlignment[0x17];
      /// @brief Field SByte23, offset: 0x17, size: 0x1, def value: None
      int8_t ___SByte23_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___SByte24_padding[0x18];
      /// @brief Field SByte24, offset: 0x18, size: 0x1, def value: None
      int8_t ___SByte24;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___SByte24_padding_forAlignment[0x18];
      /// @brief Field SByte24, offset: 0x18, size: 0x1, def value: None
      int8_t ___SByte24_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x19
      uint8_t ___SByte25_padding[0x19];
      /// @brief Field SByte25, offset: 0x19, size: 0x1, def value: None
      int8_t ___SByte25;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x19 for alignment
      uint8_t ___SByte25_padding_forAlignment[0x19];
      /// @brief Field SByte25, offset: 0x19, size: 0x1, def value: None
      int8_t ___SByte25_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1a
      uint8_t ___SByte26_padding[0x1a];
      /// @brief Field SByte26, offset: 0x1a, size: 0x1, def value: None
      int8_t ___SByte26;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1a for alignment
      uint8_t ___SByte26_padding_forAlignment[0x1a];
      /// @brief Field SByte26, offset: 0x1a, size: 0x1, def value: None
      int8_t ___SByte26_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1b
      uint8_t ___SByte27_padding[0x1b];
      /// @brief Field SByte27, offset: 0x1b, size: 0x1, def value: None
      int8_t ___SByte27;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1b for alignment
      uint8_t ___SByte27_padding_forAlignment[0x1b];
      /// @brief Field SByte27, offset: 0x1b, size: 0x1, def value: None
      int8_t ___SByte27_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1c
      uint8_t ___SByte28_padding[0x1c];
      /// @brief Field SByte28, offset: 0x1c, size: 0x1, def value: None
      int8_t ___SByte28;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1c for alignment
      uint8_t ___SByte28_padding_forAlignment[0x1c];
      /// @brief Field SByte28, offset: 0x1c, size: 0x1, def value: None
      int8_t ___SByte28_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1d
      uint8_t ___SByte29_padding[0x1d];
      /// @brief Field SByte29, offset: 0x1d, size: 0x1, def value: None
      int8_t ___SByte29;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1d for alignment
      uint8_t ___SByte29_padding_forAlignment[0x1d];
      /// @brief Field SByte29, offset: 0x1d, size: 0x1, def value: None
      int8_t ___SByte29_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1e
      uint8_t ___SByte30_padding[0x1e];
      /// @brief Field SByte30, offset: 0x1e, size: 0x1, def value: None
      int8_t ___SByte30;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1e for alignment
      uint8_t ___SByte30_padding_forAlignment[0x1e];
      /// @brief Field SByte30, offset: 0x1e, size: 0x1, def value: None
      int8_t ___SByte30_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1f
      uint8_t ___SByte31_padding[0x1f];
      /// @brief Field SByte31, offset: 0x1f, size: 0x1, def value: None
      int8_t ___SByte31;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1f for alignment
      uint8_t ___SByte31_padding_forAlignment[0x1f];
      /// @brief Field SByte31, offset: 0x1f, size: 0x1, def value: None
      int8_t ___SByte31_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___UShort0_padding[0x0];
      /// @brief Field UShort0, offset: 0x0, size: 0x2, def value: None
      uint16_t ___UShort0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___UShort0_padding_forAlignment[0x0];
      /// @brief Field UShort0, offset: 0x0, size: 0x2, def value: None
      uint16_t ___UShort0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___UShort1_padding[0x2];
      /// @brief Field UShort1, offset: 0x2, size: 0x2, def value: None
      uint16_t ___UShort1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___UShort1_padding_forAlignment[0x2];
      /// @brief Field UShort1, offset: 0x2, size: 0x2, def value: None
      uint16_t ___UShort1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___UShort2_padding[0x4];
      /// @brief Field UShort2, offset: 0x4, size: 0x2, def value: None
      uint16_t ___UShort2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___UShort2_padding_forAlignment[0x4];
      /// @brief Field UShort2, offset: 0x4, size: 0x2, def value: None
      uint16_t ___UShort2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___UShort3_padding[0x6];
      /// @brief Field UShort3, offset: 0x6, size: 0x2, def value: None
      uint16_t ___UShort3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___UShort3_padding_forAlignment[0x6];
      /// @brief Field UShort3, offset: 0x6, size: 0x2, def value: None
      uint16_t ___UShort3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___UShort4_padding[0x8];
      /// @brief Field UShort4, offset: 0x8, size: 0x2, def value: None
      uint16_t ___UShort4;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___UShort4_padding_forAlignment[0x8];
      /// @brief Field UShort4, offset: 0x8, size: 0x2, def value: None
      uint16_t ___UShort4_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xa
      uint8_t ___UShort5_padding[0xa];
      /// @brief Field UShort5, offset: 0xa, size: 0x2, def value: None
      uint16_t ___UShort5;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xa for alignment
      uint8_t ___UShort5_padding_forAlignment[0xa];
      /// @brief Field UShort5, offset: 0xa, size: 0x2, def value: None
      uint16_t ___UShort5_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___UShort6_padding[0xc];
      /// @brief Field UShort6, offset: 0xc, size: 0x2, def value: None
      uint16_t ___UShort6;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___UShort6_padding_forAlignment[0xc];
      /// @brief Field UShort6, offset: 0xc, size: 0x2, def value: None
      uint16_t ___UShort6_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xe
      uint8_t ___UShort7_padding[0xe];
      /// @brief Field UShort7, offset: 0xe, size: 0x2, def value: None
      uint16_t ___UShort7;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xe for alignment
      uint8_t ___UShort7_padding_forAlignment[0xe];
      /// @brief Field UShort7, offset: 0xe, size: 0x2, def value: None
      uint16_t ___UShort7_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___UShort8_padding[0x10];
      /// @brief Field UShort8, offset: 0x10, size: 0x2, def value: None
      uint16_t ___UShort8;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___UShort8_padding_forAlignment[0x10];
      /// @brief Field UShort8, offset: 0x10, size: 0x2, def value: None
      uint16_t ___UShort8_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x12
      uint8_t ___UShort9_padding[0x12];
      /// @brief Field UShort9, offset: 0x12, size: 0x2, def value: None
      uint16_t ___UShort9;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x12 for alignment
      uint8_t ___UShort9_padding_forAlignment[0x12];
      /// @brief Field UShort9, offset: 0x12, size: 0x2, def value: None
      uint16_t ___UShort9_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x14
      uint8_t ___UShort10_padding[0x14];
      /// @brief Field UShort10, offset: 0x14, size: 0x2, def value: None
      uint16_t ___UShort10;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___UShort10_padding_forAlignment[0x14];
      /// @brief Field UShort10, offset: 0x14, size: 0x2, def value: None
      uint16_t ___UShort10_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x16
      uint8_t ___UShort11_padding[0x16];
      /// @brief Field UShort11, offset: 0x16, size: 0x2, def value: None
      uint16_t ___UShort11;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x16 for alignment
      uint8_t ___UShort11_padding_forAlignment[0x16];
      /// @brief Field UShort11, offset: 0x16, size: 0x2, def value: None
      uint16_t ___UShort11_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___UShort12_padding[0x18];
      /// @brief Field UShort12, offset: 0x18, size: 0x2, def value: None
      uint16_t ___UShort12;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___UShort12_padding_forAlignment[0x18];
      /// @brief Field UShort12, offset: 0x18, size: 0x2, def value: None
      uint16_t ___UShort12_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1a
      uint8_t ___UShort13_padding[0x1a];
      /// @brief Field UShort13, offset: 0x1a, size: 0x2, def value: None
      uint16_t ___UShort13;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1a for alignment
      uint8_t ___UShort13_padding_forAlignment[0x1a];
      /// @brief Field UShort13, offset: 0x1a, size: 0x2, def value: None
      uint16_t ___UShort13_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1c
      uint8_t ___UShort14_padding[0x1c];
      /// @brief Field UShort14, offset: 0x1c, size: 0x2, def value: None
      uint16_t ___UShort14;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1c for alignment
      uint8_t ___UShort14_padding_forAlignment[0x1c];
      /// @brief Field UShort14, offset: 0x1c, size: 0x2, def value: None
      uint16_t ___UShort14_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1e
      uint8_t ___UShort15_padding[0x1e];
      /// @brief Field UShort15, offset: 0x1e, size: 0x2, def value: None
      uint16_t ___UShort15;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1e for alignment
      uint8_t ___UShort15_padding_forAlignment[0x1e];
      /// @brief Field UShort15, offset: 0x1e, size: 0x2, def value: None
      uint16_t ___UShort15_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___SShort0_padding[0x0];
      /// @brief Field SShort0, offset: 0x0, size: 0x2, def value: None
      int16_t ___SShort0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___SShort0_padding_forAlignment[0x0];
      /// @brief Field SShort0, offset: 0x0, size: 0x2, def value: None
      int16_t ___SShort0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___SShort1_padding[0x2];
      /// @brief Field SShort1, offset: 0x2, size: 0x2, def value: None
      int16_t ___SShort1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___SShort1_padding_forAlignment[0x2];
      /// @brief Field SShort1, offset: 0x2, size: 0x2, def value: None
      int16_t ___SShort1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___SShort2_padding[0x4];
      /// @brief Field SShort2, offset: 0x4, size: 0x2, def value: None
      int16_t ___SShort2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___SShort2_padding_forAlignment[0x4];
      /// @brief Field SShort2, offset: 0x4, size: 0x2, def value: None
      int16_t ___SShort2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___SShort3_padding[0x6];
      /// @brief Field SShort3, offset: 0x6, size: 0x2, def value: None
      int16_t ___SShort3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___SShort3_padding_forAlignment[0x6];
      /// @brief Field SShort3, offset: 0x6, size: 0x2, def value: None
      int16_t ___SShort3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___SShort4_padding[0x8];
      /// @brief Field SShort4, offset: 0x8, size: 0x2, def value: None
      int16_t ___SShort4;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___SShort4_padding_forAlignment[0x8];
      /// @brief Field SShort4, offset: 0x8, size: 0x2, def value: None
      int16_t ___SShort4_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xa
      uint8_t ___SShort5_padding[0xa];
      /// @brief Field SShort5, offset: 0xa, size: 0x2, def value: None
      int16_t ___SShort5;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xa for alignment
      uint8_t ___SShort5_padding_forAlignment[0xa];
      /// @brief Field SShort5, offset: 0xa, size: 0x2, def value: None
      int16_t ___SShort5_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___SShort6_padding[0xc];
      /// @brief Field SShort6, offset: 0xc, size: 0x2, def value: None
      int16_t ___SShort6;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___SShort6_padding_forAlignment[0xc];
      /// @brief Field SShort6, offset: 0xc, size: 0x2, def value: None
      int16_t ___SShort6_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xe
      uint8_t ___SShort7_padding[0xe];
      /// @brief Field SShort7, offset: 0xe, size: 0x2, def value: None
      int16_t ___SShort7;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xe for alignment
      uint8_t ___SShort7_padding_forAlignment[0xe];
      /// @brief Field SShort7, offset: 0xe, size: 0x2, def value: None
      int16_t ___SShort7_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___SShort8_padding[0x10];
      /// @brief Field SShort8, offset: 0x10, size: 0x2, def value: None
      int16_t ___SShort8;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___SShort8_padding_forAlignment[0x10];
      /// @brief Field SShort8, offset: 0x10, size: 0x2, def value: None
      int16_t ___SShort8_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x12
      uint8_t ___SShort9_padding[0x12];
      /// @brief Field SShort9, offset: 0x12, size: 0x2, def value: None
      int16_t ___SShort9;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x12 for alignment
      uint8_t ___SShort9_padding_forAlignment[0x12];
      /// @brief Field SShort9, offset: 0x12, size: 0x2, def value: None
      int16_t ___SShort9_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x14
      uint8_t ___SShort10_padding[0x14];
      /// @brief Field SShort10, offset: 0x14, size: 0x2, def value: None
      int16_t ___SShort10;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___SShort10_padding_forAlignment[0x14];
      /// @brief Field SShort10, offset: 0x14, size: 0x2, def value: None
      int16_t ___SShort10_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x16
      uint8_t ___SShort11_padding[0x16];
      /// @brief Field SShort11, offset: 0x16, size: 0x2, def value: None
      int16_t ___SShort11;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x16 for alignment
      uint8_t ___SShort11_padding_forAlignment[0x16];
      /// @brief Field SShort11, offset: 0x16, size: 0x2, def value: None
      int16_t ___SShort11_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___SShort12_padding[0x18];
      /// @brief Field SShort12, offset: 0x18, size: 0x2, def value: None
      int16_t ___SShort12;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___SShort12_padding_forAlignment[0x18];
      /// @brief Field SShort12, offset: 0x18, size: 0x2, def value: None
      int16_t ___SShort12_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1a
      uint8_t ___SShort13_padding[0x1a];
      /// @brief Field SShort13, offset: 0x1a, size: 0x2, def value: None
      int16_t ___SShort13;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1a for alignment
      uint8_t ___SShort13_padding_forAlignment[0x1a];
      /// @brief Field SShort13, offset: 0x1a, size: 0x2, def value: None
      int16_t ___SShort13_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1c
      uint8_t ___SShort14_padding[0x1c];
      /// @brief Field SShort14, offset: 0x1c, size: 0x2, def value: None
      int16_t ___SShort14;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1c for alignment
      uint8_t ___SShort14_padding_forAlignment[0x1c];
      /// @brief Field SShort14, offset: 0x1c, size: 0x2, def value: None
      int16_t ___SShort14_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1e
      uint8_t ___SShort15_padding[0x1e];
      /// @brief Field SShort15, offset: 0x1e, size: 0x2, def value: None
      int16_t ___SShort15;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1e for alignment
      uint8_t ___SShort15_padding_forAlignment[0x1e];
      /// @brief Field SShort15, offset: 0x1e, size: 0x2, def value: None
      int16_t ___SShort15_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___UInt0_padding[0x0];
      /// @brief Field UInt0, offset: 0x0, size: 0x4, def value: None
      uint32_t ___UInt0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___UInt0_padding_forAlignment[0x0];
      /// @brief Field UInt0, offset: 0x0, size: 0x4, def value: None
      uint32_t ___UInt0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___UInt1_padding[0x4];
      /// @brief Field UInt1, offset: 0x4, size: 0x4, def value: None
      uint32_t ___UInt1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___UInt1_padding_forAlignment[0x4];
      /// @brief Field UInt1, offset: 0x4, size: 0x4, def value: None
      uint32_t ___UInt1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___UInt2_padding[0x8];
      /// @brief Field UInt2, offset: 0x8, size: 0x4, def value: None
      uint32_t ___UInt2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___UInt2_padding_forAlignment[0x8];
      /// @brief Field UInt2, offset: 0x8, size: 0x4, def value: None
      uint32_t ___UInt2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___UInt3_padding[0xc];
      /// @brief Field UInt3, offset: 0xc, size: 0x4, def value: None
      uint32_t ___UInt3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___UInt3_padding_forAlignment[0xc];
      /// @brief Field UInt3, offset: 0xc, size: 0x4, def value: None
      uint32_t ___UInt3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___UInt4_padding[0x10];
      /// @brief Field UInt4, offset: 0x10, size: 0x4, def value: None
      uint32_t ___UInt4;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___UInt4_padding_forAlignment[0x10];
      /// @brief Field UInt4, offset: 0x10, size: 0x4, def value: None
      uint32_t ___UInt4_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x14
      uint8_t ___UInt5_padding[0x14];
      /// @brief Field UInt5, offset: 0x14, size: 0x4, def value: None
      uint32_t ___UInt5;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___UInt5_padding_forAlignment[0x14];
      /// @brief Field UInt5, offset: 0x14, size: 0x4, def value: None
      uint32_t ___UInt5_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___UInt6_padding[0x18];
      /// @brief Field UInt6, offset: 0x18, size: 0x4, def value: None
      uint32_t ___UInt6;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___UInt6_padding_forAlignment[0x18];
      /// @brief Field UInt6, offset: 0x18, size: 0x4, def value: None
      uint32_t ___UInt6_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1c
      uint8_t ___UInt7_padding[0x1c];
      /// @brief Field UInt7, offset: 0x1c, size: 0x4, def value: None
      uint32_t ___UInt7;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1c for alignment
      uint8_t ___UInt7_padding_forAlignment[0x1c];
      /// @brief Field UInt7, offset: 0x1c, size: 0x4, def value: None
      uint32_t ___UInt7_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___SInt0_padding[0x0];
      /// @brief Field SInt0, offset: 0x0, size: 0x4, def value: None
      int32_t ___SInt0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___SInt0_padding_forAlignment[0x0];
      /// @brief Field SInt0, offset: 0x0, size: 0x4, def value: None
      int32_t ___SInt0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___SInt1_padding[0x4];
      /// @brief Field SInt1, offset: 0x4, size: 0x4, def value: None
      int32_t ___SInt1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___SInt1_padding_forAlignment[0x4];
      /// @brief Field SInt1, offset: 0x4, size: 0x4, def value: None
      int32_t ___SInt1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___SInt2_padding[0x8];
      /// @brief Field SInt2, offset: 0x8, size: 0x4, def value: None
      int32_t ___SInt2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___SInt2_padding_forAlignment[0x8];
      /// @brief Field SInt2, offset: 0x8, size: 0x4, def value: None
      int32_t ___SInt2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___SInt3_padding[0xc];
      /// @brief Field SInt3, offset: 0xc, size: 0x4, def value: None
      int32_t ___SInt3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___SInt3_padding_forAlignment[0xc];
      /// @brief Field SInt3, offset: 0xc, size: 0x4, def value: None
      int32_t ___SInt3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___SInt4_padding[0x10];
      /// @brief Field SInt4, offset: 0x10, size: 0x4, def value: None
      int32_t ___SInt4;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___SInt4_padding_forAlignment[0x10];
      /// @brief Field SInt4, offset: 0x10, size: 0x4, def value: None
      int32_t ___SInt4_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x14
      uint8_t ___SInt5_padding[0x14];
      /// @brief Field SInt5, offset: 0x14, size: 0x4, def value: None
      int32_t ___SInt5;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___SInt5_padding_forAlignment[0x14];
      /// @brief Field SInt5, offset: 0x14, size: 0x4, def value: None
      int32_t ___SInt5_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___SInt6_padding[0x18];
      /// @brief Field SInt6, offset: 0x18, size: 0x4, def value: None
      int32_t ___SInt6;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___SInt6_padding_forAlignment[0x18];
      /// @brief Field SInt6, offset: 0x18, size: 0x4, def value: None
      int32_t ___SInt6_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1c
      uint8_t ___SInt7_padding[0x1c];
      /// @brief Field SInt7, offset: 0x1c, size: 0x4, def value: None
      int32_t ___SInt7;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1c for alignment
      uint8_t ___SInt7_padding_forAlignment[0x1c];
      /// @brief Field SInt7, offset: 0x1c, size: 0x4, def value: None
      int32_t ___SInt7_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___ULong0_padding[0x0];
      /// @brief Field ULong0, offset: 0x0, size: 0x8, def value: None
      uint64_t ___ULong0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___ULong0_padding_forAlignment[0x0];
      /// @brief Field ULong0, offset: 0x0, size: 0x8, def value: None
      uint64_t ___ULong0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___ULong1_padding[0x8];
      /// @brief Field ULong1, offset: 0x8, size: 0x8, def value: None
      uint64_t ___ULong1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___ULong1_padding_forAlignment[0x8];
      /// @brief Field ULong1, offset: 0x8, size: 0x8, def value: None
      uint64_t ___ULong1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___ULong2_padding[0x10];
      /// @brief Field ULong2, offset: 0x10, size: 0x8, def value: None
      uint64_t ___ULong2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___ULong2_padding_forAlignment[0x10];
      /// @brief Field ULong2, offset: 0x10, size: 0x8, def value: None
      uint64_t ___ULong2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___ULong3_padding[0x18];
      /// @brief Field ULong3, offset: 0x18, size: 0x8, def value: None
      uint64_t ___ULong3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___ULong3_padding_forAlignment[0x18];
      /// @brief Field ULong3, offset: 0x18, size: 0x8, def value: None
      uint64_t ___ULong3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___SLong0_padding[0x0];
      /// @brief Field SLong0, offset: 0x0, size: 0x8, def value: None
      int64_t ___SLong0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___SLong0_padding_forAlignment[0x0];
      /// @brief Field SLong0, offset: 0x0, size: 0x8, def value: None
      int64_t ___SLong0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___SLong1_padding[0x8];
      /// @brief Field SLong1, offset: 0x8, size: 0x8, def value: None
      int64_t ___SLong1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___SLong1_padding_forAlignment[0x8];
      /// @brief Field SLong1, offset: 0x8, size: 0x8, def value: None
      int64_t ___SLong1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___SLong2_padding[0x10];
      /// @brief Field SLong2, offset: 0x10, size: 0x8, def value: None
      int64_t ___SLong2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___SLong2_padding_forAlignment[0x10];
      /// @brief Field SLong2, offset: 0x10, size: 0x8, def value: None
      int64_t ___SLong2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___SLong3_padding[0x18];
      /// @brief Field SLong3, offset: 0x18, size: 0x8, def value: None
      int64_t ___SLong3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___SLong3_padding_forAlignment[0x18];
      /// @brief Field SLong3, offset: 0x18, size: 0x8, def value: None
      int64_t ___SLong3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Float0_padding[0x0];
      /// @brief Field Float0, offset: 0x0, size: 0x4, def value: None
      float_t ___Float0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Float0_padding_forAlignment[0x0];
      /// @brief Field Float0, offset: 0x0, size: 0x4, def value: None
      float_t ___Float0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___Float1_padding[0x4];
      /// @brief Field Float1, offset: 0x4, size: 0x4, def value: None
      float_t ___Float1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___Float1_padding_forAlignment[0x4];
      /// @brief Field Float1, offset: 0x4, size: 0x4, def value: None
      float_t ___Float1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___Float2_padding[0x8];
      /// @brief Field Float2, offset: 0x8, size: 0x4, def value: None
      float_t ___Float2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___Float2_padding_forAlignment[0x8];
      /// @brief Field Float2, offset: 0x8, size: 0x4, def value: None
      float_t ___Float2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___Float3_padding[0xc];
      /// @brief Field Float3, offset: 0xc, size: 0x4, def value: None
      float_t ___Float3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___Float3_padding_forAlignment[0xc];
      /// @brief Field Float3, offset: 0xc, size: 0x4, def value: None
      float_t ___Float3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___Float4_padding[0x10];
      /// @brief Field Float4, offset: 0x10, size: 0x4, def value: None
      float_t ___Float4;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___Float4_padding_forAlignment[0x10];
      /// @brief Field Float4, offset: 0x10, size: 0x4, def value: None
      float_t ___Float4_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x14
      uint8_t ___Float5_padding[0x14];
      /// @brief Field Float5, offset: 0x14, size: 0x4, def value: None
      float_t ___Float5;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___Float5_padding_forAlignment[0x14];
      /// @brief Field Float5, offset: 0x14, size: 0x4, def value: None
      float_t ___Float5_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___Float6_padding[0x18];
      /// @brief Field Float6, offset: 0x18, size: 0x4, def value: None
      float_t ___Float6;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___Float6_padding_forAlignment[0x18];
      /// @brief Field Float6, offset: 0x18, size: 0x4, def value: None
      float_t ___Float6_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1c
      uint8_t ___Float7_padding[0x1c];
      /// @brief Field Float7, offset: 0x1c, size: 0x4, def value: None
      float_t ___Float7;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1c for alignment
      uint8_t ___Float7_padding_forAlignment[0x1c];
      /// @brief Field Float7, offset: 0x1c, size: 0x4, def value: None
      float_t ___Float7_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Double0_padding[0x0];
      /// @brief Field Double0, offset: 0x0, size: 0x8, def value: None
      double_t ___Double0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Double0_padding_forAlignment[0x0];
      /// @brief Field Double0, offset: 0x0, size: 0x8, def value: None
      double_t ___Double0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___Double1_padding[0x8];
      /// @brief Field Double1, offset: 0x8, size: 0x8, def value: None
      double_t ___Double1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___Double1_padding_forAlignment[0x8];
      /// @brief Field Double1, offset: 0x8, size: 0x8, def value: None
      double_t ___Double1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___Double2_padding[0x10];
      /// @brief Field Double2, offset: 0x10, size: 0x8, def value: None
      double_t ___Double2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___Double2_padding_forAlignment[0x10];
      /// @brief Field Double2, offset: 0x10, size: 0x8, def value: None
      double_t ___Double2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___Double3_padding[0x18];
      /// @brief Field Double3, offset: 0x18, size: 0x8, def value: None
      double_t ___Double3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___Double3_padding_forAlignment[0x18];
      /// @brief Field Double3, offset: 0x18, size: 0x8, def value: None
      double_t ___Double3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Lo128_padding[0x0];
      /// @brief Field Lo128, offset: 0x0, size: 0x10, def value: None
      ::Unity::Burst::Intrinsics::v128 ___Lo128;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Lo128_padding_forAlignment[0x0];
      /// @brief Field Lo128, offset: 0x0, size: 0x10, def value: None
      ::Unity::Burst::Intrinsics::v128 ___Lo128_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___Hi128_padding[0x10];
      /// @brief Field Hi128, offset: 0x10, size: 0x10, def value: None
      ::Unity::Burst::Intrinsics::v128 ___Hi128;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___Hi128_padding_forAlignment[0x10];
      /// @brief Field Hi128, offset: 0x10, size: 0x10, def value: None
      ::Unity::Burst::Intrinsics::v128 ___Hi128_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::v256, 0x20>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::v256, "Unity.Burst.Intrinsics", "v256");
