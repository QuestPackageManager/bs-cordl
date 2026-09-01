#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Pkix\ReasonsMask.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__ReasonsMask_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__ReasonFlags_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::ReasonsMask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::ReasonsMask::*)(int32_t)>(&::Org::BouncyCastle::Pkix::ReasonsMask::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35e62a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::ReasonsMask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::ReasonsMask::*)()>(&::Org::BouncyCastle::Pkix::ReasonsMask::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35e62a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::ReasonsMask.AddReasons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::ReasonsMask::*)(::Org::BouncyCastle::Pkix::ReasonsMask*)>(
    &::Org::BouncyCastle::Pkix::ReasonsMask::AddReasons)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x35e62b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), { "AddReasons", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::ReasonsMask*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::ReasonsMask.get_IsAllReasons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::ReasonsMask::*)()>(&::Org::BouncyCastle::Pkix::ReasonsMask::get_IsAllReasons)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x35e635c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), { "get_IsAllReasons", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::ReasonsMask.Intersect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkix::ReasonsMask* (::Org::BouncyCastle::Pkix::ReasonsMask::*)(::Org::BouncyCastle::Pkix::ReasonsMask*)>(
    &::Org::BouncyCastle::Pkix::ReasonsMask::Intersect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x35e63d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), { "Intersect", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::ReasonsMask*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::ReasonsMask.HasNewReasons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Pkix::ReasonsMask::*)(::Org::BouncyCastle::Pkix::ReasonsMask*)>(
    &::Org::BouncyCastle::Pkix::ReasonsMask::HasNewReasons)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x35e6484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), { "HasNewReasons", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::ReasonsMask*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::ReasonsMask.get_Reasons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::ReasonFlags* (::Org::BouncyCastle::Pkix::ReasonsMask::*)()>(
    &::Org::BouncyCastle::Pkix::ReasonsMask::get_Reasons)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35e62f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), { "get_Reasons", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Pkix::ReasonsMask::__cordl_internal_get__reasons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reasons;
}
constexpr int32_t const& Org::BouncyCastle::Pkix::ReasonsMask::__cordl_internal_get__reasons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reasons;
}
constexpr void Org::BouncyCastle::Pkix::ReasonsMask::__cordl_internal_set__reasons(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reasons = value;
}
inline void Org::BouncyCastle::Pkix::ReasonsMask::setStaticF_AllReasons(::Org::BouncyCastle::Pkix::ReasonsMask* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Pkix::ReasonsMask*, "AllReasons", ::Org::BouncyCastle::Pkix::ReasonsMask*>(std::forward<::Org::BouncyCastle::Pkix::ReasonsMask*>(value));
}
inline ::Org::BouncyCastle::Pkix::ReasonsMask* Org::BouncyCastle::Pkix::ReasonsMask::getStaticF_AllReasons() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Pkix::ReasonsMask*, "AllReasons", ::Org::BouncyCastle::Pkix::ReasonsMask*>();
}
inline void Org::BouncyCastle::Pkix::ReasonsMask::_ctor(int32_t reasons) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reasons);
}
inline void Org::BouncyCastle::Pkix::ReasonsMask::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::ReasonsMask::AddReasons(::Org::BouncyCastle::Pkix::ReasonsMask* mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), { "AddReasons", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::ReasonsMask*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mask);
}
inline bool Org::BouncyCastle::Pkix::ReasonsMask::get_IsAllReasons() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), { "get_IsAllReasons", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkix::ReasonsMask* Org::BouncyCastle::Pkix::ReasonsMask::Intersect(::Org::BouncyCastle::Pkix::ReasonsMask* mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), { "Intersect", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::ReasonsMask*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::ReasonsMask*>(this, ___internal_method, mask);
}
inline bool Org::BouncyCastle::Pkix::ReasonsMask::HasNewReasons(::Org::BouncyCastle::Pkix::ReasonsMask* mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), { "HasNewReasons", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::ReasonsMask*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mask);
}
inline ::Org::BouncyCastle::Asn1::X509::ReasonFlags* Org::BouncyCastle::Pkix::ReasonsMask::get_Reasons() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), { "get_Reasons", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::ReasonFlags*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkix::ReasonsMask* Org::BouncyCastle::Pkix::ReasonsMask::New_ctor(int32_t reasons) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::ReasonsMask*>(reasons));
}
inline ::Org::BouncyCastle::Pkix::ReasonsMask* Org::BouncyCastle::Pkix::ReasonsMask::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::ReasonsMask*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::ReasonsMask::ReasonsMask() {}
