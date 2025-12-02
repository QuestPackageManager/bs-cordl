#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/MeshValidation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Triangle_def.hpp"
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
struct MeshValidation_AttributeValidationStrategy;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation___c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation___c__DisplayClass10_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation___c__DisplayClass5_0;
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
struct MeshValidation_AttributeValidationStrategy;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation___c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation___c__DisplayClass10_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation___c__DisplayClass5_0;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MeshValidation);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0);
// Dependencies
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshValidation/AttributeValidationStrategy
struct CORDL_TYPE MeshValidation_AttributeValidationStrategy {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MeshValidation_AttributeValidationStrategy_Unwrapped
  enum struct __MeshValidation_AttributeValidationStrategy_Unwrapped : int32_t {
    __E_Resize = static_cast<int32_t>(0x0),
    __E_Nullify = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MeshValidation_AttributeValidationStrategy_Unwrapped() const noexcept {
    return static_cast<__MeshValidation_AttributeValidationStrategy_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshValidation_AttributeValidationStrategy();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MeshValidation_AttributeValidationStrategy(int32_t value__) noexcept;

  /// @brief Field Nullify value: I32(1)
  static ::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy const Nullify;

  /// @brief Field Resize value: I32(0)
  static ::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy const Resize;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16839 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c
class CORDL_TYPE MeshValidation___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* __9__4_0;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_1, put = setStaticF___9__4_1)) ::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* __9__4_1;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* __9__7_0;

  static inline ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c* New_ctor();

  /// @brief Method <EnsureFacesAreComposedOfContiguousTriangles>b__4_0, addr 0x6519c04, size 0x28, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _EnsureFacesAreComposedOfContiguousTriangles_b__4_0(::UnityEngine::ProBuilder::Triangle x);

  /// @brief Method <EnsureFacesAreComposedOfContiguousTriangles>b__4_1, addr 0x6519c2c, size 0x28, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _EnsureFacesAreComposedOfContiguousTriangles_b__4_1(::UnityEngine::ProBuilder::Triangle x);

  /// @brief Method <RemoveUnusedVertices>b__7_0, addr 0x6519c54, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _RemoveUnusedVertices_b__7_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method .ctor, addr 0x6519c00, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__4_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__4_1();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__7_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c* value);

  static inline void setStaticF___9__4_0(::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  static inline void setStaticF___9__4_1(::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshValidation___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshValidation___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshValidation___c(MeshValidation___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshValidation___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshValidation___c(MeshValidation___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16840 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c__DisplayClass10_0
class CORDL_TYPE MeshValidation___c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field mesh, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mesh, put = __cordl_internal_set_mesh)) ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> mesh;

  static inline ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0* New_ctor();

  /// @brief Method <RebuildSelectionIndexes>b__0, addr 0x6519c6c, size 0x68, virtual false, abstract: false, final false
  inline bool _RebuildSelectionIndexes_b__0(::UnityEngine::ProBuilder::Face* x);

  constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& __cordl_internal_get_mesh() const;

  constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& __cordl_internal_get_mesh();

  constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value);

  /// @brief Method .ctor, addr 0x65192b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshValidation___c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshValidation___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshValidation___c__DisplayClass10_0(MeshValidation___c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshValidation___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshValidation___c__DisplayClass10_0(MeshValidation___c__DisplayClass10_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16841 };

  /// @brief Field mesh, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> ___mesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0, ___mesh) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object, UnityEngine.ProBuilder.Triangle
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c__DisplayClass5_0
class CORDL_TYPE MeshValidation___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__0, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___9__0, put = __cordl_internal_set___9__0)) ::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>* __9__0;

  /// @brief Field triangle, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_triangle, put = __cordl_internal_set_triangle)) ::UnityEngine::ProBuilder::Triangle triangle;

  static inline ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0* New_ctor();

  /// @brief Method <CollectFaceGroups>b__0, addr 0x6519cd4, size 0x38, virtual false, abstract: false, final false
  inline bool _CollectFaceGroups_b__0(::UnityEngine::ProBuilder::Triangle x);

  constexpr ::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>* const& __cordl_internal_get___9__0() const;

  constexpr ::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>*& __cordl_internal_get___9__0();

  constexpr ::UnityEngine::ProBuilder::Triangle const& __cordl_internal_get_triangle() const;

  constexpr ::UnityEngine::ProBuilder::Triangle& __cordl_internal_get_triangle();

  constexpr void __cordl_internal_set___9__0(::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>* value);

  constexpr void __cordl_internal_set_triangle(::UnityEngine::ProBuilder::Triangle value);

  /// @brief Method .ctor, addr 0x6517ddc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshValidation___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshValidation___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshValidation___c__DisplayClass5_0(MeshValidation___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshValidation___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshValidation___c__DisplayClass5_0(MeshValidation___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16842 };

  /// @brief Field triangle, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::ProBuilder::Triangle ___triangle;

  /// @brief Field <>9__0, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>* _____9__0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0, ___triangle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0, _____9__0) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0, 0x28>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshValidation
class CORDL_TYPE MeshValidation : public ::System::Object {
public:
  // Declarations
  using AttributeValidationStrategy = ::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy;

  using __c = ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c;

  using __c__DisplayClass10_0 = ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0;

  using __c__DisplayClass5_0 = ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0;

  /// @brief Method CollectFaceGroups, addr 0x65179e0, size 0x3fc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>*>* CollectFaceGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                                                        ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method ContainsDegenerateTriangles, addr 0x6516c74, size 0x14, virtual false, abstract: false, final false
  static inline bool ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method ContainsDegenerateTriangles, addr 0x6517088, size 0x14c, virtual false, abstract: false, final false
  static inline bool ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method ContainsDegenerateTriangles, addr 0x6516c88, size 0x400, virtual false, abstract: false, final false
  static inline bool ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method ContainsNonContiguousTriangles, addr 0x65171d4, size 0x134, virtual false, abstract: false, final false
  static inline bool ContainsNonContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method EnsureArraySize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline void EnsureArraySize(::ByRef<::ArrayW<T, ::Array<T>*>> attribute, int32_t expectedVertexCount,
                                     ::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy strategy, T fill);

  /// @brief Method EnsureFacesAreComposedOfContiguousTriangles, addr 0x6517308, size 0x6d8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*
  EnsureFacesAreComposedOfContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method EnsureListSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline void EnsureListSize(::ByRef<::System::Collections::Generic::List_1<T>*> attribute, int32_t expectedVertexCount,
                                    ::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy strategy, T fill);

  /// @brief Method EnsureMeshIsValid, addr 0x65192b8, size 0x140, virtual false, abstract: false, final false
  static inline bool EnsureMeshIsValid(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ByRef<int32_t> removedVertices);

  /// @brief Method EnsureRealNumbers, addr 0x6519610, size 0x1cc, virtual false, abstract: false, final false
  static inline void EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* attribute);

  /// @brief Method EnsureRealNumbers, addr 0x65197dc, size 0x1ec, virtual false, abstract: false, final false
  static inline void EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* attribute);

  /// @brief Method EnsureRealNumbers, addr 0x65199c8, size 0x1e4, virtual false, abstract: false, final false
  static inline void EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* attribute);

  /// @brief Method EnsureValidAttributes, addr 0x65193f8, size 0x218, virtual false, abstract: false, final false
  static inline void EnsureValidAttributes(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method RebuildEdges, addr 0x6518c48, size 0x464, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* RebuildEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                                                                      ::System::Collections::Generic::List_1<int32_t>* removed);

  /// @brief Method RebuildIndexes, addr 0x6518838, size 0x410, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<int32_t>* RebuildIndexes(::System::Collections::Generic::IEnumerable_1<int32_t>* indices,
                                                                                ::System::Collections::Generic::List_1<int32_t>* removed);

  /// @brief Method RebuildSelectionIndexes, addr 0x65190ac, size 0x208, virtual false, abstract: false, final false
  static inline void RebuildSelectionIndexes(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ByRef<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>> faces,
                                             ::ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>> edges, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> indices,
                                             ::System::Collections::Generic::IEnumerable_1<int32_t>* removed);

  /// @brief Method RemoveDegenerateTriangles, addr 0x6517de0, size 0xa58, virtual false, abstract: false, final false
  static inline bool RemoveDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<int32_t>* removed);

  /// @brief Method RemoveUnusedVertices, addr 0x6514b94, size 0x380, virtual false, abstract: false, final false
  static inline bool RemoveUnusedVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<int32_t>* removed);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshValidation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshValidation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshValidation(MeshValidation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshValidation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshValidation(MeshValidation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16843 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MeshValidation, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/AttributeValidationStrategy");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshValidation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshValidation*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c__DisplayClass10_0");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c__DisplayClass5_0");
