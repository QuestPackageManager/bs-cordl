#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithLeaderboardDidUpdate.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithLeaderboardDidUpdate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithLeaderboardDidUpdate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithLeaderboardDidUpdate::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithLeaderboardDidUpdate::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd79ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardDidUpdate*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLeaderboardDidUpdate.GetLeaderboardDidUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Platform::MessageWithLeaderboardDidUpdate::*)()>(
    &::Oculus::Platform::MessageWithLeaderboardDidUpdate::GetLeaderboardDidUpdate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddd704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardDidUpdate*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardDidUpdate*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLeaderboardDidUpdate.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Platform::MessageWithLeaderboardDidUpdate::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithLeaderboardDidUpdate::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ddd748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardDidUpdate*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardDidUpdate*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithLeaderboardDidUpdate::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardDidUpdate*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline bool Oculus::Platform::MessageWithLeaderboardDidUpdate::GetLeaderboardDidUpdate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardDidUpdate*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Platform::MessageWithLeaderboardDidUpdate::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardDidUpdate*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithLeaderboardDidUpdate* Oculus::Platform::MessageWithLeaderboardDidUpdate::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithLeaderboardDidUpdate*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithLeaderboardDidUpdate::MessageWithLeaderboardDidUpdate() {}
