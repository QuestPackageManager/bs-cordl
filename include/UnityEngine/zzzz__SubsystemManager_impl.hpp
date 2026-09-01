#pragma once
// IWYU pragma private; include "UnityEngine\SubsystemManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__SubsystemManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemWithProvider_def.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_def.hpp"
#include "UnityEngine/zzzz__Subsystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::SubsystemManager.ReloadSubsystemsStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::SubsystemManager::ReloadSubsystemsStarted)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6bb8680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(), { "ReloadSubsystemsStarted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemManager.ReloadSubsystemsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::SubsystemManager::ReloadSubsystemsCompleted)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6bb8764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(), { "ReloadSubsystemsCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemManager.InitializeIntegratedSubsystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::IntegratedSubsystem*)>(&::UnityEngine::SubsystemManager::InitializeIntegratedSubsystem)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6bb8848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(),
                                                             { "InitializeIntegratedSubsystem", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::IntegratedSubsystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemManager.ClearSubsystems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::SubsystemManager::ClearSubsystems)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6bb8940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(), { "ClearSubsystems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemManager.StaticConstructScriptingClassMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::SubsystemManager::StaticConstructScriptingClassMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6bb8b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(), { "StaticConstructScriptingClassMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemManager.GetIntegratedSubsystemByPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::IntegratedSubsystem* (*)(::System::IntPtr)>(&::UnityEngine::SubsystemManager::GetIntegratedSubsystemByPtr)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6bb8cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(), { "GetIntegratedSubsystemByPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemManager.RemoveIntegratedSubsystemByPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::SubsystemManager::RemoveIntegratedSubsystemByPtr)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6bb80bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(), { "RemoveIntegratedSubsystemByPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemManager.RemoveStandaloneSubsystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*)>(&::UnityEngine::SubsystemManager::RemoveStandaloneSubsystem)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6bb8e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(),
                                                             { "RemoveStandaloneSubsystem", {}, { ::i2c::type_of<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemManager.RemoveDeprecatedSubsystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Subsystem*)>(&::UnityEngine::SubsystemManager::RemoveDeprecatedSubsystem)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6bb8504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(), { "RemoveDeprecatedSubsystem", {}, { ::i2c::type_of<::UnityEngine::Subsystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::SubsystemManager::setStaticF_beforeReloadSubsystems(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "beforeReloadSubsystems", ::UnityEngine::SubsystemManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::SubsystemManager::getStaticF_beforeReloadSubsystems() {
  return ::cordl_internals::getStaticField<::System::Action*, "beforeReloadSubsystems", ::UnityEngine::SubsystemManager*>();
}
inline void UnityEngine::SubsystemManager::setStaticF_afterReloadSubsystems(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "afterReloadSubsystems", ::UnityEngine::SubsystemManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::SubsystemManager::getStaticF_afterReloadSubsystems() {
  return ::cordl_internals::getStaticField<::System::Action*, "afterReloadSubsystems", ::UnityEngine::SubsystemManager*>();
}
inline void UnityEngine::SubsystemManager::setStaticF_s_IntegratedSubsystems(::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystem*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystem*>*, "s_IntegratedSubsystems", ::UnityEngine::SubsystemManager*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystem*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystem*>* UnityEngine::SubsystemManager::getStaticF_s_IntegratedSubsystems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystem*>*, "s_IntegratedSubsystems", ::UnityEngine::SubsystemManager*>();
}
inline void UnityEngine::SubsystemManager::setStaticF_s_StandaloneSubsystems(::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*>*, "s_StandaloneSubsystems",
                                    ::UnityEngine::SubsystemManager*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*>* UnityEngine::SubsystemManager::getStaticF_s_StandaloneSubsystems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*>*, "s_StandaloneSubsystems",
                                           ::UnityEngine::SubsystemManager*>();
}
inline void UnityEngine::SubsystemManager::setStaticF_s_DeprecatedSubsystems(::System::Collections::Generic::List_1<::UnityEngine::Subsystem*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Subsystem*>*, "s_DeprecatedSubsystems", ::UnityEngine::SubsystemManager*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Subsystem*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Subsystem*>* UnityEngine::SubsystemManager::getStaticF_s_DeprecatedSubsystems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Subsystem*>*, "s_DeprecatedSubsystems", ::UnityEngine::SubsystemManager*>();
}
inline void UnityEngine::SubsystemManager::setStaticF_reloadSubsytemsStarted(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "reloadSubsytemsStarted", ::UnityEngine::SubsystemManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::SubsystemManager::getStaticF_reloadSubsytemsStarted() {
  return ::cordl_internals::getStaticField<::System::Action*, "reloadSubsytemsStarted", ::UnityEngine::SubsystemManager*>();
}
inline void UnityEngine::SubsystemManager::setStaticF_reloadSubsytemsCompleted(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "reloadSubsytemsCompleted", ::UnityEngine::SubsystemManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::SubsystemManager::getStaticF_reloadSubsytemsCompleted() {
  return ::cordl_internals::getStaticField<::System::Action*, "reloadSubsytemsCompleted", ::UnityEngine::SubsystemManager*>();
}
inline void UnityEngine::SubsystemManager::ReloadSubsystemsStarted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(), { "ReloadSubsystemsStarted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::SubsystemManager::ReloadSubsystemsCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(), { "ReloadSubsystemsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::SubsystemManager::InitializeIntegratedSubsystem(::System::IntPtr ptr, ::UnityEngine::IntegratedSubsystem* subsystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(),
                                                           { "InitializeIntegratedSubsystem", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::IntegratedSubsystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, subsystem);
}
inline void UnityEngine::SubsystemManager::ClearSubsystems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(), { "ClearSubsystems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::SubsystemManager::StaticConstructScriptingClassMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(), { "StaticConstructScriptingClassMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T> inline void UnityEngine::SubsystemManager::GetSubsystemDescriptors(::System::Collections::Generic::List_1<T>* descriptors) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(),
                                                           { "GetSubsystemDescriptors", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, descriptors);
}
template <typename T> inline void UnityEngine::SubsystemManager::GetSubsystems(::System::Collections::Generic::List_1<T>* subsystems) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(), { "GetSubsystems", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, subsystems);
}
template <typename TBaseTypeInList, typename TQueryType>
inline void UnityEngine::SubsystemManager::AddSubsystemSubset(::System::Collections::Generic::List_1<TBaseTypeInList>* copyFrom, ::System::Collections::Generic::List_1<TQueryType>* copyTo) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(), { "AddSubsystemSubset",
                                                                                                                  { ::i2c::class_of<TBaseTypeInList>(), ::i2c::class_of<TQueryType>() },
                                                                                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<TBaseTypeInList>*>(),
                                                                                                                    ::i2c::type_of<::System::Collections::Generic::List_1<TQueryType>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TBaseTypeInList>(), ::i2c::class_of<TQueryType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, copyFrom, copyTo);
}
inline ::UnityEngine::IntegratedSubsystem* UnityEngine::SubsystemManager::GetIntegratedSubsystemByPtr(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(), { "GetIntegratedSubsystemByPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::IntegratedSubsystem*>(nullptr, ___internal_method, ptr);
}
inline void UnityEngine::SubsystemManager::RemoveIntegratedSubsystemByPtr(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(), { "RemoveIntegratedSubsystemByPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline bool UnityEngine::SubsystemManager::RemoveStandaloneSubsystem(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider* subsystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(),
                                                           { "RemoveStandaloneSubsystem", {}, { ::i2c::type_of<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, subsystem);
}
inline bool UnityEngine::SubsystemManager::RemoveDeprecatedSubsystem(::UnityEngine::Subsystem* subsystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemManager*>(), { "RemoveDeprecatedSubsystem", {}, { ::i2c::type_of<::UnityEngine::Subsystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, subsystem);
}
// Ctor Parameters []
constexpr ::UnityEngine::SubsystemManager::SubsystemManager() {}
