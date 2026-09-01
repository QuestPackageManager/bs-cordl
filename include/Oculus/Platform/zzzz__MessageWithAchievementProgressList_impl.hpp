#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithAchievementProgressList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAchievementProgressList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgressList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAchievementProgressList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithAchievementProgressList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAchievementProgressList::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd6ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAchievementProgressList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAchievementProgressList.GetAchievementProgressList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AchievementProgressList* (::Oculus::Platform::MessageWithAchievementProgressList::*)()>(
    &::Oculus::Platform::MessageWithAchievementProgressList::GetAchievementProgressList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd9388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAchievementProgressList*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithAchievementProgressList*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAchievementProgressList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AchievementProgressList* (::Oculus::Platform::MessageWithAchievementProgressList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAchievementProgressList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5dd93cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAchievementProgressList*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithAchievementProgressList*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithAchievementProgressList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAchievementProgressList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AchievementProgressList* Oculus::Platform::MessageWithAchievementProgressList::GetAchievementProgressList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAchievementProgressList*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementProgressList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AchievementProgressList* Oculus::Platform::MessageWithAchievementProgressList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAchievementProgressList*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementProgressList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithAchievementProgressList* Oculus::Platform::MessageWithAchievementProgressList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithAchievementProgressList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAchievementProgressList::MessageWithAchievementProgressList() {}
