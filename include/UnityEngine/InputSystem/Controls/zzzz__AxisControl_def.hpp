#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisControl)
namespace UnityEngine::InputSystem::Controls {
struct __AxisControl__Clamp;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
struct __AxisControl__Clamp;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Controls::__AxisControl__Clamp);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::AxisControl);
// Type: ::Clamp
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6627))
// CS Name: ::AxisControl::Clamp
struct CORDL_TYPE __AxisControl__Clamp {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AxisControl__Clamp_Unwrapped
  enum struct ____AxisControl__Clamp_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_BeforeNormalize = static_cast<int32_t>(0x1),
    __E_AfterNormalize = static_cast<int32_t>(0x2),
    __E_ToConstantBeforeNormalize = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AxisControl__Clamp_Unwrapped() const noexcept {
    return static_cast<____AxisControl__Clamp_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AxisControl__Clamp(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AxisControl__Clamp();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp const None;

  /// @brief Field BeforeNormalize value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp const BeforeNormalize;

  /// @brief Field AfterNormalize value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp const AfterNormalize;

  /// @brief Field ToConstantBeforeNormalize value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp const ToConstantBeforeNormalize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::__AxisControl__Clamp, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::__AxisControl__Clamp, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Controls
// Type: UnityEngine.InputSystem.Controls::AxisControl
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 280, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6216)), TypeDefinitionIndex(TypeDefinitionIndex(6627)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 391
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6628)) CS Name: ::UnityEngine.InputSystem.Controls::AxisControl*
class CORDL_TYPE AxisControl : public ::UnityEngine::InputSystem::InputControl_1<float_t> {
public:
  // Declarations
  using Clamp = ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp;

  /// @brief Field clamp, offset 0xf0, size 0x4
  __declspec(property(get = __get_clamp, put = __set_clamp))::UnityEngine::InputSystem::Controls::__AxisControl__Clamp clamp;

  /// @brief Field clampMin, offset 0xf4, size 0x4
  __declspec(property(get = __get_clampMin, put = __set_clampMin)) float_t clampMin;

  /// @brief Field clampMax, offset 0xf8, size 0x4
  __declspec(property(get = __get_clampMax, put = __set_clampMax)) float_t clampMax;

  /// @brief Field clampConstant, offset 0xfc, size 0x4
  __declspec(property(get = __get_clampConstant, put = __set_clampConstant)) float_t clampConstant;

  /// @brief Field invert, offset 0x100, size 0x1
  __declspec(property(get = __get_invert, put = __set_invert)) bool invert;

  /// @brief Field normalize, offset 0x101, size 0x1
  __declspec(property(get = __get_normalize, put = __set_normalize)) bool normalize;

  /// @brief Field normalizeMin, offset 0x104, size 0x4
  __declspec(property(get = __get_normalizeMin, put = __set_normalizeMin)) float_t normalizeMin;

  /// @brief Field normalizeMax, offset 0x108, size 0x4
  __declspec(property(get = __get_normalizeMax, put = __set_normalizeMax)) float_t normalizeMax;

  /// @brief Field normalizeZero, offset 0x10c, size 0x4
  __declspec(property(get = __get_normalizeZero, put = __set_normalizeZero)) float_t normalizeZero;

  /// @brief Field scale, offset 0x110, size 0x1
  __declspec(property(get = __get_scale, put = __set_scale)) bool scale;

  /// @brief Field scaleFactor, offset 0x114, size 0x4
  __declspec(property(get = __get_scaleFactor, put = __set_scaleFactor)) float_t scaleFactor;

  constexpr ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp& __get_clamp();

  constexpr ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp const& __get_clamp() const;

  constexpr void __set_clamp(::UnityEngine::InputSystem::Controls::__AxisControl__Clamp value);

  constexpr float_t& __get_clampMin();

  constexpr float_t const& __get_clampMin() const;

  constexpr void __set_clampMin(float_t value);

  constexpr float_t& __get_clampMax();

  constexpr float_t const& __get_clampMax() const;

  constexpr void __set_clampMax(float_t value);

  constexpr float_t& __get_clampConstant();

  constexpr float_t const& __get_clampConstant() const;

  constexpr void __set_clampConstant(float_t value);

  constexpr bool& __get_invert();

  constexpr bool const& __get_invert() const;

  constexpr void __set_invert(bool value);

  constexpr bool& __get_normalize();

  constexpr bool const& __get_normalize() const;

  constexpr void __set_normalize(bool value);

  constexpr float_t& __get_normalizeMin();

  constexpr float_t const& __get_normalizeMin() const;

  constexpr void __set_normalizeMin(float_t value);

  constexpr float_t& __get_normalizeMax();

  constexpr float_t const& __get_normalizeMax() const;

  constexpr void __set_normalizeMax(float_t value);

  constexpr float_t& __get_normalizeZero();

  constexpr float_t const& __get_normalizeZero() const;

  constexpr void __set_normalizeZero(float_t value);

  constexpr bool& __get_scale();

  constexpr bool const& __get_scale() const;

  constexpr void __set_scale(bool value);

  constexpr float_t& __get_scaleFactor();

  constexpr float_t const& __get_scaleFactor() const;

  constexpr void __set_scaleFactor(float_t value);

  /// @brief Method Preprocess, addr 0x2b09ab4, size 0xd4, virtual false, abstract: false, final false
  inline float_t Preprocess(float_t value);

  /// @brief Method Unpreprocess, addr 0x2b09b88, size 0x4c, virtual false, abstract: false, final false
  inline float_t Unpreprocess(float_t value);

  static inline ::UnityEngine::InputSystem::Controls::AxisControl* New_ctor();

  /// @brief Method .ctor, addr 0x2b09bd4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method FinishSetup, addr 0x2b09c5c, size 0xa4, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x2b09d00, size 0x34, virtual true, abstract: false, final false
  inline float_t ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x2b09d34, size 0x40, virtual true, abstract: false, final false
  inline void WriteValueIntoState(float_t value, ::cordl_internals::Ptr<void> statePtr);

  /// @brief Method CompareValue, addr 0x2b09d74, size 0xec, virtual true, abstract: false, final false
  inline bool CompareValue(::cordl_internals::Ptr<void> firstStatePtr, ::cordl_internals::Ptr<void> secondStatePtr);

  /// @brief Method EvaluateMagnitude, addr 0x2b09e60, size 0xe8, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(::cordl_internals::Ptr<void> statePtr);

  // Ctor Parameters [CppParam { name: "", ty: "AxisControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AxisControl(AxisControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AxisControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AxisControl(AxisControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AxisControl();

public:
  /// @brief Field clamp, offset: 0xf0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp ___clamp;

  /// @brief Field clampMin, offset: 0xf4, size: 0x4, def value: None
  float_t ___clampMin;

  /// @brief Field clampMax, offset: 0xf8, size: 0x4, def value: None
  float_t ___clampMax;

  /// @brief Field clampConstant, offset: 0xfc, size: 0x4, def value: None
  float_t ___clampConstant;

  /// @brief Field invert, offset: 0x100, size: 0x1, def value: None
  bool ___invert;

  /// @brief Field normalize, offset: 0x101, size: 0x1, def value: None
  bool ___normalize;

  /// @brief Field normalizeMin, offset: 0x104, size: 0x4, def value: None
  float_t ___normalizeMin;

  /// @brief Field normalizeMax, offset: 0x108, size: 0x4, def value: None
  float_t ___normalizeMax;

  /// @brief Field normalizeZero, offset: 0x10c, size: 0x4, def value: None
  float_t ___normalizeZero;

  /// @brief Field scale, offset: 0x110, size: 0x1, def value: None
  bool ___scale;

  /// @brief Field scaleFactor, offset: 0x114, size: 0x4, def value: None
  float_t ___scaleFactor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::AxisControl, 0x118>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___clamp) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___clampMin) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___clampMax) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___clampConstant) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___invert) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___normalize) == 0x101, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___normalizeMin) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___normalizeMax) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___normalizeZero) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___scale) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___scaleFactor) == 0x114, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Controls
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::__AxisControl__Clamp, "UnityEngine.InputSystem.Controls", "AxisControl/Clamp");
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::AxisControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::AxisControl*, "UnityEngine.InputSystem.Controls", "AxisControl");
