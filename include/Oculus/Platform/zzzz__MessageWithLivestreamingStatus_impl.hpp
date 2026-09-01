#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithLivestreamingStatus.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithLivestreamingStatus_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStatus_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithLivestreamingStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithLivestreamingStatus::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithLivestreamingStatus::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd7a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingStatus*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLivestreamingStatus.GetLivestreamingStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LivestreamingStatus* (::Oculus::Platform::MessageWithLivestreamingStatus::*)()>(
    &::Oculus::Platform::MessageWithLivestreamingStatus::GetLivestreamingStatus)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddba84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingStatus*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingStatus*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLivestreamingStatus.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LivestreamingStatus* (::Oculus::Platform::MessageWithLivestreamingStatus::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithLivestreamingStatus::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddbac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingStatus*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingStatus*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithLivestreamingStatus::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingStatus*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::LivestreamingStatus* Oculus::Platform::MessageWithLivestreamingStatus::GetLivestreamingStatus() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingStatus*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingStatus*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingStatus* Oculus::Platform::MessageWithLivestreamingStatus::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingStatus*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingStatus*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithLivestreamingStatus* Oculus::Platform::MessageWithLivestreamingStatus::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithLivestreamingStatus*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithLivestreamingStatus::MessageWithLivestreamingStatus() {}
