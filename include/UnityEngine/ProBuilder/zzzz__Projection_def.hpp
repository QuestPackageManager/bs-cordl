#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Projection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Projection)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
struct ProjectionAxis;
}
namespace UnityEngine::ProBuilder {
class Projection___c;
}
namespace UnityEngine::ProBuilder {
template <typename T1, typename T2> struct SimpleTuple_2;
}
namespace UnityEngine::ProBuilder {
struct SortMethod;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Projection;
}
namespace UnityEngine::ProBuilder {
class Projection___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Projection);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Projection___c);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Projection/<>c
class CORDL_TYPE Projection___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::Projection___c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>* __9__6_0;

  /// @brief Field <>9__6_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_1,
                      put = setStaticF___9__6_1)) ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>* __9__6_1;

  static inline ::UnityEngine::ProBuilder::Projection___c* New_ctor();

  /// @brief Method <Sort>b__6_0, addr 0x472ace0, size 0x48, virtual false, abstract: false, final false
  inline int32_t _Sort_b__6_0(::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2> a, ::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2> b);

  /// @brief Method <Sort>b__6_1, addr 0x472ad28, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 _Sort_b__6_1(::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2> x);

  /// @brief Method .ctor, addr 0x472acd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::Projection___c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>* getStaticF___9__6_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>* getStaticF___9__6_1();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::Projection___c* value);

  static inline void setStaticF___9__6_0(::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>* value);

  static inline void setStaticF___9__6_1(::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Projection___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Projection___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Projection___c(Projection___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Projection___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Projection___c(Projection___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14297 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Projection___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Projection
class CORDL_TYPE Projection : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::Projection___c;

  /// @brief Method FindBestPlane, addr 0x472a7b8, size 0x4c4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Plane FindBestPlane(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t textureGroup);

  /// @brief Method FindBestPlane, addr 0x47280d8, size 0x97c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Plane FindBestPlane(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method GetTangentToAxis, addr 0x47294bc, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetTangentToAxis(::UnityEngine::ProBuilder::ProjectionAxis axis);

  /// @brief Method PlanarProject, addr 0x47280b0, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions,
                                                                                                 ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method PlanarProject, addr 0x4728a54, size 0x1b8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions,
                                                                                                 ::System::Collections::Generic::IList_1<int32_t>* indexes, ::UnityEngine::Vector3 direction);

  /// @brief Method PlanarProject, addr 0x47299b4, size 0x3d0, virtual false, abstract: false, final false
  static inline void PlanarProject(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Vector3 projection);

  /// @brief Method PlanarProject, addr 0x4729578, size 0x43c, virtual false, abstract: false, final false
  static inline void PlanarProject(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t textureGroup, ::UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings);

  /// @brief Method PlanarProject, addr 0x4728c0c, size 0x790, virtual false, abstract: false, final false
  static inline void PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::IList_1<int32_t>* indexes,
                                   ::UnityEngine::Vector3 direction, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* results);

  /// @brief Method ProjectionAxisToVector, addr 0x472a618, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ProjectionAxisToVector(::UnityEngine::ProBuilder::ProjectionAxis axis);

  /// @brief Method Sort, addr 0x472a140, size 0x4d8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* Sort(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* verts,
                                                                                      ::UnityEngine::ProBuilder::SortMethod method);

  /// @brief Method SphericalProject, addr 0x4729d84, size 0x3bc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> SphericalProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* vertices,
                                                                                                    ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method VectorToProjectionAxis, addr 0x472939c, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::ProjectionAxis VectorToProjectionAxis(::UnityEngine::Vector3 direction);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Projection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Projection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Projection(Projection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Projection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Projection(Projection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14298 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Projection, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Projection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Projection*, "UnityEngine.ProBuilder", "Projection");
NEED_NO_BOX(::UnityEngine::ProBuilder::Projection___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Projection___c*, "UnityEngine.ProBuilder", "Projection/<>c");
