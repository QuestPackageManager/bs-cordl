#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRRuntimeSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(OVRRuntimeSettings)
// Forward declare root types
namespace GlobalNamespace {
class OVRRuntimeSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRRuntimeSettings);
// Type: ::OVRRuntimeSettings
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 31, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRRuntimeSettings*
class CORDL_TYPE OVRRuntimeSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_HasSetTelemetryEnabled)) bool HasSetTelemetryEnabled;

  __declspec(property(get = get_TelemetryEnabled)) bool TelemetryEnabled;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) ::UnityW<::GlobalNamespace::OVRRuntimeSettings> _instance;

  /// @brief Field colorSpace, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_colorSpace, put = __cordl_internal_set_colorSpace)) ::GlobalNamespace::__OVRManager__ColorSpace colorSpace;

  /// @brief Field hasSentConsentEvent, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_hasSentConsentEvent, put = __cordl_internal_set_hasSentConsentEvent)) bool hasSentConsentEvent;

  /// @brief Field hasSetTelemetryEnabled, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_hasSetTelemetryEnabled, put = __cordl_internal_set_hasSetTelemetryEnabled)) bool hasSetTelemetryEnabled;

  /// @brief Field telemetryEnabled, offset 0x1e, size 0x1
  __declspec(property(get = __cordl_internal_get_telemetryEnabled, put = __cordl_internal_set_telemetryEnabled)) bool telemetryEnabled;

  /// @brief Method GetRuntimeSettings, addr 0x3fa55fc, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> GetRuntimeSettings();

  static inline ::GlobalNamespace::OVRRuntimeSettings* New_ctor();

  /// @brief Method OnEnable, addr 0x3fa5710, size 0x4c, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::GlobalNamespace::__OVRManager__ColorSpace const& __cordl_internal_get_colorSpace() const;

  constexpr ::GlobalNamespace::__OVRManager__ColorSpace& __cordl_internal_get_colorSpace();

  constexpr bool const& __cordl_internal_get_hasSentConsentEvent() const;

  constexpr bool& __cordl_internal_get_hasSentConsentEvent();

  constexpr bool const& __cordl_internal_get_hasSetTelemetryEnabled() const;

  constexpr bool& __cordl_internal_get_hasSetTelemetryEnabled();

  constexpr bool const& __cordl_internal_get_telemetryEnabled() const;

  constexpr bool& __cordl_internal_get_telemetryEnabled();

  constexpr void __cordl_internal_set_colorSpace(::GlobalNamespace::__OVRManager__ColorSpace value);

  constexpr void __cordl_internal_set_hasSentConsentEvent(bool value);

  constexpr void __cordl_internal_set_hasSetTelemetryEnabled(bool value);

  constexpr void __cordl_internal_set_telemetryEnabled(bool value);

  /// @brief Method .ctor, addr 0x3fa5784, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> getStaticF__instance();

  /// @brief Method get_HasSetTelemetryEnabled, addr 0x3fa575c, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasSetTelemetryEnabled();

  /// @brief Method get_Instance, addr 0x3fa5560, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> get_Instance();

  /// @brief Method get_TelemetryEnabled, addr 0x3fa5764, size 0x20, virtual false, abstract: false, final false
  inline bool get_TelemetryEnabled();

  static inline void setStaticF__instance(::UnityW<::GlobalNamespace::OVRRuntimeSettings> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRRuntimeSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRRuntimeSettings(OVRRuntimeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRRuntimeSettings(OVRRuntimeSettings const&) = delete;

  /// @brief Field colorSpace, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__ColorSpace ___colorSpace;

  /// @brief Field hasSentConsentEvent, offset: 0x1c, size: 0x1, def value: None
  bool ___hasSentConsentEvent;

  /// @brief Field hasSetTelemetryEnabled, offset: 0x1d, size: 0x1, def value: None
  bool ___hasSetTelemetryEnabled;

  /// @brief Field telemetryEnabled, offset: 0x1e, size: 0x1, def value: None
  bool ___telemetryEnabled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8240 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRRuntimeSettings, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___colorSpace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___hasSentConsentEvent) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___hasSetTelemetryEnabled) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___telemetryEnabled) == 0x1e, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRRuntimeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRuntimeSettings*, "", "OVRRuntimeSettings");
