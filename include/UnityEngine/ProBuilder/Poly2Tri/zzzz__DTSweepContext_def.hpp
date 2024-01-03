#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationContext_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DTSweepContext)
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepEdgeEvent;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepPointComparator;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationConstraint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationAlgorithm;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class Triangulatable;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepBasin;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFront;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFrontNode;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepContext;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext);
// Type: UnityEngine.ProBuilder.Poly2Tri::DTSweepContext
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15341))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15330))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::DTSweepContext*
class CORDL_TYPE DTSweepContext : public ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext {
public:
  // Declarations
  /// @brief Field ALPHA, offset 0x40, size 0x4
  __declspec(property(get = __get_ALPHA, put = __set_ALPHA)) float_t ALPHA;

  /// @brief Field Front, offset 0x48, size 0x8
  __declspec(property(get = __get_Front, put = __set_Front))::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront* Front;

  /// @brief Field <Head>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __get__Head_k__BackingField, put = __set__Head_k__BackingField))::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* _Head_k__BackingField;

  /// @brief Field <Tail>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __get__Tail_k__BackingField, put = __set__Tail_k__BackingField))::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* _Tail_k__BackingField;

  /// @brief Field Basin, offset 0x60, size 0x8
  __declspec(property(get = __get_Basin, put = __set_Basin))::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin* Basin;

  /// @brief Field EdgeEvent, offset 0x68, size 0x8
  __declspec(property(get = __get_EdgeEvent, put = __set_EdgeEvent))::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* EdgeEvent;

  /// @brief Field _comparator, offset 0x70, size 0x8
  __declspec(property(get = __get__comparator, put = __set__comparator))::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator* _comparator;

  __declspec(property(get = get_Head, put = set_Head))::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Head;

  __declspec(property(get = get_Tail, put = set_Tail))::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Tail;

  __declspec(property(get = get_IsDebugEnabled, put = set_IsDebugEnabled)) bool IsDebugEnabled;

  __declspec(property(get = get_Algorithm))::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm Algorithm;

  constexpr float_t& __get_ALPHA();

  constexpr float_t const& __get_ALPHA() const;

  constexpr void __set_ALPHA(float_t value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*& __get_Front();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*> const& __get_Front() const;

  constexpr void __set_Front(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront* value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& __get__Head_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& __get__Head_k__BackingField() const;

  constexpr void __set__Head_k__BackingField(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& __get__Tail_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& __get__Tail_k__BackingField() const;

  constexpr void __set__Tail_k__BackingField(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin*& __get_Basin();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin*> const& __get_Basin() const;

  constexpr void __set_Basin(::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin* value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*& __get_EdgeEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*> const& __get_EdgeEvent() const;

  constexpr void __set_EdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator*& __get__comparator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator*> const& __get__comparator() const;

  constexpr void __set__comparator(::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator* value);

  /// @brief Method get_Head, addr 0x2b34484, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* get_Head();

  /// @brief Method set_Head, addr 0x2b3448c, size 0x8, virtual false, abstract: false, final false
  inline void set_Head(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  /// @brief Method get_Tail, addr 0x2b34494, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* get_Tail();

  /// @brief Method set_Tail, addr 0x2b3449c, size 0x8, virtual false, abstract: false, final false
  inline void set_Tail(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* New_ctor();

  /// @brief Method .ctor, addr 0x2b2dd28, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsDebugEnabled, addr 0x2b34574, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsDebugEnabled();

  /// @brief Method set_IsDebugEnabled, addr 0x2b3457c, size 0x7c, virtual true, abstract: false, final false
  inline void set_IsDebugEnabled(bool value);

  /// @brief Method RemoveFromList, addr 0x2b31f30, size 0x58, virtual false, abstract: false, final false
  inline void RemoveFromList(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);

  /// @brief Method MeshClean, addr 0x2b32328, size 0x4, virtual false, abstract: false, final false
  inline void MeshClean(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);

  /// @brief Method MeshCleanReq, addr 0x2b34620, size 0x124, virtual false, abstract: false, final false
  inline void MeshCleanReq(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);

  /// @brief Method Clear, addr 0x2b34744, size 0x78, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method AddNode, addr 0x2b324f0, size 0x18, virtual false, abstract: false, final false
  inline void AddNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method RemoveNode, addr 0x2b34270, size 0x18, virtual false, abstract: false, final false
  inline void RemoveNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method LocateNode, addr 0x2b3232c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method CreateAdvancingFront, addr 0x2b30d4c, size 0x228, virtual false, abstract: false, final false
  inline void CreateAdvancingFront();

  /// @brief Method MapTriangleToNodes, addr 0x2b31e54, size 0xdc, virtual false, abstract: false, final false
  inline void MapTriangleToNodes(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);

  /// @brief Method PrepareTriangulation, addr 0x2b3483c, size 0x2a4, virtual true, abstract: false, final false
  inline void PrepareTriangulation(::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* t);

  /// @brief Method FinalizeTriangulation, addr 0x2b31f88, size 0xf0, virtual false, abstract: false, final false
  inline void FinalizeTriangulation();

  /// @brief Method NewConstraint, addr 0x2b34be8, size 0x70, virtual true, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* NewConstraint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a,
                                                                                     ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b);

  /// @brief Method get_Algorithm, addr 0x2b34c58, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm get_Algorithm();

  // Ctor Parameters [CppParam { name: "", ty: "DTSweepContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DTSweepContext(DTSweepContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DTSweepContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DTSweepContext(DTSweepContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DTSweepContext();

public:
  /// @brief Field ALPHA, offset: 0x40, size: 0x4, def value: None
  float_t ___ALPHA;

  /// @brief Field Front, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront* ___Front;

  /// @brief Field <Head>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ____Head_k__BackingField;

  /// @brief Field <Tail>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ____Tail_k__BackingField;

  /// @brief Field Basin, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin* ___Basin;

  /// @brief Field EdgeEvent, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* ___EdgeEvent;

  /// @brief Field _comparator, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator* ____comparator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, ___ALPHA) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, ___Front) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, ____Head_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, ____Tail_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, ___Basin) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, ___EdgeEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, ____comparator) == 0x70, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepContext");
