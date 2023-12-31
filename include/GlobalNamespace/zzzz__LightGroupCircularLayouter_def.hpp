#pragma once
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
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4928))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LightGroupCircularLayouter__RotationDirection(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightGroupCircularLayouter__RotationDirection();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Clockwise value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection const Clockwise;

  /// @brief Field Counterclockwise value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection const Counterclockwise;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightGroupCircularLayouter
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4928)), TypeDefinitionIndex(TypeDefinitionIndex(4935)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4929))
// CS Name: ::LightGroupCircularLayouter*
class CORDL_TYPE LightGroupCircularLayouter : public ::GlobalNamespace::LightGroupSubsystem {
public:
  // Declarations
  using RotationDirection = ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection;

  /// @brief Field _radius, offset 0x20, size 0x4
  __declspec(property(get = __get__radius, put = __set__radius)) float_t _radius;

  /// @brief Field _angle, offset 0x24, size 0x4
  __declspec(property(get = __get__angle, put = __set__angle)) float_t _angle;

  /// @brief Field _startingAngle, offset 0x28, size 0x4
  __declspec(property(get = __get__startingAngle, put = __set__startingAngle)) float_t _startingAngle;

  /// @brief Field _rotationDirection, offset 0x2c, size 0x4
  __declspec(property(get = __get__rotationDirection, put = __set__rotationDirection))::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection _rotationDirection;

  /// @brief Field _staticRotation, offset 0x30, size 0x1
  __declspec(property(get = __get__staticRotation, put = __set__staticRotation)) bool _staticRotation;

  /// @brief Field _additionalAngle, offset 0x34, size 0xc
  __declspec(property(get = __get__additionalAngle, put = __set__additionalAngle))::UnityEngine::Vector3 _additionalAngle;

  constexpr float_t& __get__radius();

  constexpr float_t const& __get__radius() const;

  constexpr void __set__radius(float_t value);

  constexpr float_t& __get__angle();

  constexpr float_t const& __get__angle() const;

  constexpr void __set__angle(float_t value);

  constexpr float_t& __get__startingAngle();

  constexpr float_t const& __get__startingAngle() const;

  constexpr void __set__startingAngle(float_t value);

  constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection& __get__rotationDirection();

  constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection const& __get__rotationDirection() const;

  constexpr void __set__rotationDirection(::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection value);

  constexpr bool& __get__staticRotation();

  constexpr bool const& __get__staticRotation() const;

  constexpr void __set__staticRotation(bool value);

  constexpr ::UnityEngine::Vector3& __get__additionalAngle();

  constexpr ::UnityEngine::Vector3 const& __get__additionalAngle() const;

  constexpr void __set__additionalAngle(::UnityEngine::Vector3 value);

  static inline ::GlobalNamespace::LightGroupCircularLayouter* New_ctor();

  /// @brief Method .ctor, addr 0x23a9830, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCircularLayouter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupCircularLayouter(LightGroupCircularLayouter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCircularLayouter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupCircularLayouter(LightGroupCircularLayouter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupCircularLayouter();

public:
  /// @brief Field _radius, offset: 0x20, size: 0x4, def value: None
  float_t ____radius;

  /// @brief Field _angle, offset: 0x24, size: 0x4, def value: None
  float_t ____angle;

  /// @brief Field _startingAngle, offset: 0x28, size: 0x4, def value: None
  float_t ____startingAngle;

  /// @brief Field _rotationDirection, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection ____rotationDirection;

  /// @brief Field _staticRotation, offset: 0x30, size: 0x1, def value: None
  bool ____staticRotation;

  /// @brief Field _additionalAngle, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____additionalAngle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupCircularLayouter, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCircularLayouter, ____radius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCircularLayouter, ____angle) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCircularLayouter, ____startingAngle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCircularLayouter, ____rotationDirection) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCircularLayouter, ____staticRotation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCircularLayouter, ____additionalAngle) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection, "", "LightGroupCircularLayouter/RotationDirection");
NEED_NO_BOX(::GlobalNamespace::LightGroupCircularLayouter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupCircularLayouter*, "", "LightGroupCircularLayouter");
