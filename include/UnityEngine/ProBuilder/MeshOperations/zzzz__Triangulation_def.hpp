#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Triangulation)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __Triangulation____c__DisplayClass7_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __Triangulation____c__DisplayClass8_0;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class PolygonPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class Triangulation;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __Triangulation____c__DisplayClass7_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __Triangulation____c__DisplayClass8_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::Triangulation);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0);
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::Triangulation::<>c__DisplayClass7_0*
class CORDL_TYPE __Triangulation____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  static inline ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0* New_ctor();

  /// @brief Method <Triangulate>b__0, addr 0x2d095e0, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* _Triangulate_b__0(::UnityEngine::Vector2 x);

  /// @brief Method <Triangulate>b__1, addr 0x2d09668, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _Triangulate_b__1(::UnityEngine::Vector2 x);

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr void __cordl_internal_set_index(int32_t value);

  /// @brief Method .ctor, addr 0x2d095d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Triangulation____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Triangulation____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Triangulation____c__DisplayClass7_0(__Triangulation____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Triangulation____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Triangulation____c__DisplayClass7_0(__Triangulation____c__DisplayClass7_0 const&) = delete;

  /// @brief Field index, offset: 0x10, size: 0x4, def value: None
  int32_t ___index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0, ___index) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::Triangulation::<>c__DisplayClass8_0*
class CORDL_TYPE __Triangulation____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1))::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* __9__1;

  /// @brief Field index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  static inline ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0* New_ctor();

  /// @brief Method <Triangulate>b__0, addr 0x2d096f0, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _Triangulate_b__0(::UnityEngine::Vector2 x);

  /// @brief Method <Triangulate>b__1, addr 0x2d09778, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _Triangulate_b__1(::UnityEngine::Vector2 x);

  constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*& __cordl_internal_get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*> const& __cordl_internal_get___9__1() const;

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr void __cordl_internal_set___9__1(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* value);

  constexpr void __cordl_internal_set_index(int32_t value);

  /// @brief Method .ctor, addr 0x2d095d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Triangulation____c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Triangulation____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Triangulation____c__DisplayClass8_0(__Triangulation____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Triangulation____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Triangulation____c__DisplayClass8_0(__Triangulation____c__DisplayClass8_0 const&) = delete;

  /// @brief Field index, offset: 0x10, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field <>9__1, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* _____9__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0, ___index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0, _____9__1) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::Triangulation
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::Triangulation*
class CORDL_TYPE Triangulation : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0;

  using __c__DisplayClass8_0 = ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0;

  /// @brief Field s_TriangulationContext, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TriangulationContext, put = setStaticF_s_TriangulationContext))::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* s_TriangulationContext;

  /// @brief Method SortAndTriangulate, addr 0x2d07530, size 0x314, virtual false, abstract: false, final false
  static inline bool SortAndTriangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ByRef<::System::Collections::Generic::List_1<int32_t>*> indexes, bool convex);

  /// @brief Method Triangulate, addr 0x2d089b4, size 0xc1c, virtual false, abstract: false, final false
  static inline bool Triangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points,
                                 ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>* holes,
                                 ByRef<::System::Collections::Generic::List_1<int32_t>*> indexes);

  /// @brief Method Triangulate, addr 0x2d07844, size 0xb94, virtual false, abstract: false, final false
  static inline bool Triangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ByRef<::System::Collections::Generic::List_1<int32_t>*> indexes, bool convex);

  /// @brief Method TriangulateVertices, addr 0x2d08808, size 0x1ac, virtual false, abstract: false, final false
  static inline bool
  TriangulateVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices, ByRef<::System::Collections::Generic::List_1<int32_t>*> triangles,
                      ::ArrayW<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::Array<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>*> holes);

  /// @brief Method TriangulateVertices, addr 0x2d085e4, size 0x224, virtual false, abstract: false, final false
  static inline bool TriangulateVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices, ByRef<::System::Collections::Generic::List_1<int32_t>*> triangles, bool unordered,
                                         bool convex);

  /// @brief Method TriangulateVertices, addr 0x2d083d8, size 0x20c, virtual false, abstract: false, final false
  static inline bool TriangulateVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ByRef<::System::Collections::Generic::List_1<int32_t>*> triangles,
                                         bool unordered, bool convex);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* getStaticF_s_TriangulationContext();

  /// @brief Method get_triangulationContext, addr 0x2d0749c, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* get_triangulationContext();

  static inline void setStaticF_s_TriangulationContext(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Triangulation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Triangulation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Triangulation(Triangulation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Triangulation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Triangulation(Triangulation const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::Triangulation, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::Triangulation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::Triangulation*, "UnityEngine.ProBuilder.MeshOperations", "Triangulation");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0*, "UnityEngine.ProBuilder.MeshOperations", "Triangulation/<>c__DisplayClass7_0");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0*, "UnityEngine.ProBuilder.MeshOperations", "Triangulation/<>c__DisplayClass8_0");
