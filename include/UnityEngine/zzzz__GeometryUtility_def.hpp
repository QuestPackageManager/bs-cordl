#pragma once
// IWYU pragma private; include "UnityEngine/GeometryUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GeometryUtility)
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace UnityEngine {
class GeometryUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GeometryUtility);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GeometryUtility
class CORDL_TYPE GeometryUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method CalculateFrustumPlanes, addr 0x68b3518, size 0x88, virtual false, abstract: false, final false
  static inline void CalculateFrustumPlanes(::UnityEngine::Camera* camera, ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> planes);

  /// @brief Method CalculateFrustumPlanes, addr 0x68b35a0, size 0xdc, virtual false, abstract: false, final false
  static inline void CalculateFrustumPlanes(::UnityEngine::Matrix4x4 worldToProjectionMatrix, ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> planes);

  /// @brief Method Internal_ExtractPlanes, addr 0x68b367c, size 0x128, virtual false, abstract: false, final false
  static inline void Internal_ExtractPlanes(::ByRef<::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>> planes, ::UnityEngine::Matrix4x4 worldToProjectionMatrix);

  /// @brief Method Internal_ExtractPlanes_Injected, addr 0x68b38c0, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_ExtractPlanes_Injected(::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> planes, ::ByRef<::UnityEngine::Matrix4x4> worldToProjectionMatrix);

  /// @brief Method TestPlanesAABB, addr 0x68b37a4, size 0xd8, virtual false, abstract: false, final false
  static inline bool TestPlanesAABB(::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> planes, ::UnityEngine::Bounds bounds);

  /// @brief Method TestPlanesAABB_Injected, addr 0x68b387c, size 0x44, virtual false, abstract: false, final false
  static inline bool TestPlanesAABB_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> planes, ::ByRef<::UnityEngine::Bounds> bounds);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeometryUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeometryUtility(GeometryUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeometryUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeometryUtility(GeometryUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10094 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GeometryUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GeometryUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GeometryUtility*, "UnityEngine", "GeometryUtility");
