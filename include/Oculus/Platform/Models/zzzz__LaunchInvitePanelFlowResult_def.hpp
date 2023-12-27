#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LaunchInvitePanelFlowResult)
namespace Oculus::Platform::Models {
class UserList;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchInvitePanelFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LaunchInvitePanelFlowResult);
// Type: Oculus.Platform.Models::LaunchInvitePanelFlowResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13444))
// CS Name: ::Oculus.Platform.Models::LaunchInvitePanelFlowResult*
class CORDL_TYPE LaunchInvitePanelFlowResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field InvitedUsers, offset 0x10, size 0x8
  __declspec(property(get = __get_InvitedUsers, put = __set_InvitedUsers))::Oculus::Platform::Models::UserList* InvitedUsers;

  constexpr ::Oculus::Platform::Models::UserList*& __get_InvitedUsers();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& __get_InvitedUsers() const;

  constexpr void __set_InvitedUsers(::Oculus::Platform::Models::UserList* value);

  static inline ::Oculus::Platform::Models::LaunchInvitePanelFlowResult* New_ctor(void* o);

  /// @brief Method .ctor addr 0x2706664 size 0xb0 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "LaunchInvitePanelFlowResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LaunchInvitePanelFlowResult(LaunchInvitePanelFlowResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LaunchInvitePanelFlowResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LaunchInvitePanelFlowResult(LaunchInvitePanelFlowResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LaunchInvitePanelFlowResult();

public:
  /// @brief Field InvitedUsers, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___InvitedUsers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LaunchInvitePanelFlowResult, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LaunchInvitePanelFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchInvitePanelFlowResult*, "Oculus.Platform.Models", "LaunchInvitePanelFlowResult");
