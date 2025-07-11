#pragma once
// IWYU pragma private; include "GlobalNamespace/DroneHover.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DroneHover)
namespace GlobalNamespace {
class DroneHover_SineLayer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Cloth;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class DroneHover;
}
namespace GlobalNamespace {
class DroneHover_SineLayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DroneHover);
MARK_REF_PTR_T(::GlobalNamespace::DroneHover_SineLayer);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DroneHover/SineLayer
class CORDL_TYPE DroneHover_SineLayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field multiplier, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_multiplier, put = __cordl_internal_set_multiplier)) float_t multiplier;

  /// @brief Field offset, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset)) float_t offset;

  static inline ::GlobalNamespace::DroneHover_SineLayer* New_ctor();

  constexpr float_t const& __cordl_internal_get_multiplier() const;

  constexpr float_t& __cordl_internal_get_multiplier();

  constexpr float_t const& __cordl_internal_get_offset() const;

  constexpr float_t& __cordl_internal_get_offset();

  constexpr void __cordl_internal_set_multiplier(float_t value);

  constexpr void __cordl_internal_set_offset(float_t value);

  /// @brief Method .ctor, addr 0x3acb150, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DroneHover_SineLayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DroneHover_SineLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DroneHover_SineLayer(DroneHover_SineLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DroneHover_SineLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DroneHover_SineLayer(DroneHover_SineLayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3978 };

  /// @brief Field multiplier, offset: 0x10, size: 0x4, def value: None
  float_t ___multiplier;

  /// @brief Field offset, offset: 0x14, size: 0x4, def value: None
  float_t ___offset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DroneHover_SineLayer, ___multiplier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover_SineLayer, ___offset) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DroneHover_SineLayer, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: DroneHover
class CORDL_TYPE DroneHover : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using SineLayer = ::GlobalNamespace::DroneHover_SineLayer;

  /// @brief Field _cloth, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__cloth, put = __cordl_internal_set__cloth)) ::UnityW<::UnityEngine::Cloth> _cloth;

  /// @brief Field _compoundSins, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__compoundSins,
                      put = __cordl_internal_set__compoundSins)) ::System::Collections::Generic::List_1<::GlobalNamespace::DroneHover_SineLayer*>* _compoundSins;

  /// @brief Field _hoverAreaPerAxis, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get__hoverAreaPerAxis, put = __cordl_internal_set__hoverAreaPerAxis)) ::UnityEngine::Vector3 _hoverAreaPerAxis;

  /// @brief Field _maxTiltAmount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__maxTiltAmount, put = __cordl_internal_set__maxTiltAmount)) float_t _maxTiltAmount;

  /// @brief Field _speed, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__speed, put = __cordl_internal_set__speed)) float_t _speed;

  /// @brief Field _startPos, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get__startPos, put = __cordl_internal_set__startPos)) ::UnityEngine::Vector3 _startPos;

  /// @brief Field _tiltAheadOfTime, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__tiltAheadOfTime, put = __cordl_internal_set__tiltAheadOfTime)) float_t _tiltAheadOfTime;

  /// @brief Field _tiltSpeed, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__tiltSpeed, put = __cordl_internal_set__tiltSpeed)) float_t _tiltSpeed;

  /// @brief Field _tiltToTarget, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get__tiltToTarget, put = __cordl_internal_set__tiltToTarget)) bool _tiltToTarget;

  /// @brief Field _tiltTransforms, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__tiltTransforms,
                      put = __cordl_internal_set__tiltTransforms)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* _tiltTransforms;

  /// @brief Method GetNoise, addr 0x3acb040, size 0xf4, virtual false, abstract: false, final false
  inline float_t GetNoise(float_t time, float_t offset);

  /// @brief Method GetNoiseVec3, addr 0x3acad00, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetNoiseVec3(float_t time);

  static inline ::GlobalNamespace::DroneHover* New_ctor();

  /// @brief Method Start, addr 0x3acabb8, size 0x30, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3acabe8, size 0x118, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateTiltTransform, addr 0x3acad7c, size 0x2c4, virtual false, abstract: false, final false
  inline void UpdateTiltTransform();

  constexpr ::UnityW<::UnityEngine::Cloth> const& __cordl_internal_get__cloth() const;

  constexpr ::UnityW<::UnityEngine::Cloth>& __cordl_internal_get__cloth();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DroneHover_SineLayer*>* const& __cordl_internal_get__compoundSins() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DroneHover_SineLayer*>*& __cordl_internal_get__compoundSins();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__hoverAreaPerAxis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__hoverAreaPerAxis();

  constexpr float_t const& __cordl_internal_get__maxTiltAmount() const;

  constexpr float_t& __cordl_internal_get__maxTiltAmount();

  constexpr float_t const& __cordl_internal_get__speed() const;

  constexpr float_t& __cordl_internal_get__speed();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPos();

  constexpr float_t const& __cordl_internal_get__tiltAheadOfTime() const;

  constexpr float_t& __cordl_internal_get__tiltAheadOfTime();

  constexpr float_t const& __cordl_internal_get__tiltSpeed() const;

  constexpr float_t& __cordl_internal_get__tiltSpeed();

  constexpr bool const& __cordl_internal_get__tiltToTarget() const;

  constexpr bool& __cordl_internal_get__tiltToTarget();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__tiltTransforms() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__tiltTransforms();

  constexpr void __cordl_internal_set__cloth(::UnityW<::UnityEngine::Cloth> value);

  constexpr void __cordl_internal_set__compoundSins(::System::Collections::Generic::List_1<::GlobalNamespace::DroneHover_SineLayer*>* value);

  constexpr void __cordl_internal_set__hoverAreaPerAxis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__maxTiltAmount(float_t value);

  constexpr void __cordl_internal_set__speed(float_t value);

  constexpr void __cordl_internal_set__startPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__tiltAheadOfTime(float_t value);

  constexpr void __cordl_internal_set__tiltSpeed(float_t value);

  constexpr void __cordl_internal_set__tiltToTarget(bool value);

  constexpr void __cordl_internal_set__tiltTransforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* value);

  /// @brief Method .ctor, addr 0x3acb134, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DroneHover();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DroneHover", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DroneHover(DroneHover&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DroneHover", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DroneHover(DroneHover const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3979 };

  /// @brief Field _hoverAreaPerAxis, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____hoverAreaPerAxis;

  /// @brief Field _speed, offset: 0x2c, size: 0x4, def value: None
  float_t ____speed;

  /// @brief Field _compoundSins, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::DroneHover_SineLayer*>* ____compoundSins;

  /// @brief Field _tiltTransforms, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* ____tiltTransforms;

  /// @brief Field _maxTiltAmount, offset: 0x40, size: 0x4, def value: None
  float_t ____maxTiltAmount;

  /// @brief Field _tiltSpeed, offset: 0x44, size: 0x4, def value: None
  float_t ____tiltSpeed;

  /// @brief Field _tiltAheadOfTime, offset: 0x48, size: 0x4, def value: None
  float_t ____tiltAheadOfTime;

  /// @brief Field _tiltToTarget, offset: 0x4c, size: 0x1, def value: None
  bool ____tiltToTarget;

  /// @brief Field _startPos, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPos;

  /// @brief Field _cloth, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Cloth> ____cloth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DroneHover, ____hoverAreaPerAxis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____speed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____compoundSins) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____tiltTransforms) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____maxTiltAmount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____tiltSpeed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____tiltAheadOfTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____tiltToTarget) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____startPos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____cloth) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DroneHover, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DroneHover);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DroneHover*, "", "DroneHover");
NEED_NO_BOX(::GlobalNamespace::DroneHover_SineLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DroneHover_SineLayer*, "", "DroneHover/SineLayer");
