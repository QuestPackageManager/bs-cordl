#pragma once
// IWYU pragma private; include "UnityEngine\UI\IClipper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IClipper)
// Forward declare root types
namespace UnityEngine::UI {
class IClipper;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::IClipper*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::IClipper*, "UnityEngine.UI", "IClipper");
// Dependencies
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.IClipper
class CORDL_TYPE IClipper {
public:
  // Declarations
  /// @brief Method PerformClipping, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PerformClipping();

  // Ctor Parameters [CppParam { name: "", ty: "IClipper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IClipper(IClipper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17396 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
