#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameObjectIntSwitchEventEffect)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class __GameObjectIntSwitchEventEffect__GameObjectValueList;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GameObjectIntSwitchEventEffect;
}
namespace GlobalNamespace {
class __GameObjectIntSwitchEventEffect__GameObjectValueList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameObjectIntSwitchEventEffect);
MARK_REF_PTR_T(::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList);
// Type: ::GameObjectValueList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameObjectIntSwitchEventEffect::GameObjectValueList*
class CORDL_TYPE __GameObjectIntSwitchEventEffect__GameObjectValueList : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isActive>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isActive_k__BackingField, put = __cordl_internal_set__isActive_k__BackingField)) bool _isActive_k__BackingField;

  /// @brief Field gameObjects, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjects,
                      put = __cordl_internal_set_gameObjects))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> gameObjects;

  __declspec(property(get = get_isActive, put = set_isActive)) bool isActive;

  /// @brief Field value, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) int32_t value;

  static inline ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList* New_ctor();

  /// @brief Method SetActive, addr 0x25c6afc, size 0x7c, virtual false, abstract: false, final false
  inline void SetActive(bool active);

  constexpr bool const& __cordl_internal_get__isActive_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isActive_k__BackingField();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_gameObjects() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_gameObjects();

  constexpr int32_t const& __cordl_internal_get_value() const;

  constexpr int32_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set__isActive_k__BackingField(bool value);

  constexpr void __cordl_internal_set_gameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_value(int32_t value);

  /// @brief Method .ctor, addr 0x25c6d04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isActive, addr 0x25c6cf0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isActive();

  /// @brief Method set_isActive, addr 0x25c6cf8, size 0xc, virtual false, abstract: false, final false
  inline void set_isActive(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameObjectIntSwitchEventEffect__GameObjectValueList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameObjectIntSwitchEventEffect__GameObjectValueList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameObjectIntSwitchEventEffect__GameObjectValueList(__GameObjectIntSwitchEventEffect__GameObjectValueList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameObjectIntSwitchEventEffect__GameObjectValueList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameObjectIntSwitchEventEffect__GameObjectValueList(__GameObjectIntSwitchEventEffect__GameObjectValueList const&) = delete;

  /// @brief Field value, offset: 0x10, size: 0x4, def value: None
  int32_t ___value;

  /// @brief Field gameObjects, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___gameObjects;

  /// @brief Field <isActive>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____isActive_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList, ___value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList, ___gameObjects) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList, ____isActive_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameObjectIntSwitchEventEffect
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameObjectIntSwitchEventEffect*
class CORDL_TYPE GameObjectIntSwitchEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GameObjectValueList = ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList;

  /// @brief Field _beatmapCallbacksController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _beatmapEventType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapEventType, put = __cordl_internal_set__beatmapEventType))::GlobalNamespace::BasicBeatmapEventType _beatmapEventType;

  /// @brief Field _defaultValue, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultValue, put = __cordl_internal_set__defaultValue)) int32_t _defaultValue;

  /// @brief Field _gameObjectsValueLists, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObjectsValueLists,
                      put = __cordl_internal_set__gameObjectsValueLists))::ArrayW<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*,
                                                                                  ::Array<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*> _gameObjectsValueLists;

  /// @brief Field _previousActiveIdx, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__previousActiveIdx, put = __cordl_internal_set__previousActiveIdx)) int32_t _previousActiveIdx;

  /// @brief Field _valueToListMap, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get__valueToListMap,
      put = __cordl_internal_set__valueToListMap))::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>* _valueToListMap;

  /// @brief Method HandleBasicBeatmapEventData, addr 0x25c6ba4, size 0x144, virtual false, abstract: false, final false
  inline void HandleBasicBeatmapEventData(::GlobalNamespace::BasicBeatmapEventData* data);

  static inline ::GlobalNamespace::GameObjectIntSwitchEventEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x25c6b78, size 0x2c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x25c6944, size 0x1b8, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__beatmapEventType() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__beatmapEventType();

  constexpr int32_t const& __cordl_internal_get__defaultValue() const;

  constexpr int32_t& __cordl_internal_get__defaultValue();

  constexpr ::ArrayW<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*, ::Array<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*> const&
  __cordl_internal_get__gameObjectsValueLists() const;

  constexpr ::ArrayW<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*, ::Array<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*>&
  __cordl_internal_get__gameObjectsValueLists();

  constexpr int32_t const& __cordl_internal_get__previousActiveIdx() const;

  constexpr int32_t& __cordl_internal_get__previousActiveIdx();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*& __cordl_internal_get__valueToListMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*> const&
  __cordl_internal_get__valueToListMap() const;

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__defaultValue(int32_t value);

  constexpr void __cordl_internal_set__gameObjectsValueLists(
      ::ArrayW<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*, ::Array<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*> value);

  constexpr void __cordl_internal_set__previousActiveIdx(int32_t value);

  constexpr void __cordl_internal_set__valueToListMap(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>* value);

  /// @brief Method .ctor, addr 0x25c6ce8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameObjectIntSwitchEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameObjectIntSwitchEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameObjectIntSwitchEventEffect(GameObjectIntSwitchEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameObjectIntSwitchEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameObjectIntSwitchEventEffect(GameObjectIntSwitchEventEffect const&) = delete;

  /// @brief Field _beatmapEventType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____beatmapEventType;

  /// @brief Field _defaultValue, offset: 0x1c, size: 0x4, def value: None
  int32_t ____defaultValue;

  /// @brief Field _gameObjectsValueLists, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*, ::Array<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*> ____gameObjectsValueLists;

  /// @brief Field _beatmapCallbacksController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  /// @brief Field _valueToListMap, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>* ____valueToListMap;

  /// @brief Field _previousActiveIdx, offset: 0x40, size: 0x4, def value: None
  int32_t ____previousActiveIdx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameObjectIntSwitchEventEffect, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectIntSwitchEventEffect, ____beatmapEventType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectIntSwitchEventEffect, ____defaultValue) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectIntSwitchEventEffect, ____gameObjectsValueLists) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectIntSwitchEventEffect, ____beatmapCallbacksController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectIntSwitchEventEffect, ____beatmapDataCallbackWrapper) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectIntSwitchEventEffect, ____valueToListMap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameObjectIntSwitchEventEffect, ____previousActiveIdx) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameObjectIntSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameObjectIntSwitchEventEffect*, "", "GameObjectIntSwitchEventEffect");
NEED_NO_BOX(::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*, "", "GameObjectIntSwitchEventEffect/GameObjectValueList");
