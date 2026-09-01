#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cms\Evidence.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__Evidence_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__TimeStampTokenEvidence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::Evidence._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::Evidence::*)(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence*)>(
    &::Org::BouncyCastle::Asn1::Cms::Evidence::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335a8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Evidence*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::Evidence._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::Evidence::*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*)>(
    &::Org::BouncyCastle::Asn1::Cms::Evidence::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x335a8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Evidence*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::Evidence.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::Evidence* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cms::Evidence::GetInstance)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x335a984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Evidence*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::Evidence.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::Evidence* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Cms::Evidence::GetInstance)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x335aae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Evidence*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::Evidence.get_TstEvidence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* (::Org::BouncyCastle::Asn1::Cms::Evidence::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::Evidence::get_TstEvidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335ab0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Evidence*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Evidence*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::Evidence.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::Evidence::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::Evidence::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x335ab14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Evidence*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Evidence*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence*& Org::BouncyCastle::Asn1::Cms::Evidence::__cordl_internal_get_tstEvidence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tstEvidence;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* const& Org::BouncyCastle::Asn1::Cms::Evidence::__cordl_internal_get_tstEvidence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tstEvidence;
}
constexpr void Org::BouncyCastle::Asn1::Cms::Evidence::__cordl_internal_set_tstEvidence(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tstEvidence = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Cms::Evidence::__cordl_internal_get_otherEvidence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherEvidence;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Cms::Evidence::__cordl_internal_get_otherEvidence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherEvidence;
}
constexpr void Org::BouncyCastle::Asn1::Cms::Evidence::__cordl_internal_set_otherEvidence(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___otherEvidence = value;
}
inline void Org::BouncyCastle::Asn1::Cms::Evidence::_ctor(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* tstEvidence) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Evidence*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tstEvidence);
}
inline void Org::BouncyCastle::Asn1::Cms::Evidence::_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Evidence*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tagged);
}
inline ::Org::BouncyCastle::Asn1::Cms::Evidence* Org::BouncyCastle::Asn1::Cms::Evidence::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Evidence*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::Evidence*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Cms::Evidence* Org::BouncyCastle::Asn1::Cms::Evidence::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Evidence*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::Evidence*>(nullptr, ___internal_method, obj, isExplicit);
}
inline ::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* Org::BouncyCastle::Asn1::Cms::Evidence::get_TstEvidence() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Evidence*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::Evidence::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Evidence*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::Evidence* Org::BouncyCastle::Asn1::Cms::Evidence::New_ctor(::Org::BouncyCastle::Asn1::Cms::TimeStampTokenEvidence* tstEvidence) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::Evidence*>(tstEvidence));
}
inline ::Org::BouncyCastle::Asn1::Cms::Evidence* Org::BouncyCastle::Asn1::Cms::Evidence::New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::Evidence*>(tagged));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::Cms::Evidence::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::Cms::Evidence::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::Evidence::Evidence() {}
