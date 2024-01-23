#pragma once
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
// Type: UnityEngine.Experimental.Rendering::DefaultFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10405))
// CS Name: ::UnityEngine.Experimental.Rendering::DefaultFormat
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DefaultFormat(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultFormat();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field LDR value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Experimental::Rendering::DefaultFormat const LDR;

  /// @brief Field HDR value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Experimental::Rendering::DefaultFormat const HDR;

  /// @brief Field DepthStencil value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Experimental::Rendering::DefaultFormat const DepthStencil;

  /// @brief Field Shadow value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Experimental::Rendering::DefaultFormat const Shadow;

  /// @brief Field Video value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Experimental::Rendering::DefaultFormat const Video;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::DefaultFormat, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::DefaultFormat, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::DefaultFormat, "UnityEngine.Experimental.Rendering", "DefaultFormat");
