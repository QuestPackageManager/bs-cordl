#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class IEquatable_1;
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
class __WingedEdge____c;
}
namespace UnityEngine::ProBuilder {
class __WingedEdge____c__DisplayClass32_0;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace UnityEngine::ProBuilder {
class __WingedEdge____c;
}
namespace UnityEngine::ProBuilder {
class __WingedEdge____c__DisplayClass32_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::WingedEdge);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__WingedEdge____c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0);
// Type: ::<>c__DisplayClass32_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::WingedEdge::<>c__DisplayClass32_0*
class CORDL_TYPE __WingedEdge____c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field common, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_common, put = __cordl_internal_set_common))::System::Collections::Generic::HashSet_1<int32_t>* common;

  static inline ::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0* New_ctor();

  /// @brief Method <SortCommonIndexesByAdjacency>b__0, addr 0x2cce04c, size 0x84, virtual false, abstract: false, final false
  inline bool _SortCommonIndexesByAdjacency_b__0(::UnityEngine::ProBuilder::WingedEdge* x);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_common();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __cordl_internal_get_common() const;

  constexpr void __cordl_internal_set_common(::System::Collections::Generic::HashSet_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x2ccd77c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WingedEdge____c__DisplayClass32_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WingedEdge____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WingedEdge____c__DisplayClass32_0(__WingedEdge____c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WingedEdge____c__DisplayClass32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WingedEdge____c__DisplayClass32_0(__WingedEdge____c__DisplayClass32_0 const&) = delete;

  /// @brief Field common, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___common;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0, ___common) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::WingedEdge::<>c*
class CORDL_TYPE __WingedEdge____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::__WingedEdge____c* __9;

  /// @brief Field <>9__32_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__32_1, put = setStaticF___9__32_1))::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* __9__32_1;

  /// @brief Field <>9__32_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__32_2, put = setStaticF___9__32_2))::System::Func_2<::UnityEngine::ProBuilder::Edge, int32_t>* __9__32_2;

  static inline ::UnityEngine::ProBuilder::__WingedEdge____c* New_ctor();

  /// @brief Method <SortCommonIndexesByAdjacency>b__32_1, addr 0x2cce13c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge _SortCommonIndexesByAdjacency_b__32_1(::UnityEngine::ProBuilder::WingedEdge* y);

  /// @brief Method <SortCommonIndexesByAdjacency>b__32_2, addr 0x2cce154, size 0x8, virtual false, abstract: false, final false
  inline int32_t _SortCommonIndexesByAdjacency_b__32_2(::UnityEngine::ProBuilder::Edge x);

  /// @brief Method .ctor, addr 0x2cce134, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::__WingedEdge____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* getStaticF___9__32_1();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Edge, int32_t>* getStaticF___9__32_2();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::__WingedEdge____c* value);

  static inline void setStaticF___9__32_1(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value);

  static inline void setStaticF___9__32_2(::System::Func_2<::UnityEngine::ProBuilder::Edge, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WingedEdge____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WingedEdge____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WingedEdge____c(__WingedEdge____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WingedEdge____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WingedEdge____c(__WingedEdge____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__WingedEdge____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::WingedEdge
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::WingedEdge*
class CORDL_TYPE WingedEdge : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::__WingedEdge____c;

  using __c__DisplayClass32_0 = ::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0;

  /// @brief Field <edge>k__BackingField, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__edge_k__BackingField, put = __cordl_internal_set__edge_k__BackingField))::UnityEngine::ProBuilder::EdgeLookup _edge_k__BackingField;

  /// @brief Field <face>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__face_k__BackingField, put = __cordl_internal_set__face_k__BackingField))::UnityEngine::ProBuilder::Face* _face_k__BackingField;

  /// @brief Field <next>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__next_k__BackingField, put = __cordl_internal_set__next_k__BackingField))::UnityEngine::ProBuilder::WingedEdge* _next_k__BackingField;

  /// @brief Field <opposite>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__opposite_k__BackingField, put = __cordl_internal_set__opposite_k__BackingField))::UnityEngine::ProBuilder::WingedEdge* _opposite_k__BackingField;

  /// @brief Field <previous>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__previous_k__BackingField, put = __cordl_internal_set__previous_k__BackingField))::UnityEngine::ProBuilder::WingedEdge* _previous_k__BackingField;

  __declspec(property(get = get_edge, put = set_edge))::UnityEngine::ProBuilder::EdgeLookup edge;

  __declspec(property(get = get_face, put = set_face))::UnityEngine::ProBuilder::Face* face;

  /// @brief Field k_OppositeEdgeDictionary, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_k_OppositeEdgeDictionary,
      put = setStaticF_k_OppositeEdgeDictionary))::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>* k_OppositeEdgeDictionary;

  __declspec(property(get = get_next, put = set_next))::UnityEngine::ProBuilder::WingedEdge* next;

  __declspec(property(get = get_opposite, put = set_opposite))::UnityEngine::ProBuilder::WingedEdge* opposite;

  __declspec(property(get = get_previous, put = set_previous))::UnityEngine::ProBuilder::WingedEdge* previous;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>*() noexcept;

  /// @brief Method Count, addr 0x2ccc734, size 0x34, virtual false, abstract: false, final false
  inline int32_t Count();

  /// @brief Method Equals, addr 0x2ccc640, size 0xd4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2ccc608, size 0x38, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ProBuilder::WingedEdge* other);

  /// @brief Method GetAdjacentEdgeWithCommonIndex, addr 0x2cccd10, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::WingedEdge* GetAdjacentEdgeWithCommonIndex(int32_t common);

  /// @brief Method GetHashCode, addr 0x2ccc714, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetSpokes, addr 0x2ccd048, size 0x430, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>*
  GetSpokes(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings);

  /// @brief Method GetWingedEdges, addr 0x2ccd87c, size 0x744, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*
  GetWingedEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, bool oneWingPerFace);

  /// @brief Method GetWingedEdges, addr 0x2ccd784, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* GetWingedEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, bool oneWingPerFace);

  /// @brief Method MakeQuad, addr 0x2ccc934, size 0x3dc, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> MakeQuad(::UnityEngine::ProBuilder::WingedEdge* left, ::UnityEngine::ProBuilder::WingedEdge* right);

  static inline ::UnityEngine::ProBuilder::WingedEdge* New_ctor();

  /// @brief Method SortCommonIndexesByAdjacency, addr 0x2ccd478, size 0x304, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<int32_t>* SortCommonIndexesByAdjacency(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings,
                                                                                              ::System::Collections::Generic::HashSet_1<int32_t>* common);

  /// @brief Method SortEdgesByAdjacency, addr 0x2cccd94, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* SortEdgesByAdjacency(::UnityEngine::ProBuilder::Face* face);

  /// @brief Method SortEdgesByAdjacency, addr 0x2ccceac, size 0x19c, virtual false, abstract: false, final false
  static inline void SortEdgesByAdjacency(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* edges);

  /// @brief Method ToString, addr 0x2ccc768, size 0x1cc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::ProBuilder::EdgeLookup const& __cordl_internal_get__edge_k__BackingField() const;

  constexpr ::UnityEngine::ProBuilder::EdgeLookup& __cordl_internal_get__edge_k__BackingField();

  constexpr ::UnityEngine::ProBuilder::Face*& __cordl_internal_get__face_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Face*> const& __cordl_internal_get__face_k__BackingField() const;

  constexpr ::UnityEngine::ProBuilder::WingedEdge*& __cordl_internal_get__next_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::WingedEdge*> const& __cordl_internal_get__next_k__BackingField() const;

  constexpr ::UnityEngine::ProBuilder::WingedEdge*& __cordl_internal_get__opposite_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::WingedEdge*> const& __cordl_internal_get__opposite_k__BackingField() const;

  constexpr ::UnityEngine::ProBuilder::WingedEdge*& __cordl_internal_get__previous_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::WingedEdge*> const& __cordl_internal_get__previous_k__BackingField() const;

  constexpr void __cordl_internal_set__edge_k__BackingField(::UnityEngine::ProBuilder::EdgeLookup value);

  constexpr void __cordl_internal_set__face_k__BackingField(::UnityEngine::ProBuilder::Face* value);

  constexpr void __cordl_internal_set__next_k__BackingField(::UnityEngine::ProBuilder::WingedEdge* value);

  constexpr void __cordl_internal_set__opposite_k__BackingField(::UnityEngine::ProBuilder::WingedEdge* value);

  constexpr void __cordl_internal_set__previous_k__BackingField(::UnityEngine::ProBuilder::WingedEdge* value);

  /// @brief Method .ctor, addr 0x2ccc600, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>* getStaticF_k_OppositeEdgeDictionary();

  /// @brief Method get_edge, addr 0x2ccc5ac, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::EdgeLookup get_edge();

  /// @brief Method get_face, addr 0x2ccc5c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face* get_face();

  /// @brief Method get_next, addr 0x2ccc5d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::WingedEdge* get_next();

  /// @brief Method get_opposite, addr 0x2ccc5f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::WingedEdge* get_opposite();

  /// @brief Method get_previous, addr 0x2ccc5e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::WingedEdge* get_previous();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>"
  constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>* i___System__IEquatable_1___UnityEngine__ProBuilder__WingedEdge__() noexcept;

  static inline void setStaticF_k_OppositeEdgeDictionary(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>* value);

  /// @brief Method set_edge, addr 0x2ccc5b8, size 0x8, virtual false, abstract: false, final false
  inline void set_edge(::UnityEngine::ProBuilder::EdgeLookup value);

  /// @brief Method set_face, addr 0x2ccc5c8, size 0x8, virtual false, abstract: false, final false
  inline void set_face(::UnityEngine::ProBuilder::Face* value);

  /// @brief Method set_next, addr 0x2ccc5d8, size 0x8, virtual false, abstract: false, final false
  inline void set_next(::UnityEngine::ProBuilder::WingedEdge* value);

  /// @brief Method set_opposite, addr 0x2ccc5f8, size 0x8, virtual false, abstract: false, final false
  inline void set_opposite(::UnityEngine::ProBuilder::WingedEdge* value);

  /// @brief Method set_previous, addr 0x2ccc5e8, size 0x8, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::WingedEdge, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::WingedEdge, ____edge_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::WingedEdge, ____face_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::WingedEdge, ____next_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::WingedEdge, ____previous_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::WingedEdge, ____opposite_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::WingedEdge);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::WingedEdge*, "UnityEngine.ProBuilder", "WingedEdge");
NEED_NO_BOX(::UnityEngine::ProBuilder::__WingedEdge____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__WingedEdge____c*, "UnityEngine.ProBuilder", "WingedEdge/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0*, "UnityEngine.ProBuilder", "WingedEdge/<>c__DisplayClass32_0");
