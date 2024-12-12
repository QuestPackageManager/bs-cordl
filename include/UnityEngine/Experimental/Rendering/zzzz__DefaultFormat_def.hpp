#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/DefaultFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultFormat)
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::DefaultFormat);
// Dependencies
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: UnityEngine.Experimental.Rendering.DefaultFormat
struct CORDL_TYPE DefaultFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DefaultFormat_Unwrapped
  enum struct __DefaultFormat_Unwrapped : int32_t {
    __E_LDR = static_cast<int32_t>(0x0),
    __E_HDR = static_cast<int32_t>(0x1),
    __E_DepthStencil = static_cast<int32_t>(0x2),
    __E_Shadow = static_cast<int32_t>(0x3),
    __E_Video = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DefaultFormat_Unwrapped() const noexcept {
    return static_cast<__DefaultFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DefaultFormat(int32_t value__) noexcept;

  /// @brief Field DepthStencil value: I32(2)
  static ::UnityEngine::Experimental::Rendering::DefaultFormat const DepthStencil;

  /// @brief Field HDR value: I32(1)
  static ::UnityEngine::Experimental::Rendering::DefaultFormat const HDR;

  /// @brief Field LDR value: I32(0)
  static ::UnityEngine::Experimental::Rendering::DefaultFormat const LDR;

  /// @brief Field Shadow value: I32(3)
  static ::UnityEngine::Experimental::Rendering::DefaultFormat const Shadow;

  /// @brief Field Video value: I32(4)
  static ::UnityEngine::Experimental::Rendering::DefaultFormat const Video;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11316 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Rendering::DefaultFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::DefaultFormat, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::DefaultFormat, "UnityEngine.Experimental.Rendering", "DefaultFormat");
