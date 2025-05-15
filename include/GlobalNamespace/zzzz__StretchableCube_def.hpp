#pragma once
// IWYU pragma private; include "GlobalNamespace/StretchableCube.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StretchableCube)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class StretchableCube;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StretchableCube);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: StretchableCube
class CORDL_TYPE StretchableCube : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mesh, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mesh, put = __cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh> _mesh;

  /// @brief Field _uvs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__uvs, put = __cordl_internal_set__uvs)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> _uvs;

  /// @brief Field back, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_back, put = setStaticF_back)) ::UnityEngine::Vector3 back;

  /// @brief Field down, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_down, put = setStaticF_down)) ::UnityEngine::Vector3 down;

  /// @brief Field front, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_front, put = setStaticF_front)) ::UnityEngine::Vector3 front;

  /// @brief Field left, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_left, put = setStaticF_left)) ::UnityEngine::Vector3 left;

  /// @brief Field normals, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_normals, put = setStaticF_normals)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals;

  /// @brief Field p0, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_p0, put = setStaticF_p0)) ::UnityEngine::Vector3 p0;

  /// @brief Field p1, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_p1, put = setStaticF_p1)) ::UnityEngine::Vector3 p1;

  /// @brief Field p2, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_p2, put = setStaticF_p2)) ::UnityEngine::Vector3 p2;

  /// @brief Field p3, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_p3, put = setStaticF_p3)) ::UnityEngine::Vector3 p3;

  /// @brief Field p4, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_p4, put = setStaticF_p4)) ::UnityEngine::Vector3 p4;

  /// @brief Field p5, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_p5, put = setStaticF_p5)) ::UnityEngine::Vector3 p5;

  /// @brief Field p6, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_p6, put = setStaticF_p6)) ::UnityEngine::Vector3 p6;

  /// @brief Field p7, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_p7, put = setStaticF_p7)) ::UnityEngine::Vector3 p7;

  /// @brief Field right, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_right, put = setStaticF_right)) ::UnityEngine::Vector3 right;

  /// @brief Field triangles, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_triangles, put = setStaticF_triangles)) ::ArrayW<int32_t, ::Array<int32_t>*> triangles;

  /// @brief Field up, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_up, put = setStaticF_up)) ::UnityEngine::Vector3 up;

  /// @brief Field vertices, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_vertices, put = setStaticF_vertices)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices;

  /// @brief Method Awake, addr 0x3af2c8c, size 0x70, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CreateBox, addr 0x3af2cfc, size 0x144, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> CreateBox();

  static inline ::GlobalNamespace::StretchableCube* New_ctor();

  /// @brief Method OnDestroy, addr 0x3af2e40, size 0xc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RecalculateUVs, addr 0x3af2e4c, size 0x1ec, virtual false, abstract: false, final false
  inline void RecalculateUVs(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs);

  /// @brief Method RefreshUVs, addr 0x3af3038, size 0x94, virtual false, abstract: false, final false
  inline void RefreshUVs();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh();

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> const& __cordl_internal_get__uvs() const;

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>& __cordl_internal_get__uvs();

  constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__uvs(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method .ctor, addr 0x3af30cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Vector3 getStaticF_back();

  static inline ::UnityEngine::Vector3 getStaticF_down();

  static inline ::UnityEngine::Vector3 getStaticF_front();

  static inline ::UnityEngine::Vector3 getStaticF_left();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_normals();

  static inline ::UnityEngine::Vector3 getStaticF_p0();

  static inline ::UnityEngine::Vector3 getStaticF_p1();

  static inline ::UnityEngine::Vector3 getStaticF_p2();

  static inline ::UnityEngine::Vector3 getStaticF_p3();

  static inline ::UnityEngine::Vector3 getStaticF_p4();

  static inline ::UnityEngine::Vector3 getStaticF_p5();

  static inline ::UnityEngine::Vector3 getStaticF_p6();

  static inline ::UnityEngine::Vector3 getStaticF_p7();

  static inline ::UnityEngine::Vector3 getStaticF_right();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_triangles();

  static inline ::UnityEngine::Vector3 getStaticF_up();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_vertices();

  static inline void setStaticF_back(::UnityEngine::Vector3 value);

  static inline void setStaticF_down(::UnityEngine::Vector3 value);

  static inline void setStaticF_front(::UnityEngine::Vector3 value);

  static inline void setStaticF_left(::UnityEngine::Vector3 value);

  static inline void setStaticF_normals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline void setStaticF_p0(::UnityEngine::Vector3 value);

  static inline void setStaticF_p1(::UnityEngine::Vector3 value);

  static inline void setStaticF_p2(::UnityEngine::Vector3 value);

  static inline void setStaticF_p3(::UnityEngine::Vector3 value);

  static inline void setStaticF_p4(::UnityEngine::Vector3 value);

  static inline void setStaticF_p5(::UnityEngine::Vector3 value);

  static inline void setStaticF_p6(::UnityEngine::Vector3 value);

  static inline void setStaticF_p7(::UnityEngine::Vector3 value);

  static inline void setStaticF_right(::UnityEngine::Vector3 value);

  static inline void setStaticF_triangles(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_up(::UnityEngine::Vector3 value);

  static inline void setStaticF_vertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StretchableCube();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StretchableCube", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StretchableCube(StretchableCube&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StretchableCube", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StretchableCube(StretchableCube const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4152 };

  /// @brief Field kHeight offset 0xffffffff size 0x4
  static constexpr float_t kHeight{ static_cast<float_t>(1.0f) };

  /// @brief Field kLength offset 0xffffffff size 0x4
  static constexpr float_t kLength{ static_cast<float_t>(1.0f) };

  /// @brief Field kWidth offset 0xffffffff size 0x4
  static constexpr float_t kWidth{ static_cast<float_t>(1.0f) };

  /// @brief Field _uvs, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> ____uvs;

  /// @brief Field _mesh, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____mesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StretchableCube, ____uvs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableCube, ____mesh) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StretchableCube, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StretchableCube);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StretchableCube*, "", "StretchableCube");
