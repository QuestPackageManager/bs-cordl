#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IGroupBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGroupBox)
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IGroupBox;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IGroupBox);
// Type: UnityEngine.UIElements::IGroupBox
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IGroupBox*
class CORDL_TYPE IGroupBox {
public:
  // Declarations
  /// @brief Method OnOptionAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnOptionAdded(::UnityEngine::UIElements::IGroupBoxOption* option);

  /// @brief Method OnOptionRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnOptionRemoved(::UnityEngine::UIElements::IGroupBoxOption* option);

  // Ctor Parameters [CppParam { name: "", ty: "IGroupBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGroupBox(IGroupBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGroupBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGroupBox(IGroupBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5943 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IGroupBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IGroupBox*, "UnityEngine.UIElements", "IGroupBox");
