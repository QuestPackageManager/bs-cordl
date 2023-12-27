#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MathfInternal)
// Forward declare root types
namespace UnityEngineInternal {
struct MathfInternal;
}
// Write type traits
MARK_VAL_T(::UnityEngineInternal::MathfInternal);
// Type: UnityEngineInternal::MathfInternal
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngineInternal {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9964))
// CS Name: ::UnityEngineInternal::MathfInternal
#pragma pack(push, 0)
struct CORDL_TYPE MathfInternal {
public:
  // Declarations
  /// @brief Field FloatMinNormal, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FloatMinNormal, put = setStaticF_FloatMinNormal)) float_t FloatMinNormal;

  /// @brief Field FloatMinDenormal, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FloatMinDenormal, put = setStaticF_FloatMinDenormal)) float_t FloatMinDenormal;

  /// @brief Field IsFlushToZeroEnabled, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_IsFlushToZeroEnabled, put = setStaticF_IsFlushToZeroEnabled)) bool IsFlushToZeroEnabled;

  static inline void setStaticF_FloatMinNormal(float_t value);

  static inline float_t getStaticF_FloatMinNormal();

  static inline void setStaticF_FloatMinDenormal(float_t value);

  static inline float_t getStaticF_FloatMinDenormal();

  static inline void setStaticF_IsFlushToZeroEnabled(bool value);

  static inline bool getStaticF_IsFlushToZeroEnabled();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MathfInternal();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::MathfInternal, 0x1>, "Size mismatch!");

} // namespace UnityEngineInternal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::MathfInternal, "UnityEngineInternal", "MathfInternal");
