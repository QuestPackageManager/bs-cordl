#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyAvatarManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
class MultiplayerLobbyAvatarController;
}
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarController__Factory;
}
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyAvatarManager;
}
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyAvatarManager);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13);
// Type: ::<RemovePlayerAndDestroy>d__13
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLobbyAvatarManager::<RemovePlayerAndDestroy>d__13*
class CORDL_TYPE __MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x3b736d0, size 0x120, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3b737f0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3b737f8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3b73830, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3b736cc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

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

  /// @brief Method .ctor, addr 0x3b735d4, size 0x28, virtual false, abstract: false, final false
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
  constexpr __MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13(__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13(__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13 const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4569 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13, ___userId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13, ___multiplayerAvatar) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerLobbyAvatarManager
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLobbyAvatarManager*
class CORDL_TYPE MultiplayerLobbyAvatarManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _RemovePlayerAndDestroy_d__13 = ::GlobalNamespace::__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13;

  /// @brief Field _avatarControllerFactory, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarControllerFactory,
                      put = __cordl_internal_set__avatarControllerFactory)) ::GlobalNamespace::__MultiplayerLobbyAvatarController__Factory* _avatarControllerFactory;

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

  /// @brief Method ActivateMultiplayerLobbyAvatarManager, addr 0x3b726b0, size 0x2f4, virtual false, abstract: false, final false
  inline void ActivateMultiplayerLobbyAvatarManager();

  /// @brief Method AddPlayer, addr 0x3b729a4, size 0x468, virtual false, abstract: false, final false
  inline void AddPlayer(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method DeactivateMultiplayerLobbyAvatarManager, addr 0x3b72e0c, size 0x41c, virtual false, abstract: false, final false
  inline void DeactivateMultiplayerLobbyAvatarManager();

  /// @brief Method HandleLobbyStateDataModelPlayerConnected, addr 0x3b73228, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyStateDataModelPlayerConnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method HandleLobbyStateDataModelPlayerDisconnected, addr 0x3b7322c, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyStateDataModelPlayerDisconnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method Init, addr 0x3b726a8, size 0x8, virtual false, abstract: false, final false
  inline void Init(float_t innerCircleRadius, float_t minOuterCircleRadius);

  static inline ::GlobalNamespace::MultiplayerLobbyAvatarManager* New_ctor();

  /// @brief Method RemovePlayer, addr 0x3b73230, size 0x164, virtual false, abstract: false, final false
  inline void RemovePlayer(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method RemovePlayerAndDestroy, addr 0x3b73560, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RemovePlayerAndDestroy(::StringW userId, ::GlobalNamespace::MultiplayerLobbyAvatarController* multiplayerAvatar);

  constexpr ::GlobalNamespace::__MultiplayerLobbyAvatarController__Factory*& __cordl_internal_get__avatarControllerFactory();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerLobbyAvatarController__Factory*> const& __cordl_internal_get__avatarControllerFactory() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>*& __cordl_internal_get__inProgressDespawnAnimations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>*> const&
  __cordl_internal_get__inProgressDespawnAnimations() const;

  constexpr float_t const& __cordl_internal_get__innerCircleRadius() const;

  constexpr float_t& __cordl_internal_get__innerCircleRadius();

  constexpr ::GlobalNamespace::ILobbyStateDataModel*& __cordl_internal_get__lobbyStateDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyStateDataModel*> const& __cordl_internal_get__lobbyStateDataModel() const;

  constexpr float_t const& __cordl_internal_get__minOuterCircleRadius() const;

  constexpr float_t& __cordl_internal_get__minOuterCircleRadius();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>*& __cordl_internal_get__playerIdToAvatarMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>*> const&
  __cordl_internal_get__playerIdToAvatarMap() const;

  constexpr void __cordl_internal_set__avatarControllerFactory(::GlobalNamespace::__MultiplayerLobbyAvatarController__Factory* value);

  constexpr void __cordl_internal_set__inProgressDespawnAnimations(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>* value);

  constexpr void __cordl_internal_set__innerCircleRadius(float_t value);

  constexpr void __cordl_internal_set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value);

  constexpr void __cordl_internal_set__minOuterCircleRadius(float_t value);

  constexpr void __cordl_internal_set__playerIdToAvatarMap(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>* value);

  /// @brief Method .ctor, addr 0x3b735fc, size 0xd0, virtual false, abstract: false, final false
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

  /// @brief Field _lobbyStateDataModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyStateDataModel* ____lobbyStateDataModel;

  /// @brief Field _avatarControllerFactory, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerLobbyAvatarController__Factory* ____avatarControllerFactory;

  /// @brief Field _innerCircleRadius, offset: 0x30, size: 0x4, def value: None
  float_t ____innerCircleRadius;

  /// @brief Field _minOuterCircleRadius, offset: 0x34, size: 0x4, def value: None
  float_t ____minOuterCircleRadius;

  /// @brief Field _playerIdToAvatarMap, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>* ____playerIdToAvatarMap;

  /// @brief Field _inProgressDespawnAnimations, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>>* ____inProgressDespawnAnimations;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4570 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyAvatarManager, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager, ____lobbyStateDataModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager, ____avatarControllerFactory) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager, ____innerCircleRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager, ____minOuterCircleRadius) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager, ____playerIdToAvatarMap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyAvatarManager, ____inProgressDespawnAnimations) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarManager*, "", "MultiplayerLobbyAvatarManager");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13*, "", "MultiplayerLobbyAvatarManager/<RemovePlayerAndDestroy>d__13");
