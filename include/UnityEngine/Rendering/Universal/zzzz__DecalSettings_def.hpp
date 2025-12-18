#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalTechniqueOption_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DecalSettings)
namespace UnityEngine::Rendering::Universal {
class DBufferSettings;
}
namespace UnityEngine::Rendering::Universal {
class DecalScreenSpaceSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalSettings);
// Dependencies System.Object, UnityEngine.Rendering.Universal.DecalTechniqueOption
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalSettings
class CORDL_TYPE DecalSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field dBufferSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_dBufferSettings, put = __cordl_internal_set_dBufferSettings)) ::UnityEngine::Rendering::Universal::DBufferSettings* dBufferSettings;

  /// @brief Field decalLayers, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_decalLayers, put = __cordl_internal_set_decalLayers)) bool decalLayers;

  /// @brief Field maxDrawDistance, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_maxDrawDistance, put = __cordl_internal_set_maxDrawDistance)) float_t maxDrawDistance;

  /// @brief Field screenSpaceSettings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_screenSpaceSettings,
                      put = __cordl_internal_set_screenSpaceSettings)) ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* screenSpaceSettings;

  /// @brief Field technique, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_technique, put = __cordl_internal_set_technique)) ::UnityEngine::Rendering::Universal::DecalTechniqueOption technique;

  static inline ::UnityEngine::Rendering::Universal::DecalSettings* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::DBufferSettings* const& __cordl_internal_get_dBufferSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::DBufferSettings*& __cordl_internal_get_dBufferSettings();

  constexpr bool const& __cordl_internal_get_decalLayers() const;

  constexpr bool& __cordl_internal_get_decalLayers();

  constexpr float_t const& __cordl_internal_get_maxDrawDistance() const;

  constexpr float_t& __cordl_internal_get_maxDrawDistance();

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* const& __cordl_internal_get_screenSpaceSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& __cordl_internal_get_screenSpaceSettings();

  constexpr ::UnityEngine::Rendering::Universal::DecalTechniqueOption const& __cordl_internal_get_technique() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalTechniqueOption& __cordl_internal_get_technique();

  constexpr void __cordl_internal_set_dBufferSettings(::UnityEngine::Rendering::Universal::DBufferSettings* value);

  constexpr void __cordl_internal_set_decalLayers(bool value);

  constexpr void __cordl_internal_set_maxDrawDistance(float_t value);

  constexpr void __cordl_internal_set_screenSpaceSettings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value);

  constexpr void __cordl_internal_set_technique(::UnityEngine::Rendering::Universal::DecalTechniqueOption value);

  /// @brief Method .ctor, addr 0x66f5734, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalSettings(DecalSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalSettings(DecalSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12883 };

  /// @brief Field technique, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DecalTechniqueOption ___technique;

  /// @brief Field maxDrawDistance, offset: 0x14, size: 0x4, def value: None
  float_t ___maxDrawDistance;

  /// @brief Field decalLayers, offset: 0x18, size: 0x1, def value: None
  bool ___decalLayers;

  /// @brief Field dBufferSettings, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DBufferSettings* ___dBufferSettings;

  /// @brief Field screenSpaceSettings, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* ___screenSpaceSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalSettings, ___technique) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalSettings, ___maxDrawDistance) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalSettings, ___decalLayers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalSettings, ___dBufferSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalSettings, ___screenSpaceSettings) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalSettings, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalSettings*, "UnityEngine.Rendering.Universal", "DecalSettings");
