#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Spline.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Spline)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ProBuilder {
struct BezierPoint;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Spline;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Spline);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Spline
class CORDL_TYPE Spline : public ::System::Object {
public:
  // Declarations
  /// @brief Method Extrude, addr 0x4740210, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> Extrude(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* points, float_t radius, int32_t columns,
                                                                            int32_t rows, bool closeLoop, bool smooth);

  /// @brief Method Extrude, addr 0x4740234, size 0xd0, virtual false, abstract: false, final false
  static inline void Extrude(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* bezierPoints, float_t radius, int32_t columns, int32_t rows, bool closeLoop, bool smooth,
                             ::ByRef<::UnityEngine::ProBuilder::ProBuilderMesh*> target);

  /// @brief Method Extrude, addr 0x474081c, size 0x924, virtual false, abstract: false, final false
  static inline void Extrude(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, float_t radius, int32_t radiusRows, bool closeLoop, bool smooth,
                             ::ByRef<::UnityEngine::ProBuilder::ProBuilderMesh*> target, ::System::Collections::Generic::IList_1<::UnityEngine::Quaternion>* pointRotations);

  /// @brief Method GetControlPoints, addr 0x4740304, size 0x518, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetControlPoints(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* bezierPoints,
                                                                                                 int32_t subdivisionsPerSegment, bool closeLoop,
                                                                                                 ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* rotations);

  /// @brief Method GetRingRotation, addr 0x4741140, size 0x868, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion GetRingRotation(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, int32_t i, bool closeLoop, ::ByRef<float_t> secant);

  /// @brief Method VertexRing, addr 0x47419a8, size 0x1f0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> VertexRing(::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 offset, float_t radius, int32_t segments);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Spline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Spline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Spline(Spline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Spline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Spline(Spline const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14323 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Spline, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Spline);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Spline*, "UnityEngine.ProBuilder", "Spline");
