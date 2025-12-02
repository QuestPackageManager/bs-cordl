#pragma once
// IWYU pragma private; include "GlobalNamespace/GameObjectKeywordSwitchEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GameObjectKeywordSwitchEffect)
namespace GlobalNamespace {
class GameObjectKeywordSwitchEffect_GameObjectKeywordItem;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GameObjectKeywordSwitchEffect;
}
namespace GlobalNamespace {
class GameObjectKeywordSwitchEffect_GameObjectKeywordItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameObjectKeywordSwitchEffect);
MARK_REF_PTR_T(::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameObjectKeywordSwitchEffect/GameObjectKeywordItem
class CORDL_TYPE GameObjectKeywordSwitchEffect_GameObjectKeywordItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObject, put = __cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject> gameObject;

  /// @brief Field keyword, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keyword, put = __cordl_internal_set_keyword)) ::StringW keyword;

  static inline ::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem* New_ctor();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject();

  constexpr ::StringW const& __cordl_internal_get_keyword() const;

  constexpr ::StringW& __cordl_internal_get_keyword();

  constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_keyword(::StringW value);

  /// @brief Method .ctor, addr 0x5779648, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameObjectKeywordSwitchEffect_GameObjectKeywordItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameObjectKeywordSwitchEffect_GameObjectKeywordItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameObjectKeywordSwitchEffect_GameObjectKeywordItem(GameObjectKeywordSwitchEffect_GameObjectKeywordItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameObjectKeywordSwitchEffect_GameObjectKeywordItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameObjectKeywordSwitchEffect_GameObjectKeywordItem(GameObjectKeywordSwitchEffect_GameObjectKeywordItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5825 };

  /// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObject;

  /// @brief Field keyword, offset: 0x18, size: 0x8, def value: None
  ::StringW ___keyword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem, ___keyword) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameObjectKeywordSwitchEffect
class CORDL_TYPE GameObjectKeywordSwitchEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GameObjectKeywordItem = ::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem;

  /// @brief Field _defaultGameObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultGameObject, put = __cordl_internal_set__defaultGameObject)) ::UnityW<::UnityEngine::GameObject> _defaultGameObject;

  /// @brief Field _gameObjectKeywordItems, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObjectKeywordItems,
                      put = __cordl_internal_set__gameObjectKeywordItems)) ::ArrayW<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*,
                                                                                    ::Array<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*>*>
      _gameObjectKeywordItems;

  /// @brief Method Initialize, addr 0x57794fc, size 0x148, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);

  static inline ::GlobalNamespace::GameObjectKeywordSwitchEffect* New_ctor();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__defaultGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__defaultGameObject();

  constexpr ::ArrayW<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*, ::Array<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*>*> const&
  __cordl_internal_get__gameObjectKeywordItems() const;

  constexpr ::ArrayW<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*, ::Array<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*>*>&
  __cordl_internal_get__gameObjectKeywordItems();

  constexpr void __cordl_internal_set__defaultGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__gameObjectKeywordItems(
      ::ArrayW<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*, ::Array<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*>*> value);

  /// @brief Method .ctor, addr 0x5779644, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameObjectKeywordSwitchEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameObjectKeywordSwitchEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameObjectKeywordSwitchEffect(GameObjectKeywordSwitchEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameObjectKeywordSwitchEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameObjectKeywordSwitchEffect(GameObjectKeywordSwitchEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5826 };

  /// @brief Field _defaultGameObject, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____defaultGameObject;

  /// @brief Field _gameObjectKeywordItems, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*, ::Array<::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*>*> ____gameObjectKeywordItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameObjectKeywordSwitchEffect, ____defaultGameObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectKeywordSwitchEffect, ____gameObjectKeywordItems) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameObjectKeywordSwitchEffect, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameObjectKeywordSwitchEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameObjectKeywordSwitchEffect*, "", "GameObjectKeywordSwitchEffect");
NEED_NO_BOX(::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameObjectKeywordSwitchEffect_GameObjectKeywordItem*, "", "GameObjectKeywordSwitchEffect/GameObjectKeywordItem");
