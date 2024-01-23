#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DataEntry)
namespace Oculus::Platform::Models {
class AchievementDefinitionList;
}
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform::Models {
class UserProof;
}
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace Oculus::Platform {
class Message;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Oculus::Platform::Samples::SimplePlatformSample {
class DataEntry;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Samples::SimplePlatformSample::DataEntry);
// Type: Oculus.Platform.Samples.SimplePlatformSample::DataEntry
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Samples::SimplePlatformSample {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13492))
// CS Name: ::Oculus.Platform.Samples.SimplePlatformSample::DataEntry*
class CORDL_TYPE DataEntry : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field dataOutput, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dataOutput, put = __cordl_internal_set_dataOutput))::UnityW<::UnityEngine::UI::Text> dataOutput;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_dataOutput();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_dataOutput() const;

  constexpr void __cordl_internal_set_dataOutput(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method Start, addr 0x27094c0, size 0x60, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x27095b8, size 0xc8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method SubmitCommand, addr 0x2709680, size 0x4a8, virtual false, abstract: false, final false
  inline void SubmitCommand(::StringW command);

  /// @brief Method getLeaderboardEntries, addr 0x270a524, size 0xc8, virtual false, abstract: false, final false
  inline void getLeaderboardEntries(::StringW leaderboardName);

  /// @brief Method writeLeaderboardEntry, addr 0x270a3dc, size 0x148, virtual false, abstract: false, final false
  inline void writeLeaderboardEntry(::StringW leaderboardName, ::StringW value);

  /// @brief Method addFieldsAchievement, addr 0x270a318, size 0xc4, virtual false, abstract: false, final false
  inline void addFieldsAchievement(::StringW achievementName, ::StringW fields);

  /// @brief Method addCountAchievement, addr 0x270a224, size 0xf4, virtual false, abstract: false, final false
  inline void addCountAchievement(::StringW achievementName, ::StringW count);

  /// @brief Method unlockAchievement, addr 0x270a168, size 0xbc, virtual false, abstract: false, final false
  inline void unlockAchievement(::StringW achievementName);

  /// @brief Method getAchievementProgress, addr 0x270a050, size 0x118, virtual false, abstract: false, final false
  inline void getAchievementProgress(::StringW achievementName);

  /// @brief Method getAchievementDefinition, addr 0x2709f38, size 0x118, virtual false, abstract: false, final false
  inline void getAchievementDefinition(::StringW achievementName);

  /// @brief Method checkEntitlement, addr 0x2709520, size 0x98, virtual false, abstract: false, final false
  inline void checkEntitlement();

  /// @brief Method getUserNonce, addr 0x2709e64, size 0xd4, virtual false, abstract: false, final false
  inline void getUserNonce();

  /// @brief Method getLoggedInUser, addr 0x2709ba4, size 0xd4, virtual false, abstract: false, final false
  inline void getLoggedInUser();

  /// @brief Method getUser, addr 0x2709c78, size 0x118, virtual false, abstract: false, final false
  inline void getUser(::StringW userID);

  /// @brief Method getLoggedInFriends, addr 0x2709d90, size 0xd4, virtual false, abstract: false, final false
  inline void getLoggedInFriends();

  /// @brief Method printOutputLine, addr 0x270a5ec, size 0xb0, virtual false, abstract: false, final false
  inline void printOutputLine(::StringW newLine);

  /// @brief Method outputUserArray, addr 0x270a69c, size 0x4c8, virtual false, abstract: false, final false
  inline void outputUserArray(::Oculus::Platform::Models::UserList* users);

  /// @brief Method userProofCallback, addr 0x270ab64, size 0xfc, virtual false, abstract: false, final false
  inline void userProofCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>* msg);

  /// @brief Method getEntitlementCallback, addr 0x270ac60, size 0x84, virtual false, abstract: false, final false
  inline void getEntitlementCallback(::Oculus::Platform::Message* msg);

  /// @brief Method leaderboardGetCallback, addr 0x270ace4, size 0x604, virtual false, abstract: false, final false
  inline void leaderboardGetCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>* msg);

  /// @brief Method leaderboardWriteCallback, addr 0x270b2e8, size 0x158, virtual false, abstract: false, final false
  inline void leaderboardWriteCallback(::Oculus::Platform::Message* msg);

  /// @brief Method achievementFieldsCallback, addr 0x270b440, size 0xc4, virtual false, abstract: false, final false
  inline void achievementFieldsCallback(::Oculus::Platform::Message* msg);

  /// @brief Method achievementCountCallback, addr 0x270b504, size 0xc4, virtual false, abstract: false, final false
  inline void achievementCountCallback(::Oculus::Platform::Message* msg);

  /// @brief Method achievementUnlockCallback, addr 0x270b5c8, size 0xc4, virtual false, abstract: false, final false
  inline void achievementUnlockCallback(::Oculus::Platform::Message* msg);

  /// @brief Method achievementProgressCallback, addr 0x270b68c, size 0x44c, virtual false, abstract: false, final false
  inline void achievementProgressCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>* msg);

  /// @brief Method achievementDefinitionCallback, addr 0x270bad8, size 0x4e8, virtual false, abstract: false, final false
  inline void achievementDefinitionCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementDefinitionList*>* msg);

  /// @brief Method getUserCallback, addr 0x270bfc0, size 0x27c, virtual false, abstract: false, final false
  inline void getUserCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* msg);

  /// @brief Method getFriendsCallback, addr 0x270c23c, size 0xe8, virtual false, abstract: false, final false
  inline void getFriendsCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>* msg);

  static inline ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry* New_ctor();

  /// @brief Method .ctor, addr 0x270c324, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DataEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataEntry(DataEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataEntry(DataEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataEntry();

public:
  /// @brief Field dataOutput, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___dataOutput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Samples::SimplePlatformSample::DataEntry, ___dataOutput) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform::Samples::SimplePlatformSample
NEED_NO_BOX(::Oculus::Platform::Samples::SimplePlatformSample::DataEntry);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*, "Oculus.Platform.Samples.SimplePlatformSample", "DataEntry");
