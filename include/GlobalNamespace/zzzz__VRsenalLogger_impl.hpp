#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VRsenalLogger_def.hpp"
#include "GlobalNamespace/zzzz__VRsenalScoreLogger_def.hpp"
#include "GlobalNamespace/zzzz__StringSignal_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRsenalLogger.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRsenalLogger::*)()>(&::GlobalNamespace::VRsenalLogger::Awake)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2222b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRsenalLogger*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRsenalLogger.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRsenalLogger::*)()>(&::GlobalNamespace::VRsenalLogger::OnDestroy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2222c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRsenalLogger*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRsenalLogger.HandleGameScenesManagerInstallEarlyBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRsenalLogger::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*)>(
    &::GlobalNamespace::VRsenalLogger::HandleGameScenesManagerInstallEarlyBindings)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2222d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRsenalLogger*>::get(), "HandleGameScenesManagerInstallEarlyBindings", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRsenalLogger.HandlePlayerNameWasEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRsenalLogger::*)(::StringW)>(
    &::GlobalNamespace::VRsenalLogger::HandlePlayerNameWasEntered)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2222ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRsenalLogger*>::get(), "HandlePlayerNameWasEntered",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRsenalLogger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRsenalLogger::*)()>(&::GlobalNamespace::VRsenalLogger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2222f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRsenalLogger*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO*& GlobalNamespace::VRsenalLogger::__get__standardLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> const& GlobalNamespace::VRsenalLogger::__get__standardLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::VRsenalLogger::__set__standardLevelScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____standardLevelScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO*& GlobalNamespace::VRsenalLogger::__get__tutorialScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> const& GlobalNamespace::VRsenalLogger::__get__tutorialScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialScenesTransitionSetupData;
}
constexpr void GlobalNamespace::VRsenalLogger::__set__tutorialScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tutorialScenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::StringSignal*& GlobalNamespace::VRsenalLogger::__get__playerNameWasEnteredSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerNameWasEnteredSignal;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StringSignal*> const& GlobalNamespace::VRsenalLogger::__get__playerNameWasEnteredSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerNameWasEnteredSignal;
}
constexpr void GlobalNamespace::VRsenalLogger::__set__playerNameWasEnteredSignal(::GlobalNamespace::StringSignal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerNameWasEnteredSignal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::VRsenalScoreLogger*& GlobalNamespace::VRsenalLogger::__get__vRsenalScoreLoggerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vRsenalScoreLoggerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRsenalScoreLogger*> const& GlobalNamespace::VRsenalLogger::__get__vRsenalScoreLoggerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vRsenalScoreLoggerPrefab;
}
constexpr void GlobalNamespace::VRsenalLogger::__set__vRsenalScoreLoggerPrefab(::GlobalNamespace::VRsenalScoreLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vRsenalScoreLoggerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameScenesManager*& GlobalNamespace::VRsenalLogger::__get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& GlobalNamespace::VRsenalLogger::__get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::VRsenalLogger::__set__gameScenesManager(::GlobalNamespace::GameScenesManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::VRsenalLogger::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRsenalLogger*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRsenalLogger::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRsenalLogger*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRsenalLogger::HandleGameScenesManagerInstallEarlyBindings(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, ::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRsenalLogger*>::get(), "HandleGameScenesManagerInstallEarlyBindings", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenesTransitionSetupData, container);
}
inline void GlobalNamespace::VRsenalLogger::HandlePlayerNameWasEntered(::StringW playerName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRsenalLogger*>::get(), "HandlePlayerNameWasEntered",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerName);
}
inline ::GlobalNamespace::VRsenalLogger* GlobalNamespace::VRsenalLogger::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::VRsenalLogger*>());
}
inline void GlobalNamespace::VRsenalLogger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRsenalLogger*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRsenalLogger::VRsenalLogger() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
