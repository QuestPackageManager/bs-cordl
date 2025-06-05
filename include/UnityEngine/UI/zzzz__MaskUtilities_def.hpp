#pragma once
// IWYU pragma private; include "UnityEngine/UI/MaskUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::UnityEngine::UI::MaskUtilities);
// Dependencies System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.MaskUtilities
class CORDL_TYPE MaskUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method FindRootSortOverrideCanvas, addr 0x4abf5a8, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> FindRootSortOverrideCanvas(::UnityEngine::Transform* start);

  /// @brief Method GetRectMaskForClippable, addr 0x4ac0224, size 0x414, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::UI::RectMask2D> GetRectMaskForClippable(::UnityEngine::UI::IClippable* clippable);

  /// @brief Method GetRectMasksForClip, addr 0x4ac0b78, size 0x360, virtual false, abstract: false, final false
  static inline void GetRectMasksForClip(::UnityEngine::UI::RectMask2D* clipper, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>* masks);

  /// @brief Method GetStencilDepth, addr 0x4abf748, size 0x288, virtual false, abstract: false, final false
  static inline int32_t GetStencilDepth(::UnityEngine::Transform* transform, ::UnityEngine::Transform* stopAfter);

  /// @brief Method IsDescendantOrSelf, addr 0x4ac0a20, size 0x158, virtual false, abstract: false, final false
  static inline bool IsDescendantOrSelf(::UnityEngine::Transform* father, ::UnityEngine::Transform* child);

  static inline ::UnityEngine::UI::MaskUtilities* New_ctor();

  /// @brief Method Notify2DMaskStateChanged, addr 0x4ac07c4, size 0x25c, virtual false, abstract: false, final false
  static inline void Notify2DMaskStateChanged(::UnityEngine::Component* mask);

  /// @brief Method NotifyStencilStateChanged, addr 0x4abee4c, size 0x258, virtual false, abstract: false, final false
  static inline void NotifyStencilStateChanged(::UnityEngine::Component* mask);

  /// @brief Method .ctor, addr 0x4ac0ed8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaskUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaskUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaskUtilities(MaskUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaskUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaskUtilities(MaskUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15116 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::MaskUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::MaskUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::MaskUtilities*, "UnityEngine.UI", "MaskUtilities");
