#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyPlayersDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayersDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyPlayersDataModel)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapKeyNetSerializable;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class LobbyPlayerData;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
namespace GlobalNamespace {
class LobbyPlayersDataModel__GetEnumerator_d__59;
}
namespace GlobalNamespace {
struct LobbyPlayersDataModel__SetOwnedSongPacks_d__42;
}
namespace GlobalNamespace {
class LobbyPlayersDataModel___c;
}
namespace GlobalNamespace {
class PlayersLobbyPermissionConfigurationNetSerializable;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyPlayersDataModel;
}
namespace GlobalNamespace {
class LobbyPlayersDataModel__GetEnumerator_d__59;
}
namespace GlobalNamespace {
class LobbyPlayersDataModel___c;
}
namespace GlobalNamespace {
struct LobbyPlayersDataModel__SetOwnedSongPacks_d__42;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LobbyPlayersDataModel);
MARK_REF_PTR_T(::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__59);
MARK_REF_PTR_T(::GlobalNamespace::LobbyPlayersDataModel___c);
MARK_VAL_T(::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__42);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LobbyPlayersDataModel/<>c
class CORDL_TYPE LobbyPlayersDataModel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::LobbyPlayersDataModel___c* __9;

  /// @brief Field <>9__42_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__42_0, put = setStaticF___9__42_0)) ::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>* __9__42_0;

  static inline ::GlobalNamespace::LobbyPlayersDataModel___c* New_ctor();

  /// @brief Method <SetOwnedSongPacks>b__42_0, addr 0x26e0f48, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _SetOwnedSongPacks_b__42_0(::GlobalNamespace::BeatmapLevelPack* pack);

  /// @brief Method .ctor, addr 0x26e0f40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::LobbyPlayersDataModel___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>* getStaticF___9__42_0();

  static inline void setStaticF___9(::GlobalNamespace::LobbyPlayersDataModel___c* value);

  static inline void setStaticF___9__42_0(::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbyPlayersDataModel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LobbyPlayersDataModel___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LobbyPlayersDataModel___c(LobbyPlayersDataModel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LobbyPlayersDataModel___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LobbyPlayersDataModel___c(LobbyPlayersDataModel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13107 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyPlayersDataModel___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.Generic.KeyValuePair`2<TKey, TValue>,
// System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LobbyPlayersDataModel/<GetEnumerator>d__59
class CORDL_TYPE LobbyPlayersDataModel__GetEnumerator_d__59 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_ILobbyPlayerData___get_Current)) ::System::Collections::Generic::
      KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>
          System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_ILobbyPlayerData___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>
      __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::LobbyPlayersDataModel* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x28
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::GlobalNamespace::LobbyPlayerData*>
      __7__wrap1;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x26e0f7c, size 0x1e4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__59* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,ILobbyPlayerData>>.get_Current, addr 0x26e11b0, size 0xc, virtual true, abstract:
  /// false, final true
  inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>
  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_ILobbyPlayerData___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26e11bc, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26e11f4, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x26e0f60, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::LobbyPlayersDataModel* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::LobbyPlayersDataModel*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::GlobalNamespace::LobbyPlayerData*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::GlobalNamespace::LobbyPlayerData*>& __cordl_internal_get___7__wrap1();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*> value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::LobbyPlayersDataModel* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::GlobalNamespace::LobbyPlayerData*> value);

  /// @brief Method <>m__Finally1, addr 0x26e1160, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x26e0bf4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*
  i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__ILobbyPlayerData___() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbyPlayersDataModel__GetEnumerator_d__59();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LobbyPlayersDataModel__GetEnumerator_d__59", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LobbyPlayersDataModel__GetEnumerator_d__59(LobbyPlayersDataModel__GetEnumerator_d__59&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LobbyPlayersDataModel__GetEnumerator_d__59", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LobbyPlayersDataModel__GetEnumerator_d__59(LobbyPlayersDataModel__GetEnumerator_d__59 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13108 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*> _____2__current;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LobbyPlayersDataModel* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x28, def value: None
  ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::GlobalNamespace::LobbyPlayerData*> _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__59, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__59, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__59, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__59, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__59, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EntitlementStatus, SongPackMask, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: LobbyPlayersDataModel/<SetOwnedSongPacks>d__42
struct CORDL_TYPE LobbyPlayersDataModel__SetOwnedSongPacks_d__42 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26e1250, size 0x890, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26e1ae0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbyPlayersDataModel__SetOwnedSongPacks_d__42();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LobbyPlayersDataModel*", modifiers: "",
  // def_value: None }, CppParam { name: "_songPackMask_5__2", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevelPack*>*", modifiers: "", def_value: None }, CppParam { name: "_dlcSongPack_5__4", ty:
  // "::GlobalNamespace::BeatmapLevelPack*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr LobbyPlayersDataModel__SetOwnedSongPacks_d__42(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                           ::GlobalNamespace::LobbyPlayersDataModel* __4__this, ::GlobalNamespace::SongPackMask _songPackMask_5__2,
                                                           ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevelPack*>* __7__wrap2,
                                                           ::GlobalNamespace::BeatmapLevelPack* _dlcSongPack_5__4,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13109 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LobbyPlayersDataModel* __4__this;

  /// @brief Field <songPackMask>5__2, offset: 0x30, size: 0x20, def value: None
  ::GlobalNamespace::SongPackMask _songPackMask_5__2;

  /// @brief Field <>7__wrap2, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevelPack*>* __7__wrap2;

  /// @brief Field <dlcSongPack>5__4, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPack* _dlcSongPack_5__4;

  /// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__42, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__42, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__42, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__42, _songPackMask_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__42, __7__wrap2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__42, _dlcSongPack_5__4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__42, __u__1) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__42, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ILobbyPlayersDataModel, System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IReadOnlyCollection`1<T>, System.Collections.Generic.IReadOnlyDictionary`2<TKey,
// TValue>, System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Collections.IEnumerable, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LobbyPlayersDataModel
class CORDL_TYPE LobbyPlayersDataModel : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__59 = ::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__59;

  using _SetOwnedSongPacks_d__42 = ::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__42;

  using __c = ::GlobalNamespace::LobbyPlayersDataModel___c;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) ::GlobalNamespace::ILobbyPlayerData* Item[];

  __declspec(property(get = get_Keys)) ::System::Collections::Generic::IEnumerable_1<::StringW>* Keys;

  __declspec(property(get = get_Values)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILobbyPlayerData*>* Values;

  /// @brief Field _beatmapCharacteristicCollection, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicCollection,
                      put = __cordl_internal_set__beatmapCharacteristicCollection)) ::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field _beatmapLevelsModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _cancellationTokenSource, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _emptyLobbyPlayerData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__emptyLobbyPlayerData, put = __cordl_internal_set__emptyLobbyPlayerData)) ::GlobalNamespace::LobbyPlayerData* _emptyLobbyPlayerData;

  /// @brief Field _lobbyPlayerPermissionsModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyPlayerPermissionsModel,
                      put = __cordl_internal_set__lobbyPlayerPermissionsModel)) ::GlobalNamespace::LobbyPlayerPermissionsModel* _lobbyPlayerPermissionsModel;

  /// @brief Field _menuRpcManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__menuRpcManager, put = __cordl_internal_set__menuRpcManager)) ::GlobalNamespace::IMenuRpcManager* _menuRpcManager;

  /// @brief Field _multiplayerSessionManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field <partyOwnerId>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__partyOwnerId_k__BackingField, put = __cordl_internal_set__partyOwnerId_k__BackingField)) ::StringW _partyOwnerId_k__BackingField;

  /// @brief Field _playersData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__playersData,
                      put = __cordl_internal_set__playersData)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LobbyPlayerData*>* _playersData;

  /// @brief Field didChangeEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeEvent, put = __cordl_internal_set_didChangeEvent)) ::System::Action_1<::StringW>* didChangeEvent;

  __declspec(property(get = get_localUserId)) ::StringW localUserId;

  __declspec(property(get = get_partyOwnerId, put = set_partyOwnerId)) ::StringW partyOwnerId;

  /// @brief Convert operator to "::GlobalNamespace::ILobbyPlayersDataModel"
  constexpr operator ::GlobalNamespace::ILobbyPlayersDataModel*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>"
  constexpr operator ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Activate, addr 0x26de470, size 0x1078, virtual true, abstract: false, final true
  inline void Activate();

  /// @brief Method ClearData, addr 0x26de298, size 0x80, virtual true, abstract: false, final true
  inline void ClearData();

  /// @brief Method ClearLocalPlayerBeatmapLevel, addr 0x26ddc60, size 0xd0, virtual true, abstract: false, final true
  inline void ClearLocalPlayerBeatmapLevel();

  /// @brief Method ClearLocalPlayerGameplayModifiers, addr 0x26dde4c, size 0xbc, virtual true, abstract: false, final true
  inline void ClearLocalPlayerGameplayModifiers();

  /// @brief Method ClearRecommendations, addr 0x26de318, size 0x158, virtual true, abstract: false, final true
  inline void ClearRecommendations();

  /// @brief Method ContainsKey, addr 0x26e0c70, size 0x58, virtual true, abstract: false, final true
  inline bool ContainsKey(::StringW key);

  /// @brief Method Deactivate, addr 0x26df57c, size 0x9f4, virtual true, abstract: false, final true
  inline void Deactivate();

  /// @brief Method Dispose, addr 0x26dff70, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x26e0b94, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>* GetEnumerator();

  /// @brief Method GetOrCreateLobbyPlayerDataModel, addr 0x26dd680, size 0xd8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LobbyPlayerData* GetOrCreateLobbyPlayerDataModel(::StringW userId, ::ByRef<bool> alreadyExists);

  /// @brief Method HandleMenuRpcManagerClearBeatmap, addr 0x26e0598, size 0x20, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerClearBeatmap(::StringW userId);

  /// @brief Method HandleMenuRpcManagerClearRecommendedGameplayModifiers, addr 0x26e0590, size 0x8, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerClearRecommendedGameplayModifiers(::StringW userId);

  /// @brief Method HandleMenuRpcManagerGetIsInLobby, addr 0x26e02c0, size 0x138, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerGetIsInLobby(::StringW userId);

  /// @brief Method HandleMenuRpcManagerGetIsReady, addr 0x26e03f8, size 0x138, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerGetIsReady(::StringW userId);

  /// @brief Method HandleMenuRpcManagerGetOwnedSongPacks, addr 0x26e0a30, size 0x4, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerGetOwnedSongPacks(::StringW userId);

  /// @brief Method HandleMenuRpcManagerGetRecommendedBeatmap, addr 0x26dff74, size 0x1b8, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerGetRecommendedBeatmap(::StringW userId);

  /// @brief Method HandleMenuRpcManagerGetRecommendedGameplayModifiers, addr 0x26e012c, size 0x194, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerGetRecommendedGameplayModifiers(::StringW userId);

  /// @brief Method HandleMenuRpcManagerRecommendBeatmap, addr 0x26e0530, size 0x5c, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerRecommendBeatmap(::StringW userId, ::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable);

  /// @brief Method HandleMenuRpcManagerRecommendGameplayModifiers, addr 0x26e058c, size 0x4, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerRecommendGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method HandleMenuRpcManagerSetIsInLobby, addr 0x26e05c4, size 0xc, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerSetIsInLobby(::StringW userId, bool isInLobby);

  /// @brief Method HandleMenuRpcManagerSetIsReady, addr 0x26e05b8, size 0xc, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerSetIsReady(::StringW userId, bool isReady);

  /// @brief Method HandleMenuRpcManagerSetPlayersPermissionConfiguration, addr 0x26e0a34, size 0x160, virtual false, abstract: false, final false
  inline void HandleMenuRpcManagerSetPlayersPermissionConfiguration(::StringW userId, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersLobbyPermissionConfiguration);

  /// @brief Method HandleMultiplayerSessionManagerPlayerConnected, addr 0x26e0698, size 0x238, virtual false, abstract: false, final false
  inline void HandleMultiplayerSessionManagerPlayerConnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method HandleMultiplayerSessionManagerPlayerDisconnected, addr 0x26e08d0, size 0x160, virtual false, abstract: false, final false
  inline void HandleMultiplayerSessionManagerPlayerDisconnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method HandleMultiplayerSessionManagerPlayerStateChanged, addr 0x26e05d0, size 0xc8, virtual false, abstract: false, final false
  inline void HandleMultiplayerSessionManagerPlayerStateChanged(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method ILobbyPlayersDataModel.SetLocalPlayerBeatmapLevel, addr 0x26e0ee0, size 0x4, virtual true, abstract: false, final true
  inline void ILobbyPlayersDataModel_SetLocalPlayerBeatmapLevel(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  static inline ::GlobalNamespace::LobbyPlayersDataModel* New_ctor();

  /// @brief Method NotifyModelChange, addr 0x26dd818, size 0x1c, virtual false, abstract: false, final false
  inline void NotifyModelChange(::StringW userId);

  /// @brief Method RequestKickPlayer, addr 0x26de1d0, size 0xc8, virtual true, abstract: false, final true
  inline void RequestKickPlayer(::StringW userId);

  /// @brief Method SetLocalPlayerBeatmapLevel, addr 0x26ddaec, size 0x174, virtual false, abstract: false, final false
  inline void SetLocalPlayerBeatmapLevel(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method SetLocalPlayerGameplayModifiers, addr 0x26ddd30, size 0x11c, virtual true, abstract: false, final true
  inline void SetLocalPlayerGameplayModifiers(::GlobalNamespace::GameplayModifiers* modifiers);

  /// @brief Method SetLocalPlayerIsActive, addr 0x26ddf08, size 0xc, virtual true, abstract: false, final true
  inline void SetLocalPlayerIsActive(bool isActive);

  /// @brief Method SetLocalPlayerIsActive, addr 0x26ddf14, size 0xf4, virtual false, abstract: false, final false
  inline void SetLocalPlayerIsActive(bool isActive, bool notifyChange);

  /// @brief Method SetLocalPlayerIsInLobby, addr 0x26de0ec, size 0xc, virtual true, abstract: false, final true
  inline void SetLocalPlayerIsInLobby(bool isInLobby);

  /// @brief Method SetLocalPlayerIsInLobby, addr 0x26de0f8, size 0xd8, virtual false, abstract: false, final false
  inline void SetLocalPlayerIsInLobby(bool isInLobby, bool notifyChange);

  /// @brief Method SetLocalPlayerIsReady, addr 0x26de008, size 0xc, virtual true, abstract: false, final true
  inline void SetLocalPlayerIsReady(bool isReady);

  /// @brief Method SetLocalPlayerIsReady, addr 0x26de014, size 0xd8, virtual false, abstract: false, final false
  inline void SetLocalPlayerIsReady(bool isReady, bool notifyChange);

  /// @brief Method SetOwnedSongPacks, addr 0x26df4e8, size 0x94, virtual false, abstract: false, final false
  inline void SetOwnedSongPacks();

  /// @brief Method SetPlayerBeatmapLevel, addr 0x26dd758, size 0xc0, virtual false, abstract: false, final false
  inline void SetPlayerBeatmapLevel(::StringW userId, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method SetPlayerGameplayModifiers, addr 0x26dd834, size 0x7c, virtual false, abstract: false, final false
  inline void SetPlayerGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers* modifiers);

  /// @brief Method SetPlayerIsActive, addr 0x26dd8b0, size 0x8c, virtual false, abstract: false, final false
  inline void SetPlayerIsActive(::StringW userId, bool isActive, bool notifyChange);

  /// @brief Method SetPlayerIsInLobby, addr 0x26dd9c8, size 0x8c, virtual false, abstract: false, final false
  inline void SetPlayerIsInLobby(::StringW userId, bool isInLobby, bool notifyChange);

  /// @brief Method SetPlayerIsPartyOwner, addr 0x26dda54, size 0x98, virtual false, abstract: false, final false
  inline void SetPlayerIsPartyOwner(::StringW userId, bool isPartyOwner, bool notifyChange);

  /// @brief Method SetPlayerIsReady, addr 0x26dd93c, size 0x8c, virtual false, abstract: false, final false
  inline void SetPlayerIsReady(::StringW userId, bool isReady, bool notifyChange);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x26e0c1c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method TryGetValue, addr 0x26e0cc8, size 0x7c, virtual true, abstract: false, final true
  inline bool TryGetValue(::StringW key, ::ByRef<::GlobalNamespace::ILobbyPlayerData*> value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& __cordl_internal_get__beatmapCharacteristicCollection() const;

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::GlobalNamespace::LobbyPlayerData* const& __cordl_internal_get__emptyLobbyPlayerData() const;

  constexpr ::GlobalNamespace::LobbyPlayerData*& __cordl_internal_get__emptyLobbyPlayerData();

  constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel* const& __cordl_internal_get__lobbyPlayerPermissionsModel() const;

  constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& __cordl_internal_get__lobbyPlayerPermissionsModel();

  constexpr ::GlobalNamespace::IMenuRpcManager* const& __cordl_internal_get__menuRpcManager() const;

  constexpr ::GlobalNamespace::IMenuRpcManager*& __cordl_internal_get__menuRpcManager();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::StringW const& __cordl_internal_get__partyOwnerId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__partyOwnerId_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LobbyPlayerData*>* const& __cordl_internal_get__playersData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LobbyPlayerData*>*& __cordl_internal_get__playersData();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_didChangeEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_didChangeEvent();

  constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__emptyLobbyPlayerData(::GlobalNamespace::LobbyPlayerData* value);

  constexpr void __cordl_internal_set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel* value);

  constexpr void __cordl_internal_set__menuRpcManager(::GlobalNamespace::IMenuRpcManager* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__partyOwnerId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__playersData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LobbyPlayerData*>* value);

  constexpr void __cordl_internal_set_didChangeEvent(::System::Action_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x26e0de4, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeEvent, addr 0x26dd4a0, size 0xb0, virtual true, abstract: false, final true
  inline void add_didChangeEvent(::System::Action_1<::StringW>* value);

  /// @brief Method get_Count, addr 0x26e0c20, size 0x50, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x26dd600, size 0x80, virtual true, abstract: false, final true
  inline ::GlobalNamespace::ILobbyPlayerData* get_Item(::StringW userId);

  /// @brief Method get_Keys, addr 0x26e0d44, size 0x50, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_Keys();

  /// @brief Method get_Values, addr 0x26e0d94, size 0x50, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILobbyPlayerData*>* get_Values();

  /// @brief Method get_localUserId, addr 0x26dd350, size 0x140, virtual true, abstract: false, final true
  inline ::StringW get_localUserId();

  /// @brief Method get_partyOwnerId, addr 0x26dd490, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_partyOwnerId();

  /// @brief Convert to "::GlobalNamespace::ILobbyPlayersDataModel"
  constexpr ::GlobalNamespace::ILobbyPlayersDataModel* i___GlobalNamespace__ILobbyPlayersDataModel() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__ILobbyPlayerData___() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*
  i___System__Collections__Generic__IReadOnlyCollection_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__ILobbyPlayerData___() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>"
  constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>*
  i___System__Collections__Generic__IReadOnlyDictionary_2___StringW___GlobalNamespace__ILobbyPlayerData__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_didChangeEvent, addr 0x26dd550, size 0xb0, virtual true, abstract: false, final true
  inline void remove_didChangeEvent(::System::Action_1<::StringW>* value);

  /// @brief Method set_partyOwnerId, addr 0x26dd498, size 0x8, virtual false, abstract: false, final false
  inline void set_partyOwnerId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbyPlayersDataModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LobbyPlayersDataModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LobbyPlayersDataModel(LobbyPlayersDataModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LobbyPlayersDataModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LobbyPlayersDataModel(LobbyPlayersDataModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13110 };

  /// @brief Field _menuRpcManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMenuRpcManager* ____menuRpcManager;

  /// @brief Field _multiplayerSessionManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _beatmapLevelsModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristicCollection;

  /// @brief Field _lobbyPlayerPermissionsModel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::LobbyPlayerPermissionsModel* ____lobbyPlayerPermissionsModel;

  /// @brief Field _emptyLobbyPlayerData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::LobbyPlayerData* ____emptyLobbyPlayerData;

  /// @brief Field _playersData, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LobbyPlayerData*>* ____playersData;

  /// @brief Field _cancellationTokenSource, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field <partyOwnerId>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____partyOwnerId_k__BackingField;

  /// @brief Field didChangeEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___didChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel, ____menuRpcManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel, ____multiplayerSessionManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel, ____beatmapLevelsModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel, ____beatmapCharacteristicCollection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel, ____lobbyPlayerPermissionsModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel, ____emptyLobbyPlayerData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel, ____playersData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel, ____cancellationTokenSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel, ____partyOwnerId_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayersDataModel, ___didChangeEvent) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyPlayersDataModel, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbyPlayersDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyPlayersDataModel*, "", "LobbyPlayersDataModel");
NEED_NO_BOX(::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__59);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__59*, "", "LobbyPlayersDataModel/<GetEnumerator>d__59");
NEED_NO_BOX(::GlobalNamespace::LobbyPlayersDataModel___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyPlayersDataModel___c*, "", "LobbyPlayersDataModel/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__42, "", "LobbyPlayersDataModel/<SetOwnedSongPacks>d__42");
