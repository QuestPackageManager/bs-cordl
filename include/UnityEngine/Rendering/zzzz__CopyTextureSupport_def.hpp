#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CopyTextureSupport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyTextureSupport)
// Forward declare root types
namespace UnityEngine::Rendering {
struct CopyTextureSupport;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CopyTextureSupport);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CopyTextureSupport
struct CORDL_TYPE CopyTextureSupport {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CopyTextureSupport_Unwrapped
  enum struct __CopyTextureSupport_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Basic = static_cast<int32_t>(0x1),
    __E_Copy3D = static_cast<int32_t>(0x2),
    __E_DifferentTypes = static_cast<int32_t>(0x4),
    __E_TextureToRT = static_cast<int32_t>(0x8),
    __E_RTToTexture = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CopyTextureSupport_Unwrapped() const noexcept {
    return static_cast<__CopyTextureSupport_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyTextureSupport();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CopyTextureSupport(int32_t value__) noexcept;

  /// @brief Field Basic value: I32(1)
  static ::UnityEngine::Rendering::CopyTextureSupport const Basic;

  /// @brief Field Copy3D value: I32(2)
  static ::UnityEngine::Rendering::CopyTextureSupport const Copy3D;

  /// @brief Field DifferentTypes value: I32(4)
  static ::UnityEngine::Rendering::CopyTextureSupport const DifferentTypes;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::CopyTextureSupport const None;

  /// @brief Field RTToTexture value: I32(16)
  static ::UnityEngine::Rendering::CopyTextureSupport const RTToTexture;

  /// @brief Field TextureToRT value: I32(8)
  static ::UnityEngine::Rendering::CopyTextureSupport const TextureToRT;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10724 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CopyTextureSupport, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CopyTextureSupport, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CopyTextureSupport, "UnityEngine.Rendering", "CopyTextureSupport");
