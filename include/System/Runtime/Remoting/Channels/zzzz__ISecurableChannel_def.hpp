#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/ISecurableChannel.hpp"
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
// Dependencies
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// CS Name: System.Runtime.Remoting.Channels.ISecurableChannel
class CORDL_TYPE ISecurableChannel {
public:
  // Declarations
  __declspec(property(put = set_IsSecured)) bool IsSecured;

  /// @brief Method set_IsSecured, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_IsSecured(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "ISecurableChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISecurableChannel(ISecurableChannel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3125 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::ISecurableChannel);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::ISecurableChannel*, "System.Runtime.Remoting.Channels", "ISecurableChannel");
