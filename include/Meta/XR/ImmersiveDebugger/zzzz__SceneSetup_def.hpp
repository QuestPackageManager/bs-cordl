#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/SceneSetup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SceneSetup)
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
class SceneSetup;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::SceneSetup);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.SceneSetup
class CORDL_TYPE SceneSetup : public ::System::Object {
public:
  // Declarations
  /// @brief Method OnLoad, addr 0x582cee8, size 0x5c, virtual false, abstract: false, final false
  static inline void OnLoad();

  /// @brief Method SetupImmersiveDebugger, addr 0x582cf44, size 0x34c, virtual false, abstract: false, final false
  static inline void SetupImmersiveDebugger();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneSetup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneSetup(SceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneSetup(SceneSetup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18287 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::SceneSetup, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::SceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::SceneSetup*, "Meta.XR.ImmersiveDebugger", "SceneSetup");
