#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/BezierCurves/BaseBezierCurve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BaseBezierCurve)
namespace BGLib::UnityExtension::BezierCurves {
struct CurveData;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BGLib::UnityExtension::BezierCurves {
class BaseBezierCurve;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::BezierCurves::BaseBezierCurve);
// Dependencies UnityEngine.MonoBehaviour
namespace BGLib::UnityExtension::BezierCurves {
// Is value type: false
// CS Name: BGLib.UnityExtension.BezierCurves.BaseBezierCurve
class CORDL_TYPE BaseBezierCurve : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_isReady)) bool isReady;

  /// @brief Method Evaluate, addr 0x322fac0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 Evaluate(float_t current);

  /// @brief Method GetBezierCurveData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::BGLib::UnityExtension::BezierCurves::CurveData GetBezierCurveData();

  static inline ::BGLib::UnityExtension::BezierCurves::BaseBezierCurve* New_ctor();

  /// @brief Method SetBezierCurveData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetBezierCurveData(::BGLib::UnityExtension::BezierCurves::CurveData data);

  /// @brief Method .ctor, addr 0x322fbcc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isReady, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isReady();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseBezierCurve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseBezierCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseBezierCurve(BaseBezierCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseBezierCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseBezierCurve(BaseBezierCurve const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20754 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve, 0x20>, "Size mismatch!");

} // namespace BGLib::UnityExtension::BezierCurves
NEED_NO_BOX(::BGLib::UnityExtension::BezierCurves::BaseBezierCurve);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::BezierCurves::BaseBezierCurve*, "BGLib.UnityExtension.BezierCurves", "BaseBezierCurve");
