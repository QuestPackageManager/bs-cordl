#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IContextProperty)
namespace System::Runtime::Remoting::Contexts {
class Context;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IContextProperty;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::IContextProperty);
// Type: System.Runtime.Remoting.Contexts::IContextProperty
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3106))
// CS Name: ::System.Runtime.Remoting.Contexts::IContextProperty*
class CORDL_TYPE IContextProperty {
public:
  // Declarations
  __declspec(property(get = get_Name))::StringW Name;

  /// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_Name();

  /// @brief Method Freeze addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Freeze(::System::Runtime::Remoting::Contexts::Context* newContext);

  /// @brief Method IsNewContextOK addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool IsNewContextOK(::System::Runtime::Remoting::Contexts::Context* newCtx);

  // Ctor Parameters [CppParam { name: "", ty: "IContextProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IContextProperty(IContextProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IContextProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IContextProperty(IContextProperty const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IContextProperty);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IContextProperty*, "System.Runtime.Remoting.Contexts", "IContextProperty");
