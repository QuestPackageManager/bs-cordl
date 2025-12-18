#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/PlatformMissingDependenciesException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformMissingDependenciesException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::PlatformMissingDependenciesException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::PlatformMissingDependenciesException::*)()>(
    &::OculusStudios::Platform::Core::PlatformMissingDependenciesException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d800e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::PlatformMissingDependenciesException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::PlatformMissingDependenciesException::*)(::StringW)>(
    &::OculusStudios::Platform::Core::PlatformMissingDependenciesException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d8013c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::PlatformMissingDependenciesException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::PlatformMissingDependenciesException::*)(::StringW, ::System::Exception*)>(
    &::OculusStudios::Platform::Core::PlatformMissingDependenciesException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d801a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Core::PlatformMissingDependenciesException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::PlatformMissingDependenciesException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void OculusStudios::Platform::Core::PlatformMissingDependenciesException::_ctor(::StringW message, ::System::Exception* inner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, inner);
}
inline ::OculusStudios::Platform::Core::PlatformMissingDependenciesException* OculusStudios::Platform::Core::PlatformMissingDependenciesException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>());
}
inline ::OculusStudios::Platform::Core::PlatformMissingDependenciesException* OculusStudios::Platform::Core::PlatformMissingDependenciesException::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>(message));
}
inline ::OculusStudios::Platform::Core::PlatformMissingDependenciesException* OculusStudios::Platform::Core::PlatformMissingDependenciesException::New_ctor(::StringW message,
                                                                                                                                                            ::System::Exception* inner) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Core::PlatformMissingDependenciesException*>(message, inner));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::PlatformMissingDependenciesException::PlatformMissingDependenciesException() {}
