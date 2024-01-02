#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GroupPresenceSample)
namespace UnityEngine::UI {
class Text;
}
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace Oculus::Platform::Models {
class LaunchInvitePanelFlowResult;
}
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform::Models {
class InvitePanelResultInfo;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Oculus::Platform::Models {
class DestinationList;
}
namespace Oculus::Platform::Models {
class GroupPresenceLeaveIntent;
}
// Forward declare root types
namespace GlobalNamespace {
class GroupPresenceSample;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GroupPresenceSample);
// Type: ::GroupPresenceSample
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 93, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13218))
// CS Name: ::GroupPresenceSample*
class CORDL_TYPE GroupPresenceSample : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field IsJoinable, offset 0x18, size 0x1
  __declspec(property(get = __get_IsJoinable, put = __set_IsJoinable)) bool IsJoinable;

  /// @brief Field LobbySessionID, offset 0x20, size 0x8
  __declspec(property(get = __get_LobbySessionID, put = __set_LobbySessionID))::StringW LobbySessionID;

  /// @brief Field MatchSessionID, offset 0x28, size 0x8
  __declspec(property(get = __get_MatchSessionID, put = __set_MatchSessionID))::StringW MatchSessionID;

  /// @brief Field SuggestedUserID, offset 0x30, size 0x8
  __declspec(property(get = __get_SuggestedUserID, put = __set_SuggestedUserID)) uint64_t SuggestedUserID;

  /// @brief Field InVRConsole, offset 0x38, size 0x8
  __declspec(property(get = __get_InVRConsole, put = __set_InVRConsole))::UnityEngine::UI::Text* InVRConsole;

  /// @brief Field DestinationsConsole, offset 0x40, size 0x8
  __declspec(property(get = __get_DestinationsConsole, put = __set_DestinationsConsole))::UnityEngine::UI::Text* DestinationsConsole;

  /// @brief Field DestinationAPINames, offset 0x48, size 0x8
  __declspec(property(get = __get_DestinationAPINames, put = __set_DestinationAPINames))::System::Collections::Generic::List_1<::StringW>* DestinationAPINames;

  /// @brief Field LoggedInUserID, offset 0x50, size 0x8
  __declspec(property(get = __get_LoggedInUserID, put = __set_LoggedInUserID)) uint64_t LoggedInUserID;

  /// @brief Field DestinationIndex, offset 0x58, size 0x4
  __declspec(property(get = __get_DestinationIndex, put = __set_DestinationIndex)) int32_t DestinationIndex;

  /// @brief Field OnlyPushUpOnce, offset 0x5c, size 0x1
  __declspec(property(get = __get_OnlyPushUpOnce, put = __set_OnlyPushUpOnce)) bool OnlyPushUpOnce;

  constexpr bool& __get_IsJoinable();

  constexpr bool const& __get_IsJoinable() const;

  constexpr void __set_IsJoinable(bool value);

  constexpr ::StringW& __get_LobbySessionID();

  constexpr ::StringW const& __get_LobbySessionID() const;

  constexpr void __set_LobbySessionID(::StringW value);

  constexpr ::StringW& __get_MatchSessionID();

  constexpr ::StringW const& __get_MatchSessionID() const;

  constexpr void __set_MatchSessionID(::StringW value);

  constexpr uint64_t& __get_SuggestedUserID();

  constexpr uint64_t const& __get_SuggestedUserID() const;

  constexpr void __set_SuggestedUserID(uint64_t value);

  constexpr ::UnityEngine::UI::Text*& __get_InVRConsole();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_InVRConsole() const;

  constexpr void __set_InVRConsole(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_DestinationsConsole();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_DestinationsConsole() const;

  constexpr void __set_DestinationsConsole(::UnityEngine::UI::Text* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_DestinationAPINames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_DestinationAPINames() const;

  constexpr void __set_DestinationAPINames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr uint64_t& __get_LoggedInUserID();

  constexpr uint64_t const& __get_LoggedInUserID() const;

  constexpr void __set_LoggedInUserID(uint64_t value);

  constexpr int32_t& __get_DestinationIndex();

  constexpr int32_t const& __get_DestinationIndex() const;

  constexpr void __set_DestinationIndex(int32_t value);

  constexpr bool& __get_OnlyPushUpOnce();

  constexpr bool const& __get_OnlyPushUpOnce() const;

  constexpr void __set_OnlyPushUpOnce(bool value);

  /// @brief Method Start, addr 0x26c9be4, size 0xf8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method SetPresence, addr 0x26ca048, size 0x198, virtual false, abstract: false, final false
  inline void SetPresence();

  /// @brief Method ClearPresence, addr 0x26ca708, size 0xb4, virtual false, abstract: false, final false
  inline void ClearPresence();

  /// @brief Method LaunchInvitePanel, addr 0x26ca900, size 0x10c, virtual false, abstract: false, final false
  inline void LaunchInvitePanel();

  /// @brief Method LaunchRosterPanel, addr 0x26cac78, size 0xf0, virtual false, abstract: false, final false
  inline void LaunchRosterPanel();

  /// @brief Method OnJoinIntentChangeNotif, addr 0x26cafc0, size 0x35c, virtual false, abstract: false, final false
  inline void OnJoinIntentChangeNotif(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>* message);

  /// @brief Method OnLeaveIntentChangeNotif, addr 0x26cb32c, size 0x268, virtual false, abstract: false, final false
  inline void OnLeaveIntentChangeNotif(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>* message);

  /// @brief Method OnInviteSentNotif, addr 0x26cb594, size 0x3dc, virtual false, abstract: false, final false
  inline void OnInviteSentNotif(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>* message);

  /// @brief Method OnGetDestinations, addr 0x26cb970, size 0x360, virtual false, abstract: false, final false
  inline void OnGetDestinations(::Oculus::Platform::Message_1<::Oculus::Platform::Models::DestinationList*>* message);

  /// @brief Method Update, addr 0x26cbe3c, size 0xe8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method ScrollThroughDestinations, addr 0x26cbf54, size 0xd4, virtual false, abstract: false, final false
  inline void ScrollThroughDestinations();

  /// @brief Method UpdateDestinationsConsole, addr 0x26cbcd0, size 0x16c, virtual false, abstract: false, final false
  inline void UpdateDestinationsConsole();

  /// @brief Method OnLoggedInUser, addr 0x26cc040, size 0xa8, virtual false, abstract: false, final false
  inline void OnLoggedInUser(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* message);

  /// @brief Method UpdateConsole, addr 0x26c9cdc, size 0xac, virtual false, abstract: false, final false
  inline void UpdateConsole(::StringW value);

  /// @brief Method PressAButton, addr 0x26cbf24, size 0xc, virtual false, abstract: false, final false
  inline bool PressAButton();

  /// @brief Method PressBButton, addr 0x26cbf30, size 0xc, virtual false, abstract: false, final false
  inline bool PressBButton();

  /// @brief Method PressXButton, addr 0x26cbf3c, size 0xc, virtual false, abstract: false, final false
  inline bool PressXButton();

  /// @brief Method PressYButton, addr 0x26cbf48, size 0xc, virtual false, abstract: false, final false
  inline bool PressYButton();

  /// @brief Method PressUp, addr 0x26cc028, size 0xc, virtual false, abstract: false, final false
  inline bool PressUp();

  /// @brief Method PressDown, addr 0x26cc034, size 0xc, virtual false, abstract: false, final false
  inline bool PressDown();

  static inline ::GlobalNamespace::GroupPresenceSample* New_ctor();

  /// @brief Method .ctor, addr 0x26cc0e8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Start>b__8_0, addr 0x26cc16c, size 0x278, virtual false, abstract: false, final false
  inline void _Start_b__8_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>* message);

  /// @brief Method <SetPresence>b__9_0, addr 0x26cc7f0, size 0xe4, virtual false, abstract: false, final false
  inline void _SetPresence_b__9_0(::Oculus::Platform::Message* message);

  /// @brief Method <SetPresence>b__9_1, addr 0x26cca34, size 0x200, virtual false, abstract: false, final false
  inline void _SetPresence_b__9_1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* message2);

  /// @brief Method <ClearPresence>b__10_0, addr 0x26ccc34, size 0xe4, virtual false, abstract: false, final false
  inline void _ClearPresence_b__10_0(::Oculus::Platform::Message* message);

  /// @brief Method <ClearPresence>b__10_1, addr 0x26ccd18, size 0xb4, virtual false, abstract: false, final false
  inline void _ClearPresence_b__10_1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* message2);

  /// @brief Method <LaunchInvitePanel>b__11_0, addr 0x26ccdcc, size 0x48, virtual false, abstract: false, final false
  inline void _LaunchInvitePanel_b__11_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*>* message);

  /// @brief Method <LaunchRosterPanel>b__12_0, addr 0x26cce14, size 0x48, virtual false, abstract: false, final false
  inline void _LaunchRosterPanel_b__12_0(::Oculus::Platform::Message* message);

  // Ctor Parameters [CppParam { name: "", ty: "GroupPresenceSample", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GroupPresenceSample(GroupPresenceSample&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GroupPresenceSample", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GroupPresenceSample(GroupPresenceSample const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GroupPresenceSample();

public:
  /// @brief Field IsJoinable, offset: 0x18, size: 0x1, def value: None
  bool ___IsJoinable;

  /// @brief Field LobbySessionID, offset: 0x20, size: 0x8, def value: None
  ::StringW ___LobbySessionID;

  /// @brief Field MatchSessionID, offset: 0x28, size: 0x8, def value: None
  ::StringW ___MatchSessionID;

  /// @brief Field SuggestedUserID, offset: 0x30, size: 0x8, def value: None
  uint64_t ___SuggestedUserID;

  /// @brief Field InVRConsole, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___InVRConsole;

  /// @brief Field DestinationsConsole, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___DestinationsConsole;

  /// @brief Field DestinationAPINames, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___DestinationAPINames;

  /// @brief Field LoggedInUserID, offset: 0x50, size: 0x8, def value: None
  uint64_t ___LoggedInUserID;

  /// @brief Field DestinationIndex, offset: 0x58, size: 0x4, def value: None
  int32_t ___DestinationIndex;

  /// @brief Field OnlyPushUpOnce, offset: 0x5c, size: 0x1, def value: None
  bool ___OnlyPushUpOnce;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GroupPresenceSample, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GroupPresenceSample, ___IsJoinable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GroupPresenceSample, ___LobbySessionID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GroupPresenceSample, ___MatchSessionID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GroupPresenceSample, ___SuggestedUserID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GroupPresenceSample, ___InVRConsole) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GroupPresenceSample, ___DestinationsConsole) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GroupPresenceSample, ___DestinationAPINames) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GroupPresenceSample, ___LoggedInUserID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GroupPresenceSample, ___DestinationIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GroupPresenceSample, ___OnlyPushUpOnce) == 0x5c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GroupPresenceSample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GroupPresenceSample*, "", "GroupPresenceSample");
