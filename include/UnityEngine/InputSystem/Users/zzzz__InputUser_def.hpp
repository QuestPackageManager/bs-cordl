#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserAccountHandle_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUser)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
class Action;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserAccountHandle;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserChange;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserPairingOptions;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser_CompareDevicesByUserAccount;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser_ControlSchemeChangeSyntax;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser_GlobalState;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser_OngoingAccountSelection;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser_UserData;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser_UserFlags;
}
namespace UnityEngine::InputSystem::Users {
class InputUser___c;
}
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename T> class SavedStructState_1_TypedRestore;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
namespace UnityEngine::InputSystem {
template <typename TControl> struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme_MatchResult;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Users {
struct InputUser_UserFlags;
}
namespace UnityEngine::InputSystem::Users {
class InputUser___c;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser_CompareDevicesByUserAccount;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser_ControlSchemeChangeSyntax;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser_GlobalState;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser_OngoingAccountSelection;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser_UserData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Users::InputUser_UserFlags);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Users::InputUser___c);
MARK_VAL_T(::UnityEngine::InputSystem::Users::InputUser);
MARK_VAL_T(::UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount);
MARK_VAL_T(::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax);
MARK_VAL_T(::UnityEngine::InputSystem::Users::InputUser_GlobalState);
MARK_VAL_T(::UnityEngine::InputSystem::Users::InputUser_OngoingAccountSelection);
MARK_VAL_T(::UnityEngine::InputSystem::Users::InputUser_UserData);
// Dependencies
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Users.InputUser/ControlSchemeChangeSyntax
struct CORDL_TYPE InputUser_ControlSchemeChangeSyntax {
public:
  // Declarations
  /// @brief Method AndPairRemainingDevices, addr 0x45fadb0, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax AndPairRemainingDevices();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUser_ControlSchemeChangeSyntax();

  // Ctor Parameters [CppParam { name: "m_UserIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputUser_ControlSchemeChangeSyntax(int32_t m_UserIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6766 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_UserIndex, offset: 0x0, size: 0x4, def value: None
  int32_t m_UserIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax, m_UserIndex) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
// Dependencies
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Users.InputUser/UserFlags
struct CORDL_TYPE InputUser_UserFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputUser_UserFlags_Unwrapped
  enum struct __InputUser_UserFlags_Unwrapped : int32_t {
    __E_BindToAllDevices = static_cast<int32_t>(0x1),
    __E_UserAccountSelectionInProgress = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputUser_UserFlags_Unwrapped() const noexcept {
    return static_cast<__InputUser_UserFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUser_UserFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputUser_UserFlags(int32_t value__) noexcept;

  /// @brief Field BindToAllDevices value: I32(1)
  static ::UnityEngine::InputSystem::Users::InputUser_UserFlags const BindToAllDevices;

  /// @brief Field UserAccountSelectionInProgress value: I32(2)
  static ::UnityEngine::InputSystem::Users::InputUser_UserFlags const UserAccountSelectionInProgress;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6767 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_UserFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::InputUser_UserFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
// Dependencies System.Nullable`1<T>, UnityEngine.InputSystem.InputControlScheme, UnityEngine.InputSystem.InputControlScheme::MatchResult, UnityEngine.InputSystem.Users.InputUser::UserFlags,
// UnityEngine.InputSystem.Users.InputUserAccountHandle
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Users.InputUser/UserData
struct CORDL_TYPE InputUser_UserData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUser_UserData();

  // Ctor Parameters [CppParam { name: "platformUserAccountHandle", ty: "::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>", modifiers: "", def_value: None }, CppParam {
  // name: "platformUserAccountName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "platformUserAccountId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "deviceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "deviceStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "actions", ty:
  // "::UnityEngine::InputSystem::IInputActionCollection*", modifiers: "", def_value: None }, CppParam { name: "controlScheme", ty:
  // "::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>", modifiers: "", def_value: None }, CppParam { name: "controlSchemeMatch", ty:
  // "::UnityEngine::InputSystem::InputControlScheme_MatchResult", modifiers: "", def_value: None }, CppParam { name: "lostDeviceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "lostDeviceStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::InputSystem::Users::InputUser_UserFlags", modifiers: "", def_value:
  // None }]
  constexpr InputUser_UserData(::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> platformUserAccountHandle, ::StringW platformUserAccountName,
                               ::StringW platformUserAccountId, int32_t deviceCount, int32_t deviceStartIndex, ::UnityEngine::InputSystem::IInputActionCollection* actions,
                               ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> controlScheme, ::UnityEngine::InputSystem::InputControlScheme_MatchResult controlSchemeMatch,
                               int32_t lostDeviceCount, int32_t lostDeviceStartIndex, ::UnityEngine::InputSystem::Users::InputUser_UserFlags flags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6768 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb8 };

  /// @brief Field platformUserAccountHandle, offset: 0x0, size: 0x18, def value: None
  ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> platformUserAccountHandle;

  /// @brief Field platformUserAccountName, offset: 0x18, size: 0x8, def value: None
  ::StringW platformUserAccountName;

  /// @brief Field platformUserAccountId, offset: 0x20, size: 0x8, def value: None
  ::StringW platformUserAccountId;

  /// @brief Field deviceCount, offset: 0x28, size: 0x4, def value: None
  int32_t deviceCount;

  /// @brief Field deviceStartIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t deviceStartIndex;

  /// @brief Field actions, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::InputSystem::IInputActionCollection* actions;

  /// @brief Field controlScheme, offset: 0x38, size: 0x20, def value: None
  ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> controlScheme;

  /// @brief Field controlSchemeMatch, offset: 0x58, size: 0x50, def value: None
  ::UnityEngine::InputSystem::InputControlScheme_MatchResult controlSchemeMatch;

  /// @brief Field lostDeviceCount, offset: 0xa8, size: 0x4, def value: None
  int32_t lostDeviceCount;

  /// @brief Field lostDeviceStartIndex, offset: 0xac, size: 0x4, def value: None
  int32_t lostDeviceStartIndex;

  /// @brief Field flags, offset: 0xb0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Users::InputUser_UserFlags flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_UserData, platformUserAccountHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_UserData, platformUserAccountName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_UserData, platformUserAccountId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_UserData, deviceCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_UserData, deviceStartIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_UserData, actions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_UserData, controlScheme) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_UserData, controlSchemeMatch) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_UserData, lostDeviceCount) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_UserData, lostDeviceStartIndex) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_UserData, flags) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::InputUser_UserData, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
// Dependencies System.Collections.Generic.IComparer`1<T>, UnityEngine.InputSystem.Users.InputUserAccountHandle
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Users.InputUser/CompareDevicesByUserAccount
struct CORDL_TYPE InputUser_CompareDevicesByUserAccount {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>*();

  /// @brief Method Compare, addr 0x45fadd4, size 0x3c, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::InputSystem::InputDevice* x, ::UnityEngine::InputSystem::InputDevice* y);

  /// @brief Method GetUserAccountHandleForDevice, addr 0x45fae10, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> GetUserAccountHandleForDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>* i___System__Collections__Generic__IComparer_1___UnityEngine__InputSystem__InputDevice__();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUser_CompareDevicesByUserAccount();

  // Ctor Parameters [CppParam { name: "platformUserAccountHandle", ty: "::UnityEngine::InputSystem::Users::InputUserAccountHandle", modifiers: "", def_value: None }]
  constexpr InputUser_CompareDevicesByUserAccount(::UnityEngine::InputSystem::Users::InputUserAccountHandle platformUserAccountHandle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6769 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field platformUserAccountHandle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Users::InputUserAccountHandle platformUserAccountHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount, platformUserAccountHandle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
// Dependencies
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct CORDL_TYPE InputUser_OngoingAccountSelection {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUser_OngoingAccountSelection();

  // Ctor Parameters [CppParam { name: "device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "uint32_t", modifiers: "", def_value:
  // None }]
  constexpr InputUser_OngoingAccountSelection(::UnityEngine::InputSystem::InputDevice* device, uint32_t userId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6770 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field device, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputDevice* device;

  /// @brief Field userId, offset: 0x8, size: 0x4, def value: None
  uint32_t userId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_OngoingAccountSelection, device) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_OngoingAccountSelection, userId) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::InputUser_OngoingAccountSelection, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
// Dependencies UnityEngine.InputSystem.Users.InputUser::OngoingAccountSelection, UnityEngine.InputSystem.Utilities.CallbackArray`1<TDelegate>, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Users.InputUser/GlobalState
struct CORDL_TYPE InputUser_GlobalState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUser_GlobalState();

  // Ctor Parameters [CppParam { name: "pairingStateVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastUserId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam
  // { name: "allUserCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "allPairedDeviceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "allLostDeviceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "allUsers", ty:
  // "::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>", modifiers: "", def_value: None }, CppParam { name: "allUserData", ty:
  // "::ArrayW<::UnityEngine::InputSystem::Users::InputUser_UserData,::Array<::UnityEngine::InputSystem::Users::InputUser_UserData>*>", modifiers: "", def_value: None }, CppParam { name:
  // "allPairedDevices", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: None }, CppParam { name:
  // "allLostDevices", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: None }, CppParam { name:
  // "ongoingAccountSelections", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::InputUser_OngoingAccountSelection>", modifiers: "", def_value: None },
  // CppParam { name: "onChange", ty:
  // "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>",
  // modifiers: "", def_value: None }, CppParam { name: "onUnpairedDeviceUsed", ty:
  // "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>", modifiers: "",
  // def_value: None }, CppParam { name: "onPreFilterUnpairedDeviceUsed", ty:
  // "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>", modifiers: "",
  // def_value: None }, CppParam { name: "actionChangeDelegate", ty: "::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*", modifiers: "", def_value: None }, CppParam
  // { name: "onDeviceChangeDelegate", ty: "::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*", modifiers: "", def_value: None }, CppParam {
  // name: "onEventDelegate", ty: "::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*", modifiers: "", def_value: None }, CppParam {
  // name: "onActionChangeHooked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "onDeviceChangeHooked", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "onEventHooked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "listenForUnpairedDeviceActivity", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputUser_GlobalState(
      int32_t pairingStateVersion, uint32_t lastUserId, int32_t allUserCount, int32_t allPairedDeviceCount, int32_t allLostDeviceCount,
      ::ArrayW<::UnityEngine::InputSystem::Users::InputUser, ::Array<::UnityEngine::InputSystem::Users::InputUser>*> allUsers,
      ::ArrayW<::UnityEngine::InputSystem::Users::InputUser_UserData, ::Array<::UnityEngine::InputSystem::Users::InputUser_UserData>*> allUserData,
      ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> allPairedDevices,
      ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> allLostDevices,
      ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::InputUser_OngoingAccountSelection> ongoingAccountSelections,
      ::UnityEngine::InputSystem::Utilities::CallbackArray_1<
          ::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>*>
          onChange,
      ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> onUnpairedDeviceUsed,
      ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>*>
          onPreFilterUnpairedDeviceUsed,
      ::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* actionChangeDelegate,
      ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* onDeviceChangeDelegate,
      ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* onEventDelegate, bool onActionChangeHooked, bool onDeviceChangeHooked,
      bool onEventHooked, int32_t listenForUnpairedDeviceActivity) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6771 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x168 };

  /// @brief Field pairingStateVersion, offset: 0x0, size: 0x4, def value: None
  int32_t pairingStateVersion;

  /// @brief Field lastUserId, offset: 0x4, size: 0x4, def value: None
  uint32_t lastUserId;

  /// @brief Field allUserCount, offset: 0x8, size: 0x4, def value: None
  int32_t allUserCount;

  /// @brief Field allPairedDeviceCount, offset: 0xc, size: 0x4, def value: None
  int32_t allPairedDeviceCount;

  /// @brief Field allLostDeviceCount, offset: 0x10, size: 0x4, def value: None
  int32_t allLostDeviceCount;

  /// @brief Field allUsers, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Users::InputUser, ::Array<::UnityEngine::InputSystem::Users::InputUser>*> allUsers;

  /// @brief Field allUserData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Users::InputUser_UserData, ::Array<::UnityEngine::InputSystem::Users::InputUser_UserData>*> allUserData;

  /// @brief Field allPairedDevices, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> allPairedDevices;

  /// @brief Field allLostDevices, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> allLostDevices;

  /// @brief Field ongoingAccountSelections, offset: 0x38, size: 0x20, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::InputUser_OngoingAccountSelection> ongoingAccountSelections;

  /// @brief Field onChange, offset: 0x58, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<
      ::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>*>
      onChange;

  /// @brief Field onUnpairedDeviceUsed, offset: 0xa8, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> onUnpairedDeviceUsed;

  /// @brief Field onPreFilterUnpairedDeviceUsed, offset: 0xf8, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>*>
      onPreFilterUnpairedDeviceUsed;

  /// @brief Field actionChangeDelegate, offset: 0x148, size: 0x8, def value: None
  ::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* actionChangeDelegate;

  /// @brief Field onDeviceChangeDelegate, offset: 0x150, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* onDeviceChangeDelegate;

  /// @brief Field onEventDelegate, offset: 0x158, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* onEventDelegate;

  /// @brief Field onActionChangeHooked, offset: 0x160, size: 0x1, def value: None
  bool onActionChangeHooked;

  /// @brief Field onDeviceChangeHooked, offset: 0x161, size: 0x1, def value: None
  bool onDeviceChangeHooked;

  /// @brief Field onEventHooked, offset: 0x162, size: 0x1, def value: None
  bool onEventHooked;

  /// @brief Field listenForUnpairedDeviceActivity, offset: 0x164, size: 0x4, def value: None
  int32_t listenForUnpairedDeviceActivity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, pairingStateVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, lastUserId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, allUserCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, allPairedDeviceCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, allLostDeviceCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, allUsers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, allUserData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, allPairedDevices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, allLostDevices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, ongoingAccountSelections) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, onChange) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, onUnpairedDeviceUsed) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, onPreFilterUnpairedDeviceUsed) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, actionChangeDelegate) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, onDeviceChangeDelegate) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, onEventDelegate) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, onActionChangeHooked) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, onDeviceChangeHooked) == 0x161, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, onEventHooked) == 0x162, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser_GlobalState, listenForUnpairedDeviceActivity) == 0x164, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::InputUser_GlobalState, 0x168>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
// Dependencies System.Object
namespace UnityEngine::InputSystem::Users {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Users.InputUser/<>c
class CORDL_TYPE InputUser___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::Users::InputUser___c* __9;

  /// @brief Field <>9__86_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__86_0,
                      put = setStaticF___9__86_0)) ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::Users::InputUser_GlobalState>* __9__86_0;

  /// @brief Field <>9__86_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__86_1, put = setStaticF___9__86_1)) ::System::Action* __9__86_1;

  static inline ::UnityEngine::InputSystem::Users::InputUser___c* New_ctor();

  /// @brief Method <SaveAndResetState>b__86_0, addr 0x45faeac, size 0x74, virtual false, abstract: false, final false
  inline void _SaveAndResetState_b__86_0(::ByRef<::UnityEngine::InputSystem::Users::InputUser_GlobalState> state);

  /// @brief Method <SaveAndResetState>b__86_1, addr 0x45faf20, size 0x8, virtual false, abstract: false, final false
  inline void _SaveAndResetState_b__86_1();

  /// @brief Method .ctor, addr 0x45faea4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Users::InputUser___c* getStaticF___9();

  static inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::Users::InputUser_GlobalState>* getStaticF___9__86_0();

  static inline ::System::Action* getStaticF___9__86_1();

  static inline void setStaticF___9(::UnityEngine::InputSystem::Users::InputUser___c* value);

  static inline void setStaticF___9__86_0(::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::Users::InputUser_GlobalState>* value);

  static inline void setStaticF___9__86_1(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUser___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputUser___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputUser___c(InputUser___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputUser___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputUser___c(InputUser___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6772 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::InputUser___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
// Dependencies System.IEquatable`1<T>, UnityEngine.InputSystem.Users.InputUser::GlobalState
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Users.InputUser
struct CORDL_TYPE InputUser {
public:
  // Declarations
  using CompareDevicesByUserAccount = ::UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount;

  using ControlSchemeChangeSyntax = ::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax;

  using GlobalState = ::UnityEngine::InputSystem::Users::InputUser_GlobalState;

  using OngoingAccountSelection = ::UnityEngine::InputSystem::Users::InputUser_OngoingAccountSelection;

  using UserData = ::UnityEngine::InputSystem::Users::InputUser_UserData;

  using UserFlags = ::UnityEngine::InputSystem::Users::InputUser_UserFlags;

  using __c = ::UnityEngine::InputSystem::Users::InputUser___c;

  __declspec(property(get = get_actions)) ::UnityEngine::InputSystem::IInputActionCollection* actions;

  __declspec(property(get = get_controlScheme)) ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> controlScheme;

  __declspec(property(get = get_controlSchemeMatch)) ::UnityEngine::InputSystem::InputControlScheme_MatchResult controlSchemeMatch;

  __declspec(property(get = get_hasMissingRequiredDevices)) bool hasMissingRequiredDevices;

  __declspec(property(get = get_id)) uint32_t id;

  __declspec(property(get = get_index)) int32_t index;

  __declspec(property(get = get_lostDevices)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> lostDevices;

  __declspec(property(get = get_pairedDevices)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> pairedDevices;

  __declspec(property(get = get_platformUserAccountHandle)) ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> platformUserAccountHandle;

  __declspec(property(get = get_platformUserAccountId)) ::StringW platformUserAccountId;

  __declspec(property(get = get_platformUserAccountName)) ::StringW platformUserAccountName;

  /// @brief Field s_GlobalState, offset 0xffffffff, size 0x168
  __declspec(property(get = getStaticF_s_GlobalState, put = setStaticF_s_GlobalState)) ::UnityEngine::InputSystem::Users::InputUser_GlobalState s_GlobalState;

  __declspec(property(get = get_valid)) bool valid;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>*();

  /// @brief Method ActivateControlScheme, addr 0x45ecb68, size 0x1b8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax ActivateControlScheme(::UnityEngine::InputSystem::InputControlScheme scheme);

  /// @brief Method ActivateControlScheme, addr 0x45ecd20, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax ActivateControlScheme(::StringW schemeName);

  /// @brief Method ActivateControlSchemeInternal, addr 0x45f724c, size 0x390, virtual false, abstract: false, final false
  inline void ActivateControlSchemeInternal(int32_t userIndex, ::UnityEngine::InputSystem::InputControlScheme scheme);

  /// @brief Method AddDeviceToUser, addr 0x45f93f4, size 0x410, virtual false, abstract: false, final false
  static inline void AddDeviceToUser(int32_t userIndex, ::UnityEngine::InputSystem::InputDevice* device, bool asLostDevice, bool dontUpdateControlScheme);

  /// @brief Method AddUser, addr 0x45f91e0, size 0xf0, virtual false, abstract: false, final false
  static inline int32_t AddUser();

  /// @brief Method AssociateActionsWithUser, addr 0x45ec6e8, size 0x338, virtual false, abstract: false, final false
  inline void AssociateActionsWithUser(::UnityEngine::InputSystem::IInputActionCollection* actions);

  /// @brief Method CreateUserWithoutPairedDevices, addr 0x45ecafc, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Users::InputUser CreateUserWithoutPairedDevices();

  /// @brief Method DisposeAndResetGlobalState, addr 0x45face0, size 0xb8, virtual false, abstract: false, final false
  static inline void DisposeAndResetGlobalState();

  /// @brief Method Equals, addr 0x45f9d08, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x45f9cf8, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::Users::InputUser other);

  /// @brief Method FindControlScheme, addr 0x45ead18, size 0xb4, virtual false, abstract: false, final false
  inline void FindControlScheme(::StringW schemeName, ::ByRef<::UnityEngine::InputSystem::InputControlScheme> scheme);

  /// @brief Method FindLostDevice, addr 0x45fa5c8, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t FindLostDevice(::UnityEngine::InputSystem::InputDevice* device, int32_t startIndex);

  /// @brief Method FindUserByAccount, addr 0x45f8fc4, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> FindUserByAccount(::UnityEngine::InputSystem::Users::InputUserAccountHandle platformUserAccountHandle);

  /// @brief Method FindUserPairedToDevice, addr 0x45f8ddc, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> FindUserPairedToDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method GetHashCode, addr 0x45f9d80, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetUnpairedInputDevices, addr 0x45ec570, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> GetUnpairedInputDevices();

  /// @brief Method GetUnpairedInputDevices, addr 0x45f8bcc, size 0x210, virtual false, abstract: false, final false
  static inline int32_t GetUnpairedInputDevices(::ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>> list);

  /// @brief Method HookIntoActionChange, addr 0x45f713c, size 0x110, virtual false, abstract: false, final false
  static inline void HookIntoActionChange();

  /// @brief Method HookIntoDeviceChange, addr 0x45f9c14, size 0xe4, virtual false, abstract: false, final false
  static inline void HookIntoDeviceChange();

  /// @brief Method HookIntoEvents, addr 0x45f6d24, size 0x104, virtual false, abstract: false, final false
  static inline void HookIntoEvents();

  /// @brief Method InitiateUserAccountSelection, addr 0x45f92dc, size 0x118, virtual false, abstract: false, final false
  static inline bool InitiateUserAccountSelection(int32_t userIndex, ::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Users::InputUserPairingOptions options);

  /// @brief Method InitiateUserAccountSelectionAtPlatformLevel, addr 0x45f9b58, size 0xbc, virtual false, abstract: false, final false
  static inline bool InitiateUserAccountSelectionAtPlatformLevel(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Notify, addr 0x45f7854, size 0x308, virtual false, abstract: false, final false
  static inline void Notify(int32_t userIndex, ::UnityEngine::InputSystem::Users::InputUserChange change, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method OnActionChange, addr 0x45fa064, size 0xc8, virtual false, abstract: false, final false
  static inline void OnActionChange(::System::Object* obj, ::UnityEngine::InputSystem::InputActionChange change);

  /// @brief Method OnDeviceChange, addr 0x45fa12c, size 0x49c, virtual false, abstract: false, final false
  static inline void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change);

  /// @brief Method OnEvent, addr 0x45fa680, size 0x484, virtual false, abstract: false, final false
  static inline void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method PerformPairingWithDevice, addr 0x45ec1d8, size 0x1bc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Users::InputUser PerformPairingWithDevice(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Users::InputUser user,
                                                                                      ::UnityEngine::InputSystem::Users::InputUserPairingOptions options);

  /// @brief Method QueryPairedPlatformUserAccount, addr 0x45f9ee0, size 0x184, virtual false, abstract: false, final false
  static inline int64_t QueryPairedPlatformUserAccount(::UnityEngine::InputSystem::InputDevice* device,
                                                       ::ByRef<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>> platformAccountHandle,
                                                       ::ByRef<::StringW> platformAccountName, ::ByRef<::StringW> platformAccountId);

  /// @brief Method RemoveDeviceFromUser, addr 0x45f8494, size 0x480, virtual false, abstract: false, final false
  static inline void RemoveDeviceFromUser(int32_t userIndex, ::UnityEngine::InputSystem::InputDevice* device, bool asLostDevice);

  /// @brief Method RemoveLostDevicesForUser, addr 0x45f8368, size 0x12c, virtual false, abstract: false, final false
  static inline void RemoveLostDevicesForUser(int32_t userIndex);

  /// @brief Method RemoveUser, addr 0x45f8914, size 0x2b8, virtual false, abstract: false, final false
  static inline void RemoveUser(int32_t userIndex);

  /// @brief Method ResetGlobals, addr 0x45fad98, size 0x18, virtual false, abstract: false, final false
  static inline void ResetGlobals();

  /// @brief Method SaveAndResetState, addr 0x45fab04, size 0x1dc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState();

  /// @brief Method ToString, addr 0x45f6ed0, size 0x26c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryFindControlScheme, addr 0x45f75dc, size 0x278, virtual false, abstract: false, final false
  inline bool TryFindControlScheme(::StringW schemeName, ::ByRef<::UnityEngine::InputSystem::InputControlScheme> scheme);

  /// @brief Method TryFindUserIndex, addr 0x45f8ed8, size 0xec, virtual false, abstract: false, final false
  static inline int32_t TryFindUserIndex(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method TryFindUserIndex, addr 0x45f90fc, size 0xe4, virtual false, abstract: false, final false
  static inline int32_t TryFindUserIndex(::UnityEngine::InputSystem::Users::InputUserAccountHandle platformHandle);

  /// @brief Method TryFindUserIndex, addr 0x45f68d8, size 0x94, virtual false, abstract: false, final false
  static inline int32_t TryFindUserIndex(uint32_t userId);

  /// @brief Method UnhookFromActionChange, addr 0x45f9e14, size 0xcc, virtual false, abstract: false, final false
  static inline void UnhookFromActionChange();

  /// @brief Method UnhookFromDeviceChange, addr 0x45f9d88, size 0x8c, virtual false, abstract: false, final false
  static inline void UnhookFromDeviceChange();

  /// @brief Method UnhookFromDeviceStateChange, addr 0x45f6e28, size 0xa8, virtual false, abstract: false, final false
  static inline void UnhookFromDeviceStateChange();

  /// @brief Method UnpairDevice, addr 0x45eede0, size 0xd8, virtual false, abstract: false, final false
  inline void UnpairDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method UnpairDevices, addr 0x45ebf68, size 0x270, virtual false, abstract: false, final false
  inline void UnpairDevices();

  /// @brief Method UnpairDevicesAndRemoveUser, addr 0x45ecad8, size 0x24, virtual false, abstract: false, final false
  inline void UnpairDevicesAndRemoveUser();

  /// @brief Method UpdateControlSchemeMatch, addr 0x45f7b5c, size 0x80c, virtual false, abstract: false, final false
  static inline void UpdateControlSchemeMatch(int32_t userIndex, bool autoPairMissing);

  /// @brief Method UpdatePlatformUserAccount, addr 0x45f9804, size 0x354, virtual false, abstract: false, final false
  static inline int64_t UpdatePlatformUserAccount(int32_t userIndex, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method add_onChange, addr 0x45ed448, size 0xb4, virtual false, abstract: false, final false
  static inline void
  add_onChange(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>* value);

  /// @brief Method add_onPrefilterUnpairedDeviceActivity, addr 0x45ed8e4, size 0xb4, virtual false, abstract: false, final false
  static inline void add_onPrefilterUnpairedDeviceActivity(::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* value);

  /// @brief Method add_onUnpairedDeviceUsed, addr 0x45ed80c, size 0xd8, virtual false, abstract: false, final false
  static inline void add_onUnpairedDeviceUsed(::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  static inline ::UnityEngine::InputSystem::Users::InputUser_GlobalState getStaticF_s_GlobalState();

  /// @brief Method get_actions, addr 0x45f6ba0, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::IInputActionCollection* get_actions();

  /// @brief Method get_all, addr 0x45f6ca4, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser> get_all();

  /// @brief Method get_controlScheme, addr 0x45e954c, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> get_controlScheme();

  /// @brief Method get_controlSchemeMatch, addr 0x45f6c18, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlScheme_MatchResult get_controlSchemeMatch();

  /// @brief Method get_hasMissingRequiredDevices, addr 0x45ea2c0, size 0x7c, virtual false, abstract: false, final false
  inline bool get_hasMissingRequiredDevices();

  /// @brief Method get_id, addr 0x45f696c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_id();

  /// @brief Method get_index, addr 0x45f67f0, size 0xe8, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_listenForUnpairedDeviceActivity, addr 0x45ed998, size 0x48, virtual false, abstract: false, final false
  static inline int32_t get_listenForUnpairedDeviceActivity();

  /// @brief Method get_lostDevices, addr 0x45f6af4, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_lostDevices();

  /// @brief Method get_pairedDevices, addr 0x45ea1cc, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_pairedDevices();

  /// @brief Method get_platformUserAccountHandle, addr 0x45f6974, size 0x90, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> get_platformUserAccountHandle();

  /// @brief Method get_platformUserAccountId, addr 0x45f6a7c, size 0x78, virtual false, abstract: false, final false
  inline ::StringW get_platformUserAccountId();

  /// @brief Method get_platformUserAccountName, addr 0x45f6a04, size 0x78, virtual false, abstract: false, final false
  inline ::StringW get_platformUserAccountName();

  /// @brief Method get_valid, addr 0x45e94a4, size 0xa8, virtual false, abstract: false, final false
  inline bool get_valid();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>* i___System__IEquatable_1___UnityEngine__InputSystem__Users__InputUser_();

  /// @brief Method op_Equality, addr 0x45ee5e0, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Users::InputUser left, ::UnityEngine::InputSystem::Users::InputUser right);

  /// @brief Method op_Inequality, addr 0x45f92d0, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Users::InputUser left, ::UnityEngine::InputSystem::Users::InputUser right);

  /// @brief Method remove_onChange, addr 0x45edfcc, size 0xb4, virtual false, abstract: false, final false
  static inline void
  remove_onChange(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>* value);

  /// @brief Method remove_onPrefilterUnpairedDeviceActivity, addr 0x45edbbc, size 0xb4, virtual false, abstract: false, final false
  static inline void remove_onPrefilterUnpairedDeviceActivity(::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* value);

  /// @brief Method remove_onUnpairedDeviceUsed, addr 0x45edacc, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_onUnpairedDeviceUsed(::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  static inline void setStaticF_s_GlobalState(::UnityEngine::InputSystem::Users::InputUser_GlobalState value);

  /// @brief Method set_listenForUnpairedDeviceActivity, addr 0x45ed9e0, size 0xec, virtual false, abstract: false, final false
  static inline void set_listenForUnpairedDeviceActivity(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUser();

  // Ctor Parameters [CppParam { name: "m_Id", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr InputUser(uint32_t m_Id) noexcept;

  /// @brief Field InvalidId offset 0xffffffff size 0x4
  static constexpr uint32_t InvalidId{ static_cast<uint32_t>(0x0u) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6773 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Id, offset: 0x0, size: 0x4, def value: None
  uint32_t m_Id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser, m_Id) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::InputUser, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUser_UserFlags, "UnityEngine.InputSystem.Users", "InputUser/UserFlags");
NEED_NO_BOX(::UnityEngine::InputSystem::Users::InputUser___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUser___c*, "UnityEngine.InputSystem.Users", "InputUser/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUser, "UnityEngine.InputSystem.Users", "InputUser");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount, "UnityEngine.InputSystem.Users", "InputUser/CompareDevicesByUserAccount");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax, "UnityEngine.InputSystem.Users", "InputUser/ControlSchemeChangeSyntax");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUser_GlobalState, "UnityEngine.InputSystem.Users", "InputUser/GlobalState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUser_OngoingAccountSelection, "UnityEngine.InputSystem.Users", "InputUser/OngoingAccountSelection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUser_UserData, "UnityEngine.InputSystem.Users", "InputUser/UserData");
