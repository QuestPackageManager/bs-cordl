#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IContributeObjectSink)
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System {
class MarshalByRefObject;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IContributeObjectSink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::IContributeObjectSink);
// Type: System.Runtime.Remoting.Contexts::IContributeObjectSink
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Contexts::IContributeObjectSink*
class CORDL_TYPE IContributeObjectSink {
public:
  // Declarations
  /// @brief Method GetObjectSink, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Runtime::Remoting::Messaging::IMessageSink* GetObjectSink(::System::MarshalByRefObject* obj, ::System::Runtime::Remoting::Messaging::IMessageSink* nextSink);

  // Ctor Parameters [CppParam { name: "", ty: "IContributeObjectSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IContributeObjectSink(IContributeObjectSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IContributeObjectSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IContributeObjectSink(IContributeObjectSink const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IContributeObjectSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IContributeObjectSink*, "System.Runtime.Remoting.Contexts", "IContributeObjectSink");
