#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableWhenMirrorIsEnabled_def.hpp"
#include "GlobalNamespace/zzzz__Mirror_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableWhenMirrorIsEnabled.get_mirror
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Mirror* (::GlobalNamespace::DisableWhenMirrorIsEnabled::*)()>(
    &::GlobalNamespace::DisableWhenMirrorIsEnabled::get_mirror)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f77fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableWhenMirrorIsEnabled*>::get(),
                                                                               "get_mirror", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableWhenMirrorIsEnabled.set_mirror
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableWhenMirrorIsEnabled::*)(::GlobalNamespace::Mirror*)>(
    &::GlobalNamespace::DisableWhenMirrorIsEnabled::set_mirror)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f7804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableWhenMirrorIsEnabled*>::get(), "set_mirror", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Mirror*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableWhenMirrorIsEnabled.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableWhenMirrorIsEnabled::*)()>(&::GlobalNamespace::DisableWhenMirrorIsEnabled::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22f780c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableWhenMirrorIsEnabled*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableWhenMirrorIsEnabled.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableWhenMirrorIsEnabled::*)()>(
    &::GlobalNamespace::DisableWhenMirrorIsEnabled::OnDestroy)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22f78d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableWhenMirrorIsEnabled*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableWhenMirrorIsEnabled.HandleMirrorDidChangeEnabledState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableWhenMirrorIsEnabled::*)(bool)>(
    &::GlobalNamespace::DisableWhenMirrorIsEnabled::HandleMirrorDidChangeEnabledState)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22f78ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableWhenMirrorIsEnabled*>::get(), "HandleMirrorDidChangeEnabledState",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableWhenMirrorIsEnabled._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableWhenMirrorIsEnabled::*)()>(&::GlobalNamespace::DisableWhenMirrorIsEnabled::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f79ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableWhenMirrorIsEnabled*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Mirror*& GlobalNamespace::DisableWhenMirrorIsEnabled::__get__mirror() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirror;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Mirror*> const& GlobalNamespace::DisableWhenMirrorIsEnabled::__get__mirror() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirror;
}
constexpr void GlobalNamespace::DisableWhenMirrorIsEnabled::__set__mirror(::GlobalNamespace::Mirror* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirror)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::Mirror* GlobalNamespace::DisableWhenMirrorIsEnabled::get_mirror() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableWhenMirrorIsEnabled*>::get(),
                                                                             "get_mirror", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Mirror*, false>(this, ___internal_method);
}
inline void GlobalNamespace::DisableWhenMirrorIsEnabled::set_mirror(::GlobalNamespace::Mirror* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableWhenMirrorIsEnabled*>::get(), "set_mirror", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Mirror*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::DisableWhenMirrorIsEnabled::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableWhenMirrorIsEnabled*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DisableWhenMirrorIsEnabled::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableWhenMirrorIsEnabled*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DisableWhenMirrorIsEnabled::HandleMirrorDidChangeEnabledState(bool isEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableWhenMirrorIsEnabled*>::get(), "HandleMirrorDidChangeEnabledState",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isEnabled);
}
inline ::GlobalNamespace::DisableWhenMirrorIsEnabled* GlobalNamespace::DisableWhenMirrorIsEnabled::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DisableWhenMirrorIsEnabled*>());
}
inline void GlobalNamespace::DisableWhenMirrorIsEnabled::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableWhenMirrorIsEnabled*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisableWhenMirrorIsEnabled::DisableWhenMirrorIsEnabled() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
