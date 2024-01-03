#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Triangle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshValidation)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
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
struct __MeshValidation__AttributeValidationStrategy;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MeshValidation____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MeshValidation____c__DisplayClass10_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MeshValidation____c__DisplayClass5_0;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
struct Triangle;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
struct __MeshValidation__AttributeValidationStrategy;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MeshValidation____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MeshValidation____c__DisplayClass10_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MeshValidation____c__DisplayClass5_0;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MeshValidation);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0);
// Type: ::AttributeValidationStrategy
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12274))
// CS Name: ::MeshValidation::AttributeValidationStrategy
struct CORDL_TYPE __MeshValidation__AttributeValidationStrategy {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MeshValidation__AttributeValidationStrategy_Unwrapped
  enum struct ____MeshValidation__AttributeValidationStrategy_Unwrapped : int32_t {
    __E_Resize = static_cast<int32_t>(0x0),
    __E_Nullify = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MeshValidation__AttributeValidationStrategy_Unwrapped() const noexcept {
    return static_cast<____MeshValidation__AttributeValidationStrategy_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MeshValidation__AttributeValidationStrategy(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshValidation__AttributeValidationStrategy();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Resize value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy const Resize;

  /// @brief Field Nullify value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy const Nullify;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12275))
// CS Name: ::MeshValidation::<>c*
class CORDL_TYPE __MeshValidation____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0,
                             put = setStaticF___9__4_0))::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* __9__4_0;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_1,
                             put = setStaticF___9__4_1))::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* __9__4_1;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0,
                             put = setStaticF___9__7_0))::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* __9__7_0;

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c* value);

  static inline ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c* getStaticF___9();

  static inline void setStaticF___9__4_0(::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__4_0();

  static inline void setStaticF___9__4_1(::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__4_1();

  static inline void setStaticF___9__7_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__7_0();

  static inline ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c* New_ctor();

  /// @brief Method .ctor, addr 0x2bbe758, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <EnsureFacesAreComposedOfContiguousTriangles>b__4_0, addr 0x2bbe760, size 0x28, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _EnsureFacesAreComposedOfContiguousTriangles_b__4_0(::UnityEngine::ProBuilder::Triangle x);

  /// @brief Method <EnsureFacesAreComposedOfContiguousTriangles>b__4_1, addr 0x2bbe788, size 0x28, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _EnsureFacesAreComposedOfContiguousTriangles_b__4_1(::UnityEngine::ProBuilder::Triangle x);

  /// @brief Method <RemoveUnusedVertices>b__7_0, addr 0x2bbe7b0, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _RemoveUnusedVertices_b__7_0(::UnityEngine::ProBuilder::Face* x);

  // Ctor Parameters [CppParam { name: "", ty: "__MeshValidation____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MeshValidation____c(__MeshValidation____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MeshValidation____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MeshValidation____c(__MeshValidation____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshValidation____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12209)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12276))
// CS Name: ::MeshValidation::<>c__DisplayClass5_0*
class CORDL_TYPE __MeshValidation____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field triangle, offset 0x10, size 0xc
  __declspec(property(get = __get_triangle, put = __set_triangle))::UnityEngine::ProBuilder::Triangle triangle;

  /// @brief Field <>9__0, offset 0x20, size 0x8
  __declspec(property(get = __get___9__0, put = __set___9__0))::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>* __9__0;

  constexpr ::UnityEngine::ProBuilder::Triangle& __get_triangle();

  constexpr ::UnityEngine::ProBuilder::Triangle const& __get_triangle() const;

  constexpr void __set_triangle(::UnityEngine::ProBuilder::Triangle value);

  constexpr ::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>*& __get___9__0();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>*> const& __get___9__0() const;

  constexpr void __set___9__0(::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>* value);

  static inline ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0* New_ctor();

  /// @brief Method .ctor, addr 0x2bbca4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <CollectFaceGroups>b__0, addr 0x2bbe7c8, size 0x34, virtual false, abstract: false, final false
  inline bool _CollectFaceGroups_b__0(::UnityEngine::ProBuilder::Triangle x);

  // Ctor Parameters [CppParam { name: "", ty: "__MeshValidation____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MeshValidation____c__DisplayClass5_0(__MeshValidation____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MeshValidation____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MeshValidation____c__DisplayClass5_0(__MeshValidation____c__DisplayClass5_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshValidation____c__DisplayClass5_0();

public:
  /// @brief Field triangle, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::ProBuilder::Triangle ___triangle;

  /// @brief Field <>9__0, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>* _____9__0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0, ___triangle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0, _____9__0) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12277))
// CS Name: ::MeshValidation::<>c__DisplayClass10_0*
class CORDL_TYPE __MeshValidation____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field mesh, offset 0x10, size 0x8
  __declspec(property(get = __get_mesh, put = __set_mesh))::UnityEngine::ProBuilder::ProBuilderMesh* mesh;

  constexpr ::UnityEngine::ProBuilder::ProBuilderMesh*& __get_mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::ProBuilderMesh*> const& __get_mesh() const;

  constexpr void __set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh* value);

  static inline ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0* New_ctor();

  /// @brief Method .ctor, addr 0x2bbde38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <RebuildSelectionIndexes>b__0, addr 0x2bbe7fc, size 0x5c, virtual false, abstract: false, final false
  inline bool _RebuildSelectionIndexes_b__0(::UnityEngine::ProBuilder::Face* x);

  // Ctor Parameters [CppParam { name: "", ty: "__MeshValidation____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MeshValidation____c__DisplayClass10_0(__MeshValidation____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MeshValidation____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MeshValidation____c__DisplayClass10_0(__MeshValidation____c__DisplayClass10_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshValidation____c__DisplayClass10_0();

public:
  /// @brief Field mesh, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::ProBuilderMesh* ___mesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0, ___mesh) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::MeshValidation
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12278))
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::MeshValidation*
class CORDL_TYPE MeshValidation : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass10_0 = ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0;

  using __c__DisplayClass5_0 = ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0;

  using __c = ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c;

  using AttributeValidationStrategy = ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy;

  /// @brief Method ContainsDegenerateTriangles, addr 0x2bbb894, size 0x18, virtual false, abstract: false, final false
  static inline bool ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method ContainsDegenerateTriangles, addr 0x2bbb8ac, size 0x458, virtual false, abstract: false, final false
  static inline bool ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method ContainsDegenerateTriangles, addr 0x2bbbd04, size 0x154, virtual false, abstract: false, final false
  static inline bool ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method ContainsNonContiguousTriangles, addr 0x2bbbe58, size 0x138, virtual false, abstract: false, final false
  static inline bool ContainsNonContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method EnsureFacesAreComposedOfContiguousTriangles, addr 0x2bbbf90, size 0x6f0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*
  EnsureFacesAreComposedOfContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method CollectFaceGroups, addr 0x2bbc680, size 0x3cc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>*>* CollectFaceGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                                                        ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method RemoveDegenerateTriangles, addr 0x2bbca54, size 0x954, virtual false, abstract: false, final false
  static inline bool RemoveDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<int32_t>* removed);

  /// @brief Method RemoveUnusedVertices, addr 0x2bb9724, size 0x32c, virtual false, abstract: false, final false
  static inline bool RemoveUnusedVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<int32_t>* removed);

  /// @brief Method RebuildIndexes, addr 0x2bbd3a8, size 0x41c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<int32_t>* RebuildIndexes(::System::Collections::Generic::IEnumerable_1<int32_t>* indices,
                                                                                ::System::Collections::Generic::List_1<int32_t>* removed);

  /// @brief Method RebuildEdges, addr 0x2bbd7c4, size 0x494, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* RebuildEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                                                                      ::System::Collections::Generic::List_1<int32_t>* removed);

  /// @brief Method RebuildSelectionIndexes, addr 0x2bbdc58, size 0x1e0, virtual false, abstract: false, final false
  static inline void RebuildSelectionIndexes(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ByRef<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>> faces,
                                             ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>> edges, ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> indices,
                                             ::System::Collections::Generic::IEnumerable_1<int32_t>* removed);

  /// @brief Method EnsureMeshIsValid, addr 0x2bbde40, size 0x140, virtual false, abstract: false, final false
  static inline bool EnsureMeshIsValid(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ByRef<int32_t> removedVertices);

  /// @brief Method EnsureRealNumbers, addr 0x2bbe198, size 0x1c0, virtual false, abstract: false, final false
  static inline void EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* attribute);

  /// @brief Method EnsureRealNumbers, addr 0x2bbe358, size 0x1cc, virtual false, abstract: false, final false
  static inline void EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* attribute);

  /// @brief Method EnsureRealNumbers, addr 0x2bbe524, size 0x1d0, virtual false, abstract: false, final false
  static inline void EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* attribute);

  /// @brief Method EnsureArraySize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline void EnsureArraySize(ByRef<::ArrayW<T, ::Array<T>*>> attribute, int32_t expectedVertexCount,
                                     ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy strategy, T fill);

  /// @brief Method EnsureListSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline void EnsureListSize(ByRef<::System::Collections::Generic::List_1<T>*> attribute, int32_t expectedVertexCount,
                                    ::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy strategy, T fill);

  /// @brief Method EnsureValidAttributes, addr 0x2bbdf80, size 0x218, virtual false, abstract: false, final false
  static inline void EnsureValidAttributes(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  // Ctor Parameters [CppParam { name: "", ty: "MeshValidation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshValidation(MeshValidation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshValidation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshValidation(MeshValidation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshValidation();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MeshValidation, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation__AttributeValidationStrategy, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/AttributeValidationStrategy");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshValidation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshValidation*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass10_0*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c__DisplayClass10_0");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__MeshValidation____c__DisplayClass5_0*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c__DisplayClass5_0");
