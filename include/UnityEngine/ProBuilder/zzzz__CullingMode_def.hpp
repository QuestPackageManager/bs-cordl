#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/CullingMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingMode)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct CullingMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::CullingMode);
// Type: UnityEngine.ProBuilder::CullingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: ::UnityEngine.ProBuilder::CullingMode
struct CORDL_TYPE CullingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CullingMode_Unwrapped
  enum struct __CullingMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Back = static_cast<int32_t>(0x1),
    __E_Front = static_cast<int32_t>(0x2),
    __E_FrontBack = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CullingMode_Unwrapped() const noexcept {
    return static_cast<__CullingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CullingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CullingMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Back value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::CullingMode const Back;

  /// @brief Field Front value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::CullingMode const Front;

  /// @brief Field FrontBack value: static_cast<int32_t>(0x3)
  static ::UnityEngine::ProBuilder::CullingMode const FrontBack;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::CullingMode const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::CullingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::CullingMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::CullingMode, "UnityEngine.ProBuilder", "CullingMode");
