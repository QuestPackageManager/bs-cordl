#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/X509CertPairStoreSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertPairStoreSelector_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertStoreSelector_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509CertificatePair_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector.CloneSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::X509CertStoreSelector* (*)(::Org::BouncyCastle::X509::Store::X509CertStoreSelector*)>(
    &::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::CloneSelector)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x363f214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(),
                                                                                           { "CloneSelector", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::*)()>(&::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363f2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::*)(::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*)>(
    &::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x363f2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector.get_CertPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509CertificatePair* (::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::get_CertPair)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363f2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(), { "get_CertPair", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector.set_CertPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::*)(::Org::BouncyCastle::X509::X509CertificatePair*)>(
    &::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::set_CertPair)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363f304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(),
                                                                                           { "set_CertPair", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509CertificatePair*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector.get_ForwardSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::X509CertStoreSelector* (::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::get_ForwardSelector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363f2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(), { "get_ForwardSelector", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector.set_ForwardSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::*)(::Org::BouncyCastle::X509::Store::X509CertStoreSelector*)>(
    &::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::set_ForwardSelector)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x363f30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(),
                                                             { "set_ForwardSelector", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector.get_ReverseSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::X509CertStoreSelector* (::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::get_ReverseSelector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x363f2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(), { "get_ReverseSelector", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector.set_ReverseSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::*)(::Org::BouncyCastle::X509::Store::X509CertStoreSelector*)>(
    &::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::set_ReverseSelector)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x363f328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(),
                                                             { "set_ReverseSelector", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector.Match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::*)(::System::Object*)>(
    &::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::Match)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x363f344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(), { "Match", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::*)()>(
    &::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::Clone)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x363f46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::X509::X509CertificatePair*& Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::__cordl_internal_get_certPair() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certPair;
}
constexpr ::Org::BouncyCastle::X509::X509CertificatePair* const& Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::__cordl_internal_get_certPair() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certPair;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::__cordl_internal_set_certPair(::Org::BouncyCastle::X509::X509CertificatePair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certPair = value;
}
constexpr ::Org::BouncyCastle::X509::Store::X509CertStoreSelector*& Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::__cordl_internal_get_forwardSelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forwardSelector;
}
constexpr ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* const& Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::__cordl_internal_get_forwardSelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forwardSelector;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::__cordl_internal_set_forwardSelector(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forwardSelector = value;
}
constexpr ::Org::BouncyCastle::X509::Store::X509CertStoreSelector*& Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::__cordl_internal_get_reverseSelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reverseSelector;
}
constexpr ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* const& Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::__cordl_internal_get_reverseSelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reverseSelector;
}
constexpr void Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::__cordl_internal_set_reverseSelector(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reverseSelector = value;
}
inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::CloneSelector(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(),
                                                                                         { "CloneSelector", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(nullptr, ___internal_method, s);
}
inline void Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::_ctor(::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector* o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Org::BouncyCastle::X509::X509CertificatePair* Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::get_CertPair() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(), { "get_CertPair", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509CertificatePair*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::set_CertPair(::Org::BouncyCastle::X509::X509CertificatePair* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(),
                                                                                         { "set_CertPair", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509CertificatePair*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::get_ForwardSelector() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(), { "get_ForwardSelector", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::set_ForwardSelector(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(),
                                                           { "set_ForwardSelector", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::get_ReverseSelector() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(), { "get_ReverseSelector", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::set_ReverseSelector(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(),
                                                           { "set_ReverseSelector", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::Match(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(), { "Match", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::System::Object* Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector* Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>());
}
inline ::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*
Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::New_ctor(::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector* o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*>(o));
}
/// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
constexpr Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::operator ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509Selector*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509Selector"
constexpr ::Org::BouncyCastle::X509::Store::IX509Selector* Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::i___Org__BouncyCastle__X509__Store__IX509Selector() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509Selector*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector::X509CertPairStoreSelector() {}
