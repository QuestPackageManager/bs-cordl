#pragma once
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
// Type: ::FixedUpdateSmoothValue`1
// SizeInfo { instance_size: 40, native_size: 36, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14333))
// CS Name: ::FixedUpdateSmoothValue`1<T>*
class CORDL_TYPE FixedUpdateSmoothValue_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _currentSmoothedValue, offset 0x10, size 0x8
  __declspec(property(get = __get__currentSmoothedValue, put = __set__currentSmoothedValue)) T _currentSmoothedValue;

  /// @brief Field _prevSmoothedValue, offset 0x18, size 0x8
  __declspec(property(get = __get__prevSmoothedValue, put = __set__prevSmoothedValue)) T _prevSmoothedValue;

  /// @brief Field _smooth, offset 0x20, size 0x4
  __declspec(property(get = __get__smooth, put = __set__smooth)) float_t _smooth;

  constexpr T& __get__currentSmoothedValue();

  constexpr T const& __get__currentSmoothedValue() const;

  constexpr void __set__currentSmoothedValue(T value);

  constexpr T& __get__prevSmoothedValue();

  constexpr T const& __get__prevSmoothedValue() const;

  constexpr void __set__prevSmoothedValue(T value);

  constexpr float_t& __get__smooth();

  constexpr float_t const& __get__smooth() const;

  constexpr void __set__smooth(float_t value);

  static inline ::GlobalNamespace::FixedUpdateSmoothValue_1<T>* New_ctor(float_t smooth);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(float_t smooth);

  /// @brief Method SetStartValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetStartValue(T value);

  /// @brief Method FixedUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void FixedUpdate(T value);

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetValue(float_t interpolationFactor);

  /// @brief Method Interpolate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T Interpolate(T value0, T value1, float_t t);

  // Ctor Parameters [CppParam { name: "", ty: "FixedUpdateSmoothValue_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedUpdateSmoothValue_1(FixedUpdateSmoothValue_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedUpdateSmoothValue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedUpdateSmoothValue_1(FixedUpdateSmoothValue_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedUpdateSmoothValue_1();

public:
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
