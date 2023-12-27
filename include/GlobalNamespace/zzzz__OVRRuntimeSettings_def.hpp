#pragma once
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 31, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7636)), TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7954))
// CS Name: ::OVRRuntimeSettings*
class CORDL_TYPE OVRRuntimeSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field colorSpace, offset 0x18, size 0x4
  __declspec(property(get = __get_colorSpace, put = __set_colorSpace))::GlobalNamespace::__OVRManager__ColorSpace colorSpace;

  /// @brief Field hasSentConsentEvent, offset 0x1c, size 0x1
  __declspec(property(get = __get_hasSentConsentEvent, put = __set_hasSentConsentEvent)) bool hasSentConsentEvent;

  /// @brief Field hasSetTelemetryEnabled, offset 0x1d, size 0x1
  __declspec(property(get = __get_hasSetTelemetryEnabled, put = __set_hasSetTelemetryEnabled)) bool hasSetTelemetryEnabled;

  /// @brief Field telemetryEnabled, offset 0x1e, size 0x1
  __declspec(property(get = __get_telemetryEnabled, put = __set_telemetryEnabled)) bool telemetryEnabled;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::GlobalNamespace::OVRRuntimeSettings* _instance;

  __declspec(property(get = get_HasSetTelemetryEnabled)) bool HasSetTelemetryEnabled;

  __declspec(property(get = get_TelemetryEnabled)) bool TelemetryEnabled;

  constexpr ::GlobalNamespace::__OVRManager__ColorSpace& __get_colorSpace();

  constexpr ::GlobalNamespace::__OVRManager__ColorSpace const& __get_colorSpace() const;

  constexpr void __set_colorSpace(::GlobalNamespace::__OVRManager__ColorSpace value);

  constexpr bool& __get_hasSentConsentEvent();

  constexpr bool const& __get_hasSentConsentEvent() const;

  constexpr void __set_hasSentConsentEvent(bool value);

  constexpr bool& __get_hasSetTelemetryEnabled();

  constexpr bool const& __get_hasSetTelemetryEnabled() const;

  constexpr void __set_hasSetTelemetryEnabled(bool value);

  constexpr bool& __get_telemetryEnabled();

  constexpr bool const& __get_telemetryEnabled() const;

  constexpr void __set_telemetryEnabled(bool value);

  static inline void setStaticF__instance(::GlobalNamespace::OVRRuntimeSettings* value);

  static inline ::GlobalNamespace::OVRRuntimeSettings* getStaticF__instance();

  /// @brief Method get_Instance addr 0x277f4c0 size 0x9c virtual false final false
  static inline ::GlobalNamespace::OVRRuntimeSettings* get_Instance();

  /// @brief Method OnEnable addr 0x277f670 size 0x4c virtual false final false
  inline void OnEnable();

  /// @brief Method get_HasSetTelemetryEnabled addr 0x277f6bc size 0x8 virtual false final false
  inline bool get_HasSetTelemetryEnabled();

  /// @brief Method get_TelemetryEnabled addr 0x277f6c4 size 0x20 virtual false final false
  inline bool get_TelemetryEnabled();

  /// @brief Method GetRuntimeSettings addr 0x277f55c size 0x114 virtual false final false
  static inline ::GlobalNamespace::OVRRuntimeSettings* GetRuntimeSettings();

  static inline ::GlobalNamespace::OVRRuntimeSettings* New_ctor();

  /// @brief Method .ctor addr 0x277f6e4 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRRuntimeSettings(OVRRuntimeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRRuntimeSettings(OVRRuntimeSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRRuntimeSettings();

public:
  /// @brief Field colorSpace, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__ColorSpace ___colorSpace;

  /// @brief Field hasSentConsentEvent, offset: 0x1c, size: 0x1, def value: None
  bool ___hasSentConsentEvent;

  /// @brief Field hasSetTelemetryEnabled, offset: 0x1d, size: 0x1, def value: None
  bool ___hasSetTelemetryEnabled;

  /// @brief Field telemetryEnabled, offset: 0x1e, size: 0x1, def value: None
  bool ___telemetryEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRRuntimeSettings, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRRuntimeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRuntimeSettings*, "", "OVRRuntimeSettings");
