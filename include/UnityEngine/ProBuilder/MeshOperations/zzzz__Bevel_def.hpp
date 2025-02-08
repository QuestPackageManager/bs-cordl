#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/Bevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Bevel)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
class Bevel___c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class Bevel___c__DisplayClass0_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class Bevel___c__DisplayClass0_1;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class Bevel___c__DisplayClass0_2;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class FaceRebuildData;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class SharedVertex;
}
namespace UnityEngine::ProBuilder {
template <typename T1, typename T2> struct SimpleTuple_2;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class Bevel;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class Bevel___c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class Bevel___c__DisplayClass0_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class Bevel___c__DisplayClass0_1;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class Bevel___c__DisplayClass0_2;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::Bevel);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::Bevel___c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2);
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.Bevel/<>c
class CORDL_TYPE Bevel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::MeshOperations::Bevel___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* __9__0_0;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_1, put = setStaticF___9__0_1)) ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* __9__0_1;

  /// @brief Field <>9__0_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_2, put = setStaticF___9__0_2)) ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* __9__0_2;

  /// @brief Field <>9__0_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_3, put = setStaticF___9__0_3)) ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* __9__0_3;

  /// @brief Field <>9__0_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_6, put = setStaticF___9__0_6)) ::System::Func_2<
      ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>, int32_t>* __9__0_6;

  static inline ::UnityEngine::ProBuilder::MeshOperations::Bevel___c* New_ctor();

  /// @brief Method <BevelEdges>b__0_0, addr 0x4769d10, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_0(::UnityEngine::ProBuilder::FaceRebuildData* x);

  /// @brief Method <BevelEdges>b__0_1, addr 0x4769d78, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_1(::UnityEngine::ProBuilder::FaceRebuildData* x);

  /// @brief Method <BevelEdges>b__0_2, addr 0x4769d90, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_2(::UnityEngine::ProBuilder::FaceRebuildData* x);

  /// @brief Method <BevelEdges>b__0_3, addr 0x4769da8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_3(::UnityEngine::ProBuilder::FaceRebuildData* x);

  /// @brief Method <BevelEdges>b__0_6, addr 0x4769d28, size 0x50, virtual false, abstract: false, final false
  inline int32_t _BevelEdges_b__0_6(::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*> x);

  /// @brief Method .ctor, addr 0x4769d08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::MeshOperations::Bevel___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* getStaticF___9__0_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* getStaticF___9__0_1();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* getStaticF___9__0_2();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* getStaticF___9__0_3();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>, int32_t>*
  getStaticF___9__0_6();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::Bevel___c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value);

  static inline void setStaticF___9__0_1(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value);

  static inline void setStaticF___9__0_2(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value);

  static inline void setStaticF___9__0_3(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value);

  static inline void
  setStaticF___9__0_6(::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Bevel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Bevel___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Bevel___c(Bevel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Bevel___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Bevel___c(Bevel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14360 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::Bevel___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_0
class CORDL_TYPE Bevel___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__7, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___9__7, put = __cordl_internal_set___9__7)) ::System::Func_2<int32_t, int32_t>* __9__7;

  /// @brief Field <>9__8, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___9__8, put = __cordl_internal_set___9__8)) ::System::Func_2<int32_t, int32_t>* __9__8;

  /// @brief Field ignore, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ignore,
                      put = __cordl_internal_set_ignore)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*>* ignore;

  /// @brief Field sharedIndexes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sharedIndexes,
                      put = __cordl_internal_set_sharedIndexes)) ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>
      sharedIndexes;

  static inline ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0* New_ctor();

  /// @brief Method <BevelEdges>b__7, addr 0x4769dc0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t _BevelEdges_b__7(int32_t x);

  /// @brief Method <BevelEdges>b__8, addr 0x4769dfc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t _BevelEdges_b__8(int32_t x);

  constexpr ::System::Func_2<int32_t, int32_t>* const& __cordl_internal_get___9__7() const;

  constexpr ::System::Func_2<int32_t, int32_t>*& __cordl_internal_get___9__7();

  constexpr ::System::Func_2<int32_t, int32_t>* const& __cordl_internal_get___9__8() const;

  constexpr ::System::Func_2<int32_t, int32_t>*& __cordl_internal_get___9__8();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*>* const& __cordl_internal_get_ignore() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*>*& __cordl_internal_get_ignore();

  constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> const& __cordl_internal_get_sharedIndexes() const;

  constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>& __cordl_internal_get_sharedIndexes();

  constexpr void __cordl_internal_set___9__7(::System::Func_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set___9__8(::System::Func_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_ignore(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_sharedIndexes(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value);

  /// @brief Method .ctor, addr 0x4768d8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Bevel___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Bevel___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Bevel___c__DisplayClass0_0(Bevel___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Bevel___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Bevel___c__DisplayClass0_0(Bevel___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14361 };

  /// @brief Field ignore, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*>* ___ignore;

  /// @brief Field sharedIndexes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> ___sharedIndexes;

  /// @brief Field <>9__7, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<int32_t, int32_t>* _____9__7;

  /// @brief Field <>9__8, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<int32_t, int32_t>* _____9__8;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0, ___ignore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0, ___sharedIndexes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0, _____9__7) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0, _____9__8) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0, 0x30>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object, UnityEngine.ProBuilder.EdgeLookup
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_1
class CORDL_TYPE Bevel___c__DisplayClass0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field lup, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_lup, put = __cordl_internal_set_lup)) ::UnityEngine::ProBuilder::EdgeLookup lup;

  static inline ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1* New_ctor();

  /// @brief Method <BevelEdges>b__4, addr 0x4769e38, size 0x38, virtual false, abstract: false, final false
  inline bool _BevelEdges_b__4(::UnityEngine::ProBuilder::WingedEdge* x);

  constexpr ::UnityEngine::ProBuilder::EdgeLookup const& __cordl_internal_get_lup() const;

  constexpr ::UnityEngine::ProBuilder::EdgeLookup& __cordl_internal_get_lup();

  constexpr void __cordl_internal_set_lup(::UnityEngine::ProBuilder::EdgeLookup value);

  /// @brief Method .ctor, addr 0x4768d94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Bevel___c__DisplayClass0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Bevel___c__DisplayClass0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Bevel___c__DisplayClass0_1(Bevel___c__DisplayClass0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Bevel___c__DisplayClass0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Bevel___c__DisplayClass0_1(Bevel___c__DisplayClass0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14362 };

  /// @brief Field lup, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::ProBuilder::EdgeLookup ___lup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1, ___lup) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_2
class CORDL_TYPE Bevel___c__DisplayClass0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0* CS$__8__locals1;

  /// @brief Field c, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c)) int32_t c;

  static inline ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2* New_ctor();

  /// @brief Method <BevelEdges>b__5, addr 0x4769e70, size 0x124, virtual false, abstract: false, final false
  inline bool _BevelEdges_b__5(::UnityEngine::ProBuilder::WingedEdge* x);

  constexpr ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr int32_t const& __cordl_internal_get_c() const;

  constexpr int32_t& __cordl_internal_get_c();

  constexpr void __cordl_internal_set_CS$__8__locals1(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0* value);

  constexpr void __cordl_internal_set_c(int32_t value);

  /// @brief Method .ctor, addr 0x4769a28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Bevel___c__DisplayClass0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Bevel___c__DisplayClass0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Bevel___c__DisplayClass0_2(Bevel___c__DisplayClass0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Bevel___c__DisplayClass0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Bevel___c__DisplayClass0_2(Bevel___c__DisplayClass0_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14363 };

  /// @brief Field c, offset: 0x10, size: 0x4, def value: None
  int32_t ___c;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2, ___c) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.Bevel
class CORDL_TYPE Bevel : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshOperations::Bevel___c;

  using __c__DisplayClass0_0 = ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0;

  using __c__DisplayClass0_1 = ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1;

  using __c__DisplayClass0_2 = ::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2;

  /// @brief Field k_BridgeIndexesTri, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_BridgeIndexesTri, put = setStaticF_k_BridgeIndexesTri)) ::ArrayW<int32_t, ::Array<int32_t>*> k_BridgeIndexesTri;

  /// @brief Method BevelEdges, addr 0x47666f0, size 0x269c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* BevelEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                     ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges, float_t amount);

  /// @brief Method GetBridgeFaces, addr 0x47691a0, size 0x888, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>* GetBridgeFaces(
      ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::UnityEngine::ProBuilder::WingedEdge* left, ::UnityEngine::ProBuilder::WingedEdge* right,
      ::System::Collections::Generic::Dictionary_2<
          int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>>*>*
          holes);

  /// @brief Method GetLeadingEdge, addr 0x4769b30, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Edge GetLeadingEdge(::UnityEngine::ProBuilder::WingedEdge* wing, int32_t common);

  /// @brief Method SlideEdge, addr 0x4768d9c, size 0x404, virtual false, abstract: false, final false
  static inline void SlideEdge(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::UnityEngine::ProBuilder::WingedEdge* we, float_t amount);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_k_BridgeIndexesTri();

  static inline void setStaticF_k_BridgeIndexesTri(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Bevel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Bevel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Bevel(Bevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Bevel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Bevel(Bevel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14364 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::Bevel, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::Bevel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::Bevel*, "UnityEngine.ProBuilder.MeshOperations", "Bevel");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::Bevel___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::Bevel___c*, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_0*, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_0");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_1*, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_1");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::Bevel___c__DisplayClass0_2*, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_2");
