#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MultiplayerTimelineMock)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerTimelineMock;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerTimelineMock);
// Type: ::MultiplayerTimelineMock
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6055))
// CS Name: ::MultiplayerTimelineMock*
class CORDL_TYPE MultiplayerTimelineMock : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _connectedPlayerIntroAnimators, offset 0x18, size 0x8
  __declspec(property(get = __get__connectedPlayerIntroAnimators,
                      put = __set__connectedPlayerIntroAnimators))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> _connectedPlayerIntroAnimators;

  /// @brief Field _connectedPlayerScoreRingItems, offset 0x20, size 0x8
  __declspec(property(get = __get__connectedPlayerScoreRingItems,
                      put = __set__connectedPlayerScoreRingItems))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> _connectedPlayerScoreRingItems;

  /// @brief Field _connectedPlayerOutroAnimators, offset 0x28, size 0x8
  __declspec(property(get = __get__connectedPlayerOutroAnimators,
                      put = __set__connectedPlayerOutroAnimators))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> _connectedPlayerOutroAnimators;

  /// @brief Field _localPlayerIntroAnimator, offset 0x30, size 0x8
  __declspec(property(get = __get__localPlayerIntroAnimator, put = __set__localPlayerIntroAnimator))::UnityEngine::GameObject* _localPlayerIntroAnimator;

  /// @brief Field _localPlayerScoreRingItem, offset 0x38, size 0x8
  __declspec(property(get = __get__localPlayerScoreRingItem, put = __set__localPlayerScoreRingItem))::UnityEngine::GameObject* _localPlayerScoreRingItem;

  /// @brief Field _localPlayerOutroAnimator, offset 0x40, size 0x8
  __declspec(property(get = __get__localPlayerOutroAnimator, put = __set__localPlayerOutroAnimator))::UnityEngine::GameObject* _localPlayerOutroAnimator;

  /// @brief Field _connectedDuelIntroAnimator, offset 0x48, size 0x8
  __declspec(property(get = __get__connectedDuelIntroAnimator, put = __set__connectedDuelIntroAnimator))::UnityEngine::GameObject* _connectedDuelIntroAnimator;

  /// @brief Field _connectedDuelOutroAnimator, offset 0x50, size 0x8
  __declspec(property(get = __get__connectedDuelOutroAnimator, put = __set__connectedDuelOutroAnimator))::UnityEngine::GameObject* _connectedDuelOutroAnimator;

  /// @brief Field _localDuelIntroAnimator, offset 0x58, size 0x8
  __declspec(property(get = __get__localDuelIntroAnimator, put = __set__localDuelIntroAnimator))::UnityEngine::GameObject* _localDuelIntroAnimator;

  /// @brief Field _localDuelOutroAnimator, offset 0x60, size 0x8
  __declspec(property(get = __get__localDuelOutroAnimator, put = __set__localDuelOutroAnimator))::UnityEngine::GameObject* _localDuelOutroAnimator;

  /// @brief Field _resultAvatars, offset 0x68, size 0x8
  __declspec(property(get = __get__resultAvatars, put = __set__resultAvatars))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> _resultAvatars;

  /// @brief Field _badgeTimelines, offset 0x70, size 0x8
  __declspec(property(get = __get__badgeTimelines, put = __set__badgeTimelines))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> _badgeTimelines;

  /// @brief Field _resultsMocks, offset 0x78, size 0x8
  __declspec(property(get = __get__resultsMocks, put = __set__resultsMocks))::UnityEngine::GameObject* _resultsMocks;

  /// @brief Field _ringsGroup, offset 0x80, size 0x8
  __declspec(property(get = __get__ringsGroup, put = __set__ringsGroup))::UnityEngine::GameObject* _ringsGroup;

  /// @brief Field _playersGroup, offset 0x88, size 0x8
  __declspec(property(get = __get__playersGroup, put = __set__playersGroup))::UnityEngine::GameObject* _playersGroup;

  /// @brief Field _duelGroup, offset 0x90, size 0x8
  __declspec(property(get = __get__duelGroup, put = __set__duelGroup))::UnityEngine::GameObject* _duelGroup;

  __declspec(property(get = get_connectedPlayerIntroAnimators))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> connectedPlayerIntroAnimators;

  __declspec(property(get = get_connectedPlayerScoreRings))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> connectedPlayerScoreRings;

  __declspec(property(get = get_connectedPlayerOutroAnimators))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> connectedPlayerOutroAnimators;

  __declspec(property(get = get_localPlayerIntroAnimator))::UnityEngine::GameObject* localPlayerIntroAnimator;

  __declspec(property(get = get_localPlayerScoreRingItem))::UnityEngine::GameObject* localPlayerScoreRingItem;

  __declspec(property(get = get_localPlayerOutroAnimator))::UnityEngine::GameObject* localPlayerOutroAnimator;

  __declspec(property(get = get_connectedDuelIntroAnimator))::UnityEngine::GameObject* connectedDuelIntroAnimator;

  __declspec(property(get = get_connectedDuelOutroAnimator))::UnityEngine::GameObject* connectedDuelOutroAnimator;

  __declspec(property(get = get_localDuelIntroAnimator))::UnityEngine::GameObject* localDuelIntroAnimator;

  __declspec(property(get = get_localDuelOutroAnimator))::UnityEngine::GameObject* localDuelOutroAnimator;

  __declspec(property(get = get_resultAvatars))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> resultAvatars;

  __declspec(property(get = get_badgeTimelines))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> badgeTimelines;

  __declspec(property(get = get_resultsMocks))::UnityEngine::GameObject* resultsMocks;

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& __get__connectedPlayerIntroAnimators();

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& __get__connectedPlayerIntroAnimators() const;

  constexpr void __set__connectedPlayerIntroAnimators(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value);

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& __get__connectedPlayerScoreRingItems();

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& __get__connectedPlayerScoreRingItems() const;

  constexpr void __set__connectedPlayerScoreRingItems(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value);

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& __get__connectedPlayerOutroAnimators();

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& __get__connectedPlayerOutroAnimators() const;

  constexpr void __set__connectedPlayerOutroAnimators(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value);

  constexpr ::UnityEngine::GameObject*& __get__localPlayerIntroAnimator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__localPlayerIntroAnimator() const;

  constexpr void __set__localPlayerIntroAnimator(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__localPlayerScoreRingItem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__localPlayerScoreRingItem() const;

  constexpr void __set__localPlayerScoreRingItem(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__localPlayerOutroAnimator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__localPlayerOutroAnimator() const;

  constexpr void __set__localPlayerOutroAnimator(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__connectedDuelIntroAnimator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__connectedDuelIntroAnimator() const;

  constexpr void __set__connectedDuelIntroAnimator(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__connectedDuelOutroAnimator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__connectedDuelOutroAnimator() const;

  constexpr void __set__connectedDuelOutroAnimator(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__localDuelIntroAnimator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__localDuelIntroAnimator() const;

  constexpr void __set__localDuelIntroAnimator(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__localDuelOutroAnimator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__localDuelOutroAnimator() const;

  constexpr void __set__localDuelOutroAnimator(::UnityEngine::GameObject* value);

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& __get__resultAvatars();

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& __get__resultAvatars() const;

  constexpr void __set__resultAvatars(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value);

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& __get__badgeTimelines();

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& __get__badgeTimelines() const;

  constexpr void __set__badgeTimelines(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value);

  constexpr ::UnityEngine::GameObject*& __get__resultsMocks();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__resultsMocks() const;

  constexpr void __set__resultsMocks(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__ringsGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__ringsGroup() const;

  constexpr void __set__ringsGroup(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__playersGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__playersGroup() const;

  constexpr void __set__playersGroup(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__duelGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__duelGroup() const;

  constexpr void __set__duelGroup(::UnityEngine::GameObject* value);

  /// @brief Method get_connectedPlayerIntroAnimators addr 0x21c2c40 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> get_connectedPlayerIntroAnimators();

  /// @brief Method get_connectedPlayerScoreRings addr 0x21c2c48 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> get_connectedPlayerScoreRings();

  /// @brief Method get_connectedPlayerOutroAnimators addr 0x21c2c50 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> get_connectedPlayerOutroAnimators();

  /// @brief Method get_localPlayerIntroAnimator addr 0x21c2c58 size 0x8 virtual false final false
  inline ::UnityEngine::GameObject* get_localPlayerIntroAnimator();

  /// @brief Method get_localPlayerScoreRingItem addr 0x21c2c60 size 0x8 virtual false final false
  inline ::UnityEngine::GameObject* get_localPlayerScoreRingItem();

  /// @brief Method get_localPlayerOutroAnimator addr 0x21c2c68 size 0x8 virtual false final false
  inline ::UnityEngine::GameObject* get_localPlayerOutroAnimator();

  /// @brief Method get_connectedDuelIntroAnimator addr 0x21c2c70 size 0x8 virtual false final false
  inline ::UnityEngine::GameObject* get_connectedDuelIntroAnimator();

  /// @brief Method get_connectedDuelOutroAnimator addr 0x21c2c78 size 0x8 virtual false final false
  inline ::UnityEngine::GameObject* get_connectedDuelOutroAnimator();

  /// @brief Method get_localDuelIntroAnimator addr 0x21c2c80 size 0x8 virtual false final false
  inline ::UnityEngine::GameObject* get_localDuelIntroAnimator();

  /// @brief Method get_localDuelOutroAnimator addr 0x21c2c88 size 0x8 virtual false final false
  inline ::UnityEngine::GameObject* get_localDuelOutroAnimator();

  /// @brief Method get_resultAvatars addr 0x21c2c90 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> get_resultAvatars();

  /// @brief Method get_badgeTimelines addr 0x21c2c98 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> get_badgeTimelines();

  /// @brief Method get_resultsMocks addr 0x21c2ca0 size 0x8 virtual false final false
  inline ::UnityEngine::GameObject* get_resultsMocks();

  /// @brief Method HandleActivations addr 0x21c2ca8 size 0x60 virtual false final false
  inline void HandleActivations(bool isDuel);

  static inline ::GlobalNamespace::MultiplayerTimelineMock* New_ctor();

  /// @brief Method .ctor addr 0x21c2d08 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerTimelineMock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerTimelineMock(MultiplayerTimelineMock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerTimelineMock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerTimelineMock(MultiplayerTimelineMock const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerTimelineMock();

public:
  /// @brief Field _connectedPlayerIntroAnimators, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> ____connectedPlayerIntroAnimators;

  /// @brief Field _connectedPlayerScoreRingItems, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> ____connectedPlayerScoreRingItems;

  /// @brief Field _connectedPlayerOutroAnimators, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> ____connectedPlayerOutroAnimators;

  /// @brief Field _localPlayerIntroAnimator, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____localPlayerIntroAnimator;

  /// @brief Field _localPlayerScoreRingItem, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____localPlayerScoreRingItem;

  /// @brief Field _localPlayerOutroAnimator, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____localPlayerOutroAnimator;

  /// @brief Field _connectedDuelIntroAnimator, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____connectedDuelIntroAnimator;

  /// @brief Field _connectedDuelOutroAnimator, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____connectedDuelOutroAnimator;

  /// @brief Field _localDuelIntroAnimator, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____localDuelIntroAnimator;

  /// @brief Field _localDuelOutroAnimator, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____localDuelOutroAnimator;

  /// @brief Field _resultAvatars, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> ____resultAvatars;

  /// @brief Field _badgeTimelines, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> ____badgeTimelines;

  /// @brief Field _resultsMocks, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____resultsMocks;

  /// @brief Field _ringsGroup, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____ringsGroup;

  /// @brief Field _playersGroup, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____playersGroup;

  /// @brief Field _duelGroup, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____duelGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerTimelineMock, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerTimelineMock, ____connectedPlayerIntroAnimators) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerTimelineMock, ____connectedPlayerScoreRingItems) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerTimelineMock, ____connectedPlayerOutroAnimators) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerTimelineMock, ____localPlayerIntroAnimator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerTimelineMock, ____localPlayerScoreRingItem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerTimelineMock, ____localPlayerOutroAnimator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerTimelineMock, ____connectedDuelIntroAnimator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerTimelineMock, ____connectedDuelOutroAnimator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerTimelineMock, ____localDuelIntroAnimator) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerTimelineMock, ____localDuelOutroAnimator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerTimelineMock, ____resultAvatars) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerTimelineMock, ____badgeTimelines) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerTimelineMock, ____resultsMocks) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerTimelineMock, ____ringsGroup) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerTimelineMock, ____playersGroup) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerTimelineMock, ____duelGroup) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerTimelineMock);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerTimelineMock*, "", "MultiplayerTimelineMock");
