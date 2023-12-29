#pragma once
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_impl.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourCallbackHooks_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourCallbackHooks.add_OnUpdateDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MonoBehaviourCallbackHooks::*)(::System::Action_1<float_t>*)>(
    &::GlobalNamespace::MonoBehaviourCallbackHooks::add_OnUpdateDelegate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a46bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonoBehaviourCallbackHooks*>::get(), "add_OnUpdateDelegate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourCallbackHooks.remove_OnUpdateDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MonoBehaviourCallbackHooks::*)(::System::Action_1<float_t>*)>(
    &::GlobalNamespace::MonoBehaviourCallbackHooks::remove_OnUpdateDelegate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a46ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonoBehaviourCallbackHooks*>::get(), "remove_OnUpdateDelegate",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourCallbackHooks.GetGameObjectName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MonoBehaviourCallbackHooks::*)()>(
    &::GlobalNamespace::MonoBehaviourCallbackHooks::GetGameObjectName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a46d48;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonoBehaviourCallbackHooks*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonoBehaviourCallbackHooks*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourCallbackHooks.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MonoBehaviourCallbackHooks::*)()>(&::GlobalNamespace::MonoBehaviourCallbackHooks::Update)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a46d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonoBehaviourCallbackHooks*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourCallbackHooks._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MonoBehaviourCallbackHooks::*)()>(&::GlobalNamespace::MonoBehaviourCallbackHooks::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a46db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonoBehaviourCallbackHooks*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<float_t>*& GlobalNamespace::MonoBehaviourCallbackHooks::__get_m_OnUpdateDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnUpdateDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& GlobalNamespace::MonoBehaviourCallbackHooks::__get_m_OnUpdateDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnUpdateDelegate;
}
constexpr void GlobalNamespace::MonoBehaviourCallbackHooks::__set_m_OnUpdateDelegate(::System::Action_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnUpdateDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MonoBehaviourCallbackHooks::add_OnUpdateDelegate(::System::Action_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonoBehaviourCallbackHooks*>::get(), "add_OnUpdateDelegate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonoBehaviourCallbackHooks::remove_OnUpdateDelegate(::System::Action_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonoBehaviourCallbackHooks*>::get(), "remove_OnUpdateDelegate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MonoBehaviourCallbackHooks::GetGameObjectName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonoBehaviourCallbackHooks*>::get(),
                                                                             "GetGameObjectName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::MonoBehaviourCallbackHooks::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonoBehaviourCallbackHooks*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MonoBehaviourCallbackHooks* GlobalNamespace::MonoBehaviourCallbackHooks::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MonoBehaviourCallbackHooks*>());
}
inline void GlobalNamespace::MonoBehaviourCallbackHooks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MonoBehaviourCallbackHooks*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonoBehaviourCallbackHooks::MonoBehaviourCallbackHooks() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
