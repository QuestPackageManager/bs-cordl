#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/Challenge.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__ChallengeCreationType_def.hpp"
#include "Oculus/Platform/zzzz__ChallengeVisibility_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Challenge)
namespace Oculus::Platform::Models {
class Leaderboard;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Challenge;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::Challenge);
// Dependencies Oculus.Platform.ChallengeCreationType, Oculus.Platform.ChallengeVisibility, System.DateTime, System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.Challenge
class CORDL_TYPE Challenge : public ::System::Object {
public:
  // Declarations
  /// @brief Field CreationType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_CreationType, put = __cordl_internal_set_CreationType)) ::Oculus::Platform::ChallengeCreationType CreationType;

  /// @brief Field Description, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Description, put = __cordl_internal_set_Description)) ::StringW Description;

  /// @brief Field EndDate, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_EndDate, put = __cordl_internal_set_EndDate)) ::System::DateTime EndDate;

  /// @brief Field InvitedUsers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_InvitedUsers, put = __cordl_internal_set_InvitedUsers)) ::Oculus::Platform::Models::UserList* InvitedUsers;

  /// @brief Field InvitedUsersOptional, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_InvitedUsersOptional, put = __cordl_internal_set_InvitedUsersOptional)) ::Oculus::Platform::Models::UserList* InvitedUsersOptional;

  /// @brief Field Leaderboard, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Leaderboard, put = __cordl_internal_set_Leaderboard)) ::Oculus::Platform::Models::Leaderboard* Leaderboard;

  /// @brief Field Participants, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_Participants, put = __cordl_internal_set_Participants)) ::Oculus::Platform::Models::UserList* Participants;

  /// @brief Field ParticipantsOptional, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_ParticipantsOptional, put = __cordl_internal_set_ParticipantsOptional)) ::Oculus::Platform::Models::UserList* ParticipantsOptional;

  /// @brief Field StartDate, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_StartDate, put = __cordl_internal_set_StartDate)) ::System::DateTime StartDate;

  /// @brief Field Title, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_Title, put = __cordl_internal_set_Title)) ::StringW Title;

  /// @brief Field Visibility, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_Visibility, put = __cordl_internal_set_Visibility)) ::Oculus::Platform::ChallengeVisibility Visibility;

  /// @brief Field ID, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cordl_ID, put = __cordl_internal_set__cordl_ID)) uint64_t _cordl_ID;

  static inline ::Oculus::Platform::Models::Challenge* New_ctor(::System::IntPtr o);

  constexpr ::Oculus::Platform::ChallengeCreationType const& __cordl_internal_get_CreationType() const;

  constexpr ::Oculus::Platform::ChallengeCreationType& __cordl_internal_get_CreationType();

  constexpr ::StringW const& __cordl_internal_get_Description() const;

  constexpr ::StringW& __cordl_internal_get_Description();

  constexpr ::System::DateTime const& __cordl_internal_get_EndDate() const;

  constexpr ::System::DateTime& __cordl_internal_get_EndDate();

  constexpr ::Oculus::Platform::Models::UserList* const& __cordl_internal_get_InvitedUsers() const;

  constexpr ::Oculus::Platform::Models::UserList*& __cordl_internal_get_InvitedUsers();

  constexpr ::Oculus::Platform::Models::UserList* const& __cordl_internal_get_InvitedUsersOptional() const;

  constexpr ::Oculus::Platform::Models::UserList*& __cordl_internal_get_InvitedUsersOptional();

  constexpr ::Oculus::Platform::Models::Leaderboard* const& __cordl_internal_get_Leaderboard() const;

  constexpr ::Oculus::Platform::Models::Leaderboard*& __cordl_internal_get_Leaderboard();

  constexpr ::Oculus::Platform::Models::UserList* const& __cordl_internal_get_Participants() const;

  constexpr ::Oculus::Platform::Models::UserList*& __cordl_internal_get_Participants();

  constexpr ::Oculus::Platform::Models::UserList* const& __cordl_internal_get_ParticipantsOptional() const;

  constexpr ::Oculus::Platform::Models::UserList*& __cordl_internal_get_ParticipantsOptional();

  constexpr ::System::DateTime const& __cordl_internal_get_StartDate() const;

  constexpr ::System::DateTime& __cordl_internal_get_StartDate();

  constexpr ::StringW const& __cordl_internal_get_Title() const;

  constexpr ::StringW& __cordl_internal_get_Title();

  constexpr ::Oculus::Platform::ChallengeVisibility const& __cordl_internal_get_Visibility() const;

  constexpr ::Oculus::Platform::ChallengeVisibility& __cordl_internal_get_Visibility();

  constexpr uint64_t const& __cordl_internal_get__cordl_ID() const;

  constexpr uint64_t& __cordl_internal_get__cordl_ID();

  constexpr void __cordl_internal_set_CreationType(::Oculus::Platform::ChallengeCreationType value);

  constexpr void __cordl_internal_set_Description(::StringW value);

  constexpr void __cordl_internal_set_EndDate(::System::DateTime value);

  constexpr void __cordl_internal_set_InvitedUsers(::Oculus::Platform::Models::UserList* value);

  constexpr void __cordl_internal_set_InvitedUsersOptional(::Oculus::Platform::Models::UserList* value);

  constexpr void __cordl_internal_set_Leaderboard(::Oculus::Platform::Models::Leaderboard* value);

  constexpr void __cordl_internal_set_Participants(::Oculus::Platform::Models::UserList* value);

  constexpr void __cordl_internal_set_ParticipantsOptional(::Oculus::Platform::Models::UserList* value);

  constexpr void __cordl_internal_set_StartDate(::System::DateTime value);

  constexpr void __cordl_internal_set_Title(::StringW value);

  constexpr void __cordl_internal_set_Visibility(::Oculus::Platform::ChallengeVisibility value);

  constexpr void __cordl_internal_set__cordl_ID(uint64_t value);

  /// @brief Method .ctor, addr 0x3f9025c, size 0x1ec, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Challenge();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Challenge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Challenge(Challenge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Challenge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Challenge(Challenge const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15517 };

  /// @brief Field CreationType, offset: 0x10, size: 0x4, def value: None
  ::Oculus::Platform::ChallengeCreationType ___CreationType;

  /// @brief Field Description, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Description;

  /// @brief Field EndDate, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ___EndDate;

  /// @brief Field ID, offset: 0x28, size: 0x8, def value: None
  uint64_t ____cordl_ID;

  /// @brief Field InvitedUsersOptional, offset: 0x30, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___InvitedUsersOptional;

  /// @brief Field InvitedUsers, offset: 0x38, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___InvitedUsers;

  /// @brief Field Leaderboard, offset: 0x40, size: 0x8, def value: None
  ::Oculus::Platform::Models::Leaderboard* ___Leaderboard;

  /// @brief Field ParticipantsOptional, offset: 0x48, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___ParticipantsOptional;

  /// @brief Field Participants, offset: 0x50, size: 0x8, def value: None
  ::Oculus::Platform::Models::UserList* ___Participants;

  /// @brief Field StartDate, offset: 0x58, size: 0x8, def value: None
  ::System::DateTime ___StartDate;

  /// @brief Field Title, offset: 0x60, size: 0x8, def value: None
  ::StringW ___Title;

  /// @brief Field Visibility, offset: 0x68, size: 0x4, def value: None
  ::Oculus::Platform::ChallengeVisibility ___Visibility;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::Challenge, ___CreationType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Challenge, ___Description) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Challenge, ___EndDate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Challenge, ____cordl_ID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Challenge, ___InvitedUsersOptional) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Challenge, ___InvitedUsers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Challenge, ___Leaderboard) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Challenge, ___ParticipantsOptional) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Challenge, ___Participants) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Challenge, ___StartDate) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Challenge, ___Title) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Challenge, ___Visibility) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::Challenge, 0x70>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::Challenge);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Challenge*, "Oculus.Platform.Models", "Challenge");
