#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithAchievementUpdate.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAchievementUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementUpdate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAchievementUpdate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithAchievementUpdate::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithAchievementUpdate::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd6f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAchievementUpdate*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAchievementUpdate.GetAchievementUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AchievementUpdate* (::Oculus::Platform::MessageWithAchievementUpdate::*)()>(
    &::Oculus::Platform::MessageWithAchievementUpdate::GetAchievementUpdate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd9654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAchievementUpdate*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithAchievementUpdate*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAchievementUpdate.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AchievementUpdate* (::Oculus::Platform::MessageWithAchievementUpdate::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAchievementUpdate::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5dd9698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAchievementUpdate*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithAchievementUpdate*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithAchievementUpdate::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAchievementUpdate*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AchievementUpdate* Oculus::Platform::MessageWithAchievementUpdate::GetAchievementUpdate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAchievementUpdate*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementUpdate*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AchievementUpdate* Oculus::Platform::MessageWithAchievementUpdate::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAchievementUpdate*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementUpdate*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithAchievementUpdate* Oculus::Platform::MessageWithAchievementUpdate::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithAchievementUpdate*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAchievementUpdate::MessageWithAchievementUpdate() {}
