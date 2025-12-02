#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IDataSourceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDataSourceProvider)
namespace System {
class Object;
}
namespace Unity::Properties {
struct PropertyPath;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IDataSourceProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IDataSourceProvider);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IDataSourceProvider
class CORDL_TYPE IDataSourceProvider {
public:
  // Declarations
  __declspec(property(get = get_dataSource)) ::System::Object* dataSource;

  __declspec(property(get = get_dataSourcePath)) ::Unity::Properties::PropertyPath dataSourcePath;

  /// @brief Method get_dataSource, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_dataSource();

  /// @brief Method get_dataSourcePath, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::PropertyPath get_dataSourcePath();

  // Ctor Parameters [CppParam { name: "", ty: "IDataSourceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDataSourceProvider(IDataSourceProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4057 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IDataSourceProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IDataSourceProvider*, "UnityEngine.UIElements", "IDataSourceProvider");
