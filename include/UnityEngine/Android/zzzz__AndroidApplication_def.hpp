#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidApplication.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AndroidApplication)
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Android {
class AndroidConfiguration;
}
namespace UnityEngine {
class AndroidJavaObjectUnityOwned;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace UnityEngine::Android {
class AndroidApplication;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Android::AndroidApplication);
// Dependencies System.Object
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.AndroidApplication
class CORDL_TYPE AndroidApplication : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Activity, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_Activity, put = setStaticF_m_Activity)) ::UnityEngine::AndroidJavaObjectUnityOwned* m_Activity;

  /// @brief Field m_Context, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_Context, put = setStaticF_m_Context)) ::UnityEngine::AndroidJavaObjectUnityOwned* m_Context;

  /// @brief Field m_CurrentConfiguration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_CurrentConfiguration, put = setStaticF_m_CurrentConfiguration)) ::UnityEngine::Android::AndroidConfiguration* m_CurrentConfiguration;

  /// @brief Field m_MainThreadSynchronizationContext, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_MainThreadSynchronizationContext,
                      put = setStaticF_m_MainThreadSynchronizationContext)) ::System::Threading::SynchronizationContext* m_MainThreadSynchronizationContext;

  /// @brief Field onConfigurationChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onConfigurationChanged, put = setStaticF_onConfigurationChanged)) ::System::Action_1<::UnityEngine::Android::AndroidConfiguration*>* onConfigurationChanged;

  /// @brief Method AcquireMainThreadSynchronizationContext, addr 0x67fa9e4, size 0xac, virtual false, abstract: false, final false
  static inline void AcquireMainThreadSynchronizationContext();

  /// @brief Method DispatchConfigurationChanged, addr 0x67fac94, size 0x74, virtual false, abstract: false, final false
  static inline void DispatchConfigurationChanged(bool notifySubscribers);

  /// @brief Method GetCurrentConfiguration, addr 0x67fac48, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Android::AndroidConfiguration* GetCurrentConfiguration();

  /// @brief Method SetCurrentConfiguration, addr 0x67fabf8, size 0x50, virtual false, abstract: false, final false
  static inline void SetCurrentConfiguration(::UnityEngine::Android::AndroidConfiguration* config);

  static inline ::UnityEngine::AndroidJavaObjectUnityOwned* getStaticF_m_Activity();

  static inline ::UnityEngine::AndroidJavaObjectUnityOwned* getStaticF_m_Context();

  static inline ::UnityEngine::Android::AndroidConfiguration* getStaticF_m_CurrentConfiguration();

  static inline ::System::Threading::SynchronizationContext* getStaticF_m_MainThreadSynchronizationContext();

  static inline ::System::Action_1<::UnityEngine::Android::AndroidConfiguration*>* getStaticF_onConfigurationChanged();

  /// @brief Method get_CurrentActivityRaw, addr 0x67fa9bc, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_CurrentActivityRaw();

  /// @brief Method get_CurrentContextRaw, addr 0x67fa994, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_CurrentContextRaw();

  /// @brief Method get_UnityPlayerRaw, addr 0x67e769c, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_UnityPlayerRaw();

  /// @brief Method get_currentActivity, addr 0x67fab44, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJavaObject* get_currentActivity();

  /// @brief Method get_currentContext, addr 0x67faa90, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJavaObject* get_currentContext();

  static inline void setStaticF_m_Activity(::UnityEngine::AndroidJavaObjectUnityOwned* value);

  static inline void setStaticF_m_Context(::UnityEngine::AndroidJavaObjectUnityOwned* value);

  static inline void setStaticF_m_CurrentConfiguration(::UnityEngine::Android::AndroidConfiguration* value);

  static inline void setStaticF_m_MainThreadSynchronizationContext(::System::Threading::SynchronizationContext* value);

  static inline void setStaticF_onConfigurationChanged(::System::Action_1<::UnityEngine::Android::AndroidConfiguration*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidApplication();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidApplication", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidApplication(AndroidApplication&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidApplication", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidApplication(AndroidApplication const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19907 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidApplication, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Android
NEED_NO_BOX(::UnityEngine::Android::AndroidApplication);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidApplication*, "UnityEngine.Android", "AndroidApplication");
