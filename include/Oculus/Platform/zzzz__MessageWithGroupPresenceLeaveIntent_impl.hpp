#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithGroupPresenceLeaveIntent.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithGroupPresenceLeaveIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithGroupPresenceLeaveIntent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithGroupPresenceLeaveIntent::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithGroupPresenceLeaveIntent::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd76cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithGroupPresenceLeaveIntent.GetGroupPresenceLeaveIntent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::GroupPresenceLeaveIntent* (::Oculus::Platform::MessageWithGroupPresenceLeaveIntent::*)()>(
    &::Oculus::Platform::MessageWithGroupPresenceLeaveIntent::GetGroupPresenceLeaveIntent)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddadb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithGroupPresenceLeaveIntent.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::GroupPresenceLeaveIntent* (::Oculus::Platform::MessageWithGroupPresenceLeaveIntent::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithGroupPresenceLeaveIntent::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddadf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithGroupPresenceLeaveIntent::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* Oculus::Platform::MessageWithGroupPresenceLeaveIntent::GetGroupPresenceLeaveIntent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* Oculus::Platform::MessageWithGroupPresenceLeaveIntent::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithGroupPresenceLeaveIntent* Oculus::Platform::MessageWithGroupPresenceLeaveIntent::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithGroupPresenceLeaveIntent::MessageWithGroupPresenceLeaveIntent() {}
