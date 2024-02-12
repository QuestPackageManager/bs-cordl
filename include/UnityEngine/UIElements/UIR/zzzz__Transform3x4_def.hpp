#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Transform3x4)
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct Transform3x4;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::Transform3x4);
// Type: UnityEngine.UIElements.UIR::Transform3x4
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8990))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6683))
// CS Name: ::UnityEngine.UIElements.UIR::Transform3x4
struct CORDL_TYPE Transform3x4 {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "v0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "v1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None },
  // CppParam { name: "v2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
  constexpr Transform3x4(::UnityEngine::Vector4 v0, ::UnityEngine::Vector4 v1, ::UnityEngine::Vector4 v2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Transform3x4();

  /// @brief Field v0, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Vector4 v0;

  /// @brief Field v1, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Vector4 v1;

  /// @brief Field v2, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 v2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Transform3x4, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Transform3x4, v0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Transform3x4, v1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Transform3x4, v2) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Transform3x4, "UnityEngine.UIElements.UIR", "Transform3x4");
