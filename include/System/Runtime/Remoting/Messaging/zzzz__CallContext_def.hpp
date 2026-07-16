#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/CallContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CallContext)
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CallContext;
}
// Write type traits
MARK_REF_T(::System::Runtime::Remoting::Messaging::CallContext*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Remoting::Messaging::CallContext*, "System.Runtime.Remoting.Messaging", "CallContext");
// Dependencies System.Object
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.CallContext
class CORDL_TYPE CallContext : public ::System::Object {
public:
  // Declarations
  /// @brief Method LogicalGetData, addr 0x5b3c448, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Object* LogicalGetData(::StringW name);

  /// @brief Method LogicalSetData, addr 0x5b3c498, size 0x68, virtual false, abstract: false, final false
  static inline void LogicalSetData(::StringW name, ::System::Object* data);

  static inline ::System::Runtime::Remoting::Messaging::CallContext* New_ctor();

  /// @brief Method SetCurrentCallContext, addr 0x5b3c440, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Object* SetCurrentCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx);

  /// @brief Method SetLogicalCallContext, addr 0x5b279e4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* SetLogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx);

  /// @brief Method .ctor, addr 0x5b3c43c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallContext(CallContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallContext(CallContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3159 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Remoting::Messaging::CallContext) == 0x10, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
