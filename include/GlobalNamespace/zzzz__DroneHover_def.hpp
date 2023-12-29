#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DroneHover)
namespace GlobalNamespace {
class __DroneHover__SineLayer;
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
class __DroneHover__SineLayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DroneHover);
MARK_REF_PTR_T(::GlobalNamespace::__DroneHover__SineLayer);
// Type: ::SineLayer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3995))
// CS Name: ::DroneHover::SineLayer*
class CORDL_TYPE __DroneHover__SineLayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field multiplier, offset 0x10, size 0x4
  __declspec(property(get = __get_multiplier, put = __set_multiplier)) float_t multiplier;

  /// @brief Field offset, offset 0x14, size 0x4
  __declspec(property(get = __get_offset, put = __set_offset)) float_t offset;

  constexpr float_t& __get_multiplier();

  constexpr float_t const& __get_multiplier() const;

  constexpr void __set_multiplier(float_t value);

  constexpr float_t& __get_offset();

  constexpr float_t const& __get_offset() const;

  constexpr void __set_offset(float_t value);

  static inline ::GlobalNamespace::__DroneHover__SineLayer* New_ctor();

  /// @brief Method .ctor addr 0x20c1490 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__DroneHover__SineLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DroneHover__SineLayer(__DroneHover__SineLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DroneHover__SineLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DroneHover__SineLayer(__DroneHover__SineLayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DroneHover__SineLayer();

public:
  /// @brief Field multiplier, offset: 0x10, size: 0x4, def value: None
  float_t ___multiplier;

  /// @brief Field offset, offset: 0x14, size: 0x4, def value: None
  float_t ___offset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DroneHover__SineLayer, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DroneHover__SineLayer, ___multiplier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DroneHover__SineLayer, ___offset) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DroneHover
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3996))
// CS Name: ::DroneHover*
class CORDL_TYPE DroneHover : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using SineLayer = ::GlobalNamespace::__DroneHover__SineLayer;

  /// @brief Field _hoverAreaPerAxis, offset 0x18, size 0xc
  __declspec(property(get = __get__hoverAreaPerAxis, put = __set__hoverAreaPerAxis))::UnityEngine::Vector3 _hoverAreaPerAxis;

  /// @brief Field _speed, offset 0x24, size 0x4
  __declspec(property(get = __get__speed, put = __set__speed)) float_t _speed;

  /// @brief Field _compoundSins, offset 0x28, size 0x8
  __declspec(property(get = __get__compoundSins, put = __set__compoundSins))::System::Collections::Generic::List_1<::GlobalNamespace::__DroneHover__SineLayer*>* _compoundSins;

  /// @brief Field _tiltTransforms, offset 0x30, size 0x8
  __declspec(property(get = __get__tiltTransforms, put = __set__tiltTransforms))::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _tiltTransforms;

  /// @brief Field _maxTiltAmount, offset 0x38, size 0x4
  __declspec(property(get = __get__maxTiltAmount, put = __set__maxTiltAmount)) float_t _maxTiltAmount;

  /// @brief Field _tiltSpeed, offset 0x3c, size 0x4
  __declspec(property(get = __get__tiltSpeed, put = __set__tiltSpeed)) float_t _tiltSpeed;

  /// @brief Field _tiltAheadOfTime, offset 0x40, size 0x4
  __declspec(property(get = __get__tiltAheadOfTime, put = __set__tiltAheadOfTime)) float_t _tiltAheadOfTime;

  /// @brief Field _tiltToTarget, offset 0x44, size 0x1
  __declspec(property(get = __get__tiltToTarget, put = __set__tiltToTarget)) bool _tiltToTarget;

  /// @brief Field _startPos, offset 0x48, size 0xc
  __declspec(property(get = __get__startPos, put = __set__startPos))::UnityEngine::Vector3 _startPos;

  /// @brief Field _cloth, offset 0x58, size 0x8
  __declspec(property(get = __get__cloth, put = __set__cloth))::UnityEngine::Cloth* _cloth;

  constexpr ::UnityEngine::Vector3& __get__hoverAreaPerAxis();

  constexpr ::UnityEngine::Vector3 const& __get__hoverAreaPerAxis() const;

  constexpr void __set__hoverAreaPerAxis(::UnityEngine::Vector3 value);

  constexpr float_t& __get__speed();

  constexpr float_t const& __get__speed() const;

  constexpr void __set__speed(float_t value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DroneHover__SineLayer*>*& __get__compoundSins();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DroneHover__SineLayer*>*> const& __get__compoundSins() const;

  constexpr void __set__compoundSins(::System::Collections::Generic::List_1<::GlobalNamespace::__DroneHover__SineLayer*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& __get__tiltTransforms();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*> const& __get__tiltTransforms() const;

  constexpr void __set__tiltTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* value);

  constexpr float_t& __get__maxTiltAmount();

  constexpr float_t const& __get__maxTiltAmount() const;

  constexpr void __set__maxTiltAmount(float_t value);

  constexpr float_t& __get__tiltSpeed();

  constexpr float_t const& __get__tiltSpeed() const;

  constexpr void __set__tiltSpeed(float_t value);

  constexpr float_t& __get__tiltAheadOfTime();

  constexpr float_t const& __get__tiltAheadOfTime() const;

  constexpr void __set__tiltAheadOfTime(float_t value);

  constexpr bool& __get__tiltToTarget();

  constexpr bool const& __get__tiltToTarget() const;

  constexpr void __set__tiltToTarget(bool value);

  constexpr ::UnityEngine::Vector3& __get__startPos();

  constexpr ::UnityEngine::Vector3 const& __get__startPos() const;

  constexpr void __set__startPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Cloth*& __get__cloth();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Cloth*> const& __get__cloth() const;

  constexpr void __set__cloth(::UnityEngine::Cloth* value);

  /// @brief Method Start addr 0x20c0ef4 size 0x30 virtual false final false
  inline void Start();

  /// @brief Method Update addr 0x20c0f24 size 0x120 virtual false final false
  inline void Update();

  /// @brief Method GetNoiseVec3 addr 0x20c1044 size 0x7c virtual false final false
  inline ::UnityEngine::Vector3 GetNoiseVec3(float_t time);

  /// @brief Method GetNoise addr 0x20c1380 size 0xf4 virtual false final false
  inline float_t GetNoise(float_t time, float_t offset);

  /// @brief Method UpdateTiltTransform addr 0x20c10c0 size 0x2c0 virtual false final false
  inline void UpdateTiltTransform();

  static inline ::GlobalNamespace::DroneHover* New_ctor();

  /// @brief Method .ctor addr 0x20c1474 size 0x1c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DroneHover", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DroneHover(DroneHover&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DroneHover", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DroneHover(DroneHover const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DroneHover();

public:
  /// @brief Field _hoverAreaPerAxis, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____hoverAreaPerAxis;

  /// @brief Field _speed, offset: 0x24, size: 0x4, def value: None
  float_t ____speed;

  /// @brief Field _compoundSins, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DroneHover__SineLayer*>* ____compoundSins;

  /// @brief Field _tiltTransforms, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* ____tiltTransforms;

  /// @brief Field _maxTiltAmount, offset: 0x38, size: 0x4, def value: None
  float_t ____maxTiltAmount;

  /// @brief Field _tiltSpeed, offset: 0x3c, size: 0x4, def value: None
  float_t ____tiltSpeed;

  /// @brief Field _tiltAheadOfTime, offset: 0x40, size: 0x4, def value: None
  float_t ____tiltAheadOfTime;

  /// @brief Field _tiltToTarget, offset: 0x44, size: 0x1, def value: None
  bool ____tiltToTarget;

  /// @brief Field _startPos, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPos;

  /// @brief Field _cloth, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Cloth* ____cloth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DroneHover, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____hoverAreaPerAxis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____speed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____compoundSins) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____tiltTransforms) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____maxTiltAmount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____tiltSpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____tiltAheadOfTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____tiltToTarget) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____startPos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneHover, ____cloth) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DroneHover);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DroneHover*, "", "DroneHover");
NEED_NO_BOX(::GlobalNamespace::__DroneHover__SineLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DroneHover__SineLayer*, "", "DroneHover/SineLayer");
