#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/DTSweepContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationContext_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DTSweepContext)
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFrontNode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFront;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepBasin;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepEdgeEvent;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepPointComparator;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class Triangulatable;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationAlgorithm;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationConstraint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepContext;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext);
// Dependencies UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Poly2Tri.DTSweepContext
class CORDL_TYPE DTSweepContext : public ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext {
public:
  // Declarations
  /// @brief Field ALPHA, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_ALPHA, put = __cordl_internal_set_ALPHA)) float_t ALPHA;

  __declspec(property(get = get_Algorithm)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm Algorithm;

  /// @brief Field Basin, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_Basin, put = __cordl_internal_set_Basin)) ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin* Basin;

  /// @brief Field EdgeEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_EdgeEvent, put = __cordl_internal_set_EdgeEvent)) ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* EdgeEvent;

  /// @brief Field Front, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Front, put = __cordl_internal_set_Front)) ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront* Front;

  __declspec(property(get = get_Head, put = set_Head)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Head;

  __declspec(property(get = get_IsDebugEnabled, put = set_IsDebugEnabled)) bool IsDebugEnabled;

  __declspec(property(get = get_Tail, put = set_Tail)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Tail;

  /// @brief Field <Head>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__Head_k__BackingField,
                      put = __cordl_internal_set__Head_k__BackingField)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* _Head_k__BackingField;

  /// @brief Field <Tail>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__Tail_k__BackingField,
                      put = __cordl_internal_set__Tail_k__BackingField)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* _Tail_k__BackingField;

  /// @brief Field _comparator, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__comparator, put = __cordl_internal_set__comparator)) ::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator* _comparator;

  /// @brief Method AddNode, addr 0x46fb584, size 0x18, virtual false, abstract: false, final false
  inline void AddNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method Clear, addr 0x46fd7c4, size 0x78, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method CreateAdvancingFront, addr 0x46f9df0, size 0x220, virtual false, abstract: false, final false
  inline void CreateAdvancingFront();

  /// @brief Method FinalizeTriangulation, addr 0x46fb024, size 0xf0, virtual false, abstract: false, final false
  inline void FinalizeTriangulation();

  /// @brief Method LocateNode, addr 0x46fb3c4, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method MapTriangleToNodes, addr 0x46faef0, size 0xdc, virtual false, abstract: false, final false
  inline void MapTriangleToNodes(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);

  /// @brief Method MeshClean, addr 0x46fb3c0, size 0x4, virtual false, abstract: false, final false
  inline void MeshClean(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);

  /// @brief Method MeshCleanReq, addr 0x46fd6a0, size 0x124, virtual false, abstract: false, final false
  inline void MeshCleanReq(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);

  /// @brief Method NewConstraint, addr 0x46fdc60, size 0x68, virtual true, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* NewConstraint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a,
                                                                                     ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* New_ctor();

  /// @brief Method PrepareTriangulation, addr 0x46fd8bc, size 0x29c, virtual true, abstract: false, final false
  inline void PrepareTriangulation(::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* t);

  /// @brief Method RemoveFromList, addr 0x46fafcc, size 0x58, virtual false, abstract: false, final false
  inline void RemoveFromList(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);

  /// @brief Method RemoveNode, addr 0x46fd2f8, size 0x18, virtual false, abstract: false, final false
  inline void RemoveNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  constexpr float_t const& __cordl_internal_get_ALPHA() const;

  constexpr float_t& __cordl_internal_get_ALPHA();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin* const& __cordl_internal_get_Basin() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin*& __cordl_internal_get_Basin();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* const& __cordl_internal_get_EdgeEvent() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*& __cordl_internal_get_EdgeEvent();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront* const& __cordl_internal_get_Front() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*& __cordl_internal_get_Front();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* const& __cordl_internal_get__Head_k__BackingField() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& __cordl_internal_get__Head_k__BackingField();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* const& __cordl_internal_get__Tail_k__BackingField() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& __cordl_internal_get__Tail_k__BackingField();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator* const& __cordl_internal_get__comparator() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator*& __cordl_internal_get__comparator();

  constexpr void __cordl_internal_set_ALPHA(float_t value);

  constexpr void __cordl_internal_set_Basin(::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin* value);

  constexpr void __cordl_internal_set_EdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* value);

  constexpr void __cordl_internal_set_Front(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront* value);

  constexpr void __cordl_internal_set__Head_k__BackingField(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  constexpr void __cordl_internal_set__Tail_k__BackingField(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  constexpr void __cordl_internal_set__comparator(::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator* value);

  /// @brief Method .ctor, addr 0x46f6ecc, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Algorithm, addr 0x46fdcc8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm get_Algorithm();

  /// @brief Method get_Head, addr 0x46fd508, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* get_Head();

  /// @brief Method get_IsDebugEnabled, addr 0x46fd5fc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsDebugEnabled();

  /// @brief Method get_Tail, addr 0x46fd518, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* get_Tail();

  /// @brief Method set_Head, addr 0x46fd510, size 0x8, virtual false, abstract: false, final false
  inline void set_Head(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  /// @brief Method set_IsDebugEnabled, addr 0x46fd604, size 0x74, virtual true, abstract: false, final false
  inline void set_IsDebugEnabled(bool value);

  /// @brief Method set_Tail, addr 0x46fd520, size 0x8, virtual false, abstract: false, final false
  inline void set_Tail(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DTSweepContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DTSweepContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DTSweepContext(DTSweepContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DTSweepContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DTSweepContext(DTSweepContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17833 };

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
static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, ___ALPHA) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, ___Front) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, ____Head_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, ____Tail_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, ___Basin) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, ___EdgeEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, ____comparator) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, 0x78>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepContext");
