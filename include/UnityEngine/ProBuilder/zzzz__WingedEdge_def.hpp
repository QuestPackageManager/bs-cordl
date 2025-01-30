#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/WingedEdge.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WingedEdge)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
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
template <typename TInput, typename TOutput> class Converter_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
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
class WingedEdge___c;
}
namespace UnityEngine::ProBuilder {
class WingedEdge___c__DisplayClass32_0;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace UnityEngine::ProBuilder {
class WingedEdge___c;
}
namespace UnityEngine::ProBuilder {
class WingedEdge___c__DisplayClass32_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::WingedEdge);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::WingedEdge___c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.WingedEdge/<>c
class CORDL_TYPE WingedEdge___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::WingedEdge___c* __9;

  /// @brief Field <>9__32_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__32_1, put = setStaticF___9__32_1)) ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* __9__32_1;

  /// @brief Field <>9__32_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__32_2, put = setStaticF___9__32_2)) ::System::Converter_2<::UnityEngine::ProBuilder::Edge, int32_t>* __9__32_2;

  static inline ::UnityEngine::ProBuilder::WingedEdge___c* New_ctor();

  /// @brief Method <SortCommonIndexesByAdjacency>b__32_1, addr 0x474e2ac, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _SortCommonIndexesByAdjacency_b__32_1(::UnityEngine::ProBuilder::WingedEdge* y);

  /// @brief Method <SortCommonIndexesByAdjacency>b__32_2, addr 0x474e2c4, size 0x8, virtual false, abstract: false, final false
  inline int32_t _SortCommonIndexesByAdjacency_b__32_2(::UnityEngine::ProBuilder::Edge x);

  /// @brief Method .ctor, addr 0x474e2a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::WingedEdge___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* getStaticF___9__32_1();

  static inline ::System::Converter_2<::UnityEngine::ProBuilder::Edge, int32_t>* getStaticF___9__32_2();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::WingedEdge___c* value);

  static inline void setStaticF___9__32_1(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value);

  static inline void setStaticF___9__32_2(::System::Converter_2<::UnityEngine::ProBuilder::Edge, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WingedEdge___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WingedEdge___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WingedEdge___c(WingedEdge___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WingedEdge___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WingedEdge___c(WingedEdge___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14336 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::WingedEdge___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.WingedEdge/<>c__DisplayClass32_0
class CORDL_TYPE WingedEdge___c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field common, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_common, put = __cordl_internal_set_common)) ::System::Collections::Generic::HashSet_1<int32_t>* common;

  static inline ::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0* New_ctor();

  /// @brief Method <SortCommonIndexesByAdjacency>b__0, addr 0x474e2cc, size 0x84, virtual false, abstract: false, final false
  inline bool _SortCommonIndexesByAdjacency_b__0(::UnityEngine::ProBuilder::WingedEdge* x);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_common() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_common();

  constexpr void __cordl_internal_set_common(::System::Collections::Generic::HashSet_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x474d9b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WingedEdge___c__DisplayClass32_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WingedEdge___c__DisplayClass32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WingedEdge___c__DisplayClass32_0(WingedEdge___c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WingedEdge___c__DisplayClass32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WingedEdge___c__DisplayClass32_0(WingedEdge___c__DisplayClass32_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14337 };

  /// @brief Field common, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___common;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0, ___common) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.IEquatable`1<T>, System.Object, UnityEngine.ProBuilder.EdgeLookup
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.WingedEdge
class CORDL_TYPE WingedEdge : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::WingedEdge___c;

  using __c__DisplayClass32_0 = ::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0;

  /// @brief Field <edge>k__BackingField, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__edge_k__BackingField, put = __cordl_internal_set__edge_k__BackingField)) ::UnityEngine::ProBuilder::EdgeLookup _edge_k__BackingField;

  /// @brief Field <face>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__face_k__BackingField, put = __cordl_internal_set__face_k__BackingField)) ::UnityEngine::ProBuilder::Face* _face_k__BackingField;

  /// @brief Field <next>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__next_k__BackingField, put = __cordl_internal_set__next_k__BackingField)) ::UnityEngine::ProBuilder::WingedEdge* _next_k__BackingField;

  /// @brief Field <opposite>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__opposite_k__BackingField, put = __cordl_internal_set__opposite_k__BackingField)) ::UnityEngine::ProBuilder::WingedEdge* _opposite_k__BackingField;

  /// @brief Field <previous>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__previous_k__BackingField, put = __cordl_internal_set__previous_k__BackingField)) ::UnityEngine::ProBuilder::WingedEdge* _previous_k__BackingField;

  __declspec(property(get = get_edge, put = set_edge)) ::UnityEngine::ProBuilder::EdgeLookup edge;

  __declspec(property(get = get_face, put = set_face)) ::UnityEngine::ProBuilder::Face* face;

  /// @brief Field k_OppositeEdgeDictionary, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_k_OppositeEdgeDictionary,
      put = setStaticF_k_OppositeEdgeDictionary)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>* k_OppositeEdgeDictionary;

  __declspec(property(get = get_next, put = set_next)) ::UnityEngine::ProBuilder::WingedEdge* next;

  __declspec(property(get = get_opposite, put = set_opposite)) ::UnityEngine::ProBuilder::WingedEdge* opposite;

  __declspec(property(get = get_previous, put = set_previous)) ::UnityEngine::ProBuilder::WingedEdge* previous;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>*() noexcept;

  /// @brief Method Count, addr 0x474c940, size 0x34, virtual false, abstract: false, final false
  inline int32_t Count();

  /// @brief Method Equals, addr 0x474c7e0, size 0xf4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x474c758, size 0x88, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ProBuilder::WingedEdge* other);

  /// @brief Method GetAdjacentEdgeWithCommonIndex, addr 0x474cf3c, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::WingedEdge* GetAdjacentEdgeWithCommonIndex(int32_t common);

  /// @brief Method GetHashCode, addr 0x474c8d4, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetSpokes, addr 0x474d2b4, size 0x418, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>*
  GetSpokes(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings);

  /// @brief Method GetWingedEdges, addr 0x474dab0, size 0x70c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*
  GetWingedEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, bool oneWingPerFace);

  /// @brief Method GetWingedEdges, addr 0x474d9bc, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* GetWingedEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, bool oneWingPerFace);

  /// @brief Method MakeQuad, addr 0x474cb68, size 0x3d4, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> MakeQuad(::UnityEngine::ProBuilder::WingedEdge* left, ::UnityEngine::ProBuilder::WingedEdge* right);

  static inline ::UnityEngine::ProBuilder::WingedEdge* New_ctor();

  /// @brief Method SortCommonIndexesByAdjacency, addr 0x474d6cc, size 0x2e8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<int32_t>* SortCommonIndexesByAdjacency(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings,
                                                                                              ::System::Collections::Generic::HashSet_1<int32_t>* common);

  /// @brief Method SortEdgesByAdjacency, addr 0x474d008, size 0x114, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* SortEdgesByAdjacency(::UnityEngine::ProBuilder::Face* face);

  /// @brief Method SortEdgesByAdjacency, addr 0x474d11c, size 0x198, virtual false, abstract: false, final false
  static inline void SortEdgesByAdjacency(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* edges);

  /// @brief Method ToString, addr 0x474c974, size 0x1f4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::ProBuilder::EdgeLookup const& __cordl_internal_get__edge_k__BackingField() const;

  constexpr ::UnityEngine::ProBuilder::EdgeLookup& __cordl_internal_get__edge_k__BackingField();

  constexpr ::UnityEngine::ProBuilder::Face* const& __cordl_internal_get__face_k__BackingField() const;

  constexpr ::UnityEngine::ProBuilder::Face*& __cordl_internal_get__face_k__BackingField();

  constexpr ::UnityEngine::ProBuilder::WingedEdge* const& __cordl_internal_get__next_k__BackingField() const;

  constexpr ::UnityEngine::ProBuilder::WingedEdge*& __cordl_internal_get__next_k__BackingField();

  constexpr ::UnityEngine::ProBuilder::WingedEdge* const& __cordl_internal_get__opposite_k__BackingField() const;

  constexpr ::UnityEngine::ProBuilder::WingedEdge*& __cordl_internal_get__opposite_k__BackingField();

  constexpr ::UnityEngine::ProBuilder::WingedEdge* const& __cordl_internal_get__previous_k__BackingField() const;

  constexpr ::UnityEngine::ProBuilder::WingedEdge*& __cordl_internal_get__previous_k__BackingField();

  constexpr void __cordl_internal_set__edge_k__BackingField(::UnityEngine::ProBuilder::EdgeLookup value);

  constexpr void __cordl_internal_set__face_k__BackingField(::UnityEngine::ProBuilder::Face* value);

  constexpr void __cordl_internal_set__next_k__BackingField(::UnityEngine::ProBuilder::WingedEdge* value);

  constexpr void __cordl_internal_set__opposite_k__BackingField(::UnityEngine::ProBuilder::WingedEdge* value);

  constexpr void __cordl_internal_set__previous_k__BackingField(::UnityEngine::ProBuilder::WingedEdge* value);

  /// @brief Method .ctor, addr 0x474c750, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>* getStaticF_k_OppositeEdgeDictionary();

  /// @brief Method get_edge, addr 0x474c6fc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::EdgeLookup get_edge();

  /// @brief Method get_face, addr 0x474c710, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face* get_face();

  /// @brief Method get_next, addr 0x474c720, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::WingedEdge* get_next();

  /// @brief Method get_opposite, addr 0x474c740, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::WingedEdge* get_opposite();

  /// @brief Method get_previous, addr 0x474c730, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::WingedEdge* get_previous();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>"
  constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>* i___System__IEquatable_1___UnityEngine__ProBuilder__WingedEdge__() noexcept;

  static inline void setStaticF_k_OppositeEdgeDictionary(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>* value);

  /// @brief Method set_edge, addr 0x474c708, size 0x8, virtual false, abstract: false, final false
  inline void set_edge(::UnityEngine::ProBuilder::EdgeLookup value);

  /// @brief Method set_face, addr 0x474c718, size 0x8, virtual false, abstract: false, final false
  inline void set_face(::UnityEngine::ProBuilder::Face* value);

  /// @brief Method set_next, addr 0x474c728, size 0x8, virtual false, abstract: false, final false
  inline void set_next(::UnityEngine::ProBuilder::WingedEdge* value);

  /// @brief Method set_opposite, addr 0x474c748, size 0x8, virtual false, abstract: false, final false
  inline void set_opposite(::UnityEngine::ProBuilder::WingedEdge* value);

  /// @brief Method set_previous, addr 0x474c738, size 0x8, virtual false, abstract: false, final false
  inline void set_previous(::UnityEngine::ProBuilder::WingedEdge* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WingedEdge();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WingedEdge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WingedEdge(WingedEdge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WingedEdge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WingedEdge(WingedEdge const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14338 };

  /// @brief Field <edge>k__BackingField, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::ProBuilder::EdgeLookup ____edge_k__BackingField;

  /// @brief Field <face>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Face* ____face_k__BackingField;

  /// @brief Field <next>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::WingedEdge* ____next_k__BackingField;

  /// @brief Field <previous>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::WingedEdge* ____previous_k__BackingField;

  /// @brief Field <opposite>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::WingedEdge* ____opposite_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::WingedEdge, ____edge_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::WingedEdge, ____face_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::WingedEdge, ____next_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::WingedEdge, ____previous_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::WingedEdge, ____opposite_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::WingedEdge, 0x40>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::WingedEdge);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::WingedEdge*, "UnityEngine.ProBuilder", "WingedEdge");
NEED_NO_BOX(::UnityEngine::ProBuilder::WingedEdge___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::WingedEdge___c*, "UnityEngine.ProBuilder", "WingedEdge/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::WingedEdge___c__DisplayClass32_0*, "UnityEngine.ProBuilder", "WingedEdge/<>c__DisplayClass32_0");
