#pragma once
// IWYU pragma private; include "UnityEngine/PS4/XR/PSVRSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(PSVRSettings)
// Forward declare root types
namespace UnityEngine::PS4::XR {
class PSVRSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PS4::XR::PSVRSettings);
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::PS4::XR {
// Is value type: false
// CS Name: UnityEngine.PS4.XR.PSVRSettings
class CORDL_TYPE PSVRSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  static inline ::UnityEngine::PS4::XR::PSVRSettings* New_ctor();

  /// @brief Method .ctor, addr 0x4839510, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PSVRSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PSVRSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PSVRSettings(PSVRSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PSVRSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PSVRSettings(PSVRSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19224 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PS4::XR::PSVRSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine::PS4::XR
NEED_NO_BOX(::UnityEngine::PS4::XR::PSVRSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PS4::XR::PSVRSettings*, "UnityEngine.PS4.XR", "PSVRSettings");
