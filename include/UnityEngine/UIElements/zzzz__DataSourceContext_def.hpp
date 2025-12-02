#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataSourceContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DataSourceContext)
namespace System {
class Object;
}
namespace Unity::Properties {
struct PropertyPath;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct DataSourceContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::DataSourceContext);
// Dependencies Unity.Properties.PropertyPath
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.DataSourceContext
struct CORDL_TYPE DataSourceContext {
public:
  // Declarations
  __declspec(property(get = get_dataSource)) ::System::Object* dataSource;

  __declspec(property(get = get_dataSourcePath)) ::Unity::Properties::PropertyPath dataSourcePath;

  /// @brief Method .ctor, addr 0x6a10c80, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* dataSource, ::ByRef<::Unity::Properties::PropertyPath> dataSourcePath);

  /// @brief Method get_dataSource, addr 0x6a10c68, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_dataSource();

  /// @brief Method get_dataSourcePath, addr 0x6a10c70, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Properties::PropertyPath get_dataSourcePath();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataSourceContext();

  // Ctor Parameters [CppParam { name: "_dataSource_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_dataSourcePath_k__BackingField", ty:
  // "::Unity::Properties::PropertyPath", modifiers: "", def_value: None }]
  constexpr DataSourceContext(::System::Object* _dataSource_k__BackingField, ::Unity::Properties::PropertyPath _dataSourcePath_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4055 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  /// @brief Field <dataSource>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::System::Object* _dataSource_k__BackingField;

  /// @brief Field <dataSourcePath>k__BackingField, offset: 0x8, size: 0x90, def value: None
  ::Unity::Properties::PropertyPath _dataSourcePath_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DataSourceContext, _dataSource_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataSourceContext, _dataSourcePath_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DataSourceContext, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DataSourceContext, "UnityEngine.UIElements", "DataSourceContext");
