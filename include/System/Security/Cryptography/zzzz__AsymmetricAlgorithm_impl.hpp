#pragma once
// IWYU pragma private; include "System\Security\Cryptography\AsymmetricAlgorithm.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&::System::Security::Cryptography::AsymmetricAlgorithm::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af8ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&::System::Security::Cryptography::AsymmetricAlgorithm::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af8ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&::System::Security::Cryptography::AsymmetricAlgorithm::Clear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5af9000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricAlgorithm::*)(bool)>(&::System::Security::Cryptography::AsymmetricAlgorithm::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af9070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.get_KeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&::System::Security::Cryptography::AsymmetricAlgorithm::get_KeySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af9074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.set_KeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricAlgorithm::*)(int32_t)>(&::System::Security::Cryptography::AsymmetricAlgorithm::set_KeySize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5af907c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.FromXmlString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricAlgorithm::*)(::StringW)>(
    &::System::Security::Cryptography::AsymmetricAlgorithm::FromXmlString)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5af917c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.ToXmlString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::AsymmetricAlgorithm::*)(bool)>(
    &::System::Security::Cryptography::AsymmetricAlgorithm::ToXmlString)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5af91b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 9 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::Security::Cryptography::AsymmetricAlgorithm::__cordl_internal_get_KeySizeValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeySizeValue;
}
constexpr int32_t const& System::Security::Cryptography::AsymmetricAlgorithm::__cordl_internal_get_KeySizeValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeySizeValue;
}
constexpr void System::Security::Cryptography::AsymmetricAlgorithm::__cordl_internal_set_KeySizeValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___KeySizeValue = value;
}
constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*>& System::Security::Cryptography::AsymmetricAlgorithm::__cordl_internal_get_LegalKeySizesValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LegalKeySizesValue;
}
constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*> const& System::Security::Cryptography::AsymmetricAlgorithm::__cordl_internal_get_LegalKeySizesValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LegalKeySizesValue;
}
constexpr void System::Security::Cryptography::AsymmetricAlgorithm::__cordl_internal_set_LegalKeySizesValue(::ArrayW<::System::Security::Cryptography::KeySizes*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LegalKeySizesValue = value;
}
inline void System::Security::Cryptography::AsymmetricAlgorithm::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsymmetricAlgorithm::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsymmetricAlgorithm::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsymmetricAlgorithm::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline int32_t System::Security::Cryptography::AsymmetricAlgorithm::get_KeySize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsymmetricAlgorithm::set_KeySize(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::AsymmetricAlgorithm::FromXmlString(::StringW xmlString) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlString);
}
inline ::StringW System::Security::Cryptography::AsymmetricAlgorithm::ToXmlString(bool includePrivateParameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, includePrivateParameters);
}
inline ::System::Security::Cryptography::AsymmetricAlgorithm* System::Security::Cryptography::AsymmetricAlgorithm::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AsymmetricAlgorithm*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Security::Cryptography::AsymmetricAlgorithm::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Security::Cryptography::AsymmetricAlgorithm::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::AsymmetricAlgorithm::AsymmetricAlgorithm() {}
