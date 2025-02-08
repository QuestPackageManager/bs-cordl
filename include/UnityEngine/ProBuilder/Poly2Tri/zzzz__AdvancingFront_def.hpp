#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/AdvancingFront.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdvancingFront)
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFrontNode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFront;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront);
// Dependencies System.Object
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Poly2Tri.AdvancingFront
class CORDL_TYPE AdvancingFront : public ::System::Object {
public:
  // Declarations
  /// @brief Field Head, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Head, put = __cordl_internal_set_Head)) ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Head;

  /// @brief Field Search, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Search, put = __cordl_internal_set_Search)) ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Search;

  /// @brief Field Tail, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Tail, put = __cordl_internal_set_Tail)) ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Tail;

  /// @brief Method AddNode, addr 0x46fe02c, size 0x4, virtual false, abstract: false, final false
  inline void AddNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FindSearchNode, addr 0x46fe120, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* FindSearchNode(double_t x);

  /// @brief Method LocateNode, addr 0x46fe128, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method LocateNode, addr 0x46fe140, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode(double_t x);

  /// @brief Method LocatePoint, addr 0x46fe19c, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocatePoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront* New_ctor(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* head,
                                                                              ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* tail);

  /// @brief Method RemoveNode, addr 0x46fe030, size 0x4, virtual false, abstract: false, final false
  inline void RemoveNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method ToString, addr 0x46fe034, size 0xec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* const& __cordl_internal_get_Head() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& __cordl_internal_get_Head();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* const& __cordl_internal_get_Search() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& __cordl_internal_get_Search();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* const& __cordl_internal_get_Tail() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& __cordl_internal_get_Tail();

  constexpr void __cordl_internal_set_Head(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value);

  constexpr void __cordl_internal_set_Search(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value);

  constexpr void __cordl_internal_set_Tail(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value);

  /// @brief Method .ctor, addr 0x46fdffc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* head, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* tail);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdvancingFront();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdvancingFront", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdvancingFront(AdvancingFront&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdvancingFront", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdvancingFront(AdvancingFront const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17820 };

  /// @brief Field Head, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* ___Head;

  /// @brief Field Tail, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* ___Tail;

  /// @brief Field Search, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* ___Search;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront, ___Head) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront, ___Tail) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront, ___Search) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront, 0x28>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*, "UnityEngine.ProBuilder.Poly2Tri", "AdvancingFront");
