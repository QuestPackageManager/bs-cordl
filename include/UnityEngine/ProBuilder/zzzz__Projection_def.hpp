#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Projection)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine::ProBuilder {
struct SortMethod;
}
namespace UnityEngine::ProBuilder {
class __Projection____c;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::ProBuilder {
struct ProjectionAxis;
}
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::ProBuilder {
template <typename T1, typename T2> struct SimpleTuple_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Projection;
}
namespace UnityEngine::ProBuilder {
class __Projection____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Projection);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__Projection____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12107))
// CS Name: ::Projection::<>c*
class CORDL_TYPE __Projection____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::__Projection____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>* __9__6_0;

  /// @brief Field <>9__6_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_1,
                             put = setStaticF___9__6_1))::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>* __9__6_1;

  static inline void setStaticF___9(::UnityEngine::ProBuilder::__Projection____c* value);

  static inline ::UnityEngine::ProBuilder::__Projection____c* getStaticF___9();

  static inline void setStaticF___9__6_0(::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>* value);

  static inline ::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>* getStaticF___9__6_0();

  static inline void setStaticF___9__6_1(::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>* getStaticF___9__6_1();

  static inline ::UnityEngine::ProBuilder::__Projection____c* New_ctor();

  /// @brief Method .ctor addr 0x29e1bec size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Sort>b__6_0 addr 0x29e1bf4 size 0x48 virtual false final false
  inline int32_t _Sort_b__6_0(::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2> a, ::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2> b);

  /// @brief Method <Sort>b__6_1 addr 0x29e1c3c size 0x44 virtual false final false
  inline ::UnityEngine::Vector2 _Sort_b__6_1(::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2> x);

  // Ctor Parameters [CppParam { name: "", ty: "__Projection____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Projection____c(__Projection____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Projection____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Projection____c(__Projection____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Projection____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__Projection____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::Projection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12108))
// CS Name: ::UnityEngine.ProBuilder::Projection*
class CORDL_TYPE Projection : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::__Projection____c;

  /// @brief Method PlanarProject addr 0x29df04c size 0x48 virtual false final false
  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions,
                                                                                                 ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method PlanarProject addr 0x29df9ac size 0x1b8 virtual false final false
  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions,
                                                                                                 ::System::Collections::Generic::IList_1<int32_t>* indexes, ::UnityEngine::Vector3 direction);

  /// @brief Method PlanarProject addr 0x29dfb64 size 0x784 virtual false final false
  static inline void PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::IList_1<int32_t>* indexes,
                                   ::UnityEngine::Vector3 direction, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* results);

  /// @brief Method PlanarProject addr 0x29e04c4 size 0x43c virtual false final false
  static inline void PlanarProject(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t textureGroup, ::UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings);

  /// @brief Method PlanarProject addr 0x29e0900 size 0x3d8 virtual false final false
  static inline void PlanarProject(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Vector3 projection);

  /// @brief Method SphericalProject addr 0x29e0cd8 size 0x3cc virtual false final false
  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> SphericalProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* vertices,
                                                                                                    ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method Sort addr 0x29e10a4 size 0x4e0 virtual false final false
  static inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* Sort(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* verts,
                                                                                      ::UnityEngine::ProBuilder::SortMethod method);

  /// @brief Method GetTangentToAxis addr 0x29e0408 size 0xbc virtual false final false
  static inline ::UnityEngine::Vector3 GetTangentToAxis(::UnityEngine::ProBuilder::ProjectionAxis axis);

  /// @brief Method ProjectionAxisToVector addr 0x29e1584 size 0x1a0 virtual false final false
  static inline ::UnityEngine::Vector3 ProjectionAxisToVector(::UnityEngine::ProBuilder::ProjectionAxis axis);

  /// @brief Method VectorToProjectionAxis addr 0x29e02e8 size 0x120 virtual false final false
  static inline ::UnityEngine::ProBuilder::ProjectionAxis VectorToProjectionAxis(::UnityEngine::Vector3 direction);

  /// @brief Method FindBestPlane addr 0x29df094 size 0x918 virtual false final false
  static inline ::UnityEngine::Plane FindBestPlane(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method FindBestPlane addr 0x29e1724 size 0x464 virtual false final false
  static inline ::UnityEngine::Plane FindBestPlane(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t textureGroup);

  // Ctor Parameters [CppParam { name: "", ty: "Projection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Projection(Projection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Projection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Projection(Projection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Projection();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Projection, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Projection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Projection*, "UnityEngine.ProBuilder", "Projection");
NEED_NO_BOX(::UnityEngine::ProBuilder::__Projection____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__Projection____c*, "UnityEngine.ProBuilder", "Projection/<>c");
