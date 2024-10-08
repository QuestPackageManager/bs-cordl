#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlObjectAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlAsset_def.hpp"
CORDL_MODULE_EXPORT(UxmlObjectAsset)
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlObjectAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlObjectAsset);
// Type: UnityEngine.UIElements::UxmlObjectAsset
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UxmlObjectAsset*
class CORDL_TYPE UxmlObjectAsset : public ::UnityEngine::UIElements::UxmlAsset {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlObjectAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlObjectAsset(UxmlObjectAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlObjectAsset(UxmlObjectAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6247 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlObjectAsset, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlObjectAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlObjectAsset*, "UnityEngine.UIElements", "UxmlObjectAsset");
