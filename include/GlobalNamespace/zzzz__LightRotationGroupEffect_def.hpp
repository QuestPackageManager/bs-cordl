#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightRotationGroupEffect)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
struct LightAxis;
}
namespace GlobalNamespace {
class LightRotationBeatmapEventData;
}
namespace GlobalNamespace {
struct LightRotationDirection;
}
namespace GlobalNamespace {
class __LightRotationGroupEffect__InitData;
}
namespace Tweening {
class FloatTween;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationGroupEffect;
}
namespace GlobalNamespace {
class __LightRotationGroupEffect__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightRotationGroupEffect);
MARK_REF_PTR_T(::GlobalNamespace::__LightRotationGroupEffect__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightRotationGroupEffect::InitData*
class CORDL_TYPE __LightRotationGroupEffect__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field axis, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_axis, put = __cordl_internal_set_axis))::GlobalNamespace::LightAxis axis;

  /// @brief Field elementId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field groupId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  /// @brief Field mirrored, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_mirrored, put = __cordl_internal_set_mirrored)) bool mirrored;

  /// @brief Field transform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_transform, put = __cordl_internal_set_transform))::UnityW<::UnityEngine::Transform> transform;

  static inline ::GlobalNamespace::__LightRotationGroupEffect__InitData* New_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis, bool mirrored,
                                                                                  ::UnityEngine::Transform* transform);

  constexpr ::GlobalNamespace::LightAxis const& __cordl_internal_get_axis() const;

  constexpr ::GlobalNamespace::LightAxis& __cordl_internal_get_axis();

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr bool const& __cordl_internal_get_mirrored() const;

  constexpr bool& __cordl_internal_get_mirrored();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform();

  constexpr void __cordl_internal_set_axis(::GlobalNamespace::LightAxis value);

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_mirrored(bool value);

  constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x24a07fc, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis, bool mirrored, ::UnityEngine::Transform* transform);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightRotationGroupEffect__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LightRotationGroupEffect__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightRotationGroupEffect__InitData(__LightRotationGroupEffect__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightRotationGroupEffect__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightRotationGroupEffect__InitData(__LightRotationGroupEffect__InitData const&) = delete;

  /// @brief Field groupId, offset: 0x10, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field elementId, offset: 0x14, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field axis, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::LightAxis ___axis;

  /// @brief Field mirrored, offset: 0x1c, size: 0x1, def value: None
  bool ___mirrored;

  /// @brief Field transform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightRotationGroupEffect__InitData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightRotationGroupEffect__InitData, ___groupId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightRotationGroupEffect__InitData, ___elementId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightRotationGroupEffect__InitData, ___axis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightRotationGroupEffect__InitData, ___mirrored) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightRotationGroupEffect__InitData, ___transform) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightRotationGroupEffect
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightRotationGroupEffect*
class CORDL_TYPE LightRotationGroupEffect : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__LightRotationGroupEffect__InitData;

  /// @brief Field _axis, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__axis, put = __cordl_internal_set__axis))::GlobalNamespace::LightAxis _axis;

  /// @brief Field _beatmapCallbacksController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _lightRotationBeatmapEventCallbackWrapper, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lightRotationBeatmapEventCallbackWrapper,
                      put = __cordl_internal_set__lightRotationBeatmapEventCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _lightRotationBeatmapEventCallbackWrapper;

  /// @brief Field _mirrored, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__mirrored, put = __cordl_internal_set__mirrored)) bool _mirrored;

  /// @brief Field _rotationTween, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__rotationTween, put = __cordl_internal_set__rotationTween))::Tweening::FloatTween* _rotationTween;

  /// @brief Field _transform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform))::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field _tweeningManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager))::UnityW<::Tweening::SongTimeTweeningManager> _tweeningManager;

  /// @brief Method Cleanup, addr 0x24a0420, size 0x9c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method ComputeTargetAngle, addr 0x24a0718, size 0xe4, virtual false, abstract: false, final false
  static inline float_t ComputeTargetAngle(float_t startAngle, float_t targetAngle, int32_t loopCount, ::GlobalNamespace::LightRotationDirection rotationOrientation);

  /// @brief Method HandleRotationChangeBeatmapEvent, addr 0x24a04bc, size 0x184, virtual false, abstract: false, final false
  inline void HandleRotationChangeBeatmapEvent(::GlobalNamespace::LightRotationBeatmapEventData* currentEventData);

  static inline ::GlobalNamespace::LightRotationGroupEffect* New_ctor(::GlobalNamespace::__LightRotationGroupEffect__InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                      ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method SetRotation, addr 0x24a0640, size 0xd8, virtual false, abstract: false, final false
  inline void SetRotation(float_t rotation);

  constexpr ::GlobalNamespace::LightAxis const& __cordl_internal_get__axis() const;

  constexpr ::GlobalNamespace::LightAxis& __cordl_internal_get__axis();

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__lightRotationBeatmapEventCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__lightRotationBeatmapEventCallbackWrapper() const;

  constexpr bool const& __cordl_internal_get__mirrored() const;

  constexpr bool& __cordl_internal_get__mirrored();

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__rotationTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __cordl_internal_get__rotationTween() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr void __cordl_internal_set__axis(::GlobalNamespace::LightAxis value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__lightRotationBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__mirrored(bool value);

  constexpr void __cordl_internal_set__rotationTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x24a0200, size 0x220, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__LightRotationGroupEffect__InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationGroupEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightRotationGroupEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationGroupEffect(LightRotationGroupEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationGroupEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationGroupEffect(LightRotationGroupEffect const&) = delete;

  /// @brief Field _transform, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _axis, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::LightAxis ____axis;

  /// @brief Field _mirrored, offset: 0x1c, size: 0x1, def value: None
  bool ____mirrored;

  /// @brief Field _tweeningManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Tweening::SongTimeTweeningManager> ____tweeningManager;

  /// @brief Field _beatmapCallbacksController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _rotationTween, offset: 0x30, size: 0x8, def value: None
  ::Tweening::FloatTween* ____rotationTween;

  /// @brief Field _lightRotationBeatmapEventCallbackWrapper, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____lightRotationBeatmapEventCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationGroupEffect, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationGroupEffect, ____transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationGroupEffect, ____axis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationGroupEffect, ____mirrored) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationGroupEffect, ____tweeningManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationGroupEffect, ____beatmapCallbacksController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationGroupEffect, ____rotationTween) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationGroupEffect, ____lightRotationBeatmapEventCallbackWrapper) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationGroupEffect*, "", "LightRotationGroupEffect");
NEED_NO_BOX(::GlobalNamespace::__LightRotationGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightRotationGroupEffect__InitData*, "", "LightRotationGroupEffect/InitData");
