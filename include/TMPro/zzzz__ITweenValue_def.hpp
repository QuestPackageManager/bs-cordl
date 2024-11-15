#pragma once
// IWYU pragma private; include "TMPro/ITweenValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ITweenValue)
// Forward declare root types
namespace TMPro {
class ITweenValue;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::ITweenValue);
// Type: TMPro::ITweenValue
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::ITweenValue*
class CORDL_TYPE ITweenValue {
public:
  // Declarations
  __declspec(property(get = get_duration)) float_t duration;

  __declspec(property(get = get_ignoreTimeScale)) bool ignoreTimeScale;

  /// @brief Method TweenValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void TweenValue(float_t floatPercentage);

  /// @brief Method ValidTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ValidTarget();

  /// @brief Method get_duration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_duration();

  /// @brief Method get_ignoreTimeScale, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_ignoreTimeScale();

  // Ctor Parameters [CppParam { name: "", ty: "ITweenValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITweenValue(ITweenValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITweenValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITweenValue(ITweenValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14420 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace TMPro
NEED_NO_BOX(::TMPro::ITweenValue);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::ITweenValue*, "TMPro", "ITweenValue");
