#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAchievementDefinitions.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAchievementDefinitions_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementDefinitionList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAchievementDefinitions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithAchievementDefinitions::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAchievementDefinitions::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd4c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAchievementDefinitions*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAchievementDefinitions.GetAchievementDefinitions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AchievementDefinitionList* (::Oculus::Platform::MessageWithAchievementDefinitions::*)()>(
    &::Oculus::Platform::MessageWithAchievementDefinitions::GetAchievementDefinitions)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd6e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAchievementDefinitions*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithAchievementDefinitions*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAchievementDefinitions.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AchievementDefinitionList* (::Oculus::Platform::MessageWithAchievementDefinitions::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAchievementDefinitions::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5dd6ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAchievementDefinitions*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithAchievementDefinitions*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithAchievementDefinitions::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAchievementDefinitions*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AchievementDefinitionList* Oculus::Platform::MessageWithAchievementDefinitions::GetAchievementDefinitions() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAchievementDefinitions*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementDefinitionList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AchievementDefinitionList* Oculus::Platform::MessageWithAchievementDefinitions::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAchievementDefinitions*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementDefinitionList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithAchievementDefinitions* Oculus::Platform::MessageWithAchievementDefinitions::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithAchievementDefinitions*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAchievementDefinitions::MessageWithAchievementDefinitions() {}
