#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVROverlayMeshGenerator)
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Mesh;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class MeshCollider;
}
namespace GlobalNamespace {
struct __OVROverlay__OverlayShape;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace GlobalNamespace {
struct __OVROverlayMeshGenerator__CubeFace;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVROverlayMeshGenerator__CubeFace;
}
namespace GlobalNamespace {
class OVROverlayMeshGenerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace);
MARK_REF_PTR_T(::GlobalNamespace::OVROverlayMeshGenerator);
// Type: ::CubeFace
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8548))
// CS Name: ::OVROverlayMeshGenerator::CubeFace
struct CORDL_TYPE __OVROverlayMeshGenerator__CubeFace {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVROverlayMeshGenerator__CubeFace_Unwrapped
  enum struct ____OVROverlayMeshGenerator__CubeFace_Unwrapped : int32_t {
    __E_Right = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
    __E_Top = static_cast<int32_t>(0x2),
    __E_Bottom = static_cast<int32_t>(0x3),
    __E_Front = static_cast<int32_t>(0x4),
    __E_Back = static_cast<int32_t>(0x5),
    __E_COUNT = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVROverlayMeshGenerator__CubeFace_Unwrapped() const noexcept {
    return static_cast<____OVROverlayMeshGenerator__CubeFace_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVROverlayMeshGenerator__CubeFace(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVROverlayMeshGenerator__CubeFace();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Right value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace const Right;

  /// @brief Field Left value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace const Left;

  /// @brief Field Top value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace const Top;

  /// @brief Field Bottom value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace const Bottom;

  /// @brief Field Front value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace const Front;

  /// @brief Field Back value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace const Back;

  /// @brief Field COUNT value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace const COUNT;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVROverlayMeshGenerator
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 209, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10179)), TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(8543)),
// TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(10093))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8549)) CS Name: ::OVROverlayMeshGenerator*
class CORDL_TYPE OVROverlayMeshGenerator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CubeFace = ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace;

  /// @brief Field _Mesh, offset 0x18, size 0x8
  __declspec(property(get = __get__Mesh, put = __set__Mesh))::UnityEngine::Mesh* _Mesh;

  /// @brief Field _Verts, offset 0x20, size 0x8
  __declspec(property(get = __get__Verts, put = __set__Verts))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _Verts;

  /// @brief Field _UV, offset 0x28, size 0x8
  __declspec(property(get = __get__UV, put = __set__UV))::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _UV;

  /// @brief Field _Tris, offset 0x30, size 0x8
  __declspec(property(get = __get__Tris, put = __set__Tris))::System::Collections::Generic::List_1<int32_t>* _Tris;

  /// @brief Field _Overlay, offset 0x38, size 0x8
  __declspec(property(get = __get__Overlay, put = __set__Overlay))::GlobalNamespace::OVROverlay* _Overlay;

  /// @brief Field _MeshFilter, offset 0x40, size 0x8
  __declspec(property(get = __get__MeshFilter, put = __set__MeshFilter))::UnityEngine::MeshFilter* _MeshFilter;

  /// @brief Field _MeshCollider, offset 0x48, size 0x8
  __declspec(property(get = __get__MeshCollider, put = __set__MeshCollider))::UnityEngine::MeshCollider* _MeshCollider;

  /// @brief Field _MeshRenderer, offset 0x50, size 0x8
  __declspec(property(get = __get__MeshRenderer, put = __set__MeshRenderer))::UnityEngine::MeshRenderer* _MeshRenderer;

  /// @brief Field _CameraRoot, offset 0x58, size 0x8
  __declspec(property(get = __get__CameraRoot, put = __set__CameraRoot))::UnityEngine::Transform* _CameraRoot;

  /// @brief Field _Transform, offset 0x60, size 0x8
  __declspec(property(get = __get__Transform, put = __set__Transform))::UnityEngine::Transform* _Transform;

  /// @brief Field _LastShape, offset 0x68, size 0x4
  __declspec(property(get = __get__LastShape, put = __set__LastShape))::GlobalNamespace::__OVROverlay__OverlayShape _LastShape;

  /// @brief Field _LastPosition, offset 0x6c, size 0xc
  __declspec(property(get = __get__LastPosition, put = __set__LastPosition))::UnityEngine::Vector3 _LastPosition;

  /// @brief Field _LastRotation, offset 0x78, size 0x10
  __declspec(property(get = __get__LastRotation, put = __set__LastRotation))::UnityEngine::Quaternion _LastRotation;

  /// @brief Field _LastScale, offset 0x88, size 0xc
  __declspec(property(get = __get__LastScale, put = __set__LastScale))::UnityEngine::Vector3 _LastScale;

  /// @brief Field _LastDestRectLeft, offset 0x94, size 0x10
  __declspec(property(get = __get__LastDestRectLeft, put = __set__LastDestRectLeft))::UnityEngine::Rect _LastDestRectLeft;

  /// @brief Field _LastDestRectRight, offset 0xa4, size 0x10
  __declspec(property(get = __get__LastDestRectRight, put = __set__LastDestRectRight))::UnityEngine::Rect _LastDestRectRight;

  /// @brief Field _LastSrcRectLeft, offset 0xb4, size 0x10
  __declspec(property(get = __get__LastSrcRectLeft, put = __set__LastSrcRectLeft))::UnityEngine::Rect _LastSrcRectLeft;

  /// @brief Field _LastTexture, offset 0xc8, size 0x8
  __declspec(property(get = __get__LastTexture, put = __set__LastTexture))::UnityEngine::Texture* _LastTexture;

  /// @brief Field _Awake, offset 0xd0, size 0x1
  __declspec(property(get = __get__Awake, put = __set__Awake)) bool _Awake;

  /// @brief Field BottomLeft, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BottomLeft, put = setStaticF_BottomLeft))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> BottomLeft;

  /// @brief Field RightVector, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RightVector, put = setStaticF_RightVector))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> RightVector;

  /// @brief Field UpVector, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpVector, put = setStaticF_UpVector))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UpVector;

  constexpr ::UnityEngine::Mesh*& __get__Mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get__Mesh() const;

  constexpr void __set__Mesh(::UnityEngine::Mesh* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __get__Verts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __get__Verts() const;

  constexpr void __set__Verts(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& __get__UV();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*> const& __get__UV() const;

  constexpr void __set__UV(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* value);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __get__Tris();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __get__Tris() const;

  constexpr void __set__Tris(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr ::GlobalNamespace::OVROverlay*& __get__Overlay();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVROverlay*> const& __get__Overlay() const;

  constexpr void __set__Overlay(::GlobalNamespace::OVROverlay* value);

  constexpr ::UnityEngine::MeshFilter*& __get__MeshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get__MeshFilter() const;

  constexpr void __set__MeshFilter(::UnityEngine::MeshFilter* value);

  constexpr ::UnityEngine::MeshCollider*& __get__MeshCollider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshCollider*> const& __get__MeshCollider() const;

  constexpr void __set__MeshCollider(::UnityEngine::MeshCollider* value);

  constexpr ::UnityEngine::MeshRenderer*& __get__MeshRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& __get__MeshRenderer() const;

  constexpr void __set__MeshRenderer(::UnityEngine::MeshRenderer* value);

  constexpr ::UnityEngine::Transform*& __get__CameraRoot();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__CameraRoot() const;

  constexpr void __set__CameraRoot(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__Transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__Transform() const;

  constexpr void __set__Transform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::__OVROverlay__OverlayShape& __get__LastShape();

  constexpr ::GlobalNamespace::__OVROverlay__OverlayShape const& __get__LastShape() const;

  constexpr void __set__LastShape(::GlobalNamespace::__OVROverlay__OverlayShape value);

  constexpr ::UnityEngine::Vector3& __get__LastPosition();

  constexpr ::UnityEngine::Vector3 const& __get__LastPosition() const;

  constexpr void __set__LastPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get__LastRotation();

  constexpr ::UnityEngine::Quaternion const& __get__LastRotation() const;

  constexpr void __set__LastRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Vector3& __get__LastScale();

  constexpr ::UnityEngine::Vector3 const& __get__LastScale() const;

  constexpr void __set__LastScale(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Rect& __get__LastDestRectLeft();

  constexpr ::UnityEngine::Rect const& __get__LastDestRectLeft() const;

  constexpr void __set__LastDestRectLeft(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Rect& __get__LastDestRectRight();

  constexpr ::UnityEngine::Rect const& __get__LastDestRectRight() const;

  constexpr void __set__LastDestRectRight(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Rect& __get__LastSrcRectLeft();

  constexpr ::UnityEngine::Rect const& __get__LastSrcRectLeft() const;

  constexpr void __set__LastSrcRectLeft(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Texture*& __get__LastTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> const& __get__LastTexture() const;

  constexpr void __set__LastTexture(::UnityEngine::Texture* value);

  constexpr bool& __get__Awake();

  constexpr bool const& __get__Awake() const;

  constexpr void __set__Awake(bool value);

  static inline void setStaticF_BottomLeft(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_BottomLeft();

  static inline void setStaticF_RightVector(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_RightVector();

  static inline void setStaticF_UpVector(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_UpVector();

  /// @brief Method Awake addr 0x25eaed0 size 0x174 virtual false final false
  inline void Awake();

  /// @brief Method SetOverlay addr 0x25eb044 size 0x8 virtual false final false
  inline void SetOverlay(::GlobalNamespace::OVROverlay* overlay);

  /// @brief Method GetBoundingRect addr 0x25eb04c size 0x144 virtual false final false
  inline ::UnityEngine::Rect GetBoundingRect(::UnityEngine::Rect a, ::UnityEngine::Rect b);

  /// @brief Method OnEnable addr 0x25eb190 size 0x4 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x25eb194 size 0x4 virtual false final false
  inline void OnDisable();

  /// @brief Method Update addr 0x25eb198 size 0x624 virtual false final false
  inline void Update();

  /// @brief Method UpdateMesh addr 0x25eb7bc size 0x2e0 virtual false final false
  inline void UpdateMesh(::GlobalNamespace::__OVROverlay__OverlayShape shape, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale,
                         ::UnityEngine::Rect rect);

  /// @brief Method GenerateMesh addr 0x25eba9c size 0x338 virtual false final false
  static inline void GenerateMesh(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs,
                                  ::System::Collections::Generic::List_1<int32_t>* tris, ::GlobalNamespace::__OVROverlay__OverlayShape shape, ::UnityEngine::Vector3 position,
                                  ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect);

  /// @brief Method GetSphereUV addr 0x25ed83c size 0x38 virtual false final false
  static inline ::UnityEngine::Vector2 GetSphereUV(float_t theta, float_t phi, float_t expand_coef);

  /// @brief Method GetSphereVert addr 0x25ed874 size 0x54 virtual false final false
  static inline ::UnityEngine::Vector3 GetSphereVert(float_t theta, float_t phi);

  /// @brief Method BuildSphere addr 0x25ebdd4 size 0x784 virtual false final false
  static inline void BuildSphere(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv,
                                 ::System::Collections::Generic::List_1<int32_t>* triangles, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale,
                                 ::UnityEngine::Rect rect, float_t worldScale, int32_t latitudes, int32_t longitudes, float_t expand_coef);

  /// @brief Method GetCubeUV addr 0x25ed8c8 size 0x140 virtual false final false
  static inline ::UnityEngine::Vector2 GetCubeUV(::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace face, ::UnityEngine::Vector2 sideUV, float_t expand_coef);

  /// @brief Method GetCubeVert addr 0x25eda08 size 0x10c virtual false final false
  static inline ::UnityEngine::Vector3 GetCubeVert(::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace face, ::UnityEngine::Vector2 sideUV, float_t expand_coef);

  /// @brief Method BuildCube addr 0x25ec558 size 0x564 virtual false final false
  static inline void BuildCube(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv,
                               ::System::Collections::Generic::List_1<int32_t>* triangles, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale,
                               float_t worldScale, int32_t subQuads, float_t expand_coef);

  /// @brief Method BuildQuad addr 0x25ecabc size 0x720 virtual false final false
  static inline void BuildQuad(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv,
                               ::System::Collections::Generic::List_1<int32_t>* triangles, ::UnityEngine::Rect rect);

  /// @brief Method BuildHemicylinder addr 0x25ed1dc size 0x660 virtual false final false
  static inline void BuildHemicylinder(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv,
                                       ::System::Collections::Generic::List_1<int32_t>* triangles, ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect, int32_t longitudes);

  static inline ::GlobalNamespace::OVROverlayMeshGenerator* New_ctor();

  /// @brief Method .ctor addr 0x25edb14 size 0x104 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVROverlayMeshGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVROverlayMeshGenerator(OVROverlayMeshGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVROverlayMeshGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVROverlayMeshGenerator(OVROverlayMeshGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVROverlayMeshGenerator();

public:
  /// @brief Field _Mesh, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Mesh* ____Mesh;

  /// @brief Field _Verts, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ____Verts;

  /// @brief Field _UV, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* ____UV;

  /// @brief Field _Tris, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ____Tris;

  /// @brief Field _Overlay, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OVROverlay* ____Overlay;

  /// @brief Field _MeshFilter, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ____MeshFilter;

  /// @brief Field _MeshCollider, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::MeshCollider* ____MeshCollider;

  /// @brief Field _MeshRenderer, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::MeshRenderer* ____MeshRenderer;

  /// @brief Field _CameraRoot, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Transform* ____CameraRoot;

  /// @brief Field _Transform, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Transform* ____Transform;

  /// @brief Field _LastShape, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::__OVROverlay__OverlayShape ____LastShape;

  /// @brief Field _LastPosition, offset: 0x6c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____LastPosition;

  /// @brief Field _LastRotation, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____LastRotation;

  /// @brief Field _LastScale, offset: 0x88, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____LastScale;

  /// @brief Field _LastDestRectLeft, offset: 0x94, size: 0x10, def value: None
  ::UnityEngine::Rect ____LastDestRectLeft;

  /// @brief Field _LastDestRectRight, offset: 0xa4, size: 0x10, def value: None
  ::UnityEngine::Rect ____LastDestRectRight;

  /// @brief Field _LastSrcRectLeft, offset: 0xb4, size: 0x10, def value: None
  ::UnityEngine::Rect ____LastSrcRectLeft;

  /// @brief Field _LastTexture, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Texture* ____LastTexture;

  /// @brief Field _Awake, offset: 0xd0, size: 0x1, def value: None
  bool ____Awake;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVROverlayMeshGenerator, 0xd8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Mesh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Verts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____UV) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Tris) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Overlay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____MeshFilter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____MeshCollider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____MeshRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____CameraRoot) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Transform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastShape) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastPosition) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastRotation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastScale) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastDestRectLeft) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastDestRectRight) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastSrcRectLeft) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____LastTexture) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayMeshGenerator, ____Awake) == 0xd0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace, "", "OVROverlayMeshGenerator/CubeFace");
NEED_NO_BOX(::GlobalNamespace::OVROverlayMeshGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVROverlayMeshGenerator*, "", "OVROverlayMeshGenerator");
