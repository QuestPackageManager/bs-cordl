#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MergeElements)
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
template <typename T1, typename T2> struct SimpleTuple_2;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MergeElements____c__DisplayClass0_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MergeElements____c;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class MergeElements;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MergeElements____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MergeElements____c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MergeElements);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__MergeElements____c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__MergeElements____c__DisplayClass0_0);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12195))
// CS Name: ::MergeElements::<>c__DisplayClass0_0*
class CORDL_TYPE __MergeElements____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field remove, offset 0x10, size 0x8
  __declspec(property(get = __get_remove, put = __set_remove))::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* remove;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*& __get_remove();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*> const& __get_remove() const;

  constexpr void __set_remove(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* value);

  static inline ::UnityEngine::ProBuilder::MeshOperations::__MergeElements____c__DisplayClass0_0* New_ctor();

  /// @brief Method .ctor addr 0x2a37138 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <MergePairs>b__0 addr 0x2a37cfc size 0x64 virtual false final false
  inline bool _MergePairs_b__0(::UnityEngine::ProBuilder::Face* x);

  // Ctor Parameters [CppParam { name: "", ty: "__MergeElements____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MergeElements____c__DisplayClass0_0(__MergeElements____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MergeElements____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MergeElements____c__DisplayClass0_0(__MergeElements____c__DisplayClass0_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MergeElements____c__DisplayClass0_0();

public:
  /// @brief Field remove, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* ___remove;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__MergeElements____c__DisplayClass0_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__MergeElements____c__DisplayClass0_0, ___remove) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12196))
// CS Name: ::MergeElements::<>c*
class CORDL_TYPE __MergeElements____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::MeshOperations::__MergeElements____c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0,
                             put = setStaticF___9__1_0))::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* __9__1_0;

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__MergeElements____c* value);

  static inline ::UnityEngine::ProBuilder::MeshOperations::__MergeElements____c* getStaticF___9();

  static inline void setStaticF___9__1_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__1_0();

  static inline ::UnityEngine::ProBuilder::MeshOperations::__MergeElements____c* New_ctor();

  /// @brief Method .ctor addr 0x2a37dc4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Merge>b__1_0 addr 0x2a37dcc size 0x18 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _Merge_b__1_0(::UnityEngine::ProBuilder::Face* x);

  // Ctor Parameters [CppParam { name: "", ty: "__MergeElements____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MergeElements____c(__MergeElements____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MergeElements____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MergeElements____c(__MergeElements____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MergeElements____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__MergeElements____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::MergeElements
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12197))
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::MergeElements*
class CORDL_TYPE MergeElements : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshOperations::__MergeElements____c;

  using __c__DisplayClass0_0 = ::UnityEngine::ProBuilder::MeshOperations::__MergeElements____c__DisplayClass0_0;

  /// @brief Method MergePairs addr 0x2a36a88 size 0x6b0 virtual false final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*
  MergePairs(::UnityEngine::ProBuilder::ProBuilderMesh* target,
             ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>>* pairs,
             bool collapseCoincidentVertices);

  /// @brief Method Merge addr 0x2a37600 size 0x3d0 virtual false final false
  static inline ::UnityEngine::ProBuilder::Face* Merge(::UnityEngine::ProBuilder::ProBuilderMesh* target, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method CollapseCoincidentVertices addr 0x2a37140 size 0x4c0 virtual false final false
  static inline void CollapseCoincidentVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  // Ctor Parameters [CppParam { name: "", ty: "MergeElements", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MergeElements(MergeElements&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MergeElements", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MergeElements(MergeElements const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MergeElements();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MergeElements, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MergeElements);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MergeElements*, "UnityEngine.ProBuilder.MeshOperations", "MergeElements");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__MergeElements____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__MergeElements____c*, "UnityEngine.ProBuilder.MeshOperations", "MergeElements/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__MergeElements____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__MergeElements____c__DisplayClass0_0*, "UnityEngine.ProBuilder.MeshOperations", "MergeElements/<>c__DisplayClass0_0");
