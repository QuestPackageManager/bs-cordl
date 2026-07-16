#pragma once
// IWYU pragma private; include "OVR/OpenVR/OpenVRInterop.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__OpenVRInterop_def.hpp"
#include "OVR/OpenVR/zzzz__EVRApplicationType_def.hpp"
#include "OVR/OpenVR/zzzz__EVRInitError_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.InitInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::OVR::OpenVR::EVRInitError>, ::OVR::OpenVR::EVRApplicationType)>(&::OVR::OpenVR::OpenVRInterop::InitInternal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e45964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(),
                                                { "InitInternal", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRInitError>>(), ::i2c::type_of<::OVR::OpenVR::EVRApplicationType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.InitInternal2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::OVR::OpenVR::EVRInitError>, ::OVR::OpenVR::EVRApplicationType, ::ByRefConst<::StringW>)>(
    &::OVR::OpenVR::OpenVRInterop::InitInternal2)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e459e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(),
            { "InitInternal2", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRInitError>>(), ::i2c::type_of<::OVR::OpenVR::EVRApplicationType>(), ::i2c::type_of<::ByRefConst<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.ShutdownInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::OVR::OpenVR::OpenVRInterop::ShutdownInternal)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e45a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(), { "ShutdownInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.IsHmdPresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::OVR::OpenVR::OpenVRInterop::IsHmdPresent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e45b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(), { "IsHmdPresent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.IsRuntimeInstalled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::OVR::OpenVR::OpenVRInterop::IsRuntimeInstalled)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e45b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(), { "IsRuntimeInstalled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.GetStringForHmdError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::OVR::OpenVR::EVRInitError)>(&::OVR::OpenVR::OpenVRInterop::GetStringForHmdError)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e45bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(), { "GetStringForHmdError", {}, { ::i2c::type_of<::OVR::OpenVR::EVRInitError>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.GetGenericInterface
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::ByRefConst<::StringW>, ::by_ref<::OVR::OpenVR::EVRInitError>)>(&::OVR::OpenVR::OpenVRInterop::GetGenericInterface)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e45c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(),
                                                             { "GetGenericInterface", {}, { ::i2c::type_of<::ByRefConst<::StringW>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRInitError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.IsInterfaceVersionValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ByRefConst<::StringW>)>(&::OVR::OpenVR::OpenVRInterop::IsInterfaceVersionValid)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e45cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(), { "IsInterfaceVersionValid", {}, { ::i2c::type_of<::ByRefConst<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop.GetInitToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::OVR::OpenVR::OpenVRInterop::GetInitToken)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e45d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(), { "GetInitToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::OpenVRInterop._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::OpenVRInterop::*)()>(&::OVR::OpenVR::OpenVRInterop::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e45df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline uint32_t OVR::OpenVR::OpenVRInterop::InitInternal(::by_ref<::OVR::OpenVR::EVRInitError> peError, ::OVR::OpenVR::EVRApplicationType eApplicationType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(),
                                                           { "InitInternal", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRInitError>>(), ::i2c::type_of<::OVR::OpenVR::EVRApplicationType>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, peError, eApplicationType);
}
inline uint32_t OVR::OpenVR::OpenVRInterop::InitInternal2(::by_ref<::OVR::OpenVR::EVRInitError> peError, ::OVR::OpenVR::EVRApplicationType eApplicationType, ::ByRefConst<::StringW> pStartupInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(),
          { "InitInternal2", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRInitError>>(), ::i2c::type_of<::OVR::OpenVR::EVRApplicationType>(), ::i2c::type_of<::ByRefConst<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, peError, eApplicationType, pStartupInfo);
}
inline void OVR::OpenVR::OpenVRInterop::ShutdownInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(), { "ShutdownInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool OVR::OpenVR::OpenVRInterop::IsHmdPresent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(), { "IsHmdPresent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool OVR::OpenVR::OpenVRInterop::IsRuntimeInstalled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(), { "IsRuntimeInstalled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::IntPtr OVR::OpenVR::OpenVRInterop::GetStringForHmdError(::OVR::OpenVR::EVRInitError error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(), { "GetStringForHmdError", {}, { ::i2c::type_of<::OVR::OpenVR::EVRInitError>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, error);
}
inline ::System::IntPtr OVR::OpenVR::OpenVRInterop::GetGenericInterface(::ByRefConst<::StringW> pchInterfaceVersion, ::by_ref<::OVR::OpenVR::EVRInitError> peError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(),
                                                           { "GetGenericInterface", {}, { ::i2c::type_of<::ByRefConst<::StringW>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRInitError>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, pchInterfaceVersion, peError);
}
inline bool OVR::OpenVR::OpenVRInterop::IsInterfaceVersionValid(::ByRefConst<::StringW> pchInterfaceVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(), { "IsInterfaceVersionValid", {}, { ::i2c::type_of<::ByRefConst<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchInterfaceVersion);
}
inline uint32_t OVR::OpenVR::OpenVRInterop::GetInitToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(), { "GetInitToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline void OVR::OpenVR::OpenVRInterop::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::OpenVRInterop*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OVR::OpenVR::OpenVRInterop* OVR::OpenVR::OpenVRInterop::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::OpenVRInterop*>());
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::OpenVRInterop::OpenVRInterop() {}
