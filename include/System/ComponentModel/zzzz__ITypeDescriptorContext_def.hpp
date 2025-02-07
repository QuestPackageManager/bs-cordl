#pragma once
// IWYU pragma private; include "System/ComponentModel/ITypeDescriptorContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IServiceProvider_def.hpp"
CORDL_MODULE_EXPORT(ITypeDescriptorContext)
namespace System::ComponentModel {
class IContainer;
}
// Forward declare root types
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ITypeDescriptorContext);
// Dependencies System.IServiceProvider
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ITypeDescriptorContext
class CORDL_TYPE ITypeDescriptorContext {
public:
  // Declarations
  __declspec(property(get = get_Container)) ::System::ComponentModel::IContainer* Container;

  /// @brief Convert operator to "::System::IServiceProvider"
  constexpr operator ::System::IServiceProvider*() noexcept;

  /// @brief Method get_Container, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::IContainer* get_Container();

  /// @brief Convert to "::System::IServiceProvider"
  constexpr ::System::IServiceProvider* i___System__IServiceProvider() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ITypeDescriptorContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITypeDescriptorContext(ITypeDescriptorContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9395 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ITypeDescriptorContext);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ITypeDescriptorContext*, "System.ComponentModel", "ITypeDescriptorContext");
