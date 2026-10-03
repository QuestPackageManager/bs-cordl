#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/OpenXRResultStatus.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__OpenXRResultStatus_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__OpenXRResultStatus_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode::OpenXRResultStatus_StatusCode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode::OpenXRResultStatus_StatusCode() {}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode::PlatformQualifiedSuccess{ static_cast<int32_t>(
    0x1) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode::UnqualifiedSuccess{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode::PlatformError{ static_cast<int32_t>(0xffffffff) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode::UnknownError{ static_cast<int32_t>(0xfffffffe) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode::ProviderUninitialized{ static_cast<int32_t>(
    0xfffffffd) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode::ProviderNotStarted{ static_cast<int32_t>(
    0xfffffffc) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode::ValidationFailure{ static_cast<int32_t>(
    0xfffffffb) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode::Unsupported{ static_cast<int32_t>(0xfffffffa) };
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus.get_unqualifiedSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus (*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::get_unqualifiedSuccess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(), { "get_unqualifiedSuccess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus.get_statusCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode (::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::get_statusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(), { "get_statusCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus.get_nativeStatusCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::get_nativeStatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(), { "get_nativeStatusCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::*)(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e3e49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e3e540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::*)(
    ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(&::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus.IsUnqualifiedSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::IsUnqualifiedSuccess)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e3e558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(), { "IsUnqualifiedSuccess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus.IsSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::IsSuccess)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e3e568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(), { "IsSuccess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus.IsError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::IsError)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e3e578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(), { "IsError", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus.op_Implicit_bool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::op_Implicit_bool)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e3e584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::*)(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e3e590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrResult)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::Equals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e3e5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::*)(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::CompareTo)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6e3e604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(),
                                                                                           { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::ToString)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e3e6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::get_unqualifiedSuccess() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(), { "get_unqualifiedSuccess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::get_statusCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(), { "get_statusCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode>(*this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::get_nativeStatusCode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(), { "get_nativeStatusCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::_ctor(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode statusCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, statusCode);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::_ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrResult nativeStatusCode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nativeStatusCode);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::_ctor(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode statusCode,
                                                                            ::UnityEngine::XR::OpenXR::NativeTypes::XrResult nativeStatusCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, statusCode, nativeStatusCode);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::IsUnqualifiedSuccess() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(), { "IsUnqualifiedSuccess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::IsSuccess() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(), { "IsSuccess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::IsError() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(), { "IsError", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::op_Implicit_bool(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus status) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, status);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::Equals(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrResult other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::CompareTo(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(),
                                                                                         { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline ::StringW UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>"
constexpr UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>*
UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__OpenXRResultStatus_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>"
constexpr UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::operator ::System::IComparable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>*() {
  return static_cast<::System::IComparable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>"
constexpr ::System::IComparable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>*
UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::i___System__IComparable_1___UnityEngine__XR__OpenXR__NativeTypes__OpenXRResultStatus_() {
  return static_cast<::System::IComparable_1<::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>"
constexpr UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>*
UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrResult_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_statusCode_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "_nativeStatusCode_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrResult", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::OpenXRResultStatus(::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus_StatusCode _statusCode_k__BackingField,
                                                                                         ::UnityEngine::XR::OpenXR::NativeTypes::XrResult _nativeStatusCode_k__BackingField) noexcept {
  this->_statusCode_k__BackingField = _statusCode_k__BackingField;
  this->_nativeStatusCode_k__BackingField = _nativeStatusCode_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::OpenXRResultStatus::OpenXRResultStatus() {}
