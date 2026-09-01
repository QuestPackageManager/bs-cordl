#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithGroupPresenceJoinIntent.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithGroupPresenceJoinIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithGroupPresenceJoinIntent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithGroupPresenceJoinIntent::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithGroupPresenceJoinIntent::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd7670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithGroupPresenceJoinIntent.GetGroupPresenceJoinIntent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::GroupPresenceJoinIntent* (::Oculus::Platform::MessageWithGroupPresenceJoinIntent::*)()>(
    &::Oculus::Platform::MessageWithGroupPresenceJoinIntent::GetGroupPresenceJoinIntent)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddacd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithGroupPresenceJoinIntent.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::GroupPresenceJoinIntent* (::Oculus::Platform::MessageWithGroupPresenceJoinIntent::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithGroupPresenceJoinIntent::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddad18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithGroupPresenceJoinIntent::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* Oculus::Platform::MessageWithGroupPresenceJoinIntent::GetGroupPresenceJoinIntent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::GroupPresenceJoinIntent*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* Oculus::Platform::MessageWithGroupPresenceJoinIntent::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::GroupPresenceJoinIntent*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithGroupPresenceJoinIntent* Oculus::Platform::MessageWithGroupPresenceJoinIntent::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithGroupPresenceJoinIntent::MessageWithGroupPresenceJoinIntent() {}
