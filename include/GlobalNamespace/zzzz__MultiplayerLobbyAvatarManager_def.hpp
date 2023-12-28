#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLobbyAvatarManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController;
}
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13;
}
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarController__Factory;
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
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
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
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5222))
// CS Name: ::MultiplayerLobbyAvatarManager::<RemovePlayerAndDestroy>d__13*
class CORDL_TYPE __MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MultiplayerLobbyAvatarManager* __4__this;

  /// @brief Field userId, offset 0x28, size 0x8
  __declspec(property(get = __get_userId, put = __set_userId))::StringW userId;

  /// @brief Field multiplayerAvatar, offset 0x30, size 0x8
  __declspec(property(get = __get_multiplayerAvatar, put = __set_multiplayerAvatar))::GlobalNamespace::MultiplayerLobbyAvatarController* multiplayerAvatar;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::MultiplayerLobbyAvatarManager*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarManager*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MultiplayerLobbyAvatarManager* value);

  constexpr ::StringW& __get_userId();

  constexpr ::StringW const& __get_userId() const;

  constexpr void __set_userId(::StringW value);

  constexpr ::GlobalNamespace::MultiplayerLobbyAvatarController*& __get_multiplayerAvatar();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyAvatarController*> const& __get_multiplayerAvatar() const;

  constexpr void __set_multiplayerAvatar(::GlobalNamespace::MultiplayerLobbyAvatarController* value);

  static inline ::GlobalNamespace::__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2251a98 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2251b8c size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2251b90 size 0x120 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2251cb0 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2251cb8 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2251cf8 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13(__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13(__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLobbyAvatarManager* _____4__this;

  /// @brief Field userId, offset: 0x28, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field multiplayerAvatar, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLobbyAvatarController* ___multiplayerAvatar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerLobbyAvatarManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5223))
// CS Name: ::MultiplayerLobbyAvatarManager*
class CORDL_TYPE MultiplayerLobbyAvatarManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _RemovePlayerAndDestroy_d__13 = ::GlobalNamespace::__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13;

  /// @brief Field _lobbyStateDataModel, offset 0x18, size 0x8
  __declspec(property(get = __get__lobbyStateDataModel, put = __set__lobbyStateDataModel))::GlobalNamespace::ILobbyStateDataModel* _lobbyStateDataModel;

  /// @brief Field _avatarControllerFactory, offset 0x20, size 0x8
  __declspec(property(get = __get__avatarControllerFactory, put = __set__avatarControllerFactory))::GlobalNamespace::__MultiplayerLobbyAvatarController__Factory* _avatarControllerFactory;

  /// @brief Field _innerCircleRadius, offset 0x28, size 0x4
  __declspec(property(get = __get__innerCircleRadius, put = __set__innerCircleRadius)) float_t _innerCircleRadius;

  /// @brief Field _minOuterCircleRadius, offset 0x2c, size 0x4
  __declspec(property(get = __get__minOuterCircleRadius, put = __set__minOuterCircleRadius)) float_t _minOuterCircleRadius;

  /// @brief Field _playerIdToAvatarMap, offset 0x30, size 0x8
  __declspec(property(get = __get__playerIdToAvatarMap,
                      put = __set__playerIdToAvatarMap))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLobbyAvatarController*>* _playerIdToAvatarMap;

  /// @brief Field _inProgressDespawnAnimations, offset 0x38, size 0x8
  __declspec(property(get = __get__inProgressDespawnAnimations,
                      put = __set__inProgressDespawnAnimations))::System::Collections::Generic::HashSet_1<::GlobalNamespace::MultiplayerLobbyAvatarController*>* _inProgressDespawnAnimations;

  constexpr ::GlobalNamespace::ILobbyStateDataModel*& __get__lobbyStateDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyStateDataModel*> const& __get__lobbyStateDataModel() const;

  constexpr void __set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value);

  constexpr ::GlobalNamespace::__MultiplayerLobbyAvatarController__Factory*& __get__avatarControllerFactory();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerLobbyAvatarController__Factory*> const& __get__avatarControllerFactory() const;

  constexpr void __set__avatarControllerFactory(::GlobalNamespace::__MultiplayerLobbyAvatarController__Factory* value);

  constexpr float_t& __get__innerCircleRadius();

  constexpr float_t const& __get__innerCircleRadius() const;

  constexpr void __set__innerCircleRadius(float_t value);

  constexpr float_t& __get__minOuterCircleRadius();

  constexpr float_t const& __get__minOuterCircleRadius() const;

  constexpr void __set__minOuterCircleRadius(float_t value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLobbyAvatarController*>*& __get__playerIdToAvatarMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLobbyAvatarController*>*> const&
  __get__playerIdToAvatarMap() const;

  constexpr void __set__playerIdToAvatarMap(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLobbyAvatarController*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MultiplayerLobbyAvatarController*>*& __get__inProgressDespawnAnimations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::GlobalNamespace::MultiplayerLobbyAvatarController*>*> const& __get__inProgressDespawnAnimations() const;

  constexpr void __set__inProgressDespawnAnimations(::System::Collections::Generic::HashSet_1<::GlobalNamespace::MultiplayerLobbyAvatarController*>* value);

  /// @brief Method Init addr 0x2250b70 size 0x8 virtual false final false
  inline void Init(float_t innerCircleRadius, float_t minOuterCircleRadius);

  /// @brief Method ActivateMultiplayerLobbyAvatarManager addr 0x2250b78 size 0x2f4 virtual false final false
  inline void ActivateMultiplayerLobbyAvatarManager();

  /// @brief Method DeactivateMultiplayerLobbyAvatarManager addr 0x22512d0 size 0x424 virtual false final false
  inline void DeactivateMultiplayerLobbyAvatarManager();

  /// @brief Method HandleLobbyStateDataModelPlayerConnected addr 0x22516f4 size 0x4 virtual false final false
  inline void HandleLobbyStateDataModelPlayerConnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method HandleLobbyStateDataModelPlayerDisconnected addr 0x22516f8 size 0x4 virtual false final false
  inline void HandleLobbyStateDataModelPlayerDisconnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method AddPlayer addr 0x2250e6c size 0x464 virtual false final false
  inline void AddPlayer(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method RemovePlayer addr 0x22516fc size 0x164 virtual false final false
  inline void RemovePlayer(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method RemovePlayerAndDestroy addr 0x2251a1c size 0x7c virtual false final false
  inline ::System::Collections::IEnumerator* RemovePlayerAndDestroy(::StringW userId, ::GlobalNamespace::MultiplayerLobbyAvatarController* multiplayerAvatar);

  static inline ::GlobalNamespace::MultiplayerLobbyAvatarManager* New_ctor();

  /// @brief Method .ctor addr 0x2251ac0 size 0xcc virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyAvatarManager(MultiplayerLobbyAvatarManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyAvatarManager(MultiplayerLobbyAvatarManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyAvatarManager();

public:
  /// @brief Field _lobbyStateDataModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyStateDataModel* ____lobbyStateDataModel;

  /// @brief Field _avatarControllerFactory, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerLobbyAvatarController__Factory* ____avatarControllerFactory;

  /// @brief Field _innerCircleRadius, offset: 0x28, size: 0x4, def value: None
  float_t ____innerCircleRadius;

  /// @brief Field _minOuterCircleRadius, offset: 0x2c, size: 0x4, def value: None
  float_t ____minOuterCircleRadius;

  /// @brief Field _playerIdToAvatarMap, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLobbyAvatarController*>* ____playerIdToAvatarMap;

  /// @brief Field _inProgressDespawnAnimations, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MultiplayerLobbyAvatarController*>* ____inProgressDespawnAnimations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyAvatarManager, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarManager*, "", "MultiplayerLobbyAvatarManager");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13*, "", "MultiplayerLobbyAvatarManager/<RemovePlayerAndDestroy>d__13");
