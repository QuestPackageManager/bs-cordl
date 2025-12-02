#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MeshUpdateFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshUpdateFlags)
// Forward declare root types
namespace UnityEngine::Rendering {
struct MeshUpdateFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::MeshUpdateFlags);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.MeshUpdateFlags
struct CORDL_TYPE MeshUpdateFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MeshUpdateFlags_Unwrapped
  enum struct __MeshUpdateFlags_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_DontValidateIndices = static_cast<int32_t>(0x1),
    __E_DontResetBoneBounds = static_cast<int32_t>(0x2),
    __E_DontNotifyMeshUsers = static_cast<int32_t>(0x4),
    __E_DontRecalculateBounds = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MeshUpdateFlags_Unwrapped() const noexcept {
    return static_cast<__MeshUpdateFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshUpdateFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MeshUpdateFlags(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::Rendering::MeshUpdateFlags const Default;

  /// @brief Field DontNotifyMeshUsers value: I32(4)
  static ::UnityEngine::Rendering::MeshUpdateFlags const DontNotifyMeshUsers;

  /// @brief Field DontRecalculateBounds value: I32(8)
  static ::UnityEngine::Rendering::MeshUpdateFlags const DontRecalculateBounds;

  /// @brief Field DontResetBoneBounds value: I32(2)
  static ::UnityEngine::Rendering::MeshUpdateFlags const DontResetBoneBounds;

  /// @brief Field DontValidateIndices value: I32(1)
  static ::UnityEngine::Rendering::MeshUpdateFlags const DontValidateIndices;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10680 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::MeshUpdateFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::MeshUpdateFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::MeshUpdateFlags, "UnityEngine.Rendering", "MeshUpdateFlags");
