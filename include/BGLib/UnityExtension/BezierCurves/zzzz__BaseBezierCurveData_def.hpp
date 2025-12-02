#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/BezierCurves/BaseBezierCurveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(BaseBezierCurveData)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BGLib::UnityExtension::BezierCurves {
class BaseBezierCurveData;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData);
// Dependencies System.Object, UnityEngine.Vector3
namespace BGLib::UnityExtension::BezierCurves {
// Is value type: false
// CS Name: BGLib.UnityExtension.BezierCurves.BaseBezierCurveData
class CORDL_TYPE BaseBezierCurveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _endControlPointDelta, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get__endControlPointDelta, put = __cordl_internal_set__endControlPointDelta)) ::UnityEngine::Vector3 _endControlPointDelta;

  /// @brief Field _startControlPointDelta, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get__startControlPointDelta, put = __cordl_internal_set__startControlPointDelta)) ::UnityEngine::Vector3 _startControlPointDelta;

  __declspec(property(get = get_endControlPoint, put = set_endControlPoint)) ::UnityEngine::Vector3 endControlPoint;

  __declspec(property(get = get_endPoint)) ::UnityEngine::Vector3 endPoint;

  __declspec(property(get = get_startControlPoint, put = set_startControlPoint)) ::UnityEngine::Vector3 startControlPoint;

  __declspec(property(get = get_startPoint)) ::UnityEngine::Vector3 startPoint;

  static inline ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__endControlPointDelta() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__endControlPointDelta();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startControlPointDelta() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startControlPointDelta();

  constexpr void __cordl_internal_set__endControlPointDelta(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startControlPointDelta(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x31ff29c, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_endControlPoint, addr 0x31ff220, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_endControlPoint();

  /// @brief Method get_endPoint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_endPoint();

  /// @brief Method get_startControlPoint, addr 0x31ff1a4, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_startControlPoint();

  /// @brief Method get_startPoint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_startPoint();

  /// @brief Method set_endControlPoint, addr 0x31ff250, size 0x4c, virtual false, abstract: false, final false
  inline void set_endControlPoint(::UnityEngine::Vector3 value);

  /// @brief Method set_startControlPoint, addr 0x31ff1d4, size 0x4c, virtual false, abstract: false, final false
  inline void set_startControlPoint(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseBezierCurveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseBezierCurveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseBezierCurveData(BaseBezierCurveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseBezierCurveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseBezierCurveData(BaseBezierCurveData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20730 };

  /// @brief Field _startControlPointDelta, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startControlPointDelta;

  /// @brief Field _endControlPointDelta, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____endControlPointDelta;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData, ____startControlPointDelta) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData, ____endControlPointDelta) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData, 0x28>, "Size mismatch!");

} // namespace BGLib::UnityExtension::BezierCurves
NEED_NO_BOX(::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*, "BGLib.UnityExtension.BezierCurves", "BaseBezierCurveData");
