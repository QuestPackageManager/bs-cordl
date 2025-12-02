#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/CrossAppDomainChannel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrossAppDomainChannel)
namespace System::Runtime::Remoting::Channels {
class IChannelReceiver;
}
namespace System::Runtime::Remoting::Channels {
class IChannelSender;
}
namespace System::Runtime::Remoting::Channels {
class IChannel;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class CrossAppDomainChannel;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::CrossAppDomainChannel);
// Dependencies System.Object
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// CS Name: System.Runtime.Remoting.Channels.CrossAppDomainChannel
class CORDL_TYPE CrossAppDomainChannel : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ChannelData)) ::System::Object* ChannelData;

  __declspec(property(get = get_ChannelName)) ::StringW ChannelName;

  __declspec(property(get = get_ChannelPriority)) int32_t ChannelPriority;

  /// @brief Field s_lock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_lock, put = setStaticF_s_lock)) ::System::Object* s_lock;

  /// @brief Convert operator to "::System::Runtime::Remoting::Channels::IChannel"
  constexpr operator ::System::Runtime::Remoting::Channels::IChannel*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Channels::IChannelReceiver"
  constexpr operator ::System::Runtime::Remoting::Channels::IChannelReceiver*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Channels::IChannelSender"
  constexpr operator ::System::Runtime::Remoting::Channels::IChannelSender*() noexcept;

  /// @brief Method CreateMessageSink, addr 0x5925178, size 0x188, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessageSink* CreateMessageSink(::StringW url, ::System::Object* data, ::ByRef<::StringW> uri);

  static inline ::System::Runtime::Remoting::Channels::CrossAppDomainChannel* New_ctor();

  /// @brief Method RegisterCrossAppDomainChannel, addr 0x5917398, size 0x130, virtual false, abstract: false, final false
  static inline void RegisterCrossAppDomainChannel();

  /// @brief Method StartListening, addr 0x5925174, size 0x4, virtual true, abstract: false, final false
  inline void StartListening(::System::Object* data);

  /// @brief Method .ctor, addr 0x59250c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Object* getStaticF_s_lock();

  /// @brief Method get_ChannelData, addr 0x5925114, size 0x60, virtual true, abstract: false, final false
  inline ::System::Object* get_ChannelData();

  /// @brief Method get_ChannelName, addr 0x59250c8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ChannelName();

  /// @brief Method get_ChannelPriority, addr 0x592510c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ChannelPriority();

  /// @brief Convert to "::System::Runtime::Remoting::Channels::IChannel"
  constexpr ::System::Runtime::Remoting::Channels::IChannel* i___System__Runtime__Remoting__Channels__IChannel() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Channels::IChannelReceiver"
  constexpr ::System::Runtime::Remoting::Channels::IChannelReceiver* i___System__Runtime__Remoting__Channels__IChannelReceiver() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Channels::IChannelSender"
  constexpr ::System::Runtime::Remoting::Channels::IChannelSender* i___System__Runtime__Remoting__Channels__IChannelSender() noexcept;

  static inline void setStaticF_s_lock(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrossAppDomainChannel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrossAppDomainChannel(CrossAppDomainChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrossAppDomainChannel(CrossAppDomainChannel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3132 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Channels::CrossAppDomainChannel, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::CrossAppDomainChannel);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::CrossAppDomainChannel*, "System.Runtime.Remoting.Channels", "CrossAppDomainChannel");
