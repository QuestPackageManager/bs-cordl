#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/MergeElements.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MergeElements)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MergeElements___c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MergeElements___c__DisplayClass0_0;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
template <typename T1, typename T2> struct SimpleTuple_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class MergeElements;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MergeElements___c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MergeElements___c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MergeElements);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MergeElements___c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MergeElements___c__DisplayClass0_0);
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.MergeElements/<>c
class CORDL_TYPE MergeElements___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::MeshOperations::MergeElements___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* __9__1_0;

  static inline ::UnityEngine::ProBuilder::MeshOperations::MergeElements___c* New_ctor();

  /// @brief Method <Merge>b__1_0, addr 0x477cd18, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _Merge_b__1_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method .ctor, addr 0x477cd10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::MeshOperations::MergeElements___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__1_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::MergeElements___c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MergeElements___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MergeElements___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MergeElements___c(MergeElements___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MergeElements___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MergeElements___c(MergeElements___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14385 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MergeElements___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.MergeElements/<>c__DisplayClass0_0
class CORDL_TYPE MergeElements___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field remove, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_remove, put = __cordl_internal_set_remove)) ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* remove;

  static inline ::UnityEngine::ProBuilder::MeshOperations::MergeElements___c__DisplayClass0_0* New_ctor();

  /// @brief Method <MergePairs>b__0, addr 0x477cd30, size 0x64, virtual false, abstract: false, final false
  inline bool _MergePairs_b__0(::UnityEngine::ProBuilder::Face* x);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* const& __cordl_internal_get_remove() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*& __cordl_internal_get_remove();

  constexpr void __cordl_internal_set_remove(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* value);

  /// @brief Method .ctor, addr 0x477c138, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MergeElements___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MergeElements___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MergeElements___c__DisplayClass0_0(MergeElements___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MergeElements___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MergeElements___c__DisplayClass0_0(MergeElements___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14386 };

  /// @brief Field remove, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* ___remove;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::MergeElements___c__DisplayClass0_0, ___remove) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MergeElements___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.MergeElements
class CORDL_TYPE MergeElements : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshOperations::MergeElements___c;

  using __c__DisplayClass0_0 = ::UnityEngine::ProBuilder::MeshOperations::MergeElements___c__DisplayClass0_0;

  /// @brief Method CollapseCoincidentVertices, addr 0x477c140, size 0x4dc, virtual false, abstract: false, final false
  static inline void CollapseCoincidentVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method Merge, addr 0x477c61c, size 0x374, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Face* Merge(::UnityEngine::ProBuilder::ProBuilderMesh* target, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method MergePairs, addr 0x477baa8, size 0x690, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*
  MergePairs(::UnityEngine::ProBuilder::ProBuilderMesh* target,
             ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>>* pairs,
             bool collapseCoincidentVertices);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MergeElements();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MergeElements", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MergeElements(MergeElements&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MergeElements", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MergeElements(MergeElements const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14387 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MergeElements, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MergeElements);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MergeElements*, "UnityEngine.ProBuilder.MeshOperations", "MergeElements");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MergeElements___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MergeElements___c*, "UnityEngine.ProBuilder.MeshOperations", "MergeElements/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MergeElements___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MergeElements___c__DisplayClass0_0*, "UnityEngine.ProBuilder.MeshOperations", "MergeElements/<>c__DisplayClass0_0");
