#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IClipper)
// Forward declare root types
namespace UnityEngine::UI {
class IClipper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::IClipper);
// Type: UnityEngine.UI::IClipper
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13026))
// CS Name: ::UnityEngine.UI::IClipper*
class CORDL_TYPE IClipper {
public:
  // Declarations
  /// @brief Method PerformClipping addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void PerformClipping();

  // Ctor Parameters [CppParam { name: "", ty: "IClipper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IClipper(IClipper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IClipper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IClipper(IClipper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::IClipper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IClipper*, "UnityEngine.UI", "IClipper");
