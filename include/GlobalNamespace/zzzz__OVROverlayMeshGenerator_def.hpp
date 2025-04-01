#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayMeshGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVROverlayMeshGenerator)
namespace GlobalNamespace {
struct OVROverlayMeshGenerator_CubeFace;
}
namespace GlobalNamespace {
struct OVROverlay_OverlayShape;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVROverlayMeshGenerator_CubeFace;
}
namespace GlobalNamespace {
class OVROverlayMeshGenerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace);
MARK_REF_PTR_T(::GlobalNamespace::OVROverlayMeshGenerator);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVROverlayMeshGenerator/CubeFace
struct CORDL_TYPE OVROverlayMeshGenerator_CubeFace {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVROverlayMeshGenerator_CubeFace_Unwrapped
  enum struct __OVROverlayMeshGenerator_CubeFace_Unwrapped : int32_t {
    __E_Right = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
    __E_Top = static_cast<int32_t>(0x2),
    __E_Bottom = static_cast<int32_t>(0x3),
    __E_Front = static_cast<int32_t>(0x4),
    __E_Back = static_cast<int32_t>(0x5),
    __E_COUNT = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVROverlayMeshGenerator_CubeFace_Unwrapped() const noexcept {
    return static_cast<__OVROverlayMeshGenerator_CubeFace_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVROverlayMeshGenerator_CubeFace();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVROverlayMeshGenerator_CubeFace(int32_t value__) noexcept;

  /// @brief Field Back value: I32(5)
  static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Back;

  /// @brief Field Bottom value: I32(3)
  static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Bottom;

  /// @brief Field COUNT value: I32(6)
  static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const COUNT;

  /// @brief Field Front value: I32(4)
  static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Front;

  /// @brief Field Left value: I32(1)
  static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Left;

  /// @brief Field Right value: I32(0)
  static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Right;

  /// @brief Field Top value: I32(2)
  static ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace const Top;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7975 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVROverlayMeshGenerator_CubeFace, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVROverlay::OverlayShape, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Rect, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVROverlayMeshGenerator
class CORDL_TYPE OVROverlayMeshGenerator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CubeFace = ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace;

  /// @brief Field BottomLeft, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BottomLeft, put = setStaticF_BottomLeft)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> BottomLeft;

  /// @brief Field RightVector, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RightVector, put = setStaticF_RightVector)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> RightVector;

  /// @brief Field UpVector, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UpVector, put = setStaticF_UpVector)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UpVector;

  /// @brief Field _Awake, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get__Awake, put = __cordl_internal_set__Awake)) bool _Awake;

  /// @brief Field _CameraRoot, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__CameraRoot, put = __cordl_internal_set__CameraRoot)) ::UnityW<::UnityEngine::Transform> _CameraRoot;

  /// @brief Field _LastDestRectLeft, offset 0x9c, size 0x10
  __declspec(property(get = __cordl_internal_get__LastDestRectLeft, put = __cordl_internal_set__LastDestRectLeft)) ::UnityEngine::Rect _LastDestRectLeft;

  /// @brief Field _LastDestRectRight, offset 0xac, size 0x10
  __declspec(property(get = __cordl_internal_get__LastDestRectRight, put = __cordl_internal_set__LastDestRectRight)) ::UnityEngine::Rect _LastDestRectRight;

  /// @brief Field _LastPosition, offset 0x74, size 0xc
  __declspec(property(get = __cordl_internal_get__LastPosition, put = __cordl_internal_set__LastPosition)) ::UnityEngine::Vector3 _LastPosition;

  /// @brief Field _LastRotation, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get__LastRotation, put = __cordl_internal_set__LastRotation)) ::UnityEngine::Quaternion _LastRotation;

  /// @brief Field _LastScale, offset 0x90, size 0xc
  __declspec(property(get = __cordl_internal_get__LastScale, put = __cordl_internal_set__LastScale)) ::UnityEngine::Vector3 _LastScale;

  /// @brief Field _LastShape, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__LastShape, put = __cordl_internal_set__LastShape)) ::GlobalNamespace::OVROverlay_OverlayShape _LastShape;

  /// @brief Field _LastSrcRectLeft, offset 0xbc, size 0x10
  __declspec(property(get = __cordl_internal_get__LastSrcRectLeft, put = __cordl_internal_set__LastSrcRectLeft)) ::UnityEngine::Rect _LastSrcRectLeft;

  /// @brief Field _LastTexture, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__LastTexture, put = __cordl_internal_set__LastTexture)) ::UnityW<::UnityEngine::Texture> _LastTexture;

  /// @brief Field _Mesh, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Mesh, put = __cordl_internal_set__Mesh)) ::UnityW<::UnityEngine::Mesh> _Mesh;

  /// @brief Field _MeshCollider, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__MeshCollider, put = __cordl_internal_set__MeshCollider)) ::UnityW<::UnityEngine::MeshCollider> _MeshCollider;

  /// @brief Field _MeshFilter, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__MeshFilter, put = __cordl_internal_set__MeshFilter)) ::UnityW<::UnityEngine::MeshFilter> _MeshFilter;

  /// @brief Field _MeshRenderer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__MeshRenderer, put = __cordl_internal_set__MeshRenderer)) ::UnityW<::UnityEngine::MeshRenderer> _MeshRenderer;

  /// @brief Field _Overlay, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Overlay, put = __cordl_internal_set__Overlay)) ::UnityW<::GlobalNamespace::OVROverlay> _Overlay;

  /// @brief Field _Transform, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__Transform, put = __cordl_internal_set__Transform)) ::UnityW<::UnityEngine::Transform> _Transform;

  /// @brief Field _Tris, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Tris, put = __cordl_internal_set__Tris)) ::System::Collections::Generic::List_1<int32_t>* _Tris;

  /// @brief Field _UV, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__UV, put = __cordl_internal_set__UV)) ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _UV;

  /// @brief Field _Verts, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Verts, put = __cordl_internal_set__Verts)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _Verts;

  /// @brief Method Awake, addr 0x3fcfd88, size 0x174, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method BuildCube, addr 0x3fd1268, size 0x53c, virtual false, abstract: false, final false
  static inline void BuildCube(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv,
                               ::System::Collections::Generic::List_1<int32_t>* triangles, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale,
                               float_t worldScale, int32_t subQuads, float_t expand_coef);

  /// @brief Method BuildHemicylinder, addr 0x3fd1ddc, size 0x5f8, virtual false, abstract: false, final false
  static inline void BuildHemicylinder(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv,
                                       ::System::Collections::Generic::List_1<int32_t>* triangles, ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect, int32_t longitudes);

  /// @brief Method BuildQuad, addr 0x3fd17a4, size 0x638, virtual false, abstract: false, final false
  static inline void BuildQuad(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv,
                               ::System::Collections::Generic::List_1<int32_t>* triangles, ::UnityEngine::Rect rect);

  /// @brief Method BuildSphere, addr 0x3fd0b78, size 0x6f0, virtual false, abstract: false, final false
  static inline void BuildSphere(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv,
                                 ::System::Collections::Generic::List_1<int32_t>* triangles, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale,
                                 ::UnityEngine::Rect rect, float_t worldScale, int32_t latitudes, int32_t longitudes, float_t expand_coef);

  /// @brief Method GenerateMesh, addr 0x3fd0824, size 0x354, virtual false, abstract: false, final false
  static inline void GenerateMesh(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs,
                                  ::System::Collections::Generic::List_1<int32_t>* tris, ::GlobalNamespace::OVROverlay_OverlayShape shape, ::UnityEngine::Vector3 position,
                                  ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect);

  /// @brief Method GetBoundingRect, addr 0x3fcff04, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetBoundingRect(::UnityEngine::Rect a, ::UnityEngine::Rect b);

  /// @brief Method GetCubeUV, addr 0x3fd2468, size 0x168, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetCubeUV(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace face, ::UnityEngine::Vector2 sideUV, float_t expand_coef);

  /// @brief Method GetCubeVert, addr 0x3fd25d0, size 0x10c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetCubeVert(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace face, ::UnityEngine::Vector2 sideUV, float_t expand_coef);

  /// @brief Method GetSphereUV, addr 0x3fd23d4, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetSphereUV(float_t theta, float_t phi, float_t expand_coef);

  /// @brief Method GetSphereVert, addr 0x3fd240c, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetSphereVert(float_t theta, float_t phi);

  static inline ::GlobalNamespace::OVROverlayMeshGenerator* New_ctor();

  /// @brief Method OnDisable, addr 0x3fcff44, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3fcff40, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetOverlay, addr 0x3fcfefc, size 0x8, virtual false, abstract: false, final false
  inline void SetOverlay(::GlobalNamespace::OVROverlay* overlay);

  /// @brief Method Update, addr 0x3fcff48, size 0x5fc, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateMesh, addr 0x3fd0544, size 0x2e0, virtual false, abstract: false, final false
  inline void UpdateMesh(::GlobalNamespace::OVROverlay_OverlayShape shape, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect);

  constexpr bool const& __cordl_internal_get__Awake() const;

  constexpr bool& __cordl_internal_get__Awake();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__CameraRoot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__CameraRoot();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get__LastDestRectLeft() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get__LastDestRectLeft();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get__LastDestRectRight() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get__LastDestRectRight();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__LastPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__LastPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__LastRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__LastRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__LastScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__LastScale();

  constexpr ::GlobalNamespace::OVROverlay_OverlayShape const& __cordl_internal_get__LastShape() const;

  constexpr ::GlobalNamespace::OVROverlay_OverlayShape& __cordl_internal_get__LastShape();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get__LastSrcRectLeft() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get__LastSrcRectLeft();

  constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get__LastTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get__LastTexture();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__Mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__Mesh();

  constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get__MeshCollider() const;

  constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get__MeshCollider();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__MeshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__MeshFilter();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__MeshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__MeshRenderer();

  constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& __cordl_internal_get__Overlay() const;

  constexpr ::UnityW<::GlobalNamespace::OVROverlay>& __cordl_internal_get__Overlay();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Transform();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__Tris() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__Tris();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& __cordl_internal_get__UV() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& __cordl_internal_get__UV();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get__Verts() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get__Verts();

  constexpr void __cordl_internal_set__Awake(bool value);

  constexpr void __cordl_internal_set__CameraRoot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__LastDestRectLeft(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set__LastDestRectRight(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set__LastPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__LastRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__LastScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__LastShape(::GlobalNamespace::OVROverlay_OverlayShape value);

  constexpr void __cordl_internal_set__LastSrcRectLeft(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set__LastTexture(::UnityW<::UnityEngine::Texture> value);

  constexpr void __cordl_internal_set__Mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__MeshCollider(::UnityW<::UnityEngine::MeshCollider> value);

  constexpr void __cordl_internal_set__MeshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__MeshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set__Overlay(::UnityW<::GlobalNamespace::OVROverlay> value);

  constexpr void __cordl_internal_set__Transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__Tris(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set__UV(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* value);

  constexpr void __cordl_internal_set__Verts(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  /// @brief Method .ctor, addr 0x3fd26dc, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_BottomLeft();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_RightVector();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_UpVector();

  static inline void setStaticF_BottomLeft(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline void setStaticF_RightVector(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline void setStaticF_UpVector(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVROverlayMeshGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVROverlayMeshGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVROverlayMeshGenerator(OVROverlayMeshGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVROverlayMeshGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVROverlayMeshGenerator(OVROverlayMeshGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7976 };

  /// @brief Field _Mesh, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____Mesh;

  /// @brief Field _Verts, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ____Verts;

  /// @brief Field _UV, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* ____UV;

  /// @brief Field _Tris, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ____Tris;

  /// @brief Field _Overlay, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVROverlay> ____Overlay;

  /// @brief Field _MeshFilter, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____MeshFilter;

  /// @brief Field _MeshCollider, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshCollider> ____MeshCollider;

  /// @brief Field _MeshRenderer, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____MeshRenderer;

  /// @brief Field _CameraRoot, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____CameraRoot;

  /// @brief Field _Transform, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____Transform;

  /// @brief Field _LastShape, offset: 0x70, size: 0x4, def value: None
  ::GlobalNamespace::OVROverlay_OverlayShape ____LastShape;

  /// @brief Field _LastPosition, offset: 0x74, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____LastPosition;

  /// @brief Field _LastRotation, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____LastRotation;

  /// @brief Field _LastScale, offset: 0x90, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____LastScale;

  /// @brief Field _LastDestRectLeft, offset: 0x9c, size: 0x10, def value: None
  ::UnityEngine::Rect ____LastDestRectLeft;

  /// @brief Field _LastDestRectRight, offset: 0xac, size: 0x10, def value: None
  ::UnityEngine::Rect ____LastDestRectRight;

  /// @brief Field _LastSrcRectLeft, offset: 0xbc, size: 0x10, def value: None
  ::UnityEngine::Rect ____LastSrcRectLeft;

  /// @brief Field _LastTexture, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> ____LastTexture;

  /// @brief Field _Awake, offset: 0xd8, size: 0x1, def value: None
  bool ____Awake;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Mesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Verts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____UV) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Tris) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Overlay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____MeshFilter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____MeshCollider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____MeshRenderer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____CameraRoot) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Transform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastShape) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastPosition) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastRotation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastScale) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastDestRectLeft) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastDestRectRight) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastSrcRectLeft) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastTexture) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Awake) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVROverlayMeshGenerator, 0xe0>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace, "", "OVROverlayMeshGenerator/CubeFace");
NEED_NO_BOX(::GlobalNamespace::OVROverlayMeshGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVROverlayMeshGenerator*, "", "OVROverlayMeshGenerator");
