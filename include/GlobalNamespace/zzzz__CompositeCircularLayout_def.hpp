#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeCircularLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CompositeLayoutBase_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupCircularLayouter_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CompositeCircularLayout)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CompositeCircularLayout;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CompositeCircularLayout*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeCircularLayout*, "", "CompositeCircularLayout");
// Dependencies CompositeLayoutBase, LightGroupCircularLayouter::RotationDirection, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeCircularLayout
class CORDL_TYPE CompositeCircularLayout : public ::GlobalNamespace::CompositeLayoutBase {
public:
  // Declarations
  /// @brief Field _additionalAngle, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__additionalAngle, put = __cordl_internal_set__additionalAngle)) ::UnityEngine::Vector3 _additionalAngle;

  /// @brief Field _angle, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__angle, put = __cordl_internal_set__angle)) float_t _angle;

  /// @brief Field _radius, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__radius, put = __cordl_internal_set__radius)) float_t _radius;

  /// @brief Field _rotationDirection, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationDirection, put = __cordl_internal_set__rotationDirection)) ::GlobalNamespace::LightGroupCircularLayouter_RotationDirection _rotationDirection;

  /// @brief Field _startingAngle, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__startingAngle, put = __cordl_internal_set__startingAngle)) float_t _startingAngle;

  /// @brief Field _staticRotation, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__staticRotation, put = __cordl_internal_set__staticRotation)) bool _staticRotation;

  /// @brief Method Apply, addr 0x598da74, size 0x4, virtual true, abstract: false, final false
  inline void Apply(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>* childTransforms, int32_t numberOfElements, int32_t sameIdElements);

  static inline ::GlobalNamespace::CompositeCircularLayout* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__additionalAngle() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__additionalAngle();

  constexpr float_t const& __cordl_internal_get__angle() const;

  constexpr float_t& __cordl_internal_get__angle();

  constexpr float_t const& __cordl_internal_get__radius() const;

  constexpr float_t& __cordl_internal_get__radius();

  constexpr ::GlobalNamespace::LightGroupCircularLayouter_RotationDirection const& __cordl_internal_get__rotationDirection() const;

  constexpr ::GlobalNamespace::LightGroupCircularLayouter_RotationDirection& __cordl_internal_get__rotationDirection();

  constexpr float_t const& __cordl_internal_get__startingAngle() const;

  constexpr float_t& __cordl_internal_get__startingAngle();

  constexpr bool const& __cordl_internal_get__staticRotation() const;

  constexpr bool& __cordl_internal_get__staticRotation();

  constexpr void __cordl_internal_set__additionalAngle(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__angle(float_t value);

  constexpr void __cordl_internal_set__radius(float_t value);

  constexpr void __cordl_internal_set__rotationDirection(::GlobalNamespace::LightGroupCircularLayouter_RotationDirection value);

  constexpr void __cordl_internal_set__startingAngle(float_t value);

  constexpr void __cordl_internal_set__staticRotation(bool value);

  /// @brief Method .ctor, addr 0x598da78, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeCircularLayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeCircularLayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeCircularLayout(CompositeCircularLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeCircularLayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeCircularLayout(CompositeCircularLayout const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5816 };

  /// @brief Field _radius, offset: 0x24, size: 0x4, def value: None
  float_t ____radius;

  /// @brief Field _angle, offset: 0x28, size: 0x4, def value: None
  float_t ____angle;

  /// @brief Field _startingAngle, offset: 0x2c, size: 0x4, def value: None
  float_t ____startingAngle;

  /// @brief Field _rotationDirection, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::LightGroupCircularLayouter_RotationDirection ____rotationDirection;

  /// @brief Field _staticRotation, offset: 0x34, size: 0x1, def value: None
  bool ____staticRotation;

  /// @brief Field _additionalAngle, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____additionalAngle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeCircularLayout, ____radius) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeCircularLayout, ____angle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeCircularLayout, ____startingAngle) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeCircularLayout, ____rotationDirection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeCircularLayout, ____staticRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeCircularLayout, ____additionalAngle) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeCircularLayout) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
