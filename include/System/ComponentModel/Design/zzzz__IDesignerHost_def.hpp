#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/IDesignerHost.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IServiceProvider_def.hpp"
CORDL_MODULE_EXPORT(IDesignerHost)
namespace System::ComponentModel::Design {
class IDesigner;
}
namespace System::ComponentModel {
class IComponent;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class IDesignerHost;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::IDesignerHost);
// Dependencies System.IServiceProvider
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: System.ComponentModel.Design.IDesignerHost
class CORDL_TYPE IDesignerHost {
public:
  // Declarations
  __declspec(property(get = get_RootComponent)) ::System::ComponentModel::IComponent* RootComponent;

  /// @brief Convert operator to "::System::IServiceProvider"
  constexpr operator ::System::IServiceProvider*() noexcept;

  /// @brief Method GetDesigner, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::Design::IDesigner* GetDesigner(::System::ComponentModel::IComponent* component);

  /// @brief Method get_RootComponent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::IComponent* get_RootComponent();

  /// @brief Convert to "::System::IServiceProvider"
  constexpr ::System::IServiceProvider* i___System__IServiceProvider() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDesignerHost", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDesignerHost(IDesignerHost const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9471 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::IDesignerHost);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::IDesignerHost*, "System.ComponentModel.Design", "IDesignerHost");
