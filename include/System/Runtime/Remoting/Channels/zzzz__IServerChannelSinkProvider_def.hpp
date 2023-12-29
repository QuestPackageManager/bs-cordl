#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IServerChannelSinkProvider)
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class IServerChannelSinkProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::IServerChannelSinkProvider);
// Type: System.Runtime.Remoting.Channels::IServerChannelSinkProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3126))
// CS Name: ::System.Runtime.Remoting.Channels::IServerChannelSinkProvider*
class CORDL_TYPE IServerChannelSinkProvider {
public:
  // Declarations
  __declspec(property(put = set_Next))::System::Runtime::Remoting::Channels::IServerChannelSinkProvider* Next;

  /// @brief Method set_Next addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_Next(::System::Runtime::Remoting::Channels::IServerChannelSinkProvider* value);

  // Ctor Parameters [CppParam { name: "", ty: "IServerChannelSinkProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IServerChannelSinkProvider(IServerChannelSinkProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IServerChannelSinkProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IServerChannelSinkProvider(IServerChannelSinkProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::IServerChannelSinkProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::IServerChannelSinkProvider*, "System.Runtime.Remoting.Channels", "IServerChannelSinkProvider");
