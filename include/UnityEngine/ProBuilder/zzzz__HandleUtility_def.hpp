#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/HandleUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandleUtility)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ProBuilder {
struct CullingMode;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
struct HandleOrientation;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class RaycastHit;
}
namespace UnityEngine::ProBuilder {
template <typename T1, typename T2> struct SimpleTuple_2;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class HandleUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::HandleUtility);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.HandleUtility
class CORDL_TYPE HandleUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method FaceRaycast, addr 0x470c27c, size 0x584, virtual false, abstract: false, final false
  static inline bool FaceRaycast(::UnityEngine::Ray InWorldRay, ::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                 ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::RaycastHit*>*> hits, ::UnityEngine::ProBuilder::CullingMode cullingMode,
                                 ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* ignore);

  /// @brief Method FaceRaycast, addr 0x470b5b4, size 0x530, virtual false, abstract: false, final false
  static inline bool FaceRaycast(::UnityEngine::Ray worldRay, ::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ByRef<::UnityEngine::ProBuilder::RaycastHit*> hit, float_t distance,
                                 ::UnityEngine::ProBuilder::CullingMode cullingMode, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* ignore);

  /// @brief Method FaceRaycast, addr 0x470b574, size 0x40, virtual false, abstract: false, final false
  static inline bool FaceRaycast(::UnityEngine::Ray worldRay, ::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ByRef<::UnityEngine::ProBuilder::RaycastHit*> hit,
                                 ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* ignore);

  /// @brief Method FaceRaycastBothCullModes, addr 0x470bd84, size 0x4f8, virtual false, abstract: false, final false
  static inline bool FaceRaycastBothCullModes(::UnityEngine::Ray worldRay, ::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                              ::ByRef<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>> back,
                                              ::ByRef<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>> front);

  /// @brief Method GetActiveElementPosition, addr 0x470eb7c, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetActiveElementPosition(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges);

  /// @brief Method GetActiveElementPosition, addr 0x470e4fc, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetActiveElementPosition(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method GetActiveElementPosition, addr 0x470ec68, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetActiveElementPosition(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* vertices);

  /// @brief Method GetEdgeRotation, addr 0x470e1f4, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion GetEdgeRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge);

  /// @brief Method GetEdgeRotation, addr 0x470e0d4, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion GetEdgeRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::HandleOrientation orientation,
                                                          ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges);

  /// @brief Method GetFaceRotation, addr 0x470da80, size 0x268, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion GetFaceRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method GetFaceRotation, addr 0x470d960, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion GetFaceRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::HandleOrientation orientation,
                                                          ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method GetRotation, addr 0x470d2a8, size 0x6b8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion GetRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* indices);

  /// @brief Method GetVertexRotation, addr 0x470e2c0, size 0x118, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion GetVertexRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::HandleOrientation orientation,
                                                            ::System::Collections::Generic::IEnumerable_1<int32_t>* vertices);

  /// @brief Method GetVertexRotation, addr 0x470e3d8, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion GetVertexRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t vertex);

  /// @brief Method InverseTransformRay, addr 0x470c800, size 0x1c0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Ray InverseTransformRay(::UnityEngine::Transform* transform, ::UnityEngine::Ray InWorldRay);

  /// @brief Method MeshRaycast, addr 0x470cb38, size 0x280, virtual false, abstract: false, final false
  static inline bool MeshRaycast(::UnityEngine::Ray InRay, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> mesh, ::ArrayW<int32_t, ::Array<int32_t>*> triangles,
                                 ::ByRef<::UnityEngine::ProBuilder::RaycastHit*> hit, float_t distance);

  /// @brief Method MeshRaycast, addr 0x470c9c0, size 0x178, virtual false, abstract: false, final false
  static inline bool MeshRaycast(::UnityEngine::Ray InWorldRay, ::UnityEngine::GameObject* gameObject, ::ByRef<::UnityEngine::ProBuilder::RaycastHit*> hit, float_t distance);

  /// @brief Method PointIsOccluded, addr 0x470cff0, size 0x2b8, virtual false, abstract: false, final false
  static inline bool PointIsOccluded(::UnityEngine::Camera* cam, ::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::UnityEngine::Vector3 worldPoint);

  /// @brief Method ScreenToGuiPoint, addr 0x470b524, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ScreenToGuiPoint(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 point, float_t pixelsPerPoint);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandleUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HandleUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandleUtility(HandleUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandleUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandleUtility(HandleUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14246 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::HandleUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::HandleUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::HandleUtility*, "UnityEngine.ProBuilder", "HandleUtility");
