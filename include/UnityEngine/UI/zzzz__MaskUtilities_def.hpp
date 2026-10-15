#pragma once
// IWYU pragma private; include "UnityEngine/UI/MaskUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaskUtilities)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UI {
class IClippable;
}
namespace UnityEngine::UI {
class RectMask2D;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::UI {
class MaskUtilities;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::MaskUtilities*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::MaskUtilities*, "UnityEngine.UI", "MaskUtilities");
// Dependencies System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.MaskUtilities
class CORDL_TYPE MaskUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method FindRootSortOverrideCanvas, addr 0x72d5258, size 0x1c0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> FindRootSortOverrideCanvas(::UnityEngine::Transform* start);

  /// @brief Method GetRectMaskForClippable, addr 0x72d5a88, size 0x458, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::UI::RectMask2D> GetRectMaskForClippable(::UnityEngine::UI::IClippable* clippable);

  /// @brief Method GetRectMasksForClip, addr 0x72d5ee0, size 0x3ac, virtual false, abstract: false, final false
  static inline void GetRectMasksForClip(::UnityEngine::UI::RectMask2D* clipper, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>* masks);

  /// @brief Method GetStencilDepth, addr 0x72d5418, size 0x2a0, virtual false, abstract: false, final false
  static inline int32_t GetStencilDepth(::UnityEngine::Transform* transform, ::UnityEngine::Transform* stopAfter);

  /// @brief Method IsDescendantOrSelf, addr 0x72d5938, size 0x150, virtual false, abstract: false, final false
  static inline bool IsDescendantOrSelf(::UnityEngine::Transform* father, ::UnityEngine::Transform* child);

  static inline ::UnityEngine::UI::MaskUtilities* New_ctor();

  /// @brief Method Notify2DMaskStateChanged, addr 0x72d56b8, size 0x280, virtual false, abstract: false, final false
  static inline void Notify2DMaskStateChanged(::UnityEngine::Component* mask);

  /// @brief Method NotifyStencilStateChanged, addr 0x72d4aac, size 0x27c, virtual false, abstract: false, final false
  static inline void NotifyStencilStateChanged(::UnityEngine::Component* mask);

  /// @brief Method .ctor, addr 0x72d628c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaskUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaskUtilities", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaskUtilities(MaskUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaskUtilities", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaskUtilities(MaskUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18008 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UI::MaskUtilities) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UI
