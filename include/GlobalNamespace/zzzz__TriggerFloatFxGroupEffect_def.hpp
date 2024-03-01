#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TriggerFloatFxGroupEffect)
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
class __TriggerFloatFxGroupEffect__InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class TriggerFloatFxGroupEffect;
}
namespace GlobalNamespace {
class __TriggerFloatFxGroupEffect__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TriggerFloatFxGroupEffect);
MARK_REF_PTR_T(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TriggerFloatFxGroupEffect::InitData*
class CORDL_TYPE __TriggerFloatFxGroupEffect__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field elementId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field groupId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  /// @brief Field target, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target))::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> target;

  static inline ::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData* New_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::FloatFxGroupEffectTarget* target);

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> const& __cordl_internal_get_target() const;

  constexpr ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>& __cordl_internal_get_target();

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_target(::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> value);

  /// @brief Method .ctor, addr 0x2435238, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::FloatFxGroupEffectTarget* target);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TriggerFloatFxGroupEffect__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TriggerFloatFxGroupEffect__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TriggerFloatFxGroupEffect__InitData(__TriggerFloatFxGroupEffect__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TriggerFloatFxGroupEffect__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TriggerFloatFxGroupEffect__InitData(__TriggerFloatFxGroupEffect__InitData const&) = delete;

  /// @brief Field groupId, offset: 0x10, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field elementId, offset: 0x14, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field target, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> ___target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData, ___groupId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData, ___elementId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData, ___target) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TriggerFloatFxGroupEffect
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TriggerFloatFxGroupEffect*
class CORDL_TYPE TriggerFloatFxGroupEffect : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData;

  /// @brief Field _beatmapCallbacksController, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _floatFxBeatmapEventCallbackWrapper, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__floatFxBeatmapEventCallbackWrapper,
                      put = __cordl_internal_set__floatFxBeatmapEventCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _floatFxBeatmapEventCallbackWrapper;

  /// @brief Field _target, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__target, put = __cordl_internal_set__target))::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> _target;

  /// @brief Method Cleanup, addr 0x2434fd8, size 0x1c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method HandleFloatFxBeatmapEventCallback, addr 0x2435210, size 0x28, virtual false, abstract: false, final false
  inline void HandleFloatFxBeatmapEventCallback(::GlobalNamespace::FloatFxBeatmapEventData* currentEvent);

  static inline ::GlobalNamespace::TriggerFloatFxGroupEffect* New_ctor(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData* initData,
                                                                       ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__floatFxBeatmapEventCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__floatFxBeatmapEventCallbackWrapper() const;

  constexpr ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> const& __cordl_internal_get__target() const;

  constexpr ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>& __cordl_internal_get__target();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__floatFxBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__target(::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> value);

  /// @brief Method .ctor, addr 0x24350f4, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData* initData, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TriggerFloatFxGroupEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TriggerFloatFxGroupEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TriggerFloatFxGroupEffect(TriggerFloatFxGroupEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TriggerFloatFxGroupEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TriggerFloatFxGroupEffect(TriggerFloatFxGroupEffect const&) = delete;

  /// @brief Field _beatmapCallbacksController, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _floatFxBeatmapEventCallbackWrapper, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____floatFxBeatmapEventCallbackWrapper;

  /// @brief Field _target, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> ____target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TriggerFloatFxGroupEffect, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerFloatFxGroupEffect, ____beatmapCallbacksController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerFloatFxGroupEffect, ____floatFxBeatmapEventCallbackWrapper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerFloatFxGroupEffect, ____target) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TriggerFloatFxGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TriggerFloatFxGroupEffect*, "", "TriggerFloatFxGroupEffect");
NEED_NO_BOX(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData*, "", "TriggerFloatFxGroupEffect/InitData");
