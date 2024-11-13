#pragma once
// IWYU pragma private; include "GlobalNamespace/GameObjectKeywordSwitchEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GameObjectKeywordSwitchEffect)
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class __GameObjectKeywordSwitchEffect__GameObjectKeywordItem;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GameObjectKeywordSwitchEffect;
}
namespace GlobalNamespace {
class __GameObjectKeywordSwitchEffect__GameObjectKeywordItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameObjectKeywordSwitchEffect);
MARK_REF_PTR_T(::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem);
// Type: ::GameObjectKeywordItem
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameObjectKeywordSwitchEffect::GameObjectKeywordItem*
class CORDL_TYPE __GameObjectKeywordSwitchEffect__GameObjectKeywordItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObject, put = __cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject> gameObject;

  /// @brief Field keyword, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keyword, put = __cordl_internal_set_keyword)) ::StringW keyword;

  static inline ::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem* New_ctor();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject();

  constexpr ::StringW const& __cordl_internal_get_keyword() const;

  constexpr ::StringW& __cordl_internal_get_keyword();

  constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_keyword(::StringW value);

  /// @brief Method .ctor, addr 0x3b275e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameObjectKeywordSwitchEffect__GameObjectKeywordItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameObjectKeywordSwitchEffect__GameObjectKeywordItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameObjectKeywordSwitchEffect__GameObjectKeywordItem(__GameObjectKeywordSwitchEffect__GameObjectKeywordItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameObjectKeywordSwitchEffect__GameObjectKeywordItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameObjectKeywordSwitchEffect__GameObjectKeywordItem(__GameObjectKeywordSwitchEffect__GameObjectKeywordItem const&) = delete;

  /// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObject;

  /// @brief Field keyword, offset: 0x18, size: 0x8, def value: None
  ::StringW ___keyword;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4244 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem, ___keyword) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameObjectKeywordSwitchEffect
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameObjectKeywordSwitchEffect*
class CORDL_TYPE GameObjectKeywordSwitchEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GameObjectKeywordItem = ::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem;

  /// @brief Field _defaultGameObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultGameObject, put = __cordl_internal_set__defaultGameObject)) ::UnityW<::UnityEngine::GameObject> _defaultGameObject;

  /// @brief Field _gameObjectKeywordItems, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObjectKeywordItems,
                      put = __cordl_internal_set__gameObjectKeywordItems)) ::ArrayW<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*,
                                                                                    ::Array<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*>*>
      _gameObjectKeywordItems;

  /// @brief Method Initialize, addr 0x3b2749c, size 0x144, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);

  static inline ::GlobalNamespace::GameObjectKeywordSwitchEffect* New_ctor();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__defaultGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__defaultGameObject();

  constexpr ::ArrayW<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*, ::Array<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*>*> const&
  __cordl_internal_get__gameObjectKeywordItems() const;

  constexpr ::ArrayW<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*, ::Array<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*>*>&
  __cordl_internal_get__gameObjectKeywordItems();

  constexpr void __cordl_internal_set__defaultGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__gameObjectKeywordItems(
      ::ArrayW<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*, ::Array<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*>*> value);

  /// @brief Method .ctor, addr 0x3b275e0, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _defaultGameObject, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____defaultGameObject;

  /// @brief Field _gameObjectKeywordItems, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*, ::Array<::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*>*> ____gameObjectKeywordItems;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4245 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameObjectKeywordSwitchEffect, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectKeywordSwitchEffect, ____defaultGameObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectKeywordSwitchEffect, ____gameObjectKeywordItems) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameObjectKeywordSwitchEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameObjectKeywordSwitchEffect*, "", "GameObjectKeywordSwitchEffect");
NEED_NO_BOX(::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameObjectKeywordSwitchEffect__GameObjectKeywordItem*, "", "GameObjectKeywordSwitchEffect/GameObjectKeywordItem");
