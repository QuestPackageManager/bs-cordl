#pragma once
// IWYU pragma private; include "UnityEngine/HideFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HideFlags)
// Forward declare root types
namespace UnityEngine {
struct HideFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::HideFlags);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.HideFlags
struct CORDL_TYPE HideFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HideFlags_Unwrapped
  enum struct __HideFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_HideInHierarchy = static_cast<int32_t>(0x1),
    __E_HideInInspector = static_cast<int32_t>(0x2),
    __E_DontSaveInEditor = static_cast<int32_t>(0x4),
    __E_NotEditable = static_cast<int32_t>(0x8),
    __E_DontSaveInBuild = static_cast<int32_t>(0x10),
    __E_DontUnloadUnusedAsset = static_cast<int32_t>(0x20),
    __E_DontSave = static_cast<int32_t>(0x34),
    __E_HideAndDontSave = static_cast<int32_t>(0x3d),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HideFlags_Unwrapped() const noexcept {
    return static_cast<__HideFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HideFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HideFlags(int32_t value__) noexcept;

  /// @brief Field DontSave value: I32(52)
  static ::UnityEngine::HideFlags const DontSave;

  /// @brief Field DontSaveInBuild value: I32(16)
  static ::UnityEngine::HideFlags const DontSaveInBuild;

  /// @brief Field DontSaveInEditor value: I32(4)
  static ::UnityEngine::HideFlags const DontSaveInEditor;

  /// @brief Field DontUnloadUnusedAsset value: I32(32)
  static ::UnityEngine::HideFlags const DontUnloadUnusedAsset;

  /// @brief Field HideAndDontSave value: I32(61)
  static ::UnityEngine::HideFlags const HideAndDontSave;

  /// @brief Field HideInHierarchy value: I32(1)
  static ::UnityEngine::HideFlags const HideInHierarchy;

  /// @brief Field HideInInspector value: I32(2)
  static ::UnityEngine::HideFlags const HideInInspector;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::HideFlags const None;

  /// @brief Field NotEditable value: I32(8)
  static ::UnityEngine::HideFlags const NotEditable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10915 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::HideFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::HideFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HideFlags, "UnityEngine", "HideFlags");
