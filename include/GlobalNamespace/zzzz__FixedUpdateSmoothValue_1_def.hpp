#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedUpdateSmoothValue_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FixedUpdateSmoothValue_1)
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class FixedUpdateSmoothValue_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::FixedUpdateSmoothValue_1);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: FixedUpdateSmoothValue`1<T>
class CORDL_TYPE FixedUpdateSmoothValue_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _currentSmoothedValue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__currentSmoothedValue, put = __cordl_internal_set__currentSmoothedValue)) T _currentSmoothedValue;

  /// @brief Field _prevSmoothedValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__prevSmoothedValue, put = __cordl_internal_set__prevSmoothedValue)) T _prevSmoothedValue;

  /// @brief Field _smooth, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__smooth, put = __cordl_internal_set__smooth)) float_t _smooth;

  /// @brief Method FixedUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void FixedUpdate(T value);

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetValue(float_t interpolationFactor);

  /// @brief Method Interpolate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T Interpolate(T value0, T value1, float_t t);

  static inline ::GlobalNamespace::FixedUpdateSmoothValue_1<T>* New_ctor(float_t smooth);

  /// @brief Method SetStartValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetStartValue(T value);

  constexpr T const& __cordl_internal_get__currentSmoothedValue() const;

  constexpr T& __cordl_internal_get__currentSmoothedValue();

  constexpr T const& __cordl_internal_get__prevSmoothedValue() const;

  constexpr T& __cordl_internal_get__prevSmoothedValue();

  constexpr float_t const& __cordl_internal_get__smooth() const;

  constexpr float_t& __cordl_internal_get__smooth();

  constexpr void __cordl_internal_set__currentSmoothedValue(T value);

  constexpr void __cordl_internal_set__prevSmoothedValue(T value);

  constexpr void __cordl_internal_set__smooth(float_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(float_t smooth);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedUpdateSmoothValue_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedUpdateSmoothValue_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedUpdateSmoothValue_1(FixedUpdateSmoothValue_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedUpdateSmoothValue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedUpdateSmoothValue_1(FixedUpdateSmoothValue_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16396 };

  /// @brief Field _currentSmoothedValue, offset: 0x10, size: 0x8, def value: None
  T ____currentSmoothedValue;

  /// @brief Field _prevSmoothedValue, offset: 0x18, size: 0x8, def value: None
  T ____prevSmoothedValue;

  /// @brief Field _smooth, offset: 0x20, size: 0x4, def value: None
  float_t ____smooth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::FixedUpdateSmoothValue_1, "", "FixedUpdateSmoothValue`1");
