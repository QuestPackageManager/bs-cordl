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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4907))
// CS Name: ::FloatFxGroupEffect::InitData*
class CORDL_TYPE __FloatFxGroupEffect__InitData : public ::System::Object {
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

  static inline ::GlobalNamespace::__FloatFxGroupEffect__InitData* New_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::FloatFxGroupEffectTarget* target);

  /// @brief Method .ctor, addr 0x23a5f94, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::FloatFxGroupEffectTarget* target);

  // Ctor Parameters [CppParam { name: "", ty: "__FloatFxGroupEffect__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FloatFxGroupEffect__InitData(__FloatFxGroupEffect__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FloatFxGroupEffect__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FloatFxGroupEffect__InitData(__FloatFxGroupEffect__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FloatFxGroupEffect__InitData();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FloatFxGroupEffect__InitData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FloatFxGroupEffect__InitData, ___groupId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FloatFxGroupEffect__InitData, ___elementId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FloatFxGroupEffect__InitData, ___target) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FloatFxGroupEffect
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4908))
// CS Name: ::FloatFxGroupEffect*
class CORDL_TYPE FloatFxGroupEffect : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__FloatFxGroupEffect__InitData;

  /// @brief Field _tweeningManager, offset 0x10, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::SongTimeTweeningManager* _tweeningManager;

  /// @brief Field _beatmapCallbacksController, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _floatTween, offset 0x20, size 0x8
  __declspec(property(get = __get__floatTween, put = __set__floatTween))::Tweening::FloatTween* _floatTween;

  /// @brief Field _floatFxBeatmapEventCallbackWrapper, offset 0x28, size 0x8
  __declspec(property(get = __get__floatFxBeatmapEventCallbackWrapper,
                      put = __set__floatFxBeatmapEventCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _floatFxBeatmapEventCallbackWrapper;

  /// @brief Field _target, offset 0x30, size 0x8
  __declspec(property(get = __get__target, put = __set__target))::GlobalNamespace::FloatFxGroupEffectTarget* _target;

  constexpr ::Tweening::SongTimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::SongTimeTweeningManager* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::Tweening::FloatTween*& __get__floatTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __get__floatTween() const;

  constexpr void __set__floatTween(::Tweening::FloatTween* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__floatFxBeatmapEventCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__floatFxBeatmapEventCallbackWrapper() const;

  constexpr void __set__floatFxBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr ::GlobalNamespace::FloatFxGroupEffectTarget*& __get__target();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatFxGroupEffectTarget*> const& __get__target() const;

  constexpr void __set__target(::GlobalNamespace::FloatFxGroupEffectTarget* value);

  static inline ::GlobalNamespace::FloatFxGroupEffect* New_ctor(::GlobalNamespace::__FloatFxGroupEffect__InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method .ctor, addr 0x23a62bc, size 0x1dc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__FloatFxGroupEffect__InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method Cleanup, addr 0x23a6118, size 0x9c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method HandleFloatFxBeatmapEventCallback, addr 0x23a6498, size 0x118, virtual false, abstract: false, final false
  inline void HandleFloatFxBeatmapEventCallback(::GlobalNamespace::FloatFxBeatmapEventData* currentEvent);

  /// @brief Method SetValue, addr 0x23a65b0, size 0x20, virtual false, abstract: false, final false
  inline void SetValue(float_t value);

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxGroupEffect(FloatFxGroupEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxGroupEffect(FloatFxGroupEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxGroupEffect();

public:
  /// @brief Field _tweeningManager, offset: 0x10, size: 0x8, def value: None
  ::Tweening::SongTimeTweeningManager* ____tweeningManager;

  /// @brief Field _beatmapCallbacksController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _floatTween, offset: 0x20, size: 0x8, def value: None
  ::Tweening::FloatTween* ____floatTween;

  /// @brief Field _floatFxBeatmapEventCallbackWrapper, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____floatFxBeatmapEventCallbackWrapper;

  /// @brief Field _target, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::FloatFxGroupEffectTarget* ____target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxGroupEffect, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect, ____tweeningManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect, ____beatmapCallbacksController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect, ____floatTween) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect, ____floatFxBeatmapEventCallbackWrapper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect, ____target) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxGroupEffect*, "", "FloatFxGroupEffect");
NEED_NO_BOX(::GlobalNamespace::__FloatFxGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FloatFxGroupEffect__InitData*, "", "FloatFxGroupEffect/InitData");
