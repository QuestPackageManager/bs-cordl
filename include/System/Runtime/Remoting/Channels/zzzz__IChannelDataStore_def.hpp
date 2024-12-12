#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/IChannelDataStore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IChannelDataStore)
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class IChannelDataStore;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::IChannelDataStore);
// Dependencies
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// CS Name: System.Runtime.Remoting.Channels.IChannelDataStore
class CORDL_TYPE IChannelDataStore {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IChannelDataStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IChannelDataStore(IChannelDataStore const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3121 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::IChannelDataStore);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::IChannelDataStore*, "System.Runtime.Remoting.Channels", "IChannelDataStore");
