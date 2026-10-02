#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/DepthOrderedDirtyTracking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DepthOrderedDirtyTracking)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypeClasses;
}
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypes;
}
namespace UnityEngine::UIElements::UIR {
class RenderData;
}
namespace UnityEngine::UIElements::UIR {
class RenderTree;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct DepthOrderedDirtyTracking;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking, "UnityEngine.UIElements.UIR", "DepthOrderedDirtyTracking");
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.DepthOrderedDirtyTracking
struct CORDL_TYPE DepthOrderedDirtyTracking {
public:
  // Declarations
  /// @brief Method ClearDirty, addr 0x717bd94, size 0x198, virtual false, abstract: false, final false
  inline void ClearDirty(::UnityEngine::UIElements::UIR::RenderData* renderData, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypesInverse);

  /// @brief Method EnsureFits, addr 0x7179410, size 0x128, virtual false, abstract: false, final false
  inline void EnsureFits(int32_t maxDepth);

  /// @brief Method RegisterDirty, addr 0x717bba8, size 0x1ec, virtual false, abstract: false, final false
  inline void RegisterDirty(::UnityEngine::UIElements::UIR::RenderData* renderData, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypes,
                            ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses dirtyTypeClass);

  /// @brief Method Reset, addr 0x717bf2c, size 0x74, virtual false, abstract: false, final false
  inline void Reset();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthOrderedDirtyTracking();

  // Ctor Parameters [CppParam { name: "owner", ty: "::UnityEngine::UIElements::UIR::RenderTree*", modifiers: "", def_value: None, comment: None }, CppParam { name: "heads", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderData*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "tails", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderData*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "minDepths", ty: "::ArrayW<int32_t>",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "maxDepths", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "dirtyID", ty:
  // "uint32_t", modifiers: "", def_value: None, comment: None }]
  constexpr DepthOrderedDirtyTracking(::UnityEngine::UIElements::UIR::RenderTree* owner, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderData*>* heads,
                                      ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderData*>* tails, ::ArrayW<int32_t> minDepths, ::ArrayW<int32_t> maxDepths,
                                      uint32_t dirtyID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5441 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field owner, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderTree* owner;

  /// @brief Field heads, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderData*>* heads;

  /// @brief Field tails, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderData*>* tails;

  /// @brief Field minDepths, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t> minDepths;

  /// @brief Field maxDepths, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t> maxDepths;

  /// @brief Field dirtyID, offset: 0x28, size: 0x4, def value: None
  uint32_t dirtyID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking, owner) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking, heads) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking, tails) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking, minDepths) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking, maxDepths) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking, dirtyID) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking) == 0x30, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
