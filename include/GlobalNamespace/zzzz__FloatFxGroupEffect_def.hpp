#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatFxGroupEffect)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class FloatFxBeatmapEventData;
}
namespace GlobalNamespace {
class FloatFxGroupEffectTarget;
}
namespace GlobalNamespace {
class __FloatFxGroupEffect__InitData;
}
namespace Tweening {
class FloatTween;
}
namespace Tweening {
class SongTimeTweeningManager;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxGroupEffect;
}
namespace GlobalNamespace {
class __FloatFxGroupEffect__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxGroupEffect);
MARK_REF_PTR_T(::GlobalNamespace::__FloatFxGroupEffect__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FloatFxGroupEffect::InitData*
class CORDL_TYPE __FloatFxGroupEffect__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field elementId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field groupId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  /// @brief Field target, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target))::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> target;

  static inline ::GlobalNamespace::__FloatFxGroupEffect__InitData* New_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::FloatFxGroupEffectTarget* target);

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> const& __cordl_internal_get_target() const;

  constexpr ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>& __cordl_internal_get_target();

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_target(::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> value);

  /// @brief Method .ctor, addr 0x26c6b8c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::FloatFxGroupEffectTarget* target);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FloatFxGroupEffect__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FloatFxGroupEffect__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FloatFxGroupEffect__InitData(__FloatFxGroupEffect__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FloatFxGroupEffect__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FloatFxGroupEffect__InitData(__FloatFxGroupEffect__InitData const&) = delete;

  /// @brief Field groupId, offset: 0x10, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field elementId, offset: 0x14, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field target, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> ___target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FloatFxGroupEffect__InitData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FloatFxGroupEffect__InitData, ___groupId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FloatFxGroupEffect__InitData, ___elementId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FloatFxGroupEffect__InitData, ___target) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FloatFxGroupEffect
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FloatFxGroupEffect*
class CORDL_TYPE FloatFxGroupEffect : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__FloatFxGroupEffect__InitData;

  /// @brief Field _beatmapCallbacksController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _floatFxBeatmapEventCallbackWrapper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__floatFxBeatmapEventCallbackWrapper,
                      put = __cordl_internal_set__floatFxBeatmapEventCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _floatFxBeatmapEventCallbackWrapper;

  /// @brief Field _floatTween, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__floatTween, put = __cordl_internal_set__floatTween))::Tweening::FloatTween* _floatTween;

  /// @brief Field _initData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__FloatFxGroupEffect__InitData* _initData;

  /// @brief Field _tweeningManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager))::UnityW<::Tweening::SongTimeTweeningManager> _tweeningManager;

  /// @brief Method Cleanup, addr 0x26c6d10, size 0x9c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method HandleFloatFxBeatmapEventCallback, addr 0x26c7088, size 0x10c, virtual false, abstract: false, final false
  inline void HandleFloatFxBeatmapEventCallback(::GlobalNamespace::FloatFxBeatmapEventData* currentEvent);

  static inline ::GlobalNamespace::FloatFxGroupEffect* New_ctor(::GlobalNamespace::__FloatFxGroupEffect__InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method SetValue, addr 0x26c7194, size 0x2c, virtual false, abstract: false, final false
  inline void SetValue(float_t value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__floatFxBeatmapEventCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__floatFxBeatmapEventCallbackWrapper() const;

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__floatTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __cordl_internal_get__floatTween() const;

  constexpr ::GlobalNamespace::__FloatFxGroupEffect__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FloatFxGroupEffect__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__floatFxBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__floatTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__FloatFxGroupEffect__InitData* value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x26c6eb4, size 0x1d4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__FloatFxGroupEffect__InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxGroupEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxGroupEffect(FloatFxGroupEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxGroupEffect(FloatFxGroupEffect const&) = delete;

  /// @brief Field _tweeningManager, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ____tweeningManager;

  /// @brief Field _beatmapCallbacksController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _floatTween, offset: 0x20, size: 0x8, def value: None
  ::Tweening::FloatTween* ____floatTween;

  /// @brief Field _floatFxBeatmapEventCallbackWrapper, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____floatFxBeatmapEventCallbackWrapper;

  /// @brief Field _initData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__FloatFxGroupEffect__InitData* ____initData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxGroupEffect, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect, ____tweeningManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect, ____beatmapCallbacksController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect, ____floatTween) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect, ____floatFxBeatmapEventCallbackWrapper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect, ____initData) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxGroupEffect*, "", "FloatFxGroupEffect");
NEED_NO_BOX(::GlobalNamespace::__FloatFxGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FloatFxGroupEffect__InitData*, "", "FloatFxGroupEffect/InitData");
