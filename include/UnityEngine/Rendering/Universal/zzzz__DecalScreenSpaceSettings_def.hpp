#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalScreenSpaceSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalNormalBlend_def.hpp"
CORDL_MODULE_EXPORT(DecalScreenSpaceSettings)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalScreenSpaceSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings);
// Dependencies System.Object, UnityEngine.Rendering.Universal.DecalNormalBlend
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalScreenSpaceSettings
class CORDL_TYPE DecalScreenSpaceSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field normalBlend, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_normalBlend, put = __cordl_internal_set_normalBlend)) ::UnityEngine::Rendering::Universal::DecalNormalBlend normalBlend;

  static inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::DecalNormalBlend const& __cordl_internal_get_normalBlend() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalNormalBlend& __cordl_internal_get_normalBlend();

  constexpr void __cordl_internal_set_normalBlend(::UnityEngine::Rendering::Universal::DecalNormalBlend value);

  /// @brief Method .ctor, addr 0x66f5730, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalScreenSpaceSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalScreenSpaceSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalScreenSpaceSettings(DecalScreenSpaceSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalScreenSpaceSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalScreenSpaceSettings(DecalScreenSpaceSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12882 };

  /// @brief Field normalBlend, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DecalNormalBlend ___normalBlend;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings, ___normalBlend) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*, "UnityEngine.Rendering.Universal", "DecalScreenSpaceSettings");
