#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithLeaderboardList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithLeaderboardList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithLeaderboardList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithLeaderboardList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithLeaderboardList::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd78f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLeaderboardList.GetLeaderboardList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LeaderboardList* (::Oculus::Platform::MessageWithLeaderboardList::*)()>(
    &::Oculus::Platform::MessageWithLeaderboardList::GetLeaderboardList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddb56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardList*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLeaderboardList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LeaderboardList* (::Oculus::Platform::MessageWithLeaderboardList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithLeaderboardList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddb5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardList*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithLeaderboardList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::LeaderboardList* Oculus::Platform::MessageWithLeaderboardList::GetLeaderboardList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardList*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LeaderboardList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LeaderboardList* Oculus::Platform::MessageWithLeaderboardList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardList*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LeaderboardList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithLeaderboardList* Oculus::Platform::MessageWithLeaderboardList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithLeaderboardList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithLeaderboardList::MessageWithLeaderboardList() {}
