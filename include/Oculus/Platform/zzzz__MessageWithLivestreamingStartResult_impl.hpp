#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithLivestreamingStartResult.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithLivestreamingStartResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStartResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithLivestreamingStartResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithLivestreamingStartResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithLivestreamingStartResult::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ddb948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingStartResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLivestreamingStartResult.GetLivestreamingStartResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LivestreamingStartResult* (::Oculus::Platform::MessageWithLivestreamingStartResult::*)()>(
    &::Oculus::Platform::MessageWithLivestreamingStartResult::GetLivestreamingStartResult)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddb9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingStartResult*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingStartResult*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLivestreamingStartResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LivestreamingStartResult* (::Oculus::Platform::MessageWithLivestreamingStartResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithLivestreamingStartResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddb9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingStartResult*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingStartResult*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithLivestreamingStartResult::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingStartResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::LivestreamingStartResult* Oculus::Platform::MessageWithLivestreamingStartResult::GetLivestreamingStartResult() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingStartResult*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingStartResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingStartResult* Oculus::Platform::MessageWithLivestreamingStartResult::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLivestreamingStartResult*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingStartResult*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithLivestreamingStartResult* Oculus::Platform::MessageWithLivestreamingStartResult::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithLivestreamingStartResult*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithLivestreamingStartResult::MessageWithLivestreamingStartResult() {}
