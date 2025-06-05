#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboardSampleWPMPrompt.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRVirtualKeyboardSampleWPMPrompt)
// Forward declare root types
namespace GlobalNamespace {
class OVRVirtualKeyboardSampleWPMPrompt;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboardSampleWPMPrompt
class CORDL_TYPE OVRVirtualKeyboardSampleWPMPrompt : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Awake, addr 0x4028990, size 0x58, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt* New_ctor();

  /// @brief Method .ctor, addr 0x40289e8, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8379 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt*, "", "OVRVirtualKeyboardSampleWPMPrompt");
