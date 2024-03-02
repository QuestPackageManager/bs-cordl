#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITypeDescriptorContext)
namespace System::ComponentModel {
class IContainer;
}
namespace System {
class IServiceProvider;
}
// Forward declare root types
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ITypeDescriptorContext);
// Type: System.ComponentModel::ITypeDescriptorContext
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ITypeDescriptorContext*
class CORDL_TYPE ITypeDescriptorContext {
public:
  // Declarations
  __declspec(property(get = get_Container))::System::ComponentModel::IContainer* Container;

  /// @brief Convert operator to "::System::IServiceProvider"
  constexpr operator ::System::IServiceProvider*() noexcept;

  /// @brief Method get_Container, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::IContainer* get_Container();

  /// @brief Convert to "::System::IServiceProvider"
  constexpr ::System::IServiceProvider* i___System__IServiceProvider() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ITypeDescriptorContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITypeDescriptorContext(ITypeDescriptorContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITypeDescriptorContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITypeDescriptorContext(ITypeDescriptorContext const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ITypeDescriptorContext);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ITypeDescriptorContext*, "System.ComponentModel", "ITypeDescriptorContext");
