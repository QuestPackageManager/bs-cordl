#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\IChannelInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(IChannelInfo)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class IChannelInfo;
}
// Write type traits
MARK_REF_T(::System::Runtime::Remoting::IChannelInfo*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Remoting::IChannelInfo*, "System.Runtime.Remoting", "IChannelInfo");
// Dependencies
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.IChannelInfo
class CORDL_TYPE IChannelInfo {
public:
  // Declarations
  __declspec(property(get = get_ChannelData)) ::ArrayW<::System::Object*> ChannelData;

  /// @brief Method get_ChannelData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*> get_ChannelData();

  // Ctor Parameters [CppParam { name: "", ty: "IChannelInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IChannelInfo(IChannelInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3073 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting
