#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/DeleteElements.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeleteElements)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __DeleteElements____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __DeleteElements____c__DisplayClass0_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __DeleteElements____c__DisplayClass2_0;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class DeleteElements;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __DeleteElements____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __DeleteElements____c__DisplayClass0_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __DeleteElements____c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::DeleteElements);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c__DisplayClass0_0);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c__DisplayClass2_0);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::DeleteElements::<>c__DisplayClass0_0*
class CORDL_TYPE __DeleteElements____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field offset, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset))::ArrayW<int32_t, ::Array<int32_t>*> offset;

  /// @brief Field sorted, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sorted, put = __cordl_internal_set_sorted))::System::Collections::Generic::List_1<int32_t>* sorted;

  static inline ::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c__DisplayClass0_0* New_ctor();

  /// @brief Method <DeleteVertices>b__0, addr 0x32e04cc, size 0x6c, virtual false, abstract: false, final false
  inline bool _DeleteVertices_b__0(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> x);

  /// @brief Method <DeleteVertices>b__1, addr 0x32e0538, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> _DeleteVertices_b__1(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> y);

  /// @brief Method <DeleteVertices>b__2, addr 0x32e05e0, size 0x6c, virtual false, abstract: false, final false
  inline bool _DeleteVertices_b__2(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> x);

  /// @brief Method <DeleteVertices>b__3, addr 0x32e064c, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> _DeleteVertices_b__3(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> y);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_offset() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_offset();

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_sorted();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_sorted() const;

  constexpr void __cordl_internal_set_offset(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_sorted(::System::Collections::Generic::List_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x32dfd80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeleteElements____c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DeleteElements____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DeleteElements____c__DisplayClass0_0(__DeleteElements____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DeleteElements____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DeleteElements____c__DisplayClass0_0(__DeleteElements____c__DisplayClass0_0 const&) = delete;

  /// @brief Field sorted, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___sorted;

  /// @brief Field offset, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___offset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c__DisplayClass0_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c__DisplayClass0_0, ___sorted) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c__DisplayClass0_0, ___offset) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::DeleteElements::<>c__DisplayClass2_0*
class CORDL_TYPE __DeleteElements____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field mesh, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mesh, put = __cordl_internal_set_mesh))::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> mesh;

  static inline ::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c__DisplayClass2_0* New_ctor();

  /// @brief Method <DeleteFaces>b__0, addr 0x32e06f4, size 0x5c, virtual false, abstract: false, final false
  inline int32_t _DeleteFaces_b__0(::UnityEngine::ProBuilder::Face* x);

  constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& __cordl_internal_get_mesh() const;

  constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& __cordl_internal_get_mesh();

  constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value);

  /// @brief Method .ctor, addr 0x32dfd88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeleteElements____c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DeleteElements____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DeleteElements____c__DisplayClass2_0(__DeleteElements____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DeleteElements____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DeleteElements____c__DisplayClass2_0(__DeleteElements____c__DisplayClass2_0 const&) = delete;

  /// @brief Field mesh, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> ___mesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c__DisplayClass2_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c__DisplayClass2_0, ___mesh) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::DeleteElements::<>c*
class CORDL_TYPE __DeleteElements____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0,
                             put = setStaticF___9__3_0))::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* __9__3_0;

  static inline ::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c* New_ctor();

  /// @brief Method <DeleteFaces>b__3_0, addr 0x32e07bc, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _DeleteFaces_b__3_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method .ctor, addr 0x32e07b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__3_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeleteElements____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DeleteElements____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DeleteElements____c(__DeleteElements____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DeleteElements____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DeleteElements____c(__DeleteElements____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::DeleteElements
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::DeleteElements*
class CORDL_TYPE DeleteElements : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c;

  using __c__DisplayClass0_0 = ::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c__DisplayClass0_0;

  using __c__DisplayClass2_0 = ::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c__DisplayClass2_0;

  /// @brief Method DeleteFace, addr 0x32cf30c, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> DeleteFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method DeleteFaces, addr 0x32dfd90, size 0x604, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> DeleteFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<int32_t>* faceIndexes);

  /// @brief Method DeleteFaces, addr 0x32d71d0, size 0x104, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> DeleteFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method DeleteVertices, addr 0x32d11d8, size 0x4d4, virtual false, abstract: false, final false
  static inline void DeleteVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* distinctIndexes);

  /// @brief Method RemoveDegenerateTriangles, addr 0x32e0394, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> RemoveDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method RemoveUnusedVertices, addr 0x32e0430, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> RemoveUnusedVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeleteElements();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeleteElements", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeleteElements(DeleteElements&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeleteElements", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeleteElements(DeleteElements const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::DeleteElements, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::DeleteElements);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::DeleteElements*, "UnityEngine.ProBuilder.MeshOperations", "DeleteElements");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c*, "UnityEngine.ProBuilder.MeshOperations", "DeleteElements/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c__DisplayClass0_0*, "UnityEngine.ProBuilder.MeshOperations", "DeleteElements/<>c__DisplayClass0_0");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__DeleteElements____c__DisplayClass2_0*, "UnityEngine.ProBuilder.MeshOperations", "DeleteElements/<>c__DisplayClass2_0");
