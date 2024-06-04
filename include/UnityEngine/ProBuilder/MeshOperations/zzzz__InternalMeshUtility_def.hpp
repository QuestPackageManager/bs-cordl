#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/InternalMeshUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalMeshUtility)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __InternalMeshUtility____c;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class SharedVertex;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Mesh;
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
namespace UnityEngine::ProBuilder::MeshOperations {
class InternalMeshUtility;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __InternalMeshUtility____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__InternalMeshUtility____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::InternalMeshUtility::<>c*
class CORDL_TYPE __InternalMeshUtility____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::MeshOperations::__InternalMeshUtility____c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0,
                             put = setStaticF___9__1_0))::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>* __9__1_0;

  /// @brief Field <>9__1_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_1,
                             put = setStaticF___9__1_1))::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>* __9__1_1;

  /// @brief Field <>9__1_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_2,
                             put = setStaticF___9__1_2))::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>* __9__1_2;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0,
                             put = setStaticF___9__2_0))::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>* __9__2_0;

  /// @brief Field <>9__2_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_1,
                             put = setStaticF___9__2_1))::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>* __9__2_1;

  /// @brief Field <>9__2_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_2,
                             put = setStaticF___9__2_2))::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>* __9__2_2;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<bool, bool>* __9__3_0;

  static inline ::UnityEngine::ProBuilder::MeshOperations::__InternalMeshUtility____c* New_ctor();

  /// @brief Method <CreateMeshWithTransform>b__1_0, addr 0x3318e40, size 0x18, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _CreateMeshWithTransform_b__1_0(::UnityEngine::Mesh* x);

  /// @brief Method <CreateMeshWithTransform>b__1_1, addr 0x3318e58, size 0x18, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> _CreateMeshWithTransform_b__1_1(::UnityEngine::Mesh* x);

  /// @brief Method <CreateMeshWithTransform>b__1_2, addr 0x3318e70, size 0x18, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> _CreateMeshWithTransform_b__1_2(::UnityEngine::Mesh* x);

  /// @brief Method <FilterUnusedSubmeshIndexes>b__3_0, addr 0x3318ed0, size 0xc, virtual false, abstract: false, final false
  inline bool _FilterUnusedSubmeshIndexes_b__3_0(bool x);

  /// @brief Method <ResetPbObjectWithMeshFilter>b__2_0, addr 0x3318e88, size 0x18, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _ResetPbObjectWithMeshFilter_b__2_0(::UnityEngine::Mesh* x);

  /// @brief Method <ResetPbObjectWithMeshFilter>b__2_1, addr 0x3318ea0, size 0x18, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> _ResetPbObjectWithMeshFilter_b__2_1(::UnityEngine::Mesh* x);

  /// @brief Method <ResetPbObjectWithMeshFilter>b__2_2, addr 0x3318eb8, size 0x18, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> _ResetPbObjectWithMeshFilter_b__2_2(::UnityEngine::Mesh* x);

  /// @brief Method .ctor, addr 0x3318e38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::MeshOperations::__InternalMeshUtility____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>* getStaticF___9__1_0();

  static inline ::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>* getStaticF___9__1_1();

  static inline ::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>* getStaticF___9__1_2();

  static inline ::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>* getStaticF___9__2_0();

  static inline ::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>* getStaticF___9__2_1();

  static inline ::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>* getStaticF___9__2_2();

  static inline ::System::Func_2<bool, bool>* getStaticF___9__3_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__InternalMeshUtility____c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>* value);

  static inline void setStaticF___9__1_1(::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>* value);

  static inline void setStaticF___9__1_2(::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>* value);

  static inline void setStaticF___9__2_0(::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>* value);

  static inline void setStaticF___9__2_1(::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>* value);

  static inline void setStaticF___9__2_2(::System::Func_2<::UnityW<::UnityEngine::Mesh>, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>* value);

  static inline void setStaticF___9__3_0(::System::Func_2<bool, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InternalMeshUtility____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InternalMeshUtility____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InternalMeshUtility____c(__InternalMeshUtility____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InternalMeshUtility____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InternalMeshUtility____c(__InternalMeshUtility____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__InternalMeshUtility____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::InternalMeshUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::InternalMeshUtility*
class CORDL_TYPE InternalMeshUtility : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshOperations::__InternalMeshUtility____c;

  /// @brief Method AverageNormalWithIndexes, addr 0x3314d7c, size 0x194, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 AverageNormalWithIndexes(::UnityEngine::ProBuilder::SharedVertex* shared, ::ArrayW<int32_t, ::Array<int32_t>*> all,
                                                                ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* norm);

  /// @brief Method CreateMeshWithTransform, addr 0x33162b0, size 0x10fc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> CreateMeshWithTransform(::UnityEngine::Transform* t, bool preserveFaces);

  /// @brief Method FilterUnusedSubmeshIndexes, addr 0x331887c, size 0x558, virtual false, abstract: false, final false
  static inline void FilterUnusedSubmeshIndexes(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method ResetPbObjectWithMeshFilter, addr 0x33176a4, size 0x11d8, virtual false, abstract: false, final false
  static inline bool ResetPbObjectWithMeshFilter(::UnityEngine::ProBuilder::ProBuilderMesh* pb, bool preserveFaces);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalMeshUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalMeshUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalMeshUtility(InternalMeshUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalMeshUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalMeshUtility(InternalMeshUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility*, "UnityEngine.ProBuilder.MeshOperations", "InternalMeshUtility");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__InternalMeshUtility____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__InternalMeshUtility____c*, "UnityEngine.ProBuilder.MeshOperations", "InternalMeshUtility/<>c");
