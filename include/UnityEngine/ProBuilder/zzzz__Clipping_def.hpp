#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Clipping.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Clipping)
namespace UnityEngine::ProBuilder {
struct __Clipping__OutCode;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct __Clipping__OutCode;
}
namespace UnityEngine::ProBuilder {
class Clipping;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::__Clipping__OutCode);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Clipping);
// Type: ::OutCode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: ::Clipping::OutCode
struct CORDL_TYPE __Clipping__OutCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Clipping__OutCode_Unwrapped
  enum struct ____Clipping__OutCode_Unwrapped : int32_t {
    __E_Inside = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
    __E_Right = static_cast<int32_t>(0x2),
    __E_Bottom = static_cast<int32_t>(0x4),
    __E_Top = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Clipping__OutCode_Unwrapped() const noexcept {
    return static_cast<____Clipping__OutCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Clipping__OutCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Clipping__OutCode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Bottom value: static_cast<int32_t>(0x4)
  static ::UnityEngine::ProBuilder::__Clipping__OutCode const Bottom;

  /// @brief Field Inside value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::__Clipping__OutCode const Inside;

  /// @brief Field Left value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::__Clipping__OutCode const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::__Clipping__OutCode const Right;

  /// @brief Field Top value: static_cast<int32_t>(0x8)
  static ::UnityEngine::ProBuilder::__Clipping__OutCode const Top;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__Clipping__OutCode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::__Clipping__OutCode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::Clipping
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::Clipping*
class CORDL_TYPE Clipping : public ::System::Object {
public:
  // Declarations
  using OutCode = ::UnityEngine::ProBuilder::__Clipping__OutCode;

  /// @brief Method ComputeOutCode, addr 0x329c914, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::__Clipping__OutCode ComputeOutCode(::UnityEngine::Rect rect, float_t x, float_t y);

  /// @brief Method RectContainsLineSegment, addr 0x329c9b0, size 0x1c0, virtual false, abstract: false, final false
  static inline bool RectContainsLineSegment(::UnityEngine::Rect rect, float_t x0, float_t y0, float_t x1, float_t y1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Clipping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Clipping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Clipping(Clipping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Clipping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Clipping(Clipping const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Clipping, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__Clipping__OutCode, "UnityEngine.ProBuilder", "Clipping/OutCode");
NEED_NO_BOX(::UnityEngine::ProBuilder::Clipping);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Clipping*, "UnityEngine.ProBuilder", "Clipping");
