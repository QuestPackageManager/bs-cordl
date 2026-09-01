#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithChallengeEntryList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithChallengeEntryList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeEntryList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithChallengeEntryList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithChallengeEntryList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithChallengeEntryList::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd74a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithChallengeEntryList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithChallengeEntryList.GetChallengeEntryList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ChallengeEntryList* (::Oculus::Platform::MessageWithChallengeEntryList::*)()>(
    &::Oculus::Platform::MessageWithChallengeEntryList::GetChallengeEntryList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dda874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithChallengeEntryList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithChallengeEntryList*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithChallengeEntryList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ChallengeEntryList* (::Oculus::Platform::MessageWithChallengeEntryList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithChallengeEntryList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dda8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithChallengeEntryList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithChallengeEntryList*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithChallengeEntryList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithChallengeEntryList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::ChallengeEntryList* Oculus::Platform::MessageWithChallengeEntryList::GetChallengeEntryList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithChallengeEntryList*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ChallengeEntryList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ChallengeEntryList* Oculus::Platform::MessageWithChallengeEntryList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithChallengeEntryList*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ChallengeEntryList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithChallengeEntryList* Oculus::Platform::MessageWithChallengeEntryList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithChallengeEntryList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithChallengeEntryList::MessageWithChallengeEntryList() {}
