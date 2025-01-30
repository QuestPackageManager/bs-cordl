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
// Dependencies
namespace TMPro {
// Is value type: false
// CS Name: TMPro.ITweenValue
class CORDL_TYPE ITweenValue {
public:
  // Declarations
  __declspec(property(get = get_duration)) float_t duration;

  __declspec(property(get = get_ignoreTimeScale)) bool ignoreTimeScale;

  /// @brief Method TweenValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void TweenValue(float_t floatPercentage);

  /// @brief Method ValidTarget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ValidTarget();

  /// @brief Method get_duration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_duration();

  /// @brief Method get_ignoreTimeScale, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_ignoreTimeScale();

  // Ctor Parameters [CppParam { name: "", ty: "ITweenValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITweenValue(ITweenValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14457 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace TMPro
NEED_NO_BOX(::TMPro::ITweenValue);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::ITweenValue*, "TMPro", "ITweenValue");
