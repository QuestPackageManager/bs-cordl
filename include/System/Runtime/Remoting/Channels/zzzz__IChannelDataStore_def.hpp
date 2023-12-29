#pragma once
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
// Type: System.Runtime.Remoting.Channels::IChannelDataStore
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3121))
// CS Name: ::System.Runtime.Remoting.Channels::IChannelDataStore*
class CORDL_TYPE IChannelDataStore {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IChannelDataStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IChannelDataStore(IChannelDataStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IChannelDataStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IChannelDataStore(IChannelDataStore const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::IChannelDataStore);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::IChannelDataStore*, "System.Runtime.Remoting.Channels", "IChannelDataStore");
