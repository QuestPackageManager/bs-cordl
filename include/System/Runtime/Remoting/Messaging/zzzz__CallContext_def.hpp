#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CallContext)
namespace System {
class Object;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CallContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::CallContext);
// Type: System.Runtime.Remoting.Messaging::CallContext
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3143))
// CS Name: ::System.Runtime.Remoting.Messaging::CallContext*
class CORDL_TYPE CallContext : public ::System::Object {
public:
  // Declarations
  static inline ::System::Runtime::Remoting::Messaging::CallContext* New_ctor();

  /// @brief Method .ctor, addr 0x24a616c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method SetCurrentCallContext, addr 0x24a6174, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Object* SetCurrentCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx);

  /// @brief Method SetLogicalCallContext, addr 0x24a617c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* SetLogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx);

  /// @brief Method LogicalGetData, addr 0x24a61c0, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Object* LogicalGetData(::StringW name);

  /// @brief Method LogicalSetData, addr 0x24a6220, size 0x68, virtual false, abstract: false, final false
  static inline void LogicalSetData(::StringW name, ::System::Object* data);

  // Ctor Parameters [CppParam { name: "", ty: "CallContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallContext(CallContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallContext(CallContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallContext();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::CallContext, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CallContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CallContext*, "System.Runtime.Remoting.Messaging", "CallContext");
