#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDesignerHost)
namespace System::ComponentModel::Design {
class IDesigner;
}
namespace System::ComponentModel {
class IComponent;
}
namespace System {
class IServiceProvider;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class IDesignerHost;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::IDesignerHost);
// Type: System.ComponentModel.Design::IDesignerHost
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel::Design {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7509))
// CS Name: ::System.ComponentModel.Design::IDesignerHost*
class CORDL_TYPE IDesignerHost {
public:
  // Declarations
  __declspec(property(get = get_RootComponent))::System::ComponentModel::IComponent* RootComponent;

  /// @brief Convert operator to "::System::IServiceProvider"
  constexpr operator ::System::IServiceProvider*() noexcept;

  /// @brief Convert to "::System::IServiceProvider"
  constexpr ::System::IServiceProvider* i___System__IServiceProvider() noexcept;

  /// @brief Method get_RootComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::IComponent* get_RootComponent();

  /// @brief Method GetDesigner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::Design::IDesigner* GetDesigner(::System::ComponentModel::IComponent* component);

  // Ctor Parameters [CppParam { name: "", ty: "IDesignerHost", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDesignerHost(IDesignerHost&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDesignerHost", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDesignerHost(IDesignerHost const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::IDesignerHost);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::IDesignerHost*, "System.ComponentModel.Design", "IDesignerHost");
