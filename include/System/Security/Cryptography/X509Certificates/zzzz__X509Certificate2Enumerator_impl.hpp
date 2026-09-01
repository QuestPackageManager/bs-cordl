#pragma once
// IWYU pragma private; include "System\Security\Cryptography\X509Certificates\X509Certificate2Enumerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Enumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Collection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x63a8e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (
    ::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::get_Current)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x63a8fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x63a90d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x63a917c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*>(),
                                                                                           { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator.System_Collections_IEnumerator_MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::System_Collections_IEnumerator_MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x63a9224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*>(), { "System.Collections.IEnumerator.MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x63a92c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IEnumerator*& System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::__cordl_internal_get_enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerator;
}
constexpr ::System::Collections::IEnumerator* const& System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::__cordl_internal_get_enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerator;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::__cordl_internal_set_enumerator(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enumerator = value;
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* collection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(this, ___internal_method);
}
inline bool System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::System_Collections_IEnumerator_MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*>(), { "System.Collections.IEnumerator.MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*
System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* collection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*>(collection));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator::X509Certificate2Enumerator() {}
