#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithChallengeList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithChallengeList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithChallengeList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithChallengeList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithChallengeList::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd5220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithChallengeList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithChallengeList.GetChallengeList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ChallengeList* (::Oculus::Platform::MessageWithChallengeList::*)()>(
    &::Oculus::Platform::MessageWithChallengeList::GetChallengeList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd856c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithChallengeList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithChallengeList*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithChallengeList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ChallengeList* (::Oculus::Platform::MessageWithChallengeList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithChallengeList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dd85b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithChallengeList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithChallengeList*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithChallengeList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithChallengeList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::ChallengeList* Oculus::Platform::MessageWithChallengeList::GetChallengeList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithChallengeList*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ChallengeList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ChallengeList* Oculus::Platform::MessageWithChallengeList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithChallengeList*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ChallengeList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithChallengeList* Oculus::Platform::MessageWithChallengeList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithChallengeList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithChallengeList::MessageWithChallengeList() {}
