#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXCameraBufferTypes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXCameraBufferTypes)
// Forward declare root types
namespace UnityEngine::VFX {
struct VFXCameraBufferTypes;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::VFXCameraBufferTypes);
// Dependencies
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VFXCameraBufferTypes
struct CORDL_TYPE VFXCameraBufferTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VFXCameraBufferTypes_Unwrapped
  enum struct __VFXCameraBufferTypes_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Depth = static_cast<int32_t>(0x1),
    __E_Color = static_cast<int32_t>(0x2),
    __E_Normal = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VFXCameraBufferTypes_Unwrapped() const noexcept {
    return static_cast<__VFXCameraBufferTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXCameraBufferTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VFXCameraBufferTypes(int32_t value__) noexcept;

  /// @brief Field Color value: I32(2)
  static ::UnityEngine::VFX::VFXCameraBufferTypes const Color;

  /// @brief Field Depth value: I32(1)
  static ::UnityEngine::VFX::VFXCameraBufferTypes const Depth;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::VFX::VFXCameraBufferTypes const None;

  /// @brief Field Normal value: I32(4)
  static ::UnityEngine::VFX::VFXCameraBufferTypes const Normal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22578 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXCameraBufferTypes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::VFX::VFXCameraBufferTypes, 0x4>, "Size mismatch!");

} // namespace UnityEngine::VFX
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VFXCameraBufferTypes, "UnityEngine.VFX", "VFXCameraBufferTypes");
