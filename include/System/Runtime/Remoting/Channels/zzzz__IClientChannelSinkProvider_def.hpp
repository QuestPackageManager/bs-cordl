#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IClientChannelSinkProvider)
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class IClientChannelSinkProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::IClientChannelSinkProvider);
// Type: System.Runtime.Remoting.Channels::IClientChannelSinkProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Channels::IClientChannelSinkProvider*
class CORDL_TYPE IClientChannelSinkProvider {
public:
  // Declarations
  __declspec(property(put = set_Next))::System::Runtime::Remoting::Channels::IClientChannelSinkProvider* Next;

  /// @brief Method set_Next, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Next(::System::Runtime::Remoting::Channels::IClientChannelSinkProvider* value);

  // Ctor Parameters [CppParam { name: "", ty: "IClientChannelSinkProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IClientChannelSinkProvider(IClientChannelSinkProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IClientChannelSinkProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IClientChannelSinkProvider(IClientChannelSinkProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::IClientChannelSinkProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::IClientChannelSinkProvider*, "System.Runtime.Remoting.Channels", "IClientChannelSinkProvider");
