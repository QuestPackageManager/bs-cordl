#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupCircularLayouter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightGroupCircularLayouter_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightGroupCircularLayouter)
namespace GlobalNamespace {
struct __LightGroupCircularLayouter__RotationDirection;
}
// Forward declare root types
namespace GlobalNamespace {
struct __LightGroupCircularLayouter__RotationDirection;
}
namespace GlobalNamespace {
class LightGroupCircularLayouter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection);
MARK_REF_PTR_T(::GlobalNamespace::LightGroupCircularLayouter);
// Type: ::RotationDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LightGroupCircularLayouter::RotationDirection
struct CORDL_TYPE __LightGroupCircularLayouter__RotationDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LightGroupCircularLayouter__RotationDirection_Unwrapped
  enum struct ____LightGroupCircularLayouter__RotationDirection_Unwrapped : int32_t {
    __E_Clockwise = static_cast<int32_t>(0x0),
    __E_Counterclockwise = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LightGroupCircularLayouter__RotationDirection_Unwrapped() const noexcept {
    return static_cast<____LightGroupCircularLayouter__RotationDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightGroupCircularLayouter__RotationDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LightGroupCircularLayouter__RotationDirection(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Clockwise value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection const Clockwise;

  /// @brief Field Counterclockwise value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection const Counterclockwise;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4278 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightGroupCircularLayouter
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightGroupCircularLayouter*
class CORDL_TYPE LightGroupCircularLayouter : public ::GlobalNamespace::LightGroupSubsystem {
public:
  // Declarations
  using RotationDirection = ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection;

  /// @brief Field _additionalAngle, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get__additionalAngle, put = __cordl_internal_set__additionalAngle)) ::UnityEngine::Vector3 _additionalAngle;

  /// @brief Field _angle, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__angle, put = __cordl_internal_set__angle)) float_t _angle;

  /// @brief Field _radius, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__radius, put = __cordl_internal_set__radius)) float_t _radius;

  /// @brief Field _rotationDirection, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationDirection,
                      put = __cordl_internal_set__rotationDirection)) ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection _rotationDirection;

  /// @brief Field _startingAngle, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__startingAngle, put = __cordl_internal_set__startingAngle)) float_t _startingAngle;

  /// @brief Field _staticRotation, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__staticRotation, put = __cordl_internal_set__staticRotation)) bool _staticRotation;

  static inline ::GlobalNamespace::LightGroupCircularLayouter* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__additionalAngle() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__additionalAngle();

  constexpr float_t const& __cordl_internal_get__angle() const;

  constexpr float_t& __cordl_internal_get__angle();

  constexpr float_t const& __cordl_internal_get__radius() const;

  constexpr float_t& __cordl_internal_get__radius();

  constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection const& __cordl_internal_get__rotationDirection() const;

  constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection& __cordl_internal_get__rotationDirection();

  constexpr float_t const& __cordl_internal_get__startingAngle() const;

  constexpr float_t& __cordl_internal_get__startingAngle();

  constexpr bool const& __cordl_internal_get__staticRotation() const;

  constexpr bool& __cordl_internal_get__staticRotation();

  constexpr void __cordl_internal_set__additionalAngle(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__angle(float_t value);

  constexpr void __cordl_internal_set__radius(float_t value);

  constexpr void __cordl_internal_set__rotationDirection(::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection value);

  constexpr void __cordl_internal_set__startingAngle(float_t value);

  constexpr void __cordl_internal_set__staticRotation(bool value);

  /// @brief Method .ctor, addr 0x3b169b8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupCircularLayouter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCircularLayouter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupCircularLayouter(LightGroupCircularLayouter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCircularLayouter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupCircularLayouter(LightGroupCircularLayouter const&) = delete;

  /// @brief Field _radius, offset: 0x28, size: 0x4, def value: None
  float_t ____radius;

  /// @brief Field _angle, offset: 0x2c, size: 0x4, def value: None
  float_t ____angle;

  /// @brief Field _startingAngle, offset: 0x30, size: 0x4, def value: None
  float_t ____startingAngle;

  /// @brief Field _rotationDirection, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection ____rotationDirection;

  /// @brief Field _staticRotation, offset: 0x38, size: 0x1, def value: None
  bool ____staticRotation;

  /// @brief Field _additionalAngle, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____additionalAngle;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4279 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupCircularLayouter, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCircularLayouter, ____radius) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCircularLayouter, ____angle) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCircularLayouter, ____startingAngle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCircularLayouter, ____rotationDirection) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCircularLayouter, ____staticRotation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCircularLayouter, ____additionalAngle) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection, "", "LightGroupCircularLayouter/RotationDirection");
NEED_NO_BOX(::GlobalNamespace::LightGroupCircularLayouter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupCircularLayouter*, "", "LightGroupCircularLayouter");
