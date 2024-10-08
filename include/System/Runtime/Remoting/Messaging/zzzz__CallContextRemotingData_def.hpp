#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/CallContextRemotingData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CallContextRemotingData)
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CallContextRemotingData;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::CallContextRemotingData);
// Type: System.Runtime.Remoting.Messaging::CallContextRemotingData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::CallContextRemotingData*
class CORDL_TYPE CallContextRemotingData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HasInfo)) bool HasInfo;

  __declspec(property(get = get_LogicalCallID, put = set_LogicalCallID)) ::StringW LogicalCallID;

  /// @brief Field _logicalCallID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__logicalCallID, put = __cordl_internal_set__logicalCallID)) ::StringW _logicalCallID;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x3c71210, size 0x68, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  static inline ::System::Runtime::Remoting::Messaging::CallContextRemotingData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__logicalCallID() const;

  constexpr ::StringW& __cordl_internal_get__logicalCallID();

  constexpr void __cordl_internal_set__logicalCallID(::StringW value);

  /// @brief Method .ctor, addr 0x3c713ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_HasInfo, addr 0x3c712e0, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasInfo();

  /// @brief Method get_LogicalCallID, addr 0x3c713dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LogicalCallID();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_LogicalCallID, addr 0x3c713e4, size 0x8, virtual false, abstract: false, final false
  inline void set_LogicalCallID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallContextRemotingData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallContextRemotingData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallContextRemotingData(CallContextRemotingData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallContextRemotingData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallContextRemotingData(CallContextRemotingData const&) = delete;

  /// @brief Field _logicalCallID, offset: 0x10, size: 0x8, def value: None
  ::StringW ____logicalCallID;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3147 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::CallContextRemotingData, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CallContextRemotingData, ____logicalCallID) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CallContextRemotingData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CallContextRemotingData*, "System.Runtime.Remoting.Messaging", "CallContextRemotingData");
