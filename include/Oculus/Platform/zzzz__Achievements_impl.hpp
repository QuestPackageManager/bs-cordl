#pragma once
// IWYU pragma private; include "Oculus\Platform\Achievements.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Achievements_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementDefinitionList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgressList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementUpdate_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Achievements.AddCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate*>* (*)(::StringW, uint64_t)>(
    &::Oculus::Platform::Achievements::AddCount)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5de3fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(), { "AddCount", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Achievements.AddFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate*>* (*)(::StringW, ::StringW)>(
    &::Oculus::Platform::Achievements::AddFields)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5de4158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(), { "AddFields", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Achievements.GetAllDefinitions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList*>* (*)()>(
    &::Oculus::Platform::Achievements::GetAllDefinitions)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5de42c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(), { "GetAllDefinitions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Achievements.GetAllProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList*>* (*)()>(&::Oculus::Platform::Achievements::GetAllProgress)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5de4420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(), { "GetAllProgress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Achievements.GetDefinitionsByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList*>* (*)(::ArrayW<::StringW>)>(
    &::Oculus::Platform::Achievements::GetDefinitionsByName)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5de4578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(), { "GetDefinitionsByName", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Achievements.GetProgressByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList*>* (*)(::ArrayW<::StringW>)>(
    &::Oculus::Platform::Achievements::GetProgressByName)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5de46f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(), { "GetProgressByName", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Achievements.Unlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate*>* (*)(::StringW)>(&::Oculus::Platform::Achievements::Unlock)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5de4870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(), { "Unlock", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Achievements.GetNextAchievementDefinitionListPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList*>* (*)(::Oculus::Platform::Models::AchievementDefinitionList*)>(
        &::Oculus::Platform::Achievements::GetNextAchievementDefinitionListPage)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5de49d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(),
                                                             { "GetNextAchievementDefinitionListPage", {}, { ::i2c::type_of<::Oculus::Platform::Models::AchievementDefinitionList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Achievements.GetNextAchievementProgressListPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList*>* (*)(::Oculus::Platform::Models::AchievementProgressList*)>(
    &::Oculus::Platform::Achievements::GetNextAchievementProgressListPage)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5de4bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(),
                                                             { "GetNextAchievementProgressListPage", {}, { ::i2c::type_of<::Oculus::Platform::Models::AchievementProgressList*>() } })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate*>* Oculus::Platform::Achievements::AddCount(::StringW name, uint64_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(), { "AddCount", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate*>*>(nullptr, ___internal_method, name, count);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate*>* Oculus::Platform::Achievements::AddFields(::StringW name, ::StringW fields) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(), { "AddFields", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate*>*>(nullptr, ___internal_method, name, fields);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList*>* Oculus::Platform::Achievements::GetAllDefinitions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(), { "GetAllDefinitions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList*>*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList*>* Oculus::Platform::Achievements::GetAllProgress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(), { "GetAllProgress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList*>*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList*>* Oculus::Platform::Achievements::GetDefinitionsByName(::ArrayW<::StringW> names) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(), { "GetDefinitionsByName", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList*>*>(nullptr, ___internal_method, names);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList*>* Oculus::Platform::Achievements::GetProgressByName(::ArrayW<::StringW> names) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(), { "GetProgressByName", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList*>*>(nullptr, ___internal_method, names);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate*>* Oculus::Platform::Achievements::Unlock(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(), { "Unlock", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate*>*>(nullptr, ___internal_method, name);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList*>*
Oculus::Platform::Achievements::GetNextAchievementDefinitionListPage(::Oculus::Platform::Models::AchievementDefinitionList* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(),
                                                           { "GetNextAchievementDefinitionListPage", {}, { ::i2c::type_of<::Oculus::Platform::Models::AchievementDefinitionList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList*>*>(nullptr, ___internal_method, list);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList*>*
Oculus::Platform::Achievements::GetNextAchievementProgressListPage(::Oculus::Platform::Models::AchievementProgressList* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Achievements*>(),
                                                           { "GetNextAchievementProgressListPage", {}, { ::i2c::type_of<::Oculus::Platform::Models::AchievementProgressList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList*>*>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Achievements::Achievements() {}
