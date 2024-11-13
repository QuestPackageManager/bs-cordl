#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/BezierCurves/BaseBezierCurve_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurve_def.hpp"
CORDL_MODULE_EXPORT(BaseBezierCurve_1)
// Forward declare root types
namespace BGLib::UnityExtension::BezierCurves {
template <typename T> class BaseBezierCurve_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1);
// Type: BGLib.UnityExtension.BezierCurves::BaseBezierCurve`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension::BezierCurves {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::BGLib.UnityExtension.BezierCurves::BaseBezierCurve`1<T>*
class CORDL_TYPE BaseBezierCurve_1 : public ::BGLib::UnityExtension::BezierCurves::BaseBezierCurve {
public:
  // Declarations
  /// @brief Field _bezierCurveData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bezierCurveData, put = __cordl_internal_set__bezierCurveData)) T _bezierCurveData;

  static inline ::BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>* New_ctor();

  constexpr T const& __cordl_internal_get__bezierCurveData() const;

  constexpr T& __cordl_internal_get__bezierCurveData();

  constexpr void __cordl_internal_set__bezierCurveData(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseBezierCurve_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseBezierCurve_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseBezierCurve_1(BaseBezierCurve_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseBezierCurve_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseBezierCurve_1(BaseBezierCurve_1 const&) = delete;

  /// @brief Field _bezierCurveData, offset: 0x20, size: 0x8, def value: None
  T ____bezierCurveData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17238 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::UnityExtension::BezierCurves
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1, "BGLib.UnityExtension.BezierCurves", "BaseBezierCurve`1");
