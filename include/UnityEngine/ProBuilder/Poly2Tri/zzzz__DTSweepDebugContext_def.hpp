#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationDebugContext_def.hpp"
CORDL_MODULE_EXPORT(DTSweepDebugContext)
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepContext;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepConstraint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFrontNode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepDebugContext;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext);
// Type: UnityEngine.ProBuilder.Poly2Tri::DTSweepDebugContext
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15342))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15331))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::DTSweepDebugContext*
class CORDL_TYPE DTSweepDebugContext : public ::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext {
public:
  // Declarations
  /// @brief Field _primaryTriangle, offset 0x18, size 0x8
  __declspec(property(get = __get__primaryTriangle, put = __set__primaryTriangle))::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* _primaryTriangle;

  /// @brief Field _secondaryTriangle, offset 0x20, size 0x8
  __declspec(property(get = __get__secondaryTriangle, put = __set__secondaryTriangle))::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* _secondaryTriangle;

  /// @brief Field _activePoint, offset 0x28, size 0x8
  __declspec(property(get = __get__activePoint, put = __set__activePoint))::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* _activePoint;

  /// @brief Field _activeNode, offset 0x30, size 0x8
  __declspec(property(get = __get__activeNode, put = __set__activeNode))::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* _activeNode;

  /// @brief Field _activeConstraint, offset 0x38, size 0x8
  __declspec(property(get = __get__activeConstraint, put = __set__activeConstraint))::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* _activeConstraint;

  __declspec(property(get = get_PrimaryTriangle, put = set_PrimaryTriangle))::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* PrimaryTriangle;

  __declspec(property(get = get_SecondaryTriangle, put = set_SecondaryTriangle))::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* SecondaryTriangle;

  __declspec(property(get = get_ActivePoint, put = set_ActivePoint))::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ActivePoint;

  __declspec(property(get = get_ActiveNode, put = set_ActiveNode))::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* ActiveNode;

  __declspec(property(get = get_ActiveConstraint, put = set_ActiveConstraint))::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* ActiveConstraint;

  __declspec(property(get = get_IsDebugContext)) bool IsDebugContext;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*& __get__primaryTriangle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> const& __get__primaryTriangle() const;

  constexpr void __set__primaryTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*& __get__secondaryTriangle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> const& __get__secondaryTriangle() const;

  constexpr void __set__secondaryTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& __get__activePoint();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& __get__activePoint() const;

  constexpr void __set__activePoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& __get__activeNode();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> const& __get__activeNode() const;

  constexpr void __set__activeNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*& __get__activeConstraint();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*> const& __get__activeConstraint() const;

  constexpr void __set__activeConstraint(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* value);

  /// @brief Method get_PrimaryTriangle addr 0x2b34c60 size 0x8 virtual false final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* get_PrimaryTriangle();

  /// @brief Method set_PrimaryTriangle addr 0x2b32870 size 0x4c virtual false final false
  inline void set_PrimaryTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value);

  /// @brief Method get_SecondaryTriangle addr 0x2b34c68 size 0x8 virtual false final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* get_SecondaryTriangle();

  /// @brief Method set_SecondaryTriangle addr 0x2b33968 size 0x4c virtual false final false
  inline void set_SecondaryTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value);

  /// @brief Method get_ActivePoint addr 0x2b34c70 size 0x8 virtual false final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* get_ActivePoint();

  /// @brief Method set_ActivePoint addr 0x2b34c78 size 0x4c virtual false final false
  inline void set_ActivePoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  /// @brief Method get_ActiveNode addr 0x2b34cc4 size 0x8 virtual false final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* get_ActiveNode();

  /// @brief Method set_ActiveNode addr 0x2b32078 size 0x4c virtual false final false
  inline void set_ActiveNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value);

  /// @brief Method get_ActiveConstraint addr 0x2b34ccc size 0x8 virtual false final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* get_ActiveConstraint();

  /// @brief Method set_ActiveConstraint addr 0x2b3165c size 0x4c virtual false final false
  inline void set_ActiveConstraint(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* value);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext* New_ctor(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);

  /// @brief Method .ctor addr 0x2b345f8 size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);

  /// @brief Method get_IsDebugContext addr 0x2b34cfc size 0x8 virtual false final false
  inline bool get_IsDebugContext();

  /// @brief Method Clear addr 0x2b34d04 size 0x44 virtual true final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "DTSweepDebugContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DTSweepDebugContext(DTSweepDebugContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DTSweepDebugContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DTSweepDebugContext(DTSweepDebugContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DTSweepDebugContext();

public:
  /// @brief Field _primaryTriangle, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ____primaryTriangle;

  /// @brief Field _secondaryTriangle, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ____secondaryTriangle;

  /// @brief Field _activePoint, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ____activePoint;

  /// @brief Field _activeNode, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* ____activeNode;

  /// @brief Field _activeConstraint, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* ____activeConstraint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext, 0x40>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepDebugContext");
