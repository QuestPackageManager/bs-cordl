#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectionErrorDialogViewController.hpp"
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectionErrorDialogViewController_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionErrorDialogViewController_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c1190c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0._Init_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0::*)(int32_t)>(
    &::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0::_Init_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3c1191c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0*>::get(), "<Init>b__0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0::__cordl_internal_get_buttonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonAction;
}
constexpr ::System::Action* const& GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0::__cordl_internal_get_buttonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonAction;
}
constexpr void GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0::__cordl_internal_set_buttonAction(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buttonAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0::_Init_b__0(int32_t btnIdx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0*>::get(), "<Init>b__0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, btnIdx);
}
inline ::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0* GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass0_0::ConnectionErrorDialogViewController___c__DisplayClass0_0() {}
//  Writing Method size for method: ::GlobalNamespace::ConnectionErrorDialogViewController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectionErrorDialogViewController::*)(
    ::GlobalNamespace::DisconnectedReason, ::System::Action*)>(&::GlobalNamespace::ConnectionErrorDialogViewController::Init)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x3c11770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionErrorDialogViewController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectionErrorDialogViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectionErrorDialogViewController::*)()>(
    &::GlobalNamespace::ConnectionErrorDialogViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c11914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionErrorDialogViewController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ConnectionErrorDialogViewController::Init(::GlobalNamespace::DisconnectedReason reason, ::System::Action* buttonAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionErrorDialogViewController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason, buttonAction);
}
inline void GlobalNamespace::ConnectionErrorDialogViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionErrorDialogViewController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectionErrorDialogViewController* GlobalNamespace::ConnectionErrorDialogViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectionErrorDialogViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectionErrorDialogViewController::ConnectionErrorDialogViewController() {}
