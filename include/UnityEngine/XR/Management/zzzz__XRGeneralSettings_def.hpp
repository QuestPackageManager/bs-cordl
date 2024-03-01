#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XRGeneralSettings)
namespace UnityEngine::XR::Management {
class XRManagerSettings;
}
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRGeneralSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Management::XRGeneralSettings);
// Type: UnityEngine.XR.Management::XRGeneralSettings
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 50, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Management {
// Is value type: false
// CS Name: ::UnityEngine.XR.Management::XRGeneralSettings*
class CORDL_TYPE XRGeneralSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_AssignedSettings))::UnityW<::UnityEngine::XR::Management::XRManagerSettings> AssignedSettings;

  __declspec(property(get = get_InitManagerOnStart)) bool InitManagerOnStart;

  __declspec(property(get = get_Manager, put = set_Manager))::UnityW<::UnityEngine::XR::Management::XRManagerSettings> Manager;

  /// @brief Field k_SettingsKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SettingsKey, put = setStaticF_k_SettingsKey))::StringW k_SettingsKey;

  /// @brief Field m_InitManagerOnStart, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_InitManagerOnStart, put = __cordl_internal_set_m_InitManagerOnStart)) bool m_InitManagerOnStart;

  /// @brief Field m_LoaderManagerInstance, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LoaderManagerInstance,
                      put = __cordl_internal_set_m_LoaderManagerInstance))::UnityW<::UnityEngine::XR::Management::XRManagerSettings> m_LoaderManagerInstance;

  /// @brief Field m_ProviderIntialized, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ProviderIntialized, put = __cordl_internal_set_m_ProviderIntialized)) bool m_ProviderIntialized;

  /// @brief Field m_ProviderStarted, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ProviderStarted, put = __cordl_internal_set_m_ProviderStarted)) bool m_ProviderStarted;

  /// @brief Field m_XRManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XRManager, put = __cordl_internal_set_m_XRManager))::UnityW<::UnityEngine::XR::Management::XRManagerSettings> m_XRManager;

  /// @brief Field s_RuntimeSettingsInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_RuntimeSettingsInstance,
                             put = setStaticF_s_RuntimeSettingsInstance))::UnityW<::UnityEngine::XR::Management::XRGeneralSettings> s_RuntimeSettingsInstance;

  /// @brief Method AttemptInitializeXRSDKOnLoad, addr 0x2d5b67c, size 0xe4, virtual false, abstract: false, final false
  static inline void AttemptInitializeXRSDKOnLoad();

  /// @brief Method AttemptStartXRSDKOnBeforeSplashScreen, addr 0x2d5b9d8, size 0xe4, virtual false, abstract: false, final false
  static inline void AttemptStartXRSDKOnBeforeSplashScreen();

  /// @brief Method Awake, addr 0x2d5b308, size 0x130, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DeInitXRSDK, addr 0x2d5b514, size 0xb0, virtual false, abstract: false, final false
  inline void DeInitXRSDK();

  /// @brief Method InitXRSDK, addr 0x2d5b760, size 0x278, virtual false, abstract: false, final false
  inline void InitXRSDK();

  static inline ::UnityEngine::XR::Management::XRGeneralSettings* New_ctor();

  /// @brief Method OnDestroy, addr 0x2d5b678, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Quit, addr 0x2d5b438, size 0xdc, virtual false, abstract: false, final false
  static inline void Quit();

  /// @brief Method Start, addr 0x2d5b5c4, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartXRSDK, addr 0x2d5b5c8, size 0xb0, virtual false, abstract: false, final false
  inline void StartXRSDK();

  /// @brief Method StopXRSDK, addr 0x2d5bdd4, size 0xac, virtual false, abstract: false, final false
  inline void StopXRSDK();

  constexpr bool const& __cordl_internal_get_m_InitManagerOnStart() const;

  constexpr bool& __cordl_internal_get_m_InitManagerOnStart();

  constexpr ::UnityW<::UnityEngine::XR::Management::XRManagerSettings> const& __cordl_internal_get_m_LoaderManagerInstance() const;

  constexpr ::UnityW<::UnityEngine::XR::Management::XRManagerSettings>& __cordl_internal_get_m_LoaderManagerInstance();

  constexpr bool const& __cordl_internal_get_m_ProviderIntialized() const;

  constexpr bool& __cordl_internal_get_m_ProviderIntialized();

  constexpr bool const& __cordl_internal_get_m_ProviderStarted() const;

  constexpr bool& __cordl_internal_get_m_ProviderStarted();

  constexpr ::UnityW<::UnityEngine::XR::Management::XRManagerSettings> const& __cordl_internal_get_m_XRManager() const;

  constexpr ::UnityW<::UnityEngine::XR::Management::XRManagerSettings>& __cordl_internal_get_m_XRManager();

  constexpr void __cordl_internal_set_m_InitManagerOnStart(bool value);

  constexpr void __cordl_internal_set_m_LoaderManagerInstance(::UnityW<::UnityEngine::XR::Management::XRManagerSettings> value);

  constexpr void __cordl_internal_set_m_ProviderIntialized(bool value);

  constexpr void __cordl_internal_set_m_ProviderStarted(bool value);

  constexpr void __cordl_internal_set_m_XRManager(::UnityW<::UnityEngine::XR::Management::XRManagerSettings> value);

  /// @brief Method .ctor, addr 0x2d5c040, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_k_SettingsKey();

  static inline ::UnityW<::UnityEngine::XR::Management::XRGeneralSettings> getStaticF_s_RuntimeSettingsInstance();

  /// @brief Method get_AssignedSettings, addr 0x2d5b2f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Management::XRManagerSettings> get_AssignedSettings();

  /// @brief Method get_InitManagerOnStart, addr 0x2d5b300, size 0x8, virtual false, abstract: false, final false
  inline bool get_InitManagerOnStart();

  /// @brief Method get_Instance, addr 0x2d5b2a0, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::XR::Management::XRGeneralSettings> get_Instance();

  /// @brief Method get_Manager, addr 0x2d5b290, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Management::XRManagerSettings> get_Manager();

  static inline void setStaticF_k_SettingsKey(::StringW value);

  static inline void setStaticF_s_RuntimeSettingsInstance(::UnityW<::UnityEngine::XR::Management::XRGeneralSettings> value);

  /// @brief Method set_Manager, addr 0x2d5b298, size 0x8, virtual false, abstract: false, final false
  inline void set_Manager(::UnityEngine::XR::Management::XRManagerSettings* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRGeneralSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRGeneralSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRGeneralSettings(XRGeneralSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRGeneralSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRGeneralSettings(XRGeneralSettings const&) = delete;

  /// @brief Field m_LoaderManagerInstance, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Management::XRManagerSettings> ___m_LoaderManagerInstance;

  /// @brief Field m_InitManagerOnStart, offset: 0x20, size: 0x1, def value: None
  bool ___m_InitManagerOnStart;

  /// @brief Field m_XRManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Management::XRManagerSettings> ___m_XRManager;

  /// @brief Field m_ProviderIntialized, offset: 0x30, size: 0x1, def value: None
  bool ___m_ProviderIntialized;

  /// @brief Field m_ProviderStarted, offset: 0x31, size: 0x1, def value: None
  bool ___m_ProviderStarted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::XRGeneralSettings, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRGeneralSettings, ___m_LoaderManagerInstance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRGeneralSettings, ___m_InitManagerOnStart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRGeneralSettings, ___m_XRManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRGeneralSettings, ___m_ProviderIntialized) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRGeneralSettings, ___m_ProviderStarted) == 0x31, "Offset mismatch!");

} // namespace UnityEngine::XR::Management
NEED_NO_BOX(::UnityEngine::XR::Management::XRGeneralSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRGeneralSettings*, "UnityEngine.XR.Management", "XRGeneralSettings");
