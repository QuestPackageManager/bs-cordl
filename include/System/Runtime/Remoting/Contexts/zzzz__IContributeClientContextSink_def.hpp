#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::IContributeClientContextSink);
// Type: System.Runtime.Remoting.Contexts::IContributeClientContextSink
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3106))
// CS Name: ::System.Runtime.Remoting.Contexts::IContributeClientContextSink*
class CORDL_TYPE IContributeClientContextSink {
public:
  // Declarations
  /// @brief Method GetClientContextSink addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Runtime::Remoting::Messaging::IMessageSink* GetClientContextSink(::System::Runtime::Remoting::Messaging::IMessageSink* nextSink);

  // Ctor Parameters [CppParam { name: "", ty: "IContributeClientContextSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IContributeClientContextSink(IContributeClientContextSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IContributeClientContextSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IContributeClientContextSink(IContributeClientContextSink const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IContributeClientContextSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IContributeClientContextSink*, "System.Runtime.Remoting.Contexts", "IContributeClientContextSink");
