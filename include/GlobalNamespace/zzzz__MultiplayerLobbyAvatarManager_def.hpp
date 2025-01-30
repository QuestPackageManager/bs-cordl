#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyAvatarManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLobbyAvatarManager)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController_Factory;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyAvatarManager;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyAvatarManager);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLobbyAvatarManager/<RemovePlayerAndDestroy>d__13
class CORDL_TYPE MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarManager> __4__this;

  /// @brief Field multiplayerAvatar, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_multiplayerAvatar, put = __cordl_internal_set_multiplayerAvatar)) ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> multiplayerAvatar;

  /// @brief Field userId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId)) ::StringW userId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3bdb130, size 0x120, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3bdb250, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3bdb258, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3bdb290, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3bdb12c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarManager>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> const& __cordl_internal_get_multiplayerAvatar() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>& __cordl_internal_get_multiplayerAvatar();

  constexpr ::StringW const& __cordl_internal_get_userId() const;

  constexpr ::StringW& __cordl_internal_get_userId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarManager> value);

  constexpr void __cordl_internal_set_multiplayerAvatar(::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> value);

  constexpr void __cordl_internal_set_userId(::StringW value);

  /// @brief Method .ctor, addr 0x3bdb034, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13(MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13(MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4584 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarManager> _____4__this;

  /// @brief Field userId, offset: 0x28, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field multiplayerAvatar, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> ___multiplayerAvatar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13, ___userId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13, ___multiplayerAvatar) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLobbyAvatarManager
class CORDL_TYPE MultiplayerLobbyAvatarManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _RemovePlayerAndDestroy_d__13 = ::GlobalNamespace::MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13;

  /// @brief Field _avatarControllerFactory, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarControllerFactory,
                      put = __cordl_internal_set__avatarControllerFactory)) ::GlobalNamespace::MultiplayerLobbyAvatarController_Factory* _avatarControllerFactory;

  /// @brief Field _inProgressDespawnAnimations, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get__inProgressDespawnAnimations,
      put = __cordl_internal_set__inProgressDespawnAnimations)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>* _inProgressDespawnAnimations;

  /// @brief Field _innerCircleRadius, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__innerCircleRadius, put = __cordl_internal_set__innerCircleRadius)) float_t _innerCircleRadius;

  /// @brief Field _lobbyStateDataModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyStateDataModel, put = __cordl_internal_set__lobbyStateDataModel)) ::GlobalNamespace::ILobbyStateDataModel* _lobbyStateDataModel;

  /// @brief Field _minOuterCircleRadius, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__minOuterCircleRadius, put = __cordl_internal_set__minOuterCircleRadius)) float_t _minOuterCircleRadius;

  /// @brief Field _playerIdToAvatarMap, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get__playerIdToAvatarMap,
      put = __cordl_internal_set__playerIdToAvatarMap)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>* _playerIdToAvatarMap;

  /// @brief Method ActivateMultiplayerLobbyAvatarManager, addr 0x3bda110, size 0x2f4, virtual false, abstract: false, final false
  inline void ActivateMultiplayerLobbyAvatarManager();

  /// @brief Method AddPlayer, addr 0x3bda404, size 0x468, virtual false, abstract: false, final false
  inline void AddPlayer(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method DeactivateMultiplayerLobbyAvatarManager, addr 0x3bda86c, size 0x41c, virtual false, abstract: false, final false
  inline void DeactivateMultiplayerLobbyAvatarManager();

  /// @brief Method HandleLobbyStateDataModelPlayerConnected, addr 0x3bdac88, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyStateDataModelPlayerConnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method HandleLobbyStateDataModelPlayerDisconnected, addr 0x3bdac8c, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyStateDataModelPlayerDisconnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method Init, addr 0x3bda108, size 0x8, virtual false, abstract: false, final false
  inline void Init(float_t innerCircleRadius, float_t minOuterCircleRadius);

  static inline ::GlobalNamespace::MultiplayerLobbyAvatarManager* New_ctor();

  /// @brief Method RemovePlayer, addr 0x3bdac90, size 0x164, virtual false, abstract: false, final false
  inline void RemovePlayer(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method RemovePlayerAndDestroy, addr 0x3bdafc0, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RemovePlayerAndDestroy(::StringW userId, ::GlobalNamespace::MultiplayerLobbyAvatarController* multiplayerAvatar);

  constexpr ::GlobalNamespace::MultiplayerLobbyAvatarController_Factory* const& __cordl_internal_get__avatarControllerFactory() const;

  constexpr ::GlobalNamespace::MultiplayerLobbyAvatarController_Factory*& __cordl_internal_get__avatarControllerFactory();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>* const& __cordl_internal_get__inProgressDespawnAnimations() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>*& __cordl_internal_get__inProgressDespawnAnimations();

  constexpr float_t const& __cordl_internal_get__innerCircleRadius() const;

  constexpr float_t& __cordl_internal_get__innerCircleRadius();

  constexpr ::GlobalNamespace::ILobbyStateDataModel* const& __cordl_internal_get__lobbyStateDataModel() const;

  constexpr ::GlobalNamespace::ILobbyStateDataModel*& __cordl_internal_get__lobbyStateDataModel();

  constexpr float_t const& __cordl_internal_get__minOuterCircleRadius() const;

  constexpr float_t& __cordl_internal_get__minOuterCircleRadius();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>* const& __cordl_internal_get__playerIdToAvatarMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>*& __cordl_internal_get__playerIdToAvatarMap();

  constexpr void __cordl_internal_set__avatarControllerFactory(::GlobalNamespace::MultiplayerLobbyAvatarController_Factory* value);

  constexpr void __cordl_internal_set__inProgressDespawnAnimations(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>* value);

  constexpr void __cordl_internal_set__innerCircleRadius(float_t value);

  constexpr void __cordl_internal_set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value);

  constexpr void __cordl_internal_set__minOuterCircleRadius(float_t value);

  constexpr void __cordl_internal_set__playerIdToAvatarMap(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>* value);

  /// @brief Method .ctor, addr 0x3bdb05c, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyAvatarManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyAvatarManager(MultiplayerLobbyAvatarManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyAvatarManager(MultiplayerLobbyAvatarManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4585 };

  /// @brief Field _lobbyStateDataModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyStateDataModel* ____lobbyStateDataModel;

  /// @brief Field _avatarControllerFactory, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLobbyAvatarController_Factory* ____avatarControllerFactory;

  /// @brief Field _innerCircleRadius, offset: 0x30, size: 0x4, def value: None
  float_t ____innerCircleRadius;

  /// @brief Field _minOuterCircleRadius, offset: 0x34, size: 0x4, def value: None
  float_t ____minOuterCircleRadius;

  /// @brief Field _playerIdToAvatarMap, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>* ____playerIdToAvatarMap;

  /// @brief Field _inProgressDespawnAnimations, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>* ____inProgressDespawnAnimations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager, ____lobbyStateDataModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager, ____avatarControllerFactory) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager, ____innerCircleRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager, ____minOuterCircleRadius) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager, ____playerIdToAvatarMap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager, ____inProgressDespawnAnimations) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyAvatarManager, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarManager*, "", "MultiplayerLobbyAvatarManager");
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarManager__RemovePlayerAndDestroy_d__13*, "", "MultiplayerLobbyAvatarManager/<RemovePlayerAndDestroy>d__13");
