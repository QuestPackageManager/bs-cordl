#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BindingContext)
namespace System {
class Object;
}
namespace Unity::Properties {
struct PropertyPath;
}
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct BindingContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::BindingContext);
// Dependencies Unity.Properties.PropertyPath, UnityEngine.UIElements.BindingId
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.BindingContext
struct CORDL_TYPE BindingContext {
public:
  // Declarations
  __declspec(property(get = get_bindingId)) ::UnityEngine::UIElements::BindingId bindingId;

  __declspec(property(get = get_dataSource)) ::System::Object* dataSource;

  __declspec(property(get = get_dataSourcePath)) ::Unity::Properties::PropertyPath dataSourcePath;

  __declspec(property(get = get_targetElement)) ::UnityEngine::UIElements::VisualElement* targetElement;

  /// @brief Method .ctor, addr 0x69fc3d0, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* targetElement, ::ByRef<::UnityEngine::UIElements::BindingId> bindingId, ::ByRef<::Unity::Properties::PropertyPath> resolvedDataSourcePath,
                    ::System::Object* resolvedDataSource);

  /// @brief Method get_bindingId, addr 0x69fc3a8, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingId get_bindingId();

  /// @brief Method get_dataSource, addr 0x69fc3c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_dataSource();

  /// @brief Method get_dataSourcePath, addr 0x69fc3b8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Properties::PropertyPath get_dataSourcePath();

  /// @brief Method get_targetElement, addr 0x69fc3a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_targetElement();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingContext();

  // Ctor Parameters [CppParam { name: "m_TargetElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "m_BindingId", ty:
  // "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: None }, CppParam { name: "m_DataSourcePath", ty: "::Unity::Properties::PropertyPath", modifiers: "", def_value: None }, CppParam
  // { name: "m_DataSource", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr BindingContext(::UnityEngine::UIElements::VisualElement* m_TargetElement, ::UnityEngine::UIElements::BindingId m_BindingId, ::Unity::Properties::PropertyPath m_DataSourcePath,
                           ::System::Object* m_DataSource) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4023 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x138 };

  /// @brief Field m_TargetElement, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* m_TargetElement;

  /// @brief Field m_BindingId, offset: 0x8, size: 0x98, def value: None
  ::UnityEngine::UIElements::BindingId m_BindingId;

  /// @brief Field m_DataSourcePath, offset: 0xa0, size: 0x90, def value: None
  ::Unity::Properties::PropertyPath m_DataSourcePath;

  /// @brief Field m_DataSource, offset: 0x130, size: 0x8, def value: None
  ::System::Object* m_DataSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BindingContext, m_TargetElement) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindingContext, m_BindingId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindingContext, m_DataSourcePath) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindingContext, m_DataSource) == 0x130, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BindingContext, 0x138>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BindingContext, "UnityEngine.UIElements", "BindingContext");
