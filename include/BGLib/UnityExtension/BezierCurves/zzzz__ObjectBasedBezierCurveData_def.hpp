#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/BezierCurves/ObjectBasedBezierCurveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurveData_def.hpp"
CORDL_MODULE_EXPORT(ObjectBasedBezierCurveData)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BGLib::UnityExtension::BezierCurves {
class ObjectBasedBezierCurveData;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData);
// Dependencies BGLib.UnityExtension.BezierCurves.BaseBezierCurveData
namespace BGLib::UnityExtension::BezierCurves {
// Is value type: false
// CS Name: BGLib.UnityExtension.BezierCurves.ObjectBasedBezierCurveData
class CORDL_TYPE ObjectBasedBezierCurveData : public ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData {
public:
  // Declarations
  /// @brief Field _endPointTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__endPointTransform, put = __cordl_internal_set__endPointTransform)) ::UnityW<::UnityEngine::Transform> _endPointTransform;

  /// @brief Field _startPointTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__startPointTransform, put = __cordl_internal_set__startPointTransform)) ::UnityW<::UnityEngine::Transform> _startPointTransform;

  __declspec(property(get = get_endPoint)) ::UnityEngine::Vector3 endPoint;

  __declspec(property(get = get_hasReferences)) bool hasReferences;

  __declspec(property(get = get_startPoint)) ::UnityEngine::Vector3 startPoint;

  static inline ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData* New_ctor();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__endPointTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__endPointTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__startPointTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__startPointTransform();

  constexpr void __cordl_internal_set__endPointTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__startPointTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x22b9940, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_endPoint, addr 0x22b9924, size 0x1c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_endPoint();

  /// @brief Method get_hasReferences, addr 0x22b96a4, size 0x98, virtual false, abstract: false, final false
  inline bool get_hasReferences();

  /// @brief Method get_startPoint, addr 0x22b9908, size 0x1c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_startPoint();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectBasedBezierCurveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectBasedBezierCurveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectBasedBezierCurveData(ObjectBasedBezierCurveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectBasedBezierCurveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectBasedBezierCurveData(ObjectBasedBezierCurveData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17192 };

  /// @brief Field _startPointTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____startPointTransform;

  /// @brief Field _endPointTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____endPointTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData, ____startPointTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData, ____endPointTransform) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData, 0x38>, "Size mismatch!");

} // namespace BGLib::UnityExtension::BezierCurves
NEED_NO_BOX(::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*, "BGLib.UnityExtension.BezierCurves", "ObjectBasedBezierCurveData");
