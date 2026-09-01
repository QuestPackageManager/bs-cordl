#pragma once
// IWYU pragma private; include "GlobalNamespace\FloatFxGroupEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
class FloatFxEventHandler;
}
namespace GlobalNamespace {
class FloatFxGroupEffectTarget;
}
namespace GlobalNamespace {
class FloatFxGroupEffect_InitData;
}
namespace GlobalNamespace {
class FloatFxGroupEffect___c__DisplayClass4_0;
}
namespace Tweening {
class SongTimeTweeningManager;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxGroupEffect;
}
namespace GlobalNamespace {
class FloatFxGroupEffect_InitData;
}
namespace GlobalNamespace {
class FloatFxGroupEffect___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FloatFxGroupEffect*);
MARK_REF_T(::GlobalNamespace::FloatFxGroupEffect_InitData*);
MARK_REF_T(::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FloatFxGroupEffect*, "", "FloatFxGroupEffect");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FloatFxGroupEffect_InitData*, "", "FloatFxGroupEffect/InitData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0*, "", "FloatFxGroupEffect/<>c__DisplayClass4_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatFxGroupEffect/InitData
class CORDL_TYPE FloatFxGroupEffect_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field elementId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field groupId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  /// @brief Field target, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target)) ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> target;

  static inline ::GlobalNamespace::FloatFxGroupEffect_InitData* New_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::FloatFxGroupEffectTarget* target);

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> const& __cordl_internal_get_target() const;

  constexpr ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>& __cordl_internal_get_target();

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_target(::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> value);

  /// @brief Method .ctor, addr 0x5995aa8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::FloatFxGroupEffectTarget* target);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxGroupEffect_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffect_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxGroupEffect_InitData(FloatFxGroupEffect_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffect_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxGroupEffect_InitData(FloatFxGroupEffect_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5859 };

  /// @brief Field groupId, offset: 0x10, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field elementId, offset: 0x14, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field target, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> ___target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect_InitData, ___groupId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect_InitData, ___elementId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect_InitData, ___target) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FloatFxGroupEffect_InitData) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatFxGroupEffect/<>c__DisplayClass4_0
class CORDL_TYPE FloatFxGroupEffect___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field initData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_initData, put = __cordl_internal_set_initData)) ::GlobalNamespace::FloatFxGroupEffect_InitData* initData;

  static inline ::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0* New_ctor();

  constexpr ::GlobalNamespace::FloatFxGroupEffect_InitData* const& __cordl_internal_get_initData() const;

  constexpr ::GlobalNamespace::FloatFxGroupEffect_InitData*& __cordl_internal_get_initData();

  constexpr void __cordl_internal_set_initData(::GlobalNamespace::FloatFxGroupEffect_InitData* value);

  /// @brief Method <.ctor>b__0, addr 0x5995f38, size 0x2c, virtual false, abstract: false, final false
  inline void __ctor_b__0(float_t value);

  /// @brief Method .ctor, addr 0x5995f34, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxGroupEffect___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffect___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxGroupEffect___c__DisplayClass4_0(FloatFxGroupEffect___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffect___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxGroupEffect___c__DisplayClass4_0(FloatFxGroupEffect___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5860 };

  /// @brief Field initData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::FloatFxGroupEffect_InitData* ___initData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0, ___initData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatFxGroupEffect
class CORDL_TYPE FloatFxGroupEffect : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::FloatFxGroupEffect_InitData;

  using __c__DisplayClass4_0 = ::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0;

  /// @brief Field _beatmapCallbacksController, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _floatFxBeatmapEventCallbackWrapper, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__floatFxBeatmapEventCallbackWrapper,
                      put = __cordl_internal_set__floatFxBeatmapEventCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _floatFxBeatmapEventCallbackWrapper;

  /// @brief Field _handler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__handler, put = __cordl_internal_set__handler)) ::GlobalNamespace::FloatFxEventHandler* _handler;

  /// @brief Method Cleanup, addr 0x5995bb8, size 0x38, virtual false, abstract: false, final false
  inline void Cleanup();

  static inline ::GlobalNamespace::FloatFxGroupEffect* New_ctor(::GlobalNamespace::FloatFxGroupEffect_InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__floatFxBeatmapEventCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__floatFxBeatmapEventCallbackWrapper();

  constexpr ::GlobalNamespace::FloatFxEventHandler* const& __cordl_internal_get__handler() const;

  constexpr ::GlobalNamespace::FloatFxEventHandler*& __cordl_internal_get__handler();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__floatFxBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__handler(::GlobalNamespace::FloatFxEventHandler* value);

  /// @brief Method .ctor, addr 0x5995cdc, size 0x258, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::FloatFxGroupEffect_InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5861 };

  /// @brief Field _beatmapCallbacksController, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _handler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::FloatFxEventHandler* ____handler;

  /// @brief Field _floatFxBeatmapEventCallbackWrapper, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____floatFxBeatmapEventCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect, ____beatmapCallbacksController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect, ____handler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffect, ____floatFxBeatmapEventCallbackWrapper) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FloatFxGroupEffect) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
