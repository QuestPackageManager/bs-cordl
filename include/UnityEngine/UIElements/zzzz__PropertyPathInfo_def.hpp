#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PropertyPathInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PropertyPathInfo)
namespace System {
class Type;
}
namespace Unity::Properties {
struct PropertyPath;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct PropertyPathInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::PropertyPathInfo);
// Dependencies Unity.Properties.PropertyPath
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.PropertyPathInfo
struct CORDL_TYPE PropertyPathInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6a794fc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Properties::PropertyPath> propertyPath, ::System::Type* type);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyPathInfo();

  // Ctor Parameters [CppParam { name: "propertyPath", ty: "::Unity::Properties::PropertyPath", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::System::Type*", modifiers: "",
  // def_value: None }]
  constexpr PropertyPathInfo(::Unity::Properties::PropertyPath propertyPath, ::System::Type* type) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4052 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  /// @brief Field propertyPath, offset: 0x0, size: 0x90, def value: None
  ::Unity::Properties::PropertyPath propertyPath;

  /// @brief Field type, offset: 0x90, size: 0x8, def value: None
  ::System::Type* type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyPathInfo, propertyPath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyPathInfo, type) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyPathInfo, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyPathInfo, "UnityEngine.UIElements", "PropertyPathInfo");
