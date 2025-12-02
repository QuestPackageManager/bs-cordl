#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/XrPerformanceSettingsFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XrPerformanceSettingsFeature)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
class NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate;
}
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
struct PerformanceChangeNotification;
}
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
struct PerformanceDomain;
}
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
struct PerformanceLevelHint;
}
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
class XrPerformanceSettingsFeature_NativeApi;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
class NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate;
}
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
class XrPerformanceSettingsFeature;
}
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
class XrPerformanceSettingsFeature_NativeApi;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature_NativeApi);
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings.XrPerformanceSettingsFeature/NativeApi/XrPerformanceNotificationDelegate
class CORDL_TYPE NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x67e6990, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification notification, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x67e6a18, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x67e697c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification notification);

  static inline ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate* New_ctor(::System::Object* object,
                                                                                                                                                                         ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x67e6880, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate(NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate(NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18549 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate, 0x80>,
              "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings.XrPerformanceSettingsFeature/NativeApi
class CORDL_TYPE XrPerformanceSettingsFeature_NativeApi : public ::System::Object {
public:
  // Declarations
  using XrPerformanceNotificationDelegate = ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate;

  /// @brief Method xr_performance_settings_setEventCallback, addr 0x67e68ec, size 0x88, virtual false, abstract: false, final false
  static inline bool
  xr_performance_settings_setEventCallback(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate* callback);

  /// @brief Method xr_performance_settings_setPerformanceLevel, addr 0x67e674c, size 0x8c, virtual false, abstract: false, final false
  static inline bool xr_performance_settings_setPerformanceLevel(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain domain,
                                                                 ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint level);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XrPerformanceSettingsFeature_NativeApi();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XrPerformanceSettingsFeature_NativeApi", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XrPerformanceSettingsFeature_NativeApi(XrPerformanceSettingsFeature_NativeApi&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XrPerformanceSettingsFeature_NativeApi", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XrPerformanceSettingsFeature_NativeApi(XrPerformanceSettingsFeature_NativeApi const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18550 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature_NativeApi, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings.XrPerformanceSettingsFeature
class CORDL_TYPE XrPerformanceSettingsFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  using NativeApi = ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature_NativeApi;

  /// @brief Field OnXrPerformanceChangeNotification, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnXrPerformanceChangeNotification, put = setStaticF_OnXrPerformanceChangeNotification)) ::UnityEngine::Events::UnityAction_1<
      ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>* OnXrPerformanceChangeNotification;

  static inline ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x67e67d8, size 0xa8, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t xrInstance);

  /// @brief Method OnXrPerformanceNotificationCallback, addr 0x67e6490, size 0x84, virtual false, abstract: false, final false
  static inline void OnXrPerformanceNotificationCallback(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification notification);

  /// @brief Method SetPerformanceLevelHint, addr 0x67e66d4, size 0x78, virtual false, abstract: false, final false
  static inline bool SetPerformanceLevelHint(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain domain,
                                             ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint level);

  /// @brief Method .ctor, addr 0x67e6974, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnXrPerformanceChangeNotification, addr 0x67e6514, size 0xe0, virtual false, abstract: false, final false
  static inline void
  add_OnXrPerformanceChangeNotification(::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>* value);

  static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>*
  getStaticF_OnXrPerformanceChangeNotification();

  /// @brief Method remove_OnXrPerformanceChangeNotification, addr 0x67e65f4, size 0xe0, virtual false, abstract: false, final false
  static inline void
  remove_OnXrPerformanceChangeNotification(::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>* value);

  static inline void
  setStaticF_OnXrPerformanceChangeNotification(::UnityEngine::Events::UnityAction_1<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XrPerformanceSettingsFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XrPerformanceSettingsFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XrPerformanceSettingsFeature(XrPerformanceSettingsFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XrPerformanceSettingsFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XrPerformanceSettingsFeature(XrPerformanceSettingsFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18551 };

  /// @brief Field extensionString offset 0xffffffff size 0x8
  static constexpr ::ConstString extensionString{ u"XR_EXT_performance_settings" };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.extension.performance_settings" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::NativeApi_XrPerformanceSettingsFeature_XrPerformanceNotificationDelegate*,
                       "UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings", "XrPerformanceSettingsFeature/NativeApi/XrPerformanceNotificationDelegate");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature*, "UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings",
                       "XrPerformanceSettingsFeature");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature_NativeApi);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::XrPerformanceSettingsFeature_NativeApi*, "UnityEngine.XR.OpenXR.Features.Extensions.PerformanceSettings",
                       "XrPerformanceSettingsFeature/NativeApi");
