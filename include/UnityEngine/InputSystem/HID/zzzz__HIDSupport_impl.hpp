#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HIDSupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDSupport_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDSupport_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage::*)(
    ::UnityEngine::InputSystem::HID::HID_UsagePage, int32_t)>(&::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x460422c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::HID::HID_UsagePage>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage::*)(
    ::UnityEngine::InputSystem::HID::HID_GenericDesktop)>(&::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x460437c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::HID::HID_GenericDesktop>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage::_ctor(::UnityEngine::InputSystem::HID::HID_UsagePage page, int32_t usage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::HID::HID_UsagePage>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, page, usage);
}
inline void UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage::_ctor(::UnityEngine::InputSystem::HID::HID_GenericDesktop usage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::HID::HID_GenericDesktop>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, usage);
}
// Ctor Parameters [CppParam { name: "page", ty: "::UnityEngine::InputSystem::HID::HID_UsagePage", modifiers: "", def_value: Some("{}") }, CppParam { name: "usage", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage::HIDSupport_HIDPageUsage(::UnityEngine::InputSystem::HID::HID_UsagePage page, int32_t usage) noexcept {
  this->page = page;
  this->usage = usage;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage::HIDSupport_HIDPageUsage() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDSupport.get_supportedHIDUsages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage> (*)()>(&::UnityEngine::InputSystem::HID::HIDSupport::get_supportedHIDUsages)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4603fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport*>::get(),
                                                                               "get_supportedHIDUsages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDSupport.set_supportedHIDUsages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>)>(&::UnityEngine::InputSystem::HID::HIDSupport::set_supportedHIDUsages)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x4604000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport*>::get(), "set_supportedHIDUsages", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDSupport.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::HID::HIDSupport::Initialize)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x4604234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::HID::HIDSupport::setStaticF_s_SupportedHIDUsages(
    ::ArrayW<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage, ::Array<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage, ::Array<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>*>, "s_SupportedHIDUsages",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport*>::get>(
      std::forward<::ArrayW<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage, ::Array<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>*>>(value));
}
inline ::ArrayW<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage, ::Array<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>*>
UnityEngine::InputSystem::HID::HIDSupport::getStaticF_s_SupportedHIDUsages() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage, ::Array<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>*>,
                                           "s_SupportedHIDUsages", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport*>::get>();
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage> UnityEngine::InputSystem::HID::HIDSupport::get_supportedHIDUsages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport*>::get(),
                                                                             "get_supportedHIDUsages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::HID::HIDSupport::set_supportedHIDUsages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport*>::get(), "set_supportedHIDUsages", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::HID::HIDSupport::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDSupport*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::HID::HIDSupport::HIDSupport() {}
