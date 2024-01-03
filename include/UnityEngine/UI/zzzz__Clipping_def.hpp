#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
MARK_REF_PTR_T(::UnityEngine::UI::Clipping);
// Type: UnityEngine.UI::Clipping
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13025))
// CS Name: ::UnityEngine.UI::Clipping*
class CORDL_TYPE Clipping : public ::System::Object {
public:
  // Declarations
  /// @brief Method FindCullAndClipWorldRect, addr 0x2d53358, size 0x260, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect FindCullAndClipWorldRect(::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>* rectMaskParents, ByRef<bool> validRect);

  // Ctor Parameters [CppParam { name: "", ty: "Clipping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Clipping(Clipping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Clipping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Clipping(Clipping const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Clipping();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Clipping, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::Clipping);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Clipping*, "UnityEngine.UI", "Clipping");
