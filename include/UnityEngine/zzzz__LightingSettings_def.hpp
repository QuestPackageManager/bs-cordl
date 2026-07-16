#pragma once
// IWYU pragma private; include "UnityEngine/LightingSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LightingSettings)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class LightingSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::LightingSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LightingSettings*, "UnityEngine", "LightingSettings");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LightingSettings
class CORDL_TYPE LightingSettings : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_bakedGI, put = set_bakedGI)) bool bakedGI;

  __declspec(property(get = get_realtimeEnvironmentLighting, put = set_realtimeEnvironmentLighting)) bool realtimeEnvironmentLighting;

  __declspec(property(get = get_realtimeGI, put = set_realtimeGI)) bool realtimeGI;

  /// @brief Method Internal_Create, addr 0x6a79344, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::LightingSettings* self);

  /// @brief Method LightingSettingsDontStripMe, addr 0x6a792c8, size 0x4, virtual false, abstract: false, final false
  inline void LightingSettingsDontStripMe();

  static inline ::UnityEngine::LightingSettings* New_ctor();

  /// @brief Method .ctor, addr 0x6a792cc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bakedGI, addr 0x6a79380, size 0x80, virtual false, abstract: false, final false
  inline bool get_bakedGI();

  /// @brief Method get_bakedGI_Injected, addr 0x6a79400, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_bakedGI_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_realtimeEnvironmentLighting, addr 0x6a796a0, size 0x80, virtual false, abstract: false, final false
  inline bool get_realtimeEnvironmentLighting();

  /// @brief Method get_realtimeEnvironmentLighting_Injected, addr 0x6a79720, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_realtimeEnvironmentLighting_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_realtimeGI, addr 0x6a79510, size 0x80, virtual false, abstract: false, final false
  inline bool get_realtimeGI();

  /// @brief Method get_realtimeGI_Injected, addr 0x6a79590, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_realtimeGI_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_bakedGI, addr 0x6a7943c, size 0x90, virtual false, abstract: false, final false
  inline void set_bakedGI(bool value);

  /// @brief Method set_bakedGI_Injected, addr 0x6a794cc, size 0x44, virtual false, abstract: false, final false
  static inline void set_bakedGI_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_realtimeEnvironmentLighting, addr 0x6a7975c, size 0x90, virtual false, abstract: false, final false
  inline void set_realtimeEnvironmentLighting(bool value);

  /// @brief Method set_realtimeEnvironmentLighting_Injected, addr 0x6a797ec, size 0x44, virtual false, abstract: false, final false
  static inline void set_realtimeEnvironmentLighting_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_realtimeGI, addr 0x6a795cc, size 0x90, virtual false, abstract: false, final false
  inline void set_realtimeGI(bool value);

  /// @brief Method set_realtimeGI_Injected, addr 0x6a7965c, size 0x44, virtual false, abstract: false, final false
  static inline void set_realtimeGI_Injected(::System::IntPtr _unity_self, bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightingSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightingSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightingSettings(LightingSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightingSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightingSettings(LightingSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10084 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LightingSettings) == 0x18, "Size mismatch!");

} // namespace UnityEngine
