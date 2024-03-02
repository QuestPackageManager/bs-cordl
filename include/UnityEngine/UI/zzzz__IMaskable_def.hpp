#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMaskable)
// Forward declare root types
namespace UnityEngine::UI {
class IMaskable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::IMaskable);
// Type: UnityEngine.UI::IMaskable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::IMaskable*
class CORDL_TYPE IMaskable {
public:
  // Declarations
  /// @brief Method RecalculateMasking, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RecalculateMasking();

  // Ctor Parameters [CppParam { name: "", ty: "IMaskable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMaskable(IMaskable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMaskable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMaskable(IMaskable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::IMaskable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IMaskable*, "UnityEngine.UI", "IMaskable");
