#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Contexts/IDynamicProperty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IDynamicProperty)
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IDynamicProperty;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::IDynamicProperty);
// Dependencies
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// CS Name: System.Runtime.Remoting.Contexts.IDynamicProperty
class CORDL_TYPE IDynamicProperty {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method get_Name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  // Ctor Parameters [CppParam { name: "", ty: "IDynamicProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDynamicProperty(IDynamicProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3129 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IDynamicProperty);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IDynamicProperty*, "System.Runtime.Remoting.Contexts", "IDynamicProperty");
