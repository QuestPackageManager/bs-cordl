#pragma once
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
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15325))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::AdvancingFrontNode*
class CORDL_TYPE AdvancingFrontNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field Next, offset 0x10, size 0x8
  __declspec(property(get = __get_Next, put = __set_Next))::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Next;

  /// @brief Field Prev, offset 0x18, size 0x8
  __declspec(property(get = __get_Prev, put = __set_Prev))::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Prev;

  /// @brief Field Value, offset 0x20, size 0x8
  __declspec(property(get = __get_Value, put = __set_Value)) double_t Value;

  /// @brief Field Point, offset 0x28, size 0x8
  __declspec(property(get = __get_Point, put = __set_Point))::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Point;

  /// @brief Field Triangle, offset 0x30, size 0x8
  __declspec(property(get = __get_Triangle, put = __set_Triangle))::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* Triangle;

  __declspec(property(get = get_HasNext)) bool HasNext;

  __declspec(property(get = get_HasPrev)) bool HasPrev;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& __get_Next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> const& __get_Next() const;

  constexpr void __set_Next(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& __get_Prev();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> const& __get_Prev() const;

  constexpr void __set_Prev(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value);

  constexpr double_t& __get_Value();

  constexpr double_t const& __get_Value() const;

  constexpr void __set_Value(double_t value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& __get_Point();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& __get_Point() const;

  constexpr void __set_Point(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*& __get_Triangle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> const& __get_Triangle() const;

  constexpr void __set_Triangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* New_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method .ctor, addr 0x2b30cf4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method get_HasNext, addr 0x2b30d2c, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasNext();

  /// @brief Method get_HasPrev, addr 0x2b30d3c, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasPrev();

  // Ctor Parameters [CppParam { name: "", ty: "AdvancingFrontNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdvancingFrontNode(AdvancingFrontNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdvancingFrontNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdvancingFrontNode(AdvancingFrontNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdvancingFrontNode();

public:
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
