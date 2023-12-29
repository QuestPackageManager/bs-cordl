#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMask)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::UI {
class IMask;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::IMask);
// Type: UnityEngine.UI::IMask
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13061))
// CS Name: ::UnityEngine.UI::IMask*
class CORDL_TYPE IMask {
public:
  // Declarations
  __declspec(property(get = get_rectTransform))::UnityEngine::RectTransform* rectTransform;

  /// @brief Method Enabled addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Enabled();

  /// @brief Method get_rectTransform addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::RectTransform* get_rectTransform();

  // Ctor Parameters [CppParam { name: "", ty: "IMask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMask(IMask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMask(IMask const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::IMask);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IMask*, "UnityEngine.UI", "IMask");
