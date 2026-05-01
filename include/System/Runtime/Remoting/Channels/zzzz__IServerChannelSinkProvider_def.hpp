#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/IServerChannelSinkProvider.hpp"
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
// Dependencies
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// CS Name: System.Runtime.Remoting.Channels.IServerChannelSinkProvider
class CORDL_TYPE IServerChannelSinkProvider {
public:
  // Declarations
  __declspec(property(put = set_Next)) ::System::Runtime::Remoting::Channels::IServerChannelSinkProvider* Next;

  /// @brief Method set_Next, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Next(::System::Runtime::Remoting::Channels::IServerChannelSinkProvider* value);

  // Ctor Parameters [CppParam { name: "", ty: "IServerChannelSinkProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IServerChannelSinkProvider(IServerChannelSinkProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3143 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::IServerChannelSinkProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::IServerChannelSinkProvider*, "System.Runtime.Remoting.Channels", "IServerChannelSinkProvider");
