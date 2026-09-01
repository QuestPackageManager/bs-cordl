#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRVirtualKeyboardSampleWPMPrompt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRVirtualKeyboardSampleWPMPrompt)
// Forward declare root types
namespace GlobalNamespace {
class OVRVirtualKeyboardSampleWPMPrompt;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt*, "", "OVRVirtualKeyboardSampleWPMPrompt");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboardSampleWPMPrompt
class CORDL_TYPE OVRVirtualKeyboardSampleWPMPrompt : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Awake, addr 0x5eefe88, size 0x5c, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt* New_ctor();

  /// @brief Method .ctor, addr 0x5eefee4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboardSampleWPMPrompt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardSampleWPMPrompt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboardSampleWPMPrompt(OVRVirtualKeyboardSampleWPMPrompt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardSampleWPMPrompt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboardSampleWPMPrompt(OVRVirtualKeyboardSampleWPMPrompt const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7822 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
