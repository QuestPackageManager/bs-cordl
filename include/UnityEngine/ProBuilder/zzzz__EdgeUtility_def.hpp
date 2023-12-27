#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EdgeUtility)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
template <typename T1, typename T2> struct SimpleTuple_2;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class __EdgeUtility____c__DisplayClass0_0;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class EdgeUtility;
}
namespace UnityEngine::ProBuilder {
class __EdgeUtility____c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::EdgeUtility);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__EdgeUtility____c__DisplayClass0_0);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12120))
// CS Name: ::EdgeUtility::<>c__DisplayClass0_0*
class CORDL_TYPE __EdgeUtility____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field mesh, offset 0x10, size 0x8
  __declspec(property(get = __get_mesh, put = __set_mesh))::UnityEngine::ProBuilder::ProBuilderMesh* mesh;

  constexpr ::UnityEngine::ProBuilder::ProBuilderMesh*& __get_mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::ProBuilderMesh*> const& __get_mesh() const;

  constexpr void __set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh* value);

  static inline ::UnityEngine::ProBuilder::__EdgeUtility____c__DisplayClass0_0* New_ctor();

  /// @brief Method .ctor addr 0x2b3f7b4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetSharedVertexHandleEdges>b__0 addr 0x2b3ffb0 size 0x8 virtual false final false
  inline ::UnityEngine::ProBuilder::Edge _GetSharedVertexHandleEdges_b__0(::UnityEngine::ProBuilder::Edge x);

  // Ctor Parameters [CppParam { name: "", ty: "__EdgeUtility____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EdgeUtility____c__DisplayClass0_0(__EdgeUtility____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EdgeUtility____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EdgeUtility____c__DisplayClass0_0(__EdgeUtility____c__DisplayClass0_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EdgeUtility____c__DisplayClass0_0();

public:
  /// @brief Field mesh, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::ProBuilderMesh* ___mesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__EdgeUtility____c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::EdgeUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12121))
// CS Name: ::UnityEngine.ProBuilder::EdgeUtility*
class CORDL_TYPE EdgeUtility : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::UnityEngine::ProBuilder::__EdgeUtility____c__DisplayClass0_0;

  /// @brief Method GetSharedVertexHandleEdges addr 0x2b3f6e0 size 0xd4 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
  GetSharedVertexHandleEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges);

  /// @brief Method GetSharedVertexHandleEdge addr 0x2b3f7bc size 0x9c virtual false final false
  static inline ::UnityEngine::ProBuilder::Edge GetSharedVertexHandleEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge);

  /// @brief Method GetEdgeWithSharedVertexHandles addr 0x2b3f858 size 0x98 virtual false final false
  static inline ::UnityEngine::ProBuilder::Edge GetEdgeWithSharedVertexHandles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge);

  /// @brief Method ValidateEdge addr 0x2b3f8f0 size 0x250 virtual false final false
  static inline bool ValidateEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge,
                                  ByRef<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>> validEdge);

  /// @brief Method Contains addr 0x2b3fb54 size 0x88 virtual false final false
  static inline bool Contains(::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> edges, ::UnityEngine::ProBuilder::Edge edge);

  /// @brief Method Contains addr 0x2b3fbdc size 0x68 virtual false final false
  static inline bool Contains(::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> edges, int32_t x, int32_t y);

  /// @brief Method IndexOf addr 0x2b3fc44 size 0x170 virtual false final false
  static inline int32_t IndexOf(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges, ::UnityEngine::ProBuilder::Edge edge);

  /// @brief Method AllTriangles addr 0x2b3fdb4 size 0xd0 virtual false final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> AllTriangles(::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> edges);

  /// @brief Method GetFace addr 0x2b3fe84 size 0x118 virtual false final false
  static inline ::UnityEngine::ProBuilder::Face* GetFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge);

  // Ctor Parameters [CppParam { name: "", ty: "EdgeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EdgeUtility(EdgeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EdgeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EdgeUtility(EdgeUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EdgeUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::EdgeUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::EdgeUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::EdgeUtility*, "UnityEngine.ProBuilder", "EdgeUtility");
NEED_NO_BOX(::UnityEngine::ProBuilder::__EdgeUtility____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__EdgeUtility____c__DisplayClass0_0*, "UnityEngine.ProBuilder", "EdgeUtility/<>c__DisplayClass0_0");
