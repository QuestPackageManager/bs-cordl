#pragma once
#include "GlobalNamespace/zzzz__AppInit_impl.hpp"
#include "GlobalNamespace/zzzz__PCAppInit_def.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__DefaultScenesTransitionsFromInit_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PCAppInit.AppStartAndMultiSceneEditorSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PCAppInit::*)()>(&::GlobalNamespace::PCAppInit::AppStartAndMultiSceneEditorSetup)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2229668;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PCAppInit.RepeatableSetupAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PCAppInit::*)()>(
    &::GlobalNamespace::PCAppInit::RepeatableSetupAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22296d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PCAppInit.TransitionToNextScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PCAppInit::*)()>(&::GlobalNamespace::PCAppInit::TransitionToNextScene)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x222976c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PCAppInit.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PCAppInit::*)()>(&::GlobalNamespace::PCAppInit::InstallBindings)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2229840;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PCAppInit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PCAppInit::*)()>(&::GlobalNamespace::PCAppInit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2229a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MainSystemInit*& GlobalNamespace::PCAppInit::__get__mainSystemInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSystemInit;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSystemInit*> const& GlobalNamespace::PCAppInit::__get__mainSystemInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSystemInit;
}
constexpr void GlobalNamespace::PCAppInit::__set__mainSystemInit(::GlobalNamespace::MainSystemInit* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSystemInit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit*& GlobalNamespace::PCAppInit::__get__defaultScenesTransitionsFromInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultScenesTransitionsFromInit;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DefaultScenesTransitionsFromInit*> const& GlobalNamespace::PCAppInit::__get__defaultScenesTransitionsFromInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultScenesTransitionsFromInit;
}
constexpr void GlobalNamespace::PCAppInit::__set__defaultScenesTransitionsFromInit(::GlobalNamespace::DefaultScenesTransitionsFromInit* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultScenesTransitionsFromInit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PCAppInit::__get__goStraightToMenuCommandArgument() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goStraightToMenuCommandArgument;
}
constexpr ::StringW const& GlobalNamespace::PCAppInit::__get__goStraightToMenuCommandArgument() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goStraightToMenuCommandArgument;
}
constexpr void GlobalNamespace::PCAppInit::__set__goStraightToMenuCommandArgument(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____goStraightToMenuCommandArgument)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PCAppInit::__get__goStraightToEditorCommandArgument() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goStraightToEditorCommandArgument;
}
constexpr ::StringW const& GlobalNamespace::PCAppInit::__get__goStraightToEditorCommandArgument() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goStraightToEditorCommandArgument;
}
constexpr void GlobalNamespace::PCAppInit::__set__goStraightToEditorCommandArgument(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____goStraightToEditorCommandArgument)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PCAppInit::AppStartAndMultiSceneEditorSetup() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PCAppInit::RepeatableSetupAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PCAppInit::TransitionToNextScene() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PCAppInit::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PCAppInit* GlobalNamespace::PCAppInit::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PCAppInit*>());
}
inline void GlobalNamespace::PCAppInit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PCAppInit::PCAppInit() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
