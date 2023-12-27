#pragma once
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectionErrorDialogViewController_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionErrorDialogViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ae8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0._Init_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0::*)(int32_t)>(
    &::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0::_Init_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22ae8f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0*>::get(), "<Init>b__0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0::__get_buttonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___buttonAction;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0::__get_buttonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___buttonAction;
}
constexpr void GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0::__set_buttonAction(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buttonAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0* GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0*>());
}
inline void GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0::_Init_b__0(int32_t btnIdx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0*>::get(),
                                               "<Init>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, btnIdx);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConnectionErrorDialogViewController____c__DisplayClass0_0::__ConnectionErrorDialogViewController____c__DisplayClass0_0() {}
//  Writing Method size for method: ::GlobalNamespace::ConnectionErrorDialogViewController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectionErrorDialogViewController::*)(
    ::GlobalNamespace::DisconnectedReason, ::System::Action*)>(&::GlobalNamespace::ConnectionErrorDialogViewController::Init)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x22ae750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionErrorDialogViewController*>::get(), "Init", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectionErrorDialogViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectionErrorDialogViewController::*)()>(
    &::GlobalNamespace::ConnectionErrorDialogViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ae8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionErrorDialogViewController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ConnectionErrorDialogViewController::Init(::GlobalNamespace::DisconnectedReason reason, ::System::Action* buttonAction) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionErrorDialogViewController*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason, buttonAction);
}
inline ::GlobalNamespace::ConnectionErrorDialogViewController* GlobalNamespace::ConnectionErrorDialogViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ConnectionErrorDialogViewController*>());
}
inline void GlobalNamespace::ConnectionErrorDialogViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionErrorDialogViewController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectionErrorDialogViewController::ConnectionErrorDialogViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
