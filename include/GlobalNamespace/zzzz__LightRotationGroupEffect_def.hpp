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
class LightRotationBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace Tweening {
class FloatTween;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace GlobalNamespace {
class __LightRotationGroupEffect__InitData;
}
namespace GlobalNamespace {
struct LightRotationDirection;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
struct LightAxis;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14733))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4940))
// CS Name: ::LightRotationGroupEffect::InitData*
class CORDL_TYPE __LightRotationGroupEffect__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field groupId, offset 0x10, size 0x4
  __declspec(property(get = __get_groupId, put = __set_groupId)) int32_t groupId;

  /// @brief Field elementId, offset 0x14, size 0x4
  __declspec(property(get = __get_elementId, put = __set_elementId)) int32_t elementId;

  /// @brief Field axis, offset 0x18, size 0x4
  __declspec(property(get = __get_axis, put = __set_axis))::GlobalNamespace::LightAxis axis;

  /// @brief Field mirrored, offset 0x1c, size 0x1
  __declspec(property(get = __get_mirrored, put = __set_mirrored)) bool mirrored;

  /// @brief Field transform, offset 0x20, size 0x8
  __declspec(property(get = __get_transform, put = __set_transform))::UnityEngine::Transform* transform;

  constexpr int32_t& __get_groupId();

  constexpr int32_t const& __get_groupId() const;

  constexpr void __set_groupId(int32_t value);

  constexpr int32_t& __get_elementId();

  constexpr int32_t const& __get_elementId() const;

  constexpr void __set_elementId(int32_t value);

  constexpr ::GlobalNamespace::LightAxis& __get_axis();

  constexpr ::GlobalNamespace::LightAxis const& __get_axis() const;

  constexpr void __set_axis(::GlobalNamespace::LightAxis value);

  constexpr bool& __get_mirrored();

  constexpr bool const& __get_mirrored() const;

  constexpr void __set_mirrored(bool value);

  constexpr ::UnityEngine::Transform*& __get_transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_transform() const;

  constexpr void __set_transform(::UnityEngine::Transform* value);

  static inline ::GlobalNamespace::__LightRotationGroupEffect__InitData* New_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis, bool mirrored,
                                                                                  ::UnityEngine::Transform* transform);

  /// @brief Method .ctor addr 0x23aa06c size 0x54 virtual false final false
  inline void _ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis, bool mirrored, ::UnityEngine::Transform* transform);

  // Ctor Parameters [CppParam { name: "", ty: "__LightRotationGroupEffect__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightRotationGroupEffect__InitData(__LightRotationGroupEffect__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightRotationGroupEffect__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightRotationGroupEffect__InitData(__LightRotationGroupEffect__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightRotationGroupEffect__InitData();

public:
  /// @brief Field groupId, offset: 0x10, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field elementId, offset: 0x14, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field axis, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::LightAxis ___axis;

  /// @brief Field mirrored, offset: 0x1c, size: 0x1, def value: None
  bool ___mirrored;

  /// @brief Field transform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ___transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightRotationGroupEffect__InitData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LightRotationGroupEffect
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14733))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4941))
// CS Name: ::LightRotationGroupEffect*
class CORDL_TYPE LightRotationGroupEffect : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__LightRotationGroupEffect__InitData;

  /// @brief Field _transform, offset 0x10, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  /// @brief Field _axis, offset 0x18, size 0x4
  __declspec(property(get = __get__axis, put = __set__axis))::GlobalNamespace::LightAxis _axis;

  /// @brief Field _mirrored, offset 0x1c, size 0x1
  __declspec(property(get = __get__mirrored, put = __set__mirrored)) bool _mirrored;

  /// @brief Field _tweeningManager, offset 0x20, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::SongTimeTweeningManager* _tweeningManager;

  /// @brief Field _beatmapCallbacksController, offset 0x28, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _rotationTween, offset 0x30, size 0x8
  __declspec(property(get = __get__rotationTween, put = __set__rotationTween))::Tweening::FloatTween* _rotationTween;

  /// @brief Field _lightRotationBeatmapEventCallbackWrapper, offset 0x38, size 0x8
  __declspec(property(get = __get__lightRotationBeatmapEventCallbackWrapper,
                      put = __set__lightRotationBeatmapEventCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _lightRotationBeatmapEventCallbackWrapper;

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::LightAxis& __get__axis();

  constexpr ::GlobalNamespace::LightAxis const& __get__axis() const;

  constexpr void __set__axis(::GlobalNamespace::LightAxis value);

  constexpr bool& __get__mirrored();

  constexpr bool const& __get__mirrored() const;

  constexpr void __set__mirrored(bool value);

  constexpr ::Tweening::SongTimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::SongTimeTweeningManager* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::Tweening::FloatTween*& __get__rotationTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __get__rotationTween() const;

  constexpr void __set__rotationTween(::Tweening::FloatTween* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__lightRotationBeatmapEventCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__lightRotationBeatmapEventCallbackWrapper() const;

  constexpr void __set__lightRotationBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  static inline ::GlobalNamespace::LightRotationGroupEffect* New_ctor(::GlobalNamespace::__LightRotationGroupEffect__InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                      ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method .ctor addr 0x23a9a70 size 0x220 virtual false final false
  inline void _ctor(::GlobalNamespace::__LightRotationGroupEffect__InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method Cleanup addr 0x23a9c90 size 0x9c virtual false final false
  inline void Cleanup();

  /// @brief Method HandleRotationChangeBeatmapEvent addr 0x23a9d2c size 0x184 virtual false final false
  inline void HandleRotationChangeBeatmapEvent(::GlobalNamespace::LightRotationBeatmapEventData* currentEventData);

  /// @brief Method SetRotation addr 0x23a9eb0 size 0xd8 virtual false final false
  inline void SetRotation(float_t rotation);

  /// @brief Method ComputeTargetAngle addr 0x23a9f88 size 0xe4 virtual false final false
  static inline float_t ComputeTargetAngle(float_t startAngle, float_t targetAngle, int32_t loopCount, ::GlobalNamespace::LightRotationDirection rotationOrientation);

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationGroupEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationGroupEffect(LightRotationGroupEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationGroupEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationGroupEffect(LightRotationGroupEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationGroupEffect();

public:
  /// @brief Field _transform, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  /// @brief Field _axis, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::LightAxis ____axis;

  /// @brief Field _mirrored, offset: 0x1c, size: 0x1, def value: None
  bool ____mirrored;

  /// @brief Field _tweeningManager, offset: 0x20, size: 0x8, def value: None
  ::Tweening::SongTimeTweeningManager* ____tweeningManager;

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationGroupEffect*, "", "LightRotationGroupEffect");
NEED_NO_BOX(::GlobalNamespace::__LightRotationGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightRotationGroupEffect__InitData*, "", "LightRotationGroupEffect/InitData");
