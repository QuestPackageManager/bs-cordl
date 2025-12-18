#pragma once
// IWYU pragma private; include "System/Diagnostics/TraceSwitch.hpp"
#include "System/Diagnostics/zzzz__Switch_impl.hpp"
#include "System/Diagnostics/zzzz__TraceSwitch_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::TraceSwitch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceSwitch::*)(::StringW, ::StringW)>(&::System::Diagnostics::TraceSwitch::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61e5b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSwitch*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceSwitch.OnSwitchSettingChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceSwitch::*)()>(&::System::Diagnostics::TraceSwitch::OnSwitchSettingChanged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x61e5bbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSwitch*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSwitch*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceSwitch.OnValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::TraceSwitch::*)()>(&::System::Diagnostics::TraceSwitch::OnValueChanged)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x61e5bf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSwitch*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSwitch*>::get(), 5));
    return ___internal_method;
  }
};
inline void System::Diagnostics::TraceSwitch::_ctor(::StringW displayName, ::StringW description) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSwitch*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName, description);
}
inline void System::Diagnostics::TraceSwitch::OnSwitchSettingChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSwitch*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Diagnostics::TraceSwitch::OnValueChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::TraceSwitch*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Diagnostics::TraceSwitch* System::Diagnostics::TraceSwitch::New_ctor(::StringW displayName, ::StringW description) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::TraceSwitch*>(displayName, description));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::TraceSwitch::TraceSwitch() {}
