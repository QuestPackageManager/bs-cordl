#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadowSamplingMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowSamplingMode)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShadowSamplingMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShadowSamplingMode);
// Type: UnityEngine.Rendering::ShadowSamplingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::ShadowSamplingMode
struct CORDL_TYPE ShadowSamplingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ShadowSamplingMode_Unwrapped
  enum struct __ShadowSamplingMode_Unwrapped : int32_t {
    __E_CompareDepths = static_cast<int32_t>(0x0),
    __E_RawDepth = static_cast<int32_t>(0x1),
    __E_None = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ShadowSamplingMode_Unwrapped() const noexcept {
    return static_cast<__ShadowSamplingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowSamplingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ShadowSamplingMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CompareDepths value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::ShadowSamplingMode const CompareDepths;

  /// @brief Field None value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::ShadowSamplingMode const None;

  /// @brief Field RawDepth value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::ShadowSamplingMode const RawDepth;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11165 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShadowSamplingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowSamplingMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShadowSamplingMode, "UnityEngine.Rendering", "ShadowSamplingMode");
