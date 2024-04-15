#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(MultipleDisplayUtilities)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UI {
class MultipleDisplayUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::MultipleDisplayUtilities);
// Type: UnityEngine.UI::MultipleDisplayUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::MultipleDisplayUtilities*
class CORDL_TYPE MultipleDisplayUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetRelativeMousePositionForDrag, addr 0x32cbcbc, size 0x68, virtual false, abstract: false, final false
  static inline bool GetRelativeMousePositionForDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ByRef<::UnityEngine::Vector2> position);

  /// @brief Method RelativeMouseAtScaled, addr 0x32cbd24, size 0x468, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 RelativeMouseAtScaled(::UnityEngine::Vector2 position);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultipleDisplayUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultipleDisplayUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultipleDisplayUtilities(MultipleDisplayUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultipleDisplayUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultipleDisplayUtilities(MultipleDisplayUtilities const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::MultipleDisplayUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::MultipleDisplayUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::MultipleDisplayUtilities*, "UnityEngine.UI", "MultipleDisplayUtilities");
