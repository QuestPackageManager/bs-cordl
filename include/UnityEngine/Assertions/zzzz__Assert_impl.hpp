#pragma once
// IWYU pragma private; include "UnityEngine\Assertions\Assert.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Assertions/zzzz__Assert_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Assertions::_cordl_Assert.Fail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::UnityEngine::Assertions::_cordl_Assert::Fail)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6b06c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "Fail", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Assertions::_cordl_Assert.IsTrue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Assertions::_cordl_Assert::IsTrue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b06dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "IsTrue", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Assertions::_cordl_Assert.IsTrue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW)>(&::UnityEngine::Assertions::_cordl_Assert::IsTrue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b06e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "IsTrue", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Assertions::_cordl_Assert.IsFalse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Assertions::_cordl_Assert::IsFalse)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b06f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "IsFalse", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Assertions::_cordl_Assert.IsFalse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW)>(&::UnityEngine::Assertions::_cordl_Assert::IsFalse)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b06fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "IsFalse", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Assertions::_cordl_Assert.AreEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::StringW)>(&::UnityEngine::Assertions::_cordl_Assert::AreEqual)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6b0705c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(),
                                                             { "AreEqual", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Assertions::_cordl_Assert.IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::StringW)>(&::UnityEngine::Assertions::_cordl_Assert::IsNull)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b0734c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "IsNull", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Assertions::_cordl_Assert.IsNotNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::StringW)>(&::UnityEngine::Assertions::_cordl_Assert::IsNotNull)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b07590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(),
                                                                                           { "IsNotNull", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Assertions::_cordl_Assert.AreEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::Assertions::_cordl_Assert::AreEqual)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b07654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "AreEqual", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Assertions::_cordl_Assert::setStaticF_raiseExceptions(bool value) {
  ::cordl_internals::setStaticField<bool, "raiseExceptions", ::UnityEngine::Assertions::_cordl_Assert*>(std::forward<bool>(value));
}
inline bool UnityEngine::Assertions::_cordl_Assert::getStaticF_raiseExceptions() {
  return ::cordl_internals::getStaticField<bool, "raiseExceptions", ::UnityEngine::Assertions::_cordl_Assert*>();
}
inline void UnityEngine::Assertions::_cordl_Assert::Fail(::StringW message, ::StringW userMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "Fail", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, userMessage);
}
inline void UnityEngine::Assertions::_cordl_Assert::IsTrue(bool condition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "IsTrue", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition);
}
inline void UnityEngine::Assertions::_cordl_Assert::IsTrue(bool condition, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "IsTrue", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, message);
}
inline void UnityEngine::Assertions::_cordl_Assert::IsFalse(bool condition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "IsFalse", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition);
}
inline void UnityEngine::Assertions::_cordl_Assert::IsFalse(bool condition, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "IsFalse", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, message);
}
template <typename T> inline void UnityEngine::Assertions::_cordl_Assert::AreEqual(T expected, T actual) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "AreEqual", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, expected, actual);
}
template <typename T> inline void UnityEngine::Assertions::_cordl_Assert::AreEqual(T expected, T actual, ::StringW message) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(),
                                                           { "AreEqual", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, expected, actual, message);
}
template <typename T> inline void UnityEngine::Assertions::_cordl_Assert::AreEqual(T expected, T actual, ::StringW message, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(),
                                       { "AreEqual",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, expected, actual, message, comparer);
}
inline void UnityEngine::Assertions::_cordl_Assert::AreEqual(::UnityEngine::Object* expected, ::UnityEngine::Object* actual, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(),
                                                           { "AreEqual", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, expected, actual, message);
}
template <typename T> inline void UnityEngine::Assertions::_cordl_Assert::IsNull(T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "IsNull", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Assertions::_cordl_Assert::IsNull(T value, ::StringW message) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "IsNull", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, message);
}
inline void UnityEngine::Assertions::_cordl_Assert::IsNull(::UnityEngine::Object* value, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "IsNull", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, message);
}
template <typename T> inline void UnityEngine::Assertions::_cordl_Assert::IsNotNull(T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "IsNotNull", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Assertions::_cordl_Assert::IsNotNull(T value, ::StringW message) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "IsNotNull", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, message);
}
inline void UnityEngine::Assertions::_cordl_Assert::IsNotNull(::UnityEngine::Object* value, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "IsNotNull", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, message);
}
inline void UnityEngine::Assertions::_cordl_Assert::AreEqual(int32_t expected, int32_t actual) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Assertions::_cordl_Assert*>(), { "AreEqual", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, expected, actual);
}
// Ctor Parameters []
constexpr ::UnityEngine::Assertions::_cordl_Assert::_cordl_Assert() {}
