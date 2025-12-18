#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/ConstrainedPointSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PointSet_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConstrainedPointSet)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationMode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class ConstrainedPointSet;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet);
// Dependencies UnityEngine.ProBuilder.Poly2Tri.PointSet
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Poly2Tri.ConstrainedPointSet
class CORDL_TYPE ConstrainedPointSet : public ::UnityEngine::ProBuilder::Poly2Tri::PointSet {
public:
  // Declarations
  __declspec(property(get = get_EdgeIndex, put = set_EdgeIndex)) ::ArrayW<int32_t, ::Array<int32_t>*> EdgeIndex;

  __declspec(property(get = get_TriangulationMode)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode TriangulationMode;

  /// @brief Field <EdgeIndex>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__EdgeIndex_k__BackingField, put = __cordl_internal_set__EdgeIndex_k__BackingField)) ::ArrayW<int32_t, ::Array<int32_t>*> _EdgeIndex_k__BackingField;

  static inline ::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet* New_ctor(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points,
                                                                                   ::ArrayW<int32_t, ::Array<int32_t>*> index);

  /// @brief Method Prepare, addr 0x64fa61c, size 0x1a8, virtual true, abstract: false, final false
  inline void Prepare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__EdgeIndex_k__BackingField() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__EdgeIndex_k__BackingField();

  constexpr void __cordl_internal_set__EdgeIndex_k__BackingField(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x64fa56c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points, ::ArrayW<int32_t, ::Array<int32_t>*> index);

  /// @brief Method get_EdgeIndex, addr 0x64fa55c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_EdgeIndex();

  /// @brief Method get_TriangulationMode, addr 0x64fa614, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode();

  /// @brief Method set_EdgeIndex, addr 0x64fa564, size 0x8, virtual false, abstract: false, final false
  inline void set_EdgeIndex(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstrainedPointSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstrainedPointSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstrainedPointSet(ConstrainedPointSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstrainedPointSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstrainedPointSet(ConstrainedPointSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21584 };

  /// @brief Field <EdgeIndex>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____EdgeIndex_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet, ____EdgeIndex_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet, 0x28>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*, "UnityEngine.ProBuilder.Poly2Tri", "ConstrainedPointSet");
