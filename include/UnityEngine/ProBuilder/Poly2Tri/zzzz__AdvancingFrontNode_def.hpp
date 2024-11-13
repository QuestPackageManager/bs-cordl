#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/AdvancingFrontNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdvancingFrontNode)
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFrontNode;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode);
// Type: UnityEngine.ProBuilder.Poly2Tri::AdvancingFrontNode
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::AdvancingFrontNode*
class CORDL_TYPE AdvancingFrontNode : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HasNext)) bool HasNext;

  __declspec(property(get = get_HasPrev)) bool HasPrev;

  /// @brief Field Next, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next)) ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Next;

  /// @brief Field Point, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Point, put = __cordl_internal_set_Point)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Point;

  /// @brief Field Prev, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Prev, put = __cordl_internal_set_Prev)) ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Prev;

  /// @brief Field Triangle, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Triangle, put = __cordl_internal_set_Triangle)) ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* Triangle;

  /// @brief Field Value, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Value, put = __cordl_internal_set_Value)) double_t Value;

  static inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* New_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& __cordl_internal_get_Next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> const& __cordl_internal_get_Next() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& __cordl_internal_get_Point();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& __cordl_internal_get_Point() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& __cordl_internal_get_Prev();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> const& __cordl_internal_get_Prev() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*& __cordl_internal_get_Triangle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> const& __cordl_internal_get_Triangle() const;

  constexpr double_t const& __cordl_internal_get_Value() const;

  constexpr double_t& __cordl_internal_get_Value();

  constexpr void __cordl_internal_set_Next(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value);

  constexpr void __cordl_internal_set_Point(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  constexpr void __cordl_internal_set_Prev(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value);

  constexpr void __cordl_internal_set_Triangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value);

  constexpr void __cordl_internal_set_Value(double_t value);

  /// @brief Method .ctor, addr 0x46970bc, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method get_HasNext, addr 0x46970f4, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasNext();

  /// @brief Method get_HasPrev, addr 0x4697104, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasPrev();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdvancingFrontNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdvancingFrontNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdvancingFrontNode(AdvancingFrontNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdvancingFrontNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdvancingFrontNode(AdvancingFrontNode const&) = delete;

  /// @brief Field Next, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* ___Next;

  /// @brief Field Prev, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* ___Prev;

  /// @brief Field Value, offset: 0x20, size: 0x8, def value: None
  double_t ___Value;

  /// @brief Field Point, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ___Point;

  /// @brief Field Triangle, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ___Triangle;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17733 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode, ___Next) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode, ___Prev) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode, ___Value) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode, ___Point) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode, ___Triangle) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, "UnityEngine.ProBuilder.Poly2Tri", "AdvancingFrontNode");
