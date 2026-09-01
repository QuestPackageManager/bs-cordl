#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\SubjectDirectoryAttributes.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectDirectoryAttributes_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3665384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::_ctor)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x3665508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::*)(::System::Collections::ArrayList*)>(
    &::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x366582c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::*)(::System::Collections::IList*)>(
    &::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3665830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::ToAsn1Object)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x36658a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes.get_Attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::get_Attributes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3665b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(), { "get_Attributes", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::__cordl_internal_set_attributes(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributes = value;
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes* Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::_ctor(::System::Collections::ArrayList* attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline void Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::_ctor(::System::Collections::IList* attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::get_Attributes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(), { "get_Attributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes* Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes* Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::New_ctor(::System::Collections::ArrayList* attributes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(attributes));
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes* Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::New_ctor(::System::Collections::IList* attributes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*>(attributes));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes::SubjectDirectoryAttributes() {}
