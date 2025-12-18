#pragma once
// IWYU pragma private; include "OVR/OpenVR/OpenVRInterop.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__OpenVRInterop_def.hpp"
#include "OVR/OpenVR/zzzz__EVRApplicationType_def.hpp"
#include "OVR/OpenVR/zzzz__EVRInitError_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.InitInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ByRef<::OVR::OpenVR::EVRInitError>, ::OVR::OpenVR::EVRApplicationType)>(
    &::OVR::OpenVR::OpenVRInterop::InitInternal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c996d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "InitInternal", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVRInitError>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRApplicationType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.InitInternal2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ByRef<::OVR::OpenVR::EVRInitError>, ::OVR::OpenVR::EVRApplicationType, ::ByRefConst<::StringW>)>(
    &::OVR::OpenVR::OpenVRInterop::InitInternal2)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c99754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "InitInternal2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVRInitError>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRApplicationType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.ShutdownInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::OVR::OpenVR::OpenVRInterop::ShutdownInternal)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c99808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "ShutdownInternal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.IsHmdPresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::OVR::OpenVR::OpenVRInterop::IsHmdPresent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c9986c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "IsHmdPresent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.IsRuntimeInstalled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::OVR::OpenVR::OpenVRInterop::IsRuntimeInstalled)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c998d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "IsRuntimeInstalled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.GetStringForHmdError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::OVR::OpenVR::EVRInitError)>(&::OVR::OpenVR::OpenVRInterop::GetStringForHmdError)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c99944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "GetStringForHmdError", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRInitError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.GetGenericInterface
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::ByRefConst<::StringW>, ::ByRef<::OVR::OpenVR::EVRInitError>)>(
    &::OVR::OpenVR::OpenVRInterop::GetGenericInterface)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c999c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "GetGenericInterface", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::StringW>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVRInitError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.IsInterfaceVersionValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRefConst<::StringW>)>(&::OVR::OpenVR::OpenVRInterop::IsInterfaceVersionValid)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c99a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "IsInterfaceVersionValid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.GetInitToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::OVR::OpenVR::OpenVRInterop::GetInitToken)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c99afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "GetInitToken",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::OpenVRInterop::*)()>(&::OVR::OpenVR::OpenVRInterop::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c99b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline uint32_t OVR::OpenVR::OpenVRInterop::InitInternal(::ByRef<::OVR::OpenVR::EVRInitError> peError, ::OVR::OpenVR::EVRApplicationType eApplicationType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "InitInternal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVRInitError>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRApplicationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, peError, eApplicationType);
}
inline uint32_t OVR::OpenVR::OpenVRInterop::InitInternal2(::ByRef<::OVR::OpenVR::EVRInitError> peError, ::OVR::OpenVR::EVRApplicationType eApplicationType, ::ByRefConst<::StringW> pStartupInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "InitInternal2", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVRInitError>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRApplicationType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, peError, eApplicationType, pStartupInfo);
}
inline void OVR::OpenVR::OpenVRInterop::ShutdownInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "ShutdownInternal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool OVR::OpenVR::OpenVRInterop::IsHmdPresent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "IsHmdPresent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool OVR::OpenVR::OpenVRInterop::IsRuntimeInstalled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "IsRuntimeInstalled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::System::IntPtr OVR::OpenVR::OpenVRInterop::GetStringForHmdError(::OVR::OpenVR::EVRInitError error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "GetStringForHmdError", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRInitError>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, error);
}
inline ::System::IntPtr OVR::OpenVR::OpenVRInterop::GetGenericInterface(::ByRefConst<::StringW> pchInterfaceVersion, ::ByRef<::OVR::OpenVR::EVRInitError> peError) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "GetGenericInterface", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::StringW>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVRInitError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, pchInterfaceVersion, peError);
}
inline bool OVR::OpenVR::OpenVRInterop::IsInterfaceVersionValid(::ByRefConst<::StringW> pchInterfaceVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "IsInterfaceVersionValid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pchInterfaceVersion);
}
inline uint32_t OVR::OpenVR::OpenVRInterop::GetInitToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), "GetInitToken",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
inline void OVR::OpenVR::OpenVRInterop::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::OpenVRInterop*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OVR::OpenVR::OpenVRInterop* OVR::OpenVR::OpenVRInterop::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::OpenVRInterop*>());
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::OpenVRInterop::OpenVRInterop() {}
