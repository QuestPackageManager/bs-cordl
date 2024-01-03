#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightRotationEventEffect)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightRotationEventEffect);
// Type: ::LightRotationEventEffect
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14724)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10225)),
// TypeDefinitionIndex(TypeDefinitionIndex(10252))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4953)) CS Name: ::LightRotationEventEffect*
class CORDL_TYPE LightRotationEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _event, offset 0x18, size 0x4
  __declspec(property(get = __get__event, put = __set__event))::GlobalNamespace::BasicBeatmapEventType _event;

  /// @brief Field _rotationVector, offset 0x1c, size 0xc
  __declspec(property(get = __get__rotationVector, put = __set__rotationVector))::UnityEngine::Vector3 _rotationVector;

  /// @brief Field _rotationSpeedMultiplier, offset 0x28, size 0x4
  __declspec(property(get = __get__rotationSpeedMultiplier, put = __set__rotationSpeedMultiplier)) float_t _rotationSpeedMultiplier;

  /// @brief Field _beatmapCallbacksController, offset 0x30, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _audioTimeSource, offset 0x38, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _transform, offset 0x40, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  /// @brief Field _startRotation, offset 0x48, size 0x10
  __declspec(property(get = __get__startRotation, put = __set__startRotation))::UnityEngine::Quaternion _startRotation;

  /// @brief Field _rotationSpeed, offset 0x58, size 0x4
  __declspec(property(get = __get__rotationSpeed, put = __set__rotationSpeed)) float_t _rotationSpeed;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x60, size 0x8
  __declspec(property(get = __get__beatmapDataCallbackWrapper, put = __set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__event();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__event() const;

  constexpr void __set__event(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr ::UnityEngine::Vector3& __get__rotationVector();

  constexpr ::UnityEngine::Vector3 const& __get__rotationVector() const;

  constexpr void __set__rotationVector(::UnityEngine::Vector3 value);

  constexpr float_t& __get__rotationSpeedMultiplier();

  constexpr float_t const& __get__rotationSpeedMultiplier() const;

  constexpr void __set__rotationSpeedMultiplier(float_t value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Quaternion& __get__startRotation();

  constexpr ::UnityEngine::Quaternion const& __get__startRotation() const;

  constexpr void __set__startRotation(::UnityEngine::Quaternion value);

  constexpr float_t& __get__rotationSpeed();

  constexpr float_t const& __get__rotationSpeed() const;

  constexpr void __set__rotationSpeed(float_t value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__beatmapDataCallbackWrapper() const;

  constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method Start, addr 0x23ad5a4, size 0x154, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x23ad6f8, size 0xe8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method OnDestroy, addr 0x23ad7e0, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleBeatmapEvent, addr 0x23ad7fc, size 0x124, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::LightRotationEventEffect* New_ctor();

  /// @brief Method .ctor, addr 0x23ad920, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationEventEffect(LightRotationEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationEventEffect(LightRotationEventEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationEventEffect();

public:
  /// @brief Field _event, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____event;

  /// @brief Field _rotationVector, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rotationVector;

  /// @brief Field _rotationSpeedMultiplier, offset: 0x28, size: 0x4, def value: None
  float_t ____rotationSpeedMultiplier;

  /// @brief Field _beatmapCallbacksController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _audioTimeSource, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _transform, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  /// @brief Field _startRotation, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____startRotation;

  /// @brief Field _rotationSpeed, offset: 0x58, size: 0x4, def value: None
  float_t ____rotationSpeed;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  /// @brief Field kSpeedMultiplier offset 0xffffffff size 0x4
  static constexpr float_t kSpeedMultiplier{ 20.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationEventEffect, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____event) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____rotationVector) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____rotationSpeedMultiplier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____beatmapCallbacksController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____audioTimeSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____transform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____startRotation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____rotationSpeed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationEventEffect, ____beatmapDataCallbackWrapper) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationEventEffect*, "", "LightRotationEventEffect");
