#pragma once
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3148))
// CS Name: ::System.Runtime.Remoting.Messaging::CallContextRemotingData*
class CORDL_TYPE CallContextRemotingData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _logicalCallID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__logicalCallID, put = __cordl_internal_set__logicalCallID))::StringW _logicalCallID;

  __declspec(property(get = get_LogicalCallID, put = set_LogicalCallID))::StringW LogicalCallID;

  __declspec(property(get = get_HasInfo)) bool HasInfo;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  constexpr ::StringW& __cordl_internal_get__logicalCallID();

  constexpr ::StringW const& __cordl_internal_get__logicalCallID() const;

  constexpr void __cordl_internal_set__logicalCallID(::StringW value);

  /// @brief Method get_LogicalCallID, addr 0x24c95f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LogicalCallID();

  /// @brief Method set_LogicalCallID, addr 0x24c95f8, size 0x8, virtual false, abstract: false, final false
  inline void set_LogicalCallID(::StringW value);

  /// @brief Method get_HasInfo, addr 0x24c947c, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasInfo();

  /// @brief Method Clone, addr 0x24c93ac, size 0x68, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  static inline ::System::Runtime::Remoting::Messaging::CallContextRemotingData* New_ctor();

  /// @brief Method .ctor, addr 0x24c9600, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CallContextRemotingData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallContextRemotingData(CallContextRemotingData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallContextRemotingData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallContextRemotingData(CallContextRemotingData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallContextRemotingData();

public:
  /// @brief Field _logicalCallID, offset: 0x10, size: 0x8, def value: None
  ::StringW ____logicalCallID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::CallContextRemotingData, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CallContextRemotingData, ____logicalCallID) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CallContextRemotingData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CallContextRemotingData*, "System.Runtime.Remoting.Messaging", "CallContextRemotingData");
