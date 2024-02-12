#pragma once
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
// Type: UnityEngine::HideFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8943))
// CS Name: ::UnityEngine::HideFlags
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HideFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HideFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::HideFlags const None;

  /// @brief Field HideInHierarchy value: static_cast<int32_t>(0x1)
  static ::UnityEngine::HideFlags const HideInHierarchy;

  /// @brief Field HideInInspector value: static_cast<int32_t>(0x2)
  static ::UnityEngine::HideFlags const HideInInspector;

  /// @brief Field DontSaveInEditor value: static_cast<int32_t>(0x4)
  static ::UnityEngine::HideFlags const DontSaveInEditor;

  /// @brief Field NotEditable value: static_cast<int32_t>(0x8)
  static ::UnityEngine::HideFlags const NotEditable;

  /// @brief Field DontSaveInBuild value: static_cast<int32_t>(0x10)
  static ::UnityEngine::HideFlags const DontSaveInBuild;

  /// @brief Field DontUnloadUnusedAsset value: static_cast<int32_t>(0x20)
  static ::UnityEngine::HideFlags const DontUnloadUnusedAsset;

  /// @brief Field DontSave value: static_cast<int32_t>(0x34)
  static ::UnityEngine::HideFlags const DontSave;

  /// @brief Field HideAndDontSave value: static_cast<int32_t>(0x3d)
  static ::UnityEngine::HideFlags const HideAndDontSave;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HideFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::HideFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HideFlags, "UnityEngine", "HideFlags");
