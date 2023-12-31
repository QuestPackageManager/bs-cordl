#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class __Bevel____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __Bevel____c__DisplayClass0_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __Bevel____c__DisplayClass0_1;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __Bevel____c__DisplayClass0_2;
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
class __Bevel____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __Bevel____c__DisplayClass0_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __Bevel____c__DisplayClass0_1;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __Bevel____c__DisplayClass0_2;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::Bevel);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12243))
// CS Name: ::Bevel::<>c__DisplayClass0_0*
class CORDL_TYPE __Bevel____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ignore, offset 0x10, size 0x8
  __declspec(property(get = __get_ignore, put = __set_ignore))::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*>* ignore;

  /// @brief Field sharedIndexes, offset 0x18, size 0x8
  __declspec(property(get = __get_sharedIndexes, put = __set_sharedIndexes))::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> sharedIndexes;

  /// @brief Field <>9__7, offset 0x20, size 0x8
  __declspec(property(get = __get___9__7, put = __set___9__7))::System::Func_2<int32_t, int32_t>* __9__7;

  /// @brief Field <>9__8, offset 0x28, size 0x8
  __declspec(property(get = __get___9__8, put = __set___9__8))::System::Func_2<int32_t, int32_t>* __9__8;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*>*& __get_ignore();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*>*> const&
  __get_ignore() const;

  constexpr void __set_ignore(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*>* value);

  constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>& __get_sharedIndexes();

  constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> const& __get_sharedIndexes() const;

  constexpr void __set_sharedIndexes(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value);

  constexpr ::System::Func_2<int32_t, int32_t>*& __get___9__7();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<int32_t, int32_t>*> const& __get___9__7() const;

  constexpr void __set___9__7(::System::Func_2<int32_t, int32_t>* value);

  constexpr ::System::Func_2<int32_t, int32_t>*& __get___9__8();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<int32_t, int32_t>*> const& __get___9__8() const;

  constexpr void __set___9__8(::System::Func_2<int32_t, int32_t>* value);

  static inline ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ba0188, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <BevelEdges>b__7, addr 0x2ba10a4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t _BevelEdges_b__7(int32_t x);

  /// @brief Method <BevelEdges>b__8, addr 0x2ba10e0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t _BevelEdges_b__8(int32_t x);

  // Ctor Parameters [CppParam { name: "", ty: "__Bevel____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Bevel____c__DisplayClass0_0(__Bevel____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Bevel____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Bevel____c__DisplayClass0_0(__Bevel____c__DisplayClass0_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Bevel____c__DisplayClass0_0();

public:
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0, ___ignore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0, ___sharedIndexes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0, _____9__7) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0, _____9__8) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass0_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12119)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12244))
// CS Name: ::Bevel::<>c__DisplayClass0_1*
class CORDL_TYPE __Bevel____c__DisplayClass0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field lup, offset 0x10, size 0x10
  __declspec(property(get = __get_lup, put = __set_lup))::UnityEngine::ProBuilder::EdgeLookup lup;

  constexpr ::UnityEngine::ProBuilder::EdgeLookup& __get_lup();

  constexpr ::UnityEngine::ProBuilder::EdgeLookup const& __get_lup() const;

  constexpr void __set_lup(::UnityEngine::ProBuilder::EdgeLookup value);

  static inline ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1* New_ctor();

  /// @brief Method .ctor, addr 0x2ba0190, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <BevelEdges>b__4, addr 0x2ba111c, size 0x3c, virtual false, abstract: false, final false
  inline bool _BevelEdges_b__4(::UnityEngine::ProBuilder::WingedEdge* x);

  // Ctor Parameters [CppParam { name: "", ty: "__Bevel____c__DisplayClass0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Bevel____c__DisplayClass0_1(__Bevel____c__DisplayClass0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Bevel____c__DisplayClass0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Bevel____c__DisplayClass0_1(__Bevel____c__DisplayClass0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Bevel____c__DisplayClass0_1();

public:
  /// @brief Field lup, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::ProBuilder::EdgeLookup ___lup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1, ___lup) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass0_2
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12245))
// CS Name: ::Bevel::<>c__DisplayClass0_2*
class CORDL_TYPE __Bevel____c__DisplayClass0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field c, offset 0x10, size 0x4
  __declspec(property(get = __get_c, put = __set_c)) int32_t c;

  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __get_CS$__8__locals1, put = __set_CS$__8__locals1))::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0* CS$__8__locals1;

  constexpr int32_t& __get_c();

  constexpr int32_t const& __get_c() const;

  constexpr void __set_c(int32_t value);

  constexpr ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0*& __get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0*> const& __get_CS$__8__locals1() const;

  constexpr void __set_CS$__8__locals1(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0* value);

  static inline ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2* New_ctor();

  /// @brief Method .ctor, addr 0x2ba0e1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <BevelEdges>b__5, addr 0x2ba1158, size 0x100, virtual false, abstract: false, final false
  inline bool _BevelEdges_b__5(::UnityEngine::ProBuilder::WingedEdge* x);

  // Ctor Parameters [CppParam { name: "", ty: "__Bevel____c__DisplayClass0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Bevel____c__DisplayClass0_2(__Bevel____c__DisplayClass0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Bevel____c__DisplayClass0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Bevel____c__DisplayClass0_2(__Bevel____c__DisplayClass0_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Bevel____c__DisplayClass0_2();

public:
  /// @brief Field c, offset: 0x10, size: 0x4, def value: None
  int32_t ___c;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2, ___c) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12246))
// CS Name: ::Bevel::<>c*
class CORDL_TYPE __Bevel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::MeshOperations::__Bevel____c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0))::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* __9__0_0;

  /// @brief Field <>9__0_6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_6, put = setStaticF___9__0_6))::System::Func_2<
      ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>, int32_t>* __9__0_6;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_1, put = setStaticF___9__0_1))::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* __9__0_1;

  /// @brief Field <>9__0_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_2, put = setStaticF___9__0_2))::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* __9__0_2;

  /// @brief Field <>9__0_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_3, put = setStaticF___9__0_3))::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* __9__0_3;

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c* value);

  static inline ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c* getStaticF___9();

  static inline void setStaticF___9__0_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* getStaticF___9__0_0();

  static inline void
  setStaticF___9__0_6(::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>, int32_t>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>, int32_t>*
  getStaticF___9__0_6();

  static inline void setStaticF___9__0_1(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* getStaticF___9__0_1();

  static inline void setStaticF___9__0_2(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* getStaticF___9__0_2();

  static inline void setStaticF___9__0_3(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* getStaticF___9__0_3();

  static inline ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c* New_ctor();

  /// @brief Method .ctor, addr 0x2ba12bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <BevelEdges>b__0_0, addr 0x2ba12c4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_0(::UnityEngine::ProBuilder::FaceRebuildData* x);

  /// @brief Method <BevelEdges>b__0_6, addr 0x2ba12dc, size 0x50, virtual false, abstract: false, final false
  inline int32_t _BevelEdges_b__0_6(::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*> x);

  /// @brief Method <BevelEdges>b__0_1, addr 0x2ba132c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_1(::UnityEngine::ProBuilder::FaceRebuildData* x);

  /// @brief Method <BevelEdges>b__0_2, addr 0x2ba1344, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_2(::UnityEngine::ProBuilder::FaceRebuildData* x);

  /// @brief Method <BevelEdges>b__0_3, addr 0x2ba135c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_3(::UnityEngine::ProBuilder::FaceRebuildData* x);

  // Ctor Parameters [CppParam { name: "", ty: "__Bevel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Bevel____c(__Bevel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Bevel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Bevel____c(__Bevel____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Bevel____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::Bevel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12247))
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::Bevel*
class CORDL_TYPE Bevel : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c;

  using __c__DisplayClass0_2 = ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2;

  using __c__DisplayClass0_1 = ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1;

  using __c__DisplayClass0_0 = ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0;

  /// @brief Field k_BridgeIndexesTri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_BridgeIndexesTri, put = setStaticF_k_BridgeIndexesTri))::ArrayW<int32_t, ::Array<int32_t>*> k_BridgeIndexesTri;

  static inline void setStaticF_k_BridgeIndexesTri(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_k_BridgeIndexesTri();

  /// @brief Method BevelEdges, addr 0x2b9da40, size 0x2748, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* BevelEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                     ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges, float_t amount);

  /// @brief Method GetBridgeFaces, addr 0x2ba0568, size 0x8b4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>* GetBridgeFaces(
      ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::UnityEngine::ProBuilder::WingedEdge* left, ::UnityEngine::ProBuilder::WingedEdge* right,
      ::System::Collections::Generic::Dictionary_2<
          int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>>*>*
          holes);

  /// @brief Method SlideEdge, addr 0x2ba0198, size 0x3d0, virtual false, abstract: false, final false
  static inline void SlideEdge(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::UnityEngine::ProBuilder::WingedEdge* we, float_t amount);

  /// @brief Method GetLeadingEdge, addr 0x2ba0f28, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Edge GetLeadingEdge(::UnityEngine::ProBuilder::WingedEdge* wing, int32_t common);

  // Ctor Parameters [CppParam { name: "", ty: "Bevel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Bevel(Bevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Bevel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Bevel(Bevel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Bevel();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::Bevel, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::Bevel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::Bevel*, "UnityEngine.ProBuilder.MeshOperations", "Bevel");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0*, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_0");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1*, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_1");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2*, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_2");
