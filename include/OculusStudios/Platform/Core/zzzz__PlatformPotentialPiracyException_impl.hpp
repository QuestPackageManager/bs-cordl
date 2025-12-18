#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/PlatformPotentialPiracyException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformPotentialPiracyException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::PlatformPotentialPiracyException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::PlatformPotentialPiracyException::*)()>(
    &::OculusStudios::Platform::Core::PlatformPotentialPiracyException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d8021c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::PlatformPotentialPiracyException*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::PlatformPotentialPiracyException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::PlatformPotentialPiracyException::*)(::StringW)>(
    &::OculusStudios::Platform::Core::PlatformPotentialPiracyException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d80274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::PlatformPotentialPiracyException*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::PlatformPotentialPiracyException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::PlatformPotentialPiracyException::*)(::StringW, ::System::Exception*)>(
    &::OculusStudios::Platform::Core::PlatformPotentialPiracyException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d802e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::PlatformPotentialPiracyException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Core::PlatformPotentialPiracyException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::PlatformPotentialPiracyException*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::PlatformPotentialPiracyException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::PlatformPotentialPiracyException*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void OculusStudios::Platform::Core::PlatformPotentialPiracyException::_ctor(::StringW message, ::System::Exception* inner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::PlatformPotentialPiracyException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, inner);
}
inline ::OculusStudios::Platform::Core::PlatformPotentialPiracyException* OculusStudios::Platform::Core::PlatformPotentialPiracyException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Core::PlatformPotentialPiracyException*>());
}
inline ::OculusStudios::Platform::Core::PlatformPotentialPiracyException* OculusStudios::Platform::Core::PlatformPotentialPiracyException::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Core::PlatformPotentialPiracyException*>(message));
}
inline ::OculusStudios::Platform::Core::PlatformPotentialPiracyException* OculusStudios::Platform::Core::PlatformPotentialPiracyException::New_ctor(::StringW message, ::System::Exception* inner) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Core::PlatformPotentialPiracyException*>(message, inner));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::PlatformPotentialPiracyException::PlatformPotentialPiracyException() {}
