#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithLivestreamingApplicationStatus.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithLivestreamingApplicationStatus_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingApplicationStatus_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithLivestreamingApplicationStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithLivestreamingApplicationStatus::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithLivestreamingApplicationStatus::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ddb80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingApplicationStatus*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLivestreamingApplicationStatus.GetLivestreamingApplicationStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LivestreamingApplicationStatus* (::Oculus::Platform::MessageWithLivestreamingApplicationStatus::*)()>(
    &::Oculus::Platform::MessageWithLivestreamingApplicationStatus::GetLivestreamingApplicationStatus)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddb868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingApplicationStatus*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingApplicationStatus*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLivestreamingApplicationStatus.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LivestreamingApplicationStatus* (
    ::Oculus::Platform::MessageWithLivestreamingApplicationStatus::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithLivestreamingApplicationStatus::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddb8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingApplicationStatus*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingApplicationStatus*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithLivestreamingApplicationStatus::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingApplicationStatus*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* Oculus::Platform::MessageWithLivestreamingApplicationStatus::GetLivestreamingApplicationStatus() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingApplicationStatus*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingApplicationStatus*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* Oculus::Platform::MessageWithLivestreamingApplicationStatus::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingApplicationStatus*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingApplicationStatus*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithLivestreamingApplicationStatus* Oculus::Platform::MessageWithLivestreamingApplicationStatus::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithLivestreamingApplicationStatus*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithLivestreamingApplicationStatus::MessageWithLivestreamingApplicationStatus() {}
