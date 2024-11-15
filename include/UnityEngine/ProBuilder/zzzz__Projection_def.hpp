#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Projection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
template <typename T1, typename T2> struct SimpleTuple_2;
}
namespace UnityEngine::ProBuilder {
struct SortMethod;
}
namespace UnityEngine::ProBuilder {
class __Projection____c;
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
class __Projection____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Projection);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__Projection____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::Projection::<>c*
class CORDL_TYPE __Projection____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::__Projection____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>* __9__6_0;

  /// @brief Field <>9__6_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_1,
                             put = setStaticF___9__6_1)) ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>* __9__6_1;

  static inline ::UnityEngine::ProBuilder::__Projection____c* New_ctor();

  /// @brief Method <Sort>b__6_0, addr 0x46c836c, size 0x48, virtual false, abstract: false, final false
  inline int32_t _Sort_b__6_0(::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2> a, ::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2> b);

  /// @brief Method <Sort>b__6_1, addr 0x46c83b4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 _Sort_b__6_1(::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2> x);

  /// @brief Method .ctor, addr 0x46c8364, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::__Projection____c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>* getStaticF___9__6_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>* getStaticF___9__6_1();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::__Projection____c* value);

  static inline void setStaticF___9__6_0(::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>* value);

  static inline void setStaticF___9__6_1(::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Projection____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Projection____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Projection____c(__Projection____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Projection____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Projection____c(__Projection____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14258 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__Projection____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::Projection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::Projection*
class CORDL_TYPE Projection : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::__Projection____c;

  /// @brief Method FindBestPlane, addr 0x46c7e44, size 0x4c4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Plane FindBestPlane(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t textureGroup);

  /// @brief Method FindBestPlane, addr 0x46c5764, size 0x97c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Plane FindBestPlane(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method GetTangentToAxis, addr 0x46c6b48, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetTangentToAxis(::UnityEngine::ProBuilder::ProjectionAxis axis);

  /// @brief Method PlanarProject, addr 0x46c573c, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions,
                                                                                                 ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method PlanarProject, addr 0x46c60e0, size 0x1b8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions,
                                                                                                 ::System::Collections::Generic::IList_1<int32_t>* indexes, ::UnityEngine::Vector3 direction);

  /// @brief Method PlanarProject, addr 0x46c7040, size 0x3d0, virtual false, abstract: false, final false
  static inline void PlanarProject(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Vector3 projection);

  /// @brief Method PlanarProject, addr 0x46c6c04, size 0x43c, virtual false, abstract: false, final false
  static inline void PlanarProject(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t textureGroup, ::UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings);

  /// @brief Method PlanarProject, addr 0x46c6298, size 0x790, virtual false, abstract: false, final false
  static inline void PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::IList_1<int32_t>* indexes,
                                   ::UnityEngine::Vector3 direction, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* results);

  /// @brief Method ProjectionAxisToVector, addr 0x46c7ca4, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ProjectionAxisToVector(::UnityEngine::ProBuilder::ProjectionAxis axis);

  /// @brief Method Sort, addr 0x46c77cc, size 0x4d8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* Sort(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* verts,
                                                                                      ::UnityEngine::ProBuilder::SortMethod method);

  /// @brief Method SphericalProject, addr 0x46c7410, size 0x3bc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> SphericalProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* vertices,
                                                                                                    ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method VectorToProjectionAxis, addr 0x46c6a28, size 0x120, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14259 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Projection, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Projection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Projection*, "UnityEngine.ProBuilder", "Projection");
NEED_NO_BOX(::UnityEngine::ProBuilder::__Projection____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__Projection____c*, "UnityEngine.ProBuilder", "Projection/<>c");
