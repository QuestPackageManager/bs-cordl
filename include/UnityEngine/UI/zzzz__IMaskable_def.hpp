#pragma once
// IWYU pragma private; include "UnityEngine/UI/IMaskable.hpp"
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
// Dependencies
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.IMaskable
class CORDL_TYPE IMaskable {
public:
  // Declarations
  /// @brief Method RecalculateMasking, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RecalculateMasking();

  // Ctor Parameters [CppParam { name: "", ty: "IMaskable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMaskable(IMaskable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15068 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::IMaskable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IMaskable*, "UnityEngine.UI", "IMaskable");
