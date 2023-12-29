#pragma once
#include "GlobalNamespace/zzzz__SonyOnGoingToBackgroundSaveHandler_impl.hpp"
#include "GlobalNamespace/zzzz__PS4OnGoingToBackgroundSaveHandler_def.hpp"
#include "GlobalNamespace/zzzz__PS4Helper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler.Subscribe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::*)()>(
    &::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::Subscribe)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x222e168;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler.Unsubscribe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::*)()>(
    &::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::Unsubscribe)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x222e1f0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::*)()>(
    &::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222e284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PS4Helper*& GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::__get__ps4Helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4Helper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4Helper*> const& GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::__get__ps4Helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4Helper;
}
constexpr void GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::__set__ps4Helper(::GlobalNamespace::PS4Helper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps4Helper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::Subscribe() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler*>::get(),
                                                                             "Subscribe", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::Unsubscribe() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler*>::get(),
                                                                             "Unsubscribe", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler* GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler*>());
}
inline void GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler::PS4OnGoingToBackgroundSaveHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
