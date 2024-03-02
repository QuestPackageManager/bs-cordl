#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISecurableChannel)
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class ISecurableChannel;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::ISecurableChannel);
// Type: System.Runtime.Remoting.Channels::ISecurableChannel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Channels::ISecurableChannel*
class CORDL_TYPE ISecurableChannel {
public:
  // Declarations
  __declspec(property(put = set_IsSecured)) bool IsSecured;

  /// @brief Method set_IsSecured, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_IsSecured(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "ISecurableChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISecurableChannel(ISecurableChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISecurableChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISecurableChannel(ISecurableChannel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::ISecurableChannel);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::ISecurableChannel*, "System.Runtime.Remoting.Channels", "ISecurableChannel");
