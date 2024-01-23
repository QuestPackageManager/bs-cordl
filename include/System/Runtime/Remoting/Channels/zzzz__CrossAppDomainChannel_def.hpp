#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: System.Runtime.Remoting.Channels::CrossAppDomainChannel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3116))
// CS Name: ::System.Runtime.Remoting.Channels::CrossAppDomainChannel*
class CORDL_TYPE CrossAppDomainChannel : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_lock, put = setStaticF_s_lock))::System::Object* s_lock;

  __declspec(property(get = get_ChannelName))::StringW ChannelName;

  __declspec(property(get = get_ChannelPriority)) int32_t ChannelPriority;

  __declspec(property(get = get_ChannelData))::System::Object* ChannelData;

  /// @brief Convert operator to "::System::Runtime::Remoting::Channels::IChannel"
  constexpr operator ::System::Runtime::Remoting::Channels::IChannel*() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Channels::IChannel"
  constexpr ::System::Runtime::Remoting::Channels::IChannel* i___System__Runtime__Remoting__Channels__IChannel() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Channels::IChannelSender"
  constexpr operator ::System::Runtime::Remoting::Channels::IChannelSender*() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Channels::IChannelSender"
  constexpr ::System::Runtime::Remoting::Channels::IChannelSender* i___System__Runtime__Remoting__Channels__IChannelSender() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Channels::IChannelReceiver"
  constexpr operator ::System::Runtime::Remoting::Channels::IChannelReceiver*() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Channels::IChannelReceiver"
  constexpr ::System::Runtime::Remoting::Channels::IChannelReceiver* i___System__Runtime__Remoting__Channels__IChannelReceiver() noexcept;

  static inline void setStaticF_s_lock(::System::Object* value);

  static inline ::System::Object* getStaticF_s_lock();

  /// @brief Method RegisterCrossAppDomainChannel, addr 0x24a2ba8, size 0x144, virtual false, abstract: false, final false
  static inline void RegisterCrossAppDomainChannel();

  /// @brief Method get_ChannelName, addr 0x24a2cf4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_ChannelName();

  /// @brief Method get_ChannelPriority, addr 0x24a2d34, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ChannelPriority();

  /// @brief Method get_ChannelData, addr 0x24a2d3c, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Object* get_ChannelData();

  /// @brief Method StartListening, addr 0x24a2da8, size 0x4, virtual true, abstract: false, final false
  inline void StartListening(::System::Object* data);

  /// @brief Method CreateMessageSink, addr 0x24a2dac, size 0x180, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessageSink* CreateMessageSink(::StringW url, ::System::Object* data, ByRef<::StringW> uri);

  static inline ::System::Runtime::Remoting::Channels::CrossAppDomainChannel* New_ctor();

  /// @brief Method .ctor, addr 0x24a2cec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrossAppDomainChannel(CrossAppDomainChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrossAppDomainChannel(CrossAppDomainChannel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrossAppDomainChannel();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Channels::CrossAppDomainChannel, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::CrossAppDomainChannel);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::CrossAppDomainChannel*, "System.Runtime.Remoting.Channels", "CrossAppDomainChannel");
