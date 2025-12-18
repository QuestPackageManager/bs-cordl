#pragma once
// IWYU pragma private; include "System/Diagnostics/SourceSwitch.hpp"
#include "System/Diagnostics/zzzz__Switch_impl.hpp"
#include "System/Diagnostics/zzzz__SourceSwitch_def.hpp"
#include "System/Diagnostics/zzzz__SourceLevels_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::SourceSwitch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::SourceSwitch::*)(::StringW, ::StringW)>(&::System::Diagnostics::SourceSwitch::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x61e16d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SourceSwitch*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::SourceSwitch.get_Level
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::SourceLevels (::System::Diagnostics::SourceSwitch::*)()>(
    &::System::Diagnostics::SourceSwitch::get_Level)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61e198c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SourceSwitch*>::get(), "get_Level",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::SourceSwitch.set_Level
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::SourceSwitch::*)(::System::Diagnostics::SourceLevels)>(
    &::System::Diagnostics::SourceSwitch::set_Level)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61e19cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SourceSwitch*>::get(), "set_Level", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::SourceLevels>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::SourceSwitch.OnValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::SourceSwitch::*)()>(&::System::Diagnostics::SourceSwitch::OnValueChanged)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x61e19d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SourceSwitch*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SourceSwitch*>::get(), 5));
    return ___internal_method;
  }
};
inline void System::Diagnostics::SourceSwitch::_ctor(::StringW displayName, ::StringW defaultSwitchValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SourceSwitch*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName, defaultSwitchValue);
}
inline ::System::Diagnostics::SourceLevels System::Diagnostics::SourceSwitch::get_Level() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SourceSwitch*>::get(), "get_Level",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::SourceLevels, false>(this, ___internal_method);
}
inline void System::Diagnostics::SourceSwitch::set_Level(::System::Diagnostics::SourceLevels value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SourceSwitch*>::get(), "set_Level", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::SourceLevels>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Diagnostics::SourceSwitch::OnValueChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SourceSwitch*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Diagnostics::SourceSwitch* System::Diagnostics::SourceSwitch::New_ctor(::StringW displayName, ::StringW defaultSwitchValue) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::SourceSwitch*>(displayName, defaultSwitchValue));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::SourceSwitch::SourceSwitch() {}
