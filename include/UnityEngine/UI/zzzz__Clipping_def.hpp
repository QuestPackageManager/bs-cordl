#pragma once
// IWYU pragma private; include "UnityEngine/UI/Clipping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Clipping)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UI {
class RectMask2D;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UI {
class Clipping;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::Clipping*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::Clipping*, "UnityEngine.UI", "Clipping");
// Dependencies System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Clipping
class CORDL_TYPE Clipping : public ::System::Object {
public:
  // Declarations
  /// @brief Method FindCullAndClipWorldRect, addr 0x6c17ec4, size 0x1c0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect FindCullAndClipWorldRect(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>* rectMaskParents, ::by_ref<bool> validRect);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Clipping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Clipping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Clipping(Clipping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Clipping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Clipping(Clipping const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17364 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UI::Clipping) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UI
