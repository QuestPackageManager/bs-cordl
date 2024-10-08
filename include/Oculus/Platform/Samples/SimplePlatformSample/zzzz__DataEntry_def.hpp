#pragma once
// IWYU pragma private; include "Oculus/Platform/Samples/SimplePlatformSample/DataEntry.hpp"
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Samples::SimplePlatformSample {
// Is value type: false
// CS Name: ::Oculus.Platform.Samples.SimplePlatformSample::DataEntry*
class CORDL_TYPE DataEntry : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field dataOutput, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_dataOutput, put = __cordl_internal_set_dataOutput)) ::UnityW<::UnityEngine::UI::Text> dataOutput;

  static inline ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry* New_ctor();

  /// @brief Method Start, addr 0x3f1e44c, size 0x60, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method SubmitCommand, addr 0x3f1e610, size 0x4a8, virtual false, abstract: false, final false
  inline void SubmitCommand(::StringW command);

  /// @brief Method Update, addr 0x3f1e548, size 0xc8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_dataOutput() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_dataOutput();

  constexpr void __cordl_internal_set_dataOutput(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x3f20f60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method achievementCountCallback, addr 0x3f20204, size 0xc4, virtual false, abstract: false, final false
  inline void achievementCountCallback(::Oculus::Platform::Message* msg);

  /// @brief Method achievementDefinitionCallback, addr 0x3f207d4, size 0x4e4, virtual false, abstract: false, final false
  inline void achievementDefinitionCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementDefinitionList*>* msg);

  /// @brief Method achievementFieldsCallback, addr 0x3f20140, size 0xc4, virtual false, abstract: false, final false
  inline void achievementFieldsCallback(::Oculus::Platform::Message* msg);

  /// @brief Method achievementProgressCallback, addr 0x3f2038c, size 0x448, virtual false, abstract: false, final false
  inline void achievementProgressCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>* msg);

  /// @brief Method achievementUnlockCallback, addr 0x3f202c8, size 0xc4, virtual false, abstract: false, final false
  inline void achievementUnlockCallback(::Oculus::Platform::Message* msg);

  /// @brief Method addCountAchievement, addr 0x3f1f140, size 0xf0, virtual false, abstract: false, final false
  inline void addCountAchievement(::StringW achievementName, ::StringW count);

  /// @brief Method addFieldsAchievement, addr 0x3f1f230, size 0xc8, virtual false, abstract: false, final false
  inline void addFieldsAchievement(::StringW achievementName, ::StringW fields);

  /// @brief Method checkEntitlement, addr 0x3f1e4ac, size 0x9c, virtual false, abstract: false, final false
  inline void checkEntitlement();

  /// @brief Method getAchievementDefinition, addr 0x3f1eeb8, size 0xe8, virtual false, abstract: false, final false
  inline void getAchievementDefinition(::StringW achievementName);

  /// @brief Method getAchievementProgress, addr 0x3f1efa0, size 0xe8, virtual false, abstract: false, final false
  inline void getAchievementProgress(::StringW achievementName);

  /// @brief Method getEntitlementCallback, addr 0x3f1fa68, size 0x84, virtual false, abstract: false, final false
  inline void getEntitlementCallback(::Oculus::Platform::Message* msg);

  /// @brief Method getFriendsCallback, addr 0x3f20e78, size 0xe8, virtual false, abstract: false, final false
  inline void getFriendsCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>* msg);

  /// @brief Method getLeaderboardEntries, addr 0x3f1f43c, size 0xc4, virtual false, abstract: false, final false
  inline void getLeaderboardEntries(::StringW leaderboardName);

  /// @brief Method getLoggedInFriends, addr 0x3f1ed18, size 0xd0, virtual false, abstract: false, final false
  inline void getLoggedInFriends();

  /// @brief Method getLoggedInUser, addr 0x3f1eb34, size 0xd0, virtual false, abstract: false, final false
  inline void getLoggedInUser();

  /// @brief Method getUser, addr 0x3f1ec04, size 0x114, virtual false, abstract: false, final false
  inline void getUser(::StringW userID);

  /// @brief Method getUserCallback, addr 0x3f20cb8, size 0x1c0, virtual false, abstract: false, final false
  inline void getUserCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* msg);

  /// @brief Method getUserNonce, addr 0x3f1ede8, size 0xd0, virtual false, abstract: false, final false
  inline void getUserNonce();

  /// @brief Method leaderboardGetCallback, addr 0x3f1faec, size 0x4fc, virtual false, abstract: false, final false
  inline void leaderboardGetCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>* msg);

  /// @brief Method leaderboardWriteCallback, addr 0x3f1ffe8, size 0x158, virtual false, abstract: false, final false
  inline void leaderboardWriteCallback(::Oculus::Platform::Message* msg);

  /// @brief Method outputUserArray, addr 0x3f1f5b0, size 0x3bc, virtual false, abstract: false, final false
  inline void outputUserArray(::Oculus::Platform::Models::UserList* users);

  /// @brief Method printOutputLine, addr 0x3f1f500, size 0xb0, virtual false, abstract: false, final false
  inline void printOutputLine(::StringW newLine);

  /// @brief Method unlockAchievement, addr 0x3f1f088, size 0xb8, virtual false, abstract: false, final false
  inline void unlockAchievement(::StringW achievementName);

  /// @brief Method userProofCallback, addr 0x3f1f96c, size 0xfc, virtual false, abstract: false, final false
  inline void userProofCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>* msg);

  /// @brief Method writeLeaderboardEntry, addr 0x3f1f2f8, size 0x144, virtual false, abstract: false, final false
  inline void writeLeaderboardEntry(::StringW leaderboardName, ::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataEntry(DataEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataEntry(DataEntry const&) = delete;

  /// @brief Field dataOutput, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___dataOutput;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15531 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry, 0x28>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Samples::SimplePlatformSample::DataEntry, ___dataOutput) == 0x20, "Offset mismatch!");

} // namespace Oculus::Platform::Samples::SimplePlatformSample
NEED_NO_BOX(::Oculus::Platform::Samples::SimplePlatformSample::DataEntry);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*, "Oculus.Platform.Samples.SimplePlatformSample", "DataEntry");
