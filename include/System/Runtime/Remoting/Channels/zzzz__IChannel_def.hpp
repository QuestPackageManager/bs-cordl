#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IChannel)
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class IChannel;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::IChannel);
// Type: System.Runtime.Remoting.Channels::IChannel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3120))
// CS Name: ::System.Runtime.Remoting.Channels::IChannel*
class CORDL_TYPE IChannel {
public:
  // Declarations
  __declspec(property(get = get_ChannelName))::StringW ChannelName;

  __declspec(property(get = get_ChannelPriority)) int32_t ChannelPriority;

  /// @brief Method get_ChannelName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_ChannelName();

  /// @brief Method get_ChannelPriority addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_ChannelPriority();

  // Ctor Parameters [CppParam { name: "", ty: "IChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IChannel(IChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IChannel(IChannel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::IChannel);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::IChannel*, "System.Runtime.Remoting.Channels", "IChannel");
