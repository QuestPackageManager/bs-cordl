#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(IChannelInfo)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class IChannelInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::IChannelInfo);
// Type: System.Runtime.Remoting::IChannelInfo
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3057))
// CS Name: ::System.Runtime.Remoting::IChannelInfo*
class CORDL_TYPE IChannelInfo {
public:
  // Declarations
  __declspec(property(get = get_ChannelData))::ArrayW<::System::Object*, ::Array<::System::Object*>*> ChannelData;

  /// @brief Method get_ChannelData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_ChannelData();

  // Ctor Parameters [CppParam { name: "", ty: "IChannelInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IChannelInfo(IChannelInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IChannelInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IChannelInfo(IChannelInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::IChannelInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::IChannelInfo*, "System.Runtime.Remoting", "IChannelInfo");
