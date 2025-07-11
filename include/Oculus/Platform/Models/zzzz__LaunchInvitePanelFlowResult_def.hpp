#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LaunchInvitePanelFlowResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LaunchInvitePanelFlowResult)
namespace Oculus::Platform::Models {
class UserList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchInvitePanelFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LaunchInvitePanelFlowResult);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.LaunchInvitePanelFlowResult
class CORDL_TYPE LaunchInvitePanelFlowResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field InvitedUsers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_InvitedUsers, put = __cordl_internal_set_InvitedUsers)) ::Oculus::Platform::Models::UserList* InvitedUsers;

  static inline ::Oculus::Platform::Models::LaunchInvitePanelFlowResult* New_ctor(::System::IntPtr o);

  constexpr ::Oculus::Platform::Models::UserList* const& __cordl_internal_get_InvitedUsers() const;

  constexpr ::Oculus::Platform::Models::UserList*& __cordl_internal_get_InvitedUsers();

  constexpr void __cordl_internal_set_InvitedUsers(::Oculus::Platform::Models::UserList* value);

  /// @brief Method .ctor, addr 0x3f916c8, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LaunchInvitePanelFlowResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LaunchInvitePanelFlowResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LaunchInvitePanelFlowResult(LaunchInvitePanelFlowResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LaunchInvitePanelFlowResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LaunchInvitePanelFlowResult(LaunchInvitePanelFlowResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15535 };

  /// @brief Field InvitedUsers, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___InvitedUsers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::LaunchInvitePanelFlowResult, ___InvitedUsers) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LaunchInvitePanelFlowResult, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LaunchInvitePanelFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchInvitePanelFlowResult*, "Oculus.Platform.Models", "LaunchInvitePanelFlowResult");
