#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithLeaderboardEntryList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithLeaderboardEntryList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardEntryList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithLeaderboardEntryList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithLeaderboardEntryList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithLeaderboardEntryList::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd7950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardEntryList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLeaderboardEntryList.GetLeaderboardEntryList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LeaderboardEntryList* (::Oculus::Platform::MessageWithLeaderboardEntryList::*)()>(
    &::Oculus::Platform::MessageWithLeaderboardEntryList::GetLeaderboardEntryList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddb64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardEntryList*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardEntryList*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLeaderboardEntryList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LeaderboardEntryList* (::Oculus::Platform::MessageWithLeaderboardEntryList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithLeaderboardEntryList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddb690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardEntryList*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardEntryList*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithLeaderboardEntryList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardEntryList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::LeaderboardEntryList* Oculus::Platform::MessageWithLeaderboardEntryList::GetLeaderboardEntryList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardEntryList*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LeaderboardEntryList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LeaderboardEntryList* Oculus::Platform::MessageWithLeaderboardEntryList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLeaderboardEntryList*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LeaderboardEntryList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithLeaderboardEntryList* Oculus::Platform::MessageWithLeaderboardEntryList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithLeaderboardEntryList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithLeaderboardEntryList::MessageWithLeaderboardEntryList() {}
