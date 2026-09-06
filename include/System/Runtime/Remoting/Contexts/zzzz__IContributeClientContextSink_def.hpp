#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Contexts/IContributeClientContextSink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IContributeClientContextSink)
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IContributeClientContextSink;
}
// Write type traits
MARK_REF_T(::System::Runtime::Remoting::Contexts::IContributeClientContextSink*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Remoting::Contexts::IContributeClientContextSink*, "System.Runtime.Remoting.Contexts", "IContributeClientContextSink");
// [ComVisible(true)]
// Dependencies
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// CS Name: System.Runtime.Remoting.Contexts.IContributeClientContextSink
class CORDL_TYPE IContributeClientContextSink {
public:
  // Declarations
  /// @brief Method GetClientContextSink, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Runtime::Remoting::Messaging::IMessageSink* GetClientContextSink(::System::Runtime::Remoting::Messaging::IMessageSink* nextSink);

  // Ctor Parameters [CppParam { name: "", ty: "IContributeClientContextSink", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IContributeClientContextSink(IContributeClientContextSinkconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3123 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Contexts
