#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IContributeServerContextSink)
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IContributeServerContextSink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::IContributeServerContextSink);
// Type: System.Runtime.Remoting.Contexts::IContributeServerContextSink
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3111))
// CS Name: ::System.Runtime.Remoting.Contexts::IContributeServerContextSink*
class CORDL_TYPE IContributeServerContextSink {
public:
  // Declarations
  /// @brief Method GetServerContextSink addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Runtime::Remoting::Messaging::IMessageSink* GetServerContextSink(::System::Runtime::Remoting::Messaging::IMessageSink* nextSink);

  // Ctor Parameters [CppParam { name: "", ty: "IContributeServerContextSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IContributeServerContextSink(IContributeServerContextSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IContributeServerContextSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IContributeServerContextSink(IContributeServerContextSink const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IContributeServerContextSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IContributeServerContextSink*, "System.Runtime.Remoting.Contexts", "IContributeServerContextSink");
