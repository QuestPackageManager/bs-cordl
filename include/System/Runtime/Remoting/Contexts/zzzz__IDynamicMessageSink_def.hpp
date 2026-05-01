#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Contexts/IDynamicMessageSink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDynamicMessageSink)
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IDynamicMessageSink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::IDynamicMessageSink);
// Dependencies
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// CS Name: System.Runtime.Remoting.Contexts.IDynamicMessageSink
class CORDL_TYPE IDynamicMessageSink {
public:
  // Declarations
  /// @brief Method ProcessMessageFinish, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessMessageFinish(::System::Runtime::Remoting::Messaging::IMessage* replyMsg, bool bCliSide, bool bAsync);

  /// @brief Method ProcessMessageStart, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessMessageStart(::System::Runtime::Remoting::Messaging::IMessage* reqMsg, bool bCliSide, bool bAsync);

  // Ctor Parameters [CppParam { name: "", ty: "IDynamicMessageSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDynamicMessageSink(IDynamicMessageSink const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3128 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IDynamicMessageSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IDynamicMessageSink*, "System.Runtime.Remoting.Contexts", "IDynamicMessageSink");
