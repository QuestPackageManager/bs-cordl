#pragma once
// IWYU pragma private; include "UnityEngine\Android\AndroidApplication.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidApplication_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidConfiguration_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObjectUnityOwned_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.get_UnityPlayerRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Android::AndroidApplication::get_UnityPlayerRaw)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a1fb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(), { "get_UnityPlayerRaw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.get_CurrentContextRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Android::AndroidApplication::get_CurrentContextRaw)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a32e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(), { "get_CurrentContextRaw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.get_CurrentActivityRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Android::AndroidApplication::get_CurrentActivityRaw)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a32ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(), { "get_CurrentActivityRaw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.AcquireMainThreadSynchronizationContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Android::AndroidApplication::AcquireMainThreadSynchronizationContext)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a32ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(), { "AcquireMainThreadSynchronizationContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.get_currentContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&::UnityEngine::Android::AndroidApplication::get_currentContext)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6a32f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(), { "get_currentContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.get_currentActivity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&::UnityEngine::Android::AndroidApplication::get_currentActivity)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6a33030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(), { "get_currentActivity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.SetCurrentConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Android::AndroidConfiguration*)>(&::UnityEngine::Android::AndroidApplication::SetCurrentConfiguration)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6a330e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                                                                                           { "SetCurrentConfiguration", {}, { ::i2c::type_of<::UnityEngine::Android::AndroidConfiguration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.GetCurrentConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Android::AndroidConfiguration* (*)()>(&::UnityEngine::Android::AndroidApplication::GetCurrentConfiguration)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a33134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(), { "GetCurrentConfiguration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApplication.DispatchConfigurationChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Android::AndroidApplication::DispatchConfigurationChanged)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6a33180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(), { "DispatchConfigurationChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Android::AndroidApplication::setStaticF_m_MainThreadSynchronizationContext(::System::Threading::SynchronizationContext* value) {
  ::cordl_internals::setStaticField<::System::Threading::SynchronizationContext*, "m_MainThreadSynchronizationContext", ::UnityEngine::Android::AndroidApplication*>(
      std::forward<::System::Threading::SynchronizationContext*>(value));
}
inline ::System::Threading::SynchronizationContext* UnityEngine::Android::AndroidApplication::getStaticF_m_MainThreadSynchronizationContext() {
  return ::cordl_internals::getStaticField<::System::Threading::SynchronizationContext*, "m_MainThreadSynchronizationContext", ::UnityEngine::Android::AndroidApplication*>();
}
inline void UnityEngine::Android::AndroidApplication::setStaticF_m_Context(::UnityEngine::AndroidJavaObjectUnityOwned* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AndroidJavaObjectUnityOwned*, "m_Context", ::UnityEngine::Android::AndroidApplication*>(
      std::forward<::UnityEngine::AndroidJavaObjectUnityOwned*>(value));
}
inline ::UnityEngine::AndroidJavaObjectUnityOwned* UnityEngine::Android::AndroidApplication::getStaticF_m_Context() {
  return ::cordl_internals::getStaticField<::UnityEngine::AndroidJavaObjectUnityOwned*, "m_Context", ::UnityEngine::Android::AndroidApplication*>();
}
inline void UnityEngine::Android::AndroidApplication::setStaticF_m_Activity(::UnityEngine::AndroidJavaObjectUnityOwned* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AndroidJavaObjectUnityOwned*, "m_Activity", ::UnityEngine::Android::AndroidApplication*>(
      std::forward<::UnityEngine::AndroidJavaObjectUnityOwned*>(value));
}
inline ::UnityEngine::AndroidJavaObjectUnityOwned* UnityEngine::Android::AndroidApplication::getStaticF_m_Activity() {
  return ::cordl_internals::getStaticField<::UnityEngine::AndroidJavaObjectUnityOwned*, "m_Activity", ::UnityEngine::Android::AndroidApplication*>();
}
inline void UnityEngine::Android::AndroidApplication::setStaticF_m_CurrentConfiguration(::UnityEngine::Android::AndroidConfiguration* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Android::AndroidConfiguration*, "m_CurrentConfiguration", ::UnityEngine::Android::AndroidApplication*>(
      std::forward<::UnityEngine::Android::AndroidConfiguration*>(value));
}
inline ::UnityEngine::Android::AndroidConfiguration* UnityEngine::Android::AndroidApplication::getStaticF_m_CurrentConfiguration() {
  return ::cordl_internals::getStaticField<::UnityEngine::Android::AndroidConfiguration*, "m_CurrentConfiguration", ::UnityEngine::Android::AndroidApplication*>();
}
inline void UnityEngine::Android::AndroidApplication::setStaticF_onConfigurationChanged(::System::Action_1<::UnityEngine::Android::AndroidConfiguration*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Android::AndroidConfiguration*>*, "onConfigurationChanged", ::UnityEngine::Android::AndroidApplication*>(
      std::forward<::System::Action_1<::UnityEngine::Android::AndroidConfiguration*>*>(value));
}
inline ::System::Action_1<::UnityEngine::Android::AndroidConfiguration*>* UnityEngine::Android::AndroidApplication::getStaticF_onConfigurationChanged() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Android::AndroidConfiguration*>*, "onConfigurationChanged", ::UnityEngine::Android::AndroidApplication*>();
}
inline ::System::IntPtr UnityEngine::Android::AndroidApplication::get_UnityPlayerRaw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(), { "get_UnityPlayerRaw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Android::AndroidApplication::get_CurrentContextRaw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(), { "get_CurrentContextRaw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Android::AndroidApplication::get_CurrentActivityRaw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(), { "get_CurrentActivityRaw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Android::AndroidApplication::AcquireMainThreadSynchronizationContext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(), { "AcquireMainThreadSynchronizationContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::Android::AndroidApplication::get_currentContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(), { "get_currentContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*>(nullptr, ___internal_method);
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::Android::AndroidApplication::get_currentActivity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(), { "get_currentActivity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*>(nullptr, ___internal_method);
}
inline void UnityEngine::Android::AndroidApplication::SetCurrentConfiguration(::UnityEngine::Android::AndroidConfiguration* config) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(),
                                                                                         { "SetCurrentConfiguration", {}, { ::i2c::type_of<::UnityEngine::Android::AndroidConfiguration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, config);
}
inline ::UnityEngine::Android::AndroidConfiguration* UnityEngine::Android::AndroidApplication::GetCurrentConfiguration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(), { "GetCurrentConfiguration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Android::AndroidConfiguration*>(nullptr, ___internal_method);
}
inline void UnityEngine::Android::AndroidApplication::DispatchConfigurationChanged(bool notifySubscribers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::AndroidApplication*>(), { "DispatchConfigurationChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, notifySubscribers);
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidApplication::AndroidApplication() {}
