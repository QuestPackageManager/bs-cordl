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
struct Clipping_OutCode;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Clipping_OutCode;
}
namespace UnityEngine::ProBuilder {
class Clipping;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Clipping_OutCode);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Clipping);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.Clipping/OutCode
struct CORDL_TYPE Clipping_OutCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Clipping_OutCode_Unwrapped
  enum struct __Clipping_OutCode_Unwrapped : int32_t {
    __E_Inside = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
    __E_Right = static_cast<int32_t>(0x2),
    __E_Bottom = static_cast<int32_t>(0x4),
    __E_Top = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Clipping_OutCode_Unwrapped() const noexcept {
    return static_cast<__Clipping_OutCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Clipping_OutCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Clipping_OutCode(int32_t value__) noexcept;

  /// @brief Field Bottom value: I32(4)
  static ::UnityEngine::ProBuilder::Clipping_OutCode const Bottom;

  /// @brief Field Inside value: I32(0)
  static ::UnityEngine::ProBuilder::Clipping_OutCode const Inside;

  /// @brief Field Left value: I32(1)
  static ::UnityEngine::ProBuilder::Clipping_OutCode const Left;

  /// @brief Field Right value: I32(2)
  static ::UnityEngine::ProBuilder::Clipping_OutCode const Right;

  /// @brief Field Top value: I32(8)
  static ::UnityEngine::ProBuilder::Clipping_OutCode const Top;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14222 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Clipping_OutCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Clipping_OutCode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Clipping
class CORDL_TYPE Clipping : public ::System::Object {
public:
  // Declarations
  using OutCode = ::UnityEngine::ProBuilder::Clipping_OutCode;

  /// @brief Method ComputeOutCode, addr 0x47034a8, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Clipping_OutCode ComputeOutCode(::UnityEngine::Rect rect, float_t x, float_t y);

  /// @brief Method RectContainsLineSegment, addr 0x47034f4, size 0x1c0, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14223 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Clipping, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Clipping_OutCode, "UnityEngine.ProBuilder", "Clipping/OutCode");
NEED_NO_BOX(::UnityEngine::ProBuilder::Clipping);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Clipping*, "UnityEngine.ProBuilder", "Clipping");
