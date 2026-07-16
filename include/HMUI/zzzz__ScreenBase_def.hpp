#pragma once
// IWYU pragma private; include "HMUI/ScreenBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ScreenBase)
// Forward declare root types
namespace HMUI {
class ScreenBase;
}
// Write type traits
MARK_REF_T(::HMUI::ScreenBase*);
DEFINE_IL2CPP_CLASS(::HMUI::ScreenBase*, "HMUI", "ScreenBase");
// Dependencies UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ScreenBase
class CORDL_TYPE ScreenBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::HMUI::ScreenBase* New_ctor();

  /// @brief Method .ctor, addr 0x5883290, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenBase(ScreenBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenBase(ScreenBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19167 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HMUI::ScreenBase) == 0x20, "Size mismatch!");

} // namespace HMUI
