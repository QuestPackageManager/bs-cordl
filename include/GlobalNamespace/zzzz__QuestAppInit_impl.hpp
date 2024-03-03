#pragma once
#include "GlobalNamespace/zzzz__AppInit_impl.hpp"
#include "GlobalNamespace/zzzz__QuestAppInit_def.hpp"
#include "GlobalNamespace/zzzz__DefaultScenesTransitionsFromInit_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::QuestAppInit.AppStartAndMultiSceneEditorSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuestAppInit::*)()>(&::GlobalNamespace::QuestAppInit::AppStartAndMultiSceneEditorSetup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x238068c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestAppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestAppInit*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestAppInit.RepeatableSetupAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::QuestAppInit::*)()>(
    &::GlobalNamespace::QuestAppInit::RepeatableSetupAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2380690;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestAppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestAppInit*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestAppInit.TransitionToNextScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuestAppInit::*)()>(&::GlobalNamespace::QuestAppInit::TransitionToNextScene)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x238072c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestAppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestAppInit*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestAppInit.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuestAppInit::*)()>(&::GlobalNamespace::QuestAppInit::InstallBindings)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x23807c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestAppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestAppInit*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestAppInit.ApplyDeviceSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuestAppInit::*)()>(&::GlobalNamespace::QuestAppInit::ApplyDeviceSettings)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x23809c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestAppInit*>::get(), "ApplyDeviceSettings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestAppInit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuestAppInit::*)()>(&::GlobalNamespace::QuestAppInit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2380c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestAppInit*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MainSystemInit>& GlobalNamespace::QuestAppInit::__cordl_internal_get__mainSystemInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSystemInit;
}
constexpr ::UnityW<::GlobalNamespace::MainSystemInit> const& GlobalNamespace::QuestAppInit::__cordl_internal_get__mainSystemInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSystemInit;
}
constexpr void GlobalNamespace::QuestAppInit::__cordl_internal_set__mainSystemInit(::UnityW<::GlobalNamespace::MainSystemInit> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSystemInit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit>& GlobalNamespace::QuestAppInit::__cordl_internal_get__defaultScenesTransitionsFromInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultScenesTransitionsFromInit;
}
constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> const& GlobalNamespace::QuestAppInit::__cordl_internal_get__defaultScenesTransitionsFromInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultScenesTransitionsFromInit;
}
constexpr void GlobalNamespace::QuestAppInit::__cordl_internal_set__defaultScenesTransitionsFromInit(::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultScenesTransitionsFromInit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& GlobalNamespace::QuestAppInit::__cordl_internal_get__mainSettingsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& GlobalNamespace::QuestAppInit::__cordl_internal_get__mainSettingsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr void GlobalNamespace::QuestAppInit::__cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSettingsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::QuestAppInit::AppStartAndMultiSceneEditorSetup() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestAppInit*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::QuestAppInit::RepeatableSetupAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestAppInit*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::QuestAppInit::TransitionToNextScene() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestAppInit*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::QuestAppInit::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestAppInit*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::QuestAppInit::ApplyDeviceSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestAppInit*>::get(), "ApplyDeviceSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::QuestAppInit* GlobalNamespace::QuestAppInit::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::QuestAppInit*>());
}
inline void GlobalNamespace::QuestAppInit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestAppInit*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuestAppInit::QuestAppInit() {}
