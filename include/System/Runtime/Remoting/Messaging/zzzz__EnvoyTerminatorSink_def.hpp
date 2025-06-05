#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/EnvoyTerminatorSink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvoyTerminatorSink)
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class EnvoyTerminatorSink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink);
// Dependencies System.Object, System.Runtime.Remoting.Messaging.IMessageSink
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
class CORDL_TYPE EnvoyTerminatorSink : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink* Instance;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

  /// @brief Method AsyncProcessMessage, addr 0x3cecf7c, size 0xc0, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                   ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  static inline ::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink* New_ctor();

  /// @brief Method SyncProcessMessage, addr 0x3cecec8, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method .ctor, addr 0x3ced03c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink* getStaticF_Instance();

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept;

  static inline void setStaticF_Instance(::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvoyTerminatorSink();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvoyTerminatorSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvoyTerminatorSink(EnvoyTerminatorSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvoyTerminatorSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvoyTerminatorSink(EnvoyTerminatorSink const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3162 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink*, "System.Runtime.Remoting.Messaging", "EnvoyTerminatorSink");
