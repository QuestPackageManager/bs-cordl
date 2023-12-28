#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TriggerFloatFxGroupEffect)
namespace GlobalNamespace {
class __TriggerFloatFxGroupEffect__InitData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class FloatFxBeatmapEventData;
}
namespace GlobalNamespace {
class FloatFxGroupEffectTarget;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4914))
// CS Name: ::TriggerFloatFxGroupEffect::InitData*
class CORDL_TYPE __TriggerFloatFxGroupEffect__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field groupId, offset 0x10, size 0x4
  __declspec(property(get = __get_groupId, put = __set_groupId)) int32_t groupId;

  /// @brief Field elementId, offset 0x14, size 0x4
  __declspec(property(get = __get_elementId, put = __set_elementId)) int32_t elementId;

  /// @brief Field target, offset 0x18, size 0x8
  __declspec(property(get = __get_target, put = __set_target))::GlobalNamespace::FloatFxGroupEffectTarget* target;

  constexpr int32_t& __get_groupId();

  constexpr int32_t const& __get_groupId() const;

  constexpr void __set_groupId(int32_t value);

  constexpr int32_t& __get_elementId();

  constexpr int32_t const& __get_elementId() const;

  constexpr void __set_elementId(int32_t value);

  constexpr ::GlobalNamespace::FloatFxGroupEffectTarget*& __get_target();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatFxGroupEffectTarget*> const& __get_target() const;

  constexpr void __set_target(::GlobalNamespace::FloatFxGroupEffectTarget* value);

  static inline ::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData* New_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::FloatFxGroupEffectTarget* target);

  /// @brief Method .ctor addr 0x23a71b8 size 0x3c virtual false final false
  inline void _ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::FloatFxGroupEffectTarget* target);

  // Ctor Parameters [CppParam { name: "", ty: "__TriggerFloatFxGroupEffect__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TriggerFloatFxGroupEffect__InitData(__TriggerFloatFxGroupEffect__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TriggerFloatFxGroupEffect__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TriggerFloatFxGroupEffect__InitData(__TriggerFloatFxGroupEffect__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TriggerFloatFxGroupEffect__InitData();

public:
  /// @brief Field groupId, offset: 0x10, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field elementId, offset: 0x14, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field target, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::FloatFxGroupEffectTarget* ___target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TriggerFloatFxGroupEffect
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4915))
// CS Name: ::TriggerFloatFxGroupEffect*
class CORDL_TYPE TriggerFloatFxGroupEffect : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData;

  /// @brief Field _beatmapCallbacksController, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _floatFxBeatmapEventCallbackWrapper, offset 0x18, size 0x8
  __declspec(property(get = __get__floatFxBeatmapEventCallbackWrapper,
                      put = __set__floatFxBeatmapEventCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _floatFxBeatmapEventCallbackWrapper;

  /// @brief Field _target, offset 0x20, size 0x8
  __declspec(property(get = __get__target, put = __set__target))::GlobalNamespace::FloatFxGroupEffectTarget* _target;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__floatFxBeatmapEventCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__floatFxBeatmapEventCallbackWrapper() const;

  constexpr void __set__floatFxBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr ::GlobalNamespace::FloatFxGroupEffectTarget*& __get__target();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatFxGroupEffectTarget*> const& __get__target() const;

  constexpr void __set__target(::GlobalNamespace::FloatFxGroupEffectTarget* value);

  static inline ::GlobalNamespace::TriggerFloatFxGroupEffect* New_ctor(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData* initData,
                                                                       ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method .ctor addr 0x23a7074 size 0x11c virtual false final false
  inline void _ctor(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData* initData, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method Cleanup addr 0x23a6f58 size 0x1c virtual false final false
  inline void Cleanup();

  /// @brief Method HandleFloatFxBeatmapEventCallback addr 0x23a7190 size 0x28 virtual false final false
  inline void HandleFloatFxBeatmapEventCallback(::GlobalNamespace::FloatFxBeatmapEventData* currentEvent);

  // Ctor Parameters [CppParam { name: "", ty: "TriggerFloatFxGroupEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TriggerFloatFxGroupEffect(TriggerFloatFxGroupEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TriggerFloatFxGroupEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TriggerFloatFxGroupEffect(TriggerFloatFxGroupEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TriggerFloatFxGroupEffect();

public:
  /// @brief Field _beatmapCallbacksController, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _floatFxBeatmapEventCallbackWrapper, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____floatFxBeatmapEventCallbackWrapper;

  /// @brief Field _target, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::FloatFxGroupEffectTarget* ____target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TriggerFloatFxGroupEffect, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TriggerFloatFxGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TriggerFloatFxGroupEffect*, "", "TriggerFloatFxGroupEffect");
NEED_NO_BOX(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData*, "", "TriggerFloatFxGroupEffect/InitData");
