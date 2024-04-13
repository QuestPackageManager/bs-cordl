#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DTSweepBasin)
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFrontNode;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepBasin;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin);
// Type: UnityEngine.ProBuilder.Poly2Tri::DTSweepBasin
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::DTSweepBasin*
class CORDL_TYPE DTSweepBasin : public ::System::Object {
public:
  // Declarations
  /// @brief Field bottomNode, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_bottomNode, put = __cordl_internal_set_bottomNode))::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* bottomNode;

  /// @brief Field leftHighest, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_leftHighest, put = __cordl_internal_set_leftHighest)) bool leftHighest;

  /// @brief Field leftNode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_leftNode, put = __cordl_internal_set_leftNode))::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* leftNode;

  /// @brief Field rightNode, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_rightNode, put = __cordl_internal_set_rightNode))::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* rightNode;

  /// @brief Field width, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_width, put = __cordl_internal_set_width)) double_t width;

  static inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin* New_ctor();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& __cordl_internal_get_bottomNode();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> const& __cordl_internal_get_bottomNode() const;

  constexpr bool const& __cordl_internal_get_leftHighest() const;

  constexpr bool& __cordl_internal_get_leftHighest();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& __cordl_internal_get_leftNode();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> const& __cordl_internal_get_leftNode() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& __cordl_internal_get_rightNode();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> const& __cordl_internal_get_rightNode() const;

  constexpr double_t const& __cordl_internal_get_width() const;

  constexpr double_t& __cordl_internal_get_width();

  constexpr void __cordl_internal_set_bottomNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value);

  constexpr void __cordl_internal_set_leftHighest(bool value);

  constexpr void __cordl_internal_set_leftNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value);

  constexpr void __cordl_internal_set_rightNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value);

  constexpr void __cordl_internal_set_width(double_t value);

  /// @brief Method .ctor, addr 0x3065ca8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DTSweepBasin();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DTSweepBasin", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DTSweepBasin(DTSweepBasin&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DTSweepBasin", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DTSweepBasin(DTSweepBasin const&) = delete;

  /// @brief Field leftNode, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* ___leftNode;

  /// @brief Field bottomNode, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* ___bottomNode;

  /// @brief Field rightNode, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* ___rightNode;

  /// @brief Field width, offset: 0x28, size: 0x8, def value: None
  double_t ___width;

  /// @brief Field leftHighest, offset: 0x30, size: 0x1, def value: None
  bool ___leftHighest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin, ___leftNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin, ___bottomNode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin, ___rightNode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin, ___width) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin, ___leftHighest) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepBasin");
