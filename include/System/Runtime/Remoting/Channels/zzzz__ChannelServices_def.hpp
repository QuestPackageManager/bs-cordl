#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/ChannelServices.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ChannelServices)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IList;
}
namespace System::Runtime::Remoting::Channels {
class IChannelSender;
}
namespace System::Runtime::Remoting::Channels {
class IChannel;
}
namespace System::Runtime::Remoting::Contexts {
class CrossContextChannel;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class ReturnMessage;
}
namespace System::Runtime::Remoting {
class ChannelData;
}
namespace System::Runtime::Remoting {
class ProviderData;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class ChannelServices;
}
// Write type traits
MARK_REF_T(::System::Runtime::Remoting::Channels::ChannelServices*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Remoting::Channels::ChannelServices*, "System.Runtime.Remoting.Channels", "ChannelServices");
// Dependencies System.Object
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// CS Name: System.Runtime.Remoting.Channels.ChannelServices
class CORDL_TYPE ChannelServices : public ::System::Object {
public:
  // Declarations
  /// @brief Field CrossContextUrl, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CrossContextUrl, put = setStaticF_CrossContextUrl)) ::StringW CrossContextUrl;

  /// @brief Field _crossContextSink, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__crossContextSink, put = setStaticF__crossContextSink)) ::System::Runtime::Remoting::Contexts::CrossContextChannel* _crossContextSink;

  /// @brief Field delayedClientChannels, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_delayedClientChannels, put = setStaticF_delayedClientChannels)) ::System::Collections::ArrayList* delayedClientChannels;

  /// @brief Field oldStartModeTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_oldStartModeTypes, put = setStaticF_oldStartModeTypes)) ::System::Collections::IList* oldStartModeTypes;

  /// @brief Field registeredChannels, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_registeredChannels, put = setStaticF_registeredChannels)) ::System::Collections::ArrayList* registeredChannels;

  /// @brief Method CheckIncomingMessage, addr 0x5b38b44, size 0x2b0, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::ReturnMessage* CheckIncomingMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method CheckReturnMessage, addr 0x5b38df4, size 0x1e4, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::IMessage* CheckReturnMessage(::System::Runtime::Remoting::Messaging::IMessage* callMsg,
                                                                                     ::System::Runtime::Remoting::Messaging::IMessage* retMsg);

  /// @brief Method CreateClientChannelSinkChain, addr 0x5b3711c, size 0x220, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::IMessageSink* CreateClientChannelSinkChain(::System::Runtime::Remoting::Channels::IChannelSender* sender, ::StringW url,
                                                                                                   ::ArrayW<::System::Object*> channelDataArray, ::by_ref<::StringW> objectUri);

  /// @brief Method CreateClientChannelSinkChain, addr 0x5b2a7bc, size 0x7b4, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::IMessageSink* CreateClientChannelSinkChain(::StringW url, ::System::Object* remoteChannelData, ::by_ref<::StringW> objectUri);

  /// @brief Method CreateProvider, addr 0x5b3879c, size 0x2fc, virtual false, abstract: false, final false
  static inline ::System::Object* CreateProvider(::System::Runtime::Remoting::ProviderData* prov);

  /// @brief Method GetCurrentChannelInfo, addr 0x5b38fe0, size 0x4e4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*> GetCurrentChannelInfo();

  /// @brief Method IsLocalCall, addr 0x5b38fd8, size 0x8, virtual false, abstract: false, final false
  static inline bool IsLocalCall(::System::Runtime::Remoting::Messaging::IMessage* callMsg);

  /// @brief Method RegisterChannel, addr 0x5b3733c, size 0x5c, virtual false, abstract: false, final false
  static inline void RegisterChannel(::System::Runtime::Remoting::Channels::IChannel* chnl);

  /// @brief Method RegisterChannel, addr 0x5b37398, size 0x81c, virtual false, abstract: false, final false
  static inline void RegisterChannel(::System::Runtime::Remoting::Channels::IChannel* chnl, bool ensureSecurity);

  /// @brief Method RegisterChannelConfig, addr 0x5b37bb4, size 0xbe8, virtual false, abstract: false, final false
  static inline void RegisterChannelConfig(::System::Runtime::Remoting::ChannelData* channel);

  /// @brief Method SyncDispatchMessage, addr 0x5b38a98, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::IMessage* SyncDispatchMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  static inline ::StringW getStaticF_CrossContextUrl();

  static inline ::System::Runtime::Remoting::Contexts::CrossContextChannel* getStaticF__crossContextSink();

  static inline ::System::Collections::ArrayList* getStaticF_delayedClientChannels();

  static inline ::System::Collections::IList* getStaticF_oldStartModeTypes();

  static inline ::System::Collections::ArrayList* getStaticF_registeredChannels();

  /// @brief Method get_CrossContextChannel, addr 0x5b370c0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Contexts::CrossContextChannel* get_CrossContextChannel();

  static inline void setStaticF_CrossContextUrl(::StringW value);

  static inline void setStaticF__crossContextSink(::System::Runtime::Remoting::Contexts::CrossContextChannel* value);

  static inline void setStaticF_delayedClientChannels(::System::Collections::ArrayList* value);

  static inline void setStaticF_oldStartModeTypes(::System::Collections::IList* value);

  static inline void setStaticF_registeredChannels(::System::Collections::ArrayList* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChannelServices();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChannelServices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChannelServices(ChannelServices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChannelServices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChannelServices(ChannelServices const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3130 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Remoting::Channels::ChannelServices) == 0x10, "Size mismatch!");

} // namespace System::Runtime::Remoting::Channels
