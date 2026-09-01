#pragma once
// IWYU pragma private; include "UnityEngine\Assertions\AssertionMessageUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Assertions/zzzz__AssertionMessageUtil_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Assertions::AssertionMessageUtil.GetMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::Assertions::AssertionMessageUtil::GetMessage)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6b077bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::AssertionMessageUtil*>(), { "GetMessage", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Assertions::AssertionMessageUtil.GetMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::UnityEngine::Assertions::AssertionMessageUtil::GetMessage)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6b078b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::AssertionMessageUtil*>(), { "GetMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Assertions::AssertionMessageUtil.GetEqualityMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::System::Object*, bool)>(&::UnityEngine::Assertions::AssertionMessageUtil::GetEqualityMessage)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6b0712c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::AssertionMessageUtil*>(),
                                                             { "GetEqualityMessage", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Assertions::AssertionMessageUtil.NullFailureMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, bool)>(&::UnityEngine::Assertions::AssertionMessageUtil::NullFailureMessage)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6b07410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::AssertionMessageUtil*>(),
                                                                                           { "NullFailureMessage", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Assertions::AssertionMessageUtil.BooleanFailureMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool)>(&::UnityEngine::Assertions::AssertionMessageUtil::BooleanFailureMessage)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b06ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::AssertionMessageUtil*>(), { "BooleanFailureMessage", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Assertions::AssertionMessageUtil::GetMessage(::StringW failureMessage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::AssertionMessageUtil*>(), { "GetMessage", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, failureMessage);
}
inline ::StringW UnityEngine::Assertions::AssertionMessageUtil::GetMessage(::StringW failureMessage, ::StringW expected) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::AssertionMessageUtil*>(), { "GetMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, failureMessage, expected);
}
inline ::StringW UnityEngine::Assertions::AssertionMessageUtil::GetEqualityMessage(::System::Object* actual, ::System::Object* expected, bool expectEqual) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::AssertionMessageUtil*>(),
                                                           { "GetEqualityMessage", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, actual, expected, expectEqual);
}
inline ::StringW UnityEngine::Assertions::AssertionMessageUtil::NullFailureMessage(::System::Object* value, bool expectNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::AssertionMessageUtil*>(),
                                                                                         { "NullFailureMessage", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, expectNull);
}
inline ::StringW UnityEngine::Assertions::AssertionMessageUtil::BooleanFailureMessage(bool expected) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::AssertionMessageUtil*>(), { "BooleanFailureMessage", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, expected);
}
// Ctor Parameters []
constexpr ::UnityEngine::Assertions::AssertionMessageUtil::AssertionMessageUtil() {}
