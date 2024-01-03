#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Timeline/zzzz__SignalAsset_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::SignalAsset.add_OnEnableCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*)>(
    &::UnityEngine::Timeline::SignalAsset::add_OnEnableCallback)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2c68d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalAsset*>::get(), "add_OnEnableCallback", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalAsset.remove_OnEnableCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*)>(
    &::UnityEngine::Timeline::SignalAsset::remove_OnEnableCallback)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2c68e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalAsset*>::get(), "remove_OnEnableCallback", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalAsset.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::SignalAsset::*)()>(&::UnityEngine::Timeline::SignalAsset::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2c68f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalAsset*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::SignalAsset::*)()>(&::UnityEngine::Timeline::SignalAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c68f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalAsset*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::SignalAsset::setStaticF_OnEnableCallback(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*, "OnEnableCallback",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalAsset*>::get>(
      std::forward<::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*>(value));
}
inline ::System::Action_1<::UnityEngine::Timeline::SignalAsset*>* UnityEngine::Timeline::SignalAsset::getStaticF_OnEnableCallback() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*, "OnEnableCallback",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalAsset*>::get>();
}
inline void UnityEngine::Timeline::SignalAsset::add_OnEnableCallback(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalAsset*>::get(), "add_OnEnableCallback", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Timeline::SignalAsset::remove_OnEnableCallback(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalAsset*>::get(), "remove_OnEnableCallback", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Timeline::SignalAsset::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalAsset*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::SignalAsset* UnityEngine::Timeline::SignalAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::SignalAsset*>());
}
inline void UnityEngine::Timeline::SignalAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::SignalAsset*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::SignalAsset::SignalAsset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
