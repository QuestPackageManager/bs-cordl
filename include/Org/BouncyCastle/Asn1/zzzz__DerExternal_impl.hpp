#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\DerExternal.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerExternal_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerTaggedObject_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerExternal::*)(::Org::BouncyCastle::Asn1::Asn1EncodableVector*)>(
    &::Org::BouncyCastle::Asn1::DerExternal::_ctor)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x3682710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerExternal::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::DerInteger*,
                                                                                                        ::Org::BouncyCastle::Asn1::Asn1Object*, ::Org::BouncyCastle::Asn1::DerTaggedObject*)>(
    &::Org::BouncyCastle::Asn1::DerExternal::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x368e58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerTaggedObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerExternal::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::DerInteger*,
                                                                                                        ::Org::BouncyCastle::Asn1::Asn1Object*, int32_t, ::Org::BouncyCastle::Asn1::Asn1Object*)>(
    &::Org::BouncyCastle::Asn1::DerExternal::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x368e5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerExternal::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(
    &::Org::BouncyCastle::Asn1::DerExternal::Encode)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x368e634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal.Asn1GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::DerExternal::*)()>(&::Org::BouncyCastle::Asn1::DerExternal::Asn1GetHashCode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x368e780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal.Asn1Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::DerExternal::*)(::Org::BouncyCastle::Asn1::Asn1Object*)>(&::Org::BouncyCastle::Asn1::DerExternal::Asn1Equals)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x368e7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal.get_DataValueDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::DerExternal::*)()>(
    &::Org::BouncyCastle::Asn1::DerExternal::get_DataValueDescriptor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368e93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "get_DataValueDescriptor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal.set_DataValueDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerExternal::*)(::Org::BouncyCastle::Asn1::Asn1Object*)>(
    &::Org::BouncyCastle::Asn1::DerExternal::set_DataValueDescriptor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368e944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "set_DataValueDescriptor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal.get_DirectReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::DerExternal::*)()>(
    &::Org::BouncyCastle::Asn1::DerExternal::get_DirectReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368e94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "get_DirectReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal.set_DirectReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerExternal::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::DerExternal::set_DirectReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368e954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(),
                                                                                           { "set_DirectReference", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal.get_Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::DerExternal::*)()>(&::Org::BouncyCastle::Asn1::DerExternal::get_Encoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368e95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "get_Encoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal.set_Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerExternal::*)(int32_t)>(&::Org::BouncyCastle::Asn1::DerExternal::set_Encoding)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x368e504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "set_Encoding", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal.get_ExternalContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::DerExternal::*)()>(
    &::Org::BouncyCastle::Asn1::DerExternal::get_ExternalContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368e964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "get_ExternalContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal.set_ExternalContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerExternal::*)(::Org::BouncyCastle::Asn1::Asn1Object*)>(
    &::Org::BouncyCastle::Asn1::DerExternal::set_ExternalContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368e96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "set_ExternalContent", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal.get_IndirectReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::DerExternal::*)()>(
    &::Org::BouncyCastle::Asn1::DerExternal::get_IndirectReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368e974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "get_IndirectReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal.set_IndirectReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerExternal::*)(::Org::BouncyCastle::Asn1::DerInteger*)>(
    &::Org::BouncyCastle::Asn1::DerExternal::set_IndirectReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368e97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "set_IndirectReference", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal.GetObjFromVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (*)(::Org::BouncyCastle::Asn1::Asn1EncodableVector*, int32_t)>(
    &::Org::BouncyCastle::Asn1::DerExternal::GetObjFromVector)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x368e470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(),
                                                             { "GetObjFromVector", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternal.WriteEncodable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::MemoryStream*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Asn1::DerExternal::WriteEncodable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x368e730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(),
                                                { "WriteEncodable", {}, { ::i2c::type_of<::System::IO::MemoryStream*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::DerExternal::__cordl_internal_get_directReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directReference;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::DerExternal::__cordl_internal_get_directReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directReference;
}
constexpr void Org::BouncyCastle::Asn1::DerExternal::__cordl_internal_set_directReference(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___directReference = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::DerExternal::__cordl_internal_get_indirectReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indirectReference;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::DerExternal::__cordl_internal_get_indirectReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indirectReference;
}
constexpr void Org::BouncyCastle::Asn1::DerExternal::__cordl_internal_set_indirectReference(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indirectReference = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& Org::BouncyCastle::Asn1::DerExternal::__cordl_internal_get_dataValueDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataValueDescriptor;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Object* const& Org::BouncyCastle::Asn1::DerExternal::__cordl_internal_get_dataValueDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataValueDescriptor;
}
constexpr void Org::BouncyCastle::Asn1::DerExternal::__cordl_internal_set_dataValueDescriptor(::Org::BouncyCastle::Asn1::Asn1Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataValueDescriptor = value;
}
constexpr int32_t& Org::BouncyCastle::Asn1::DerExternal::__cordl_internal_get_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::DerExternal::__cordl_internal_get_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr void Org::BouncyCastle::Asn1::DerExternal::__cordl_internal_set_encoding(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encoding = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& Org::BouncyCastle::Asn1::DerExternal::__cordl_internal_get_externalContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalContent;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Object* const& Org::BouncyCastle::Asn1::DerExternal::__cordl_internal_get_externalContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalContent;
}
constexpr void Org::BouncyCastle::Asn1::DerExternal::__cordl_internal_set_externalContent(::Org::BouncyCastle::Asn1::Asn1Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___externalContent = value;
}
inline void Org::BouncyCastle::Asn1::DerExternal::_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* vector) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vector);
}
inline void Org::BouncyCastle::Asn1::DerExternal::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference, ::Org::BouncyCastle::Asn1::DerInteger* indirectReference,
                                                        ::Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor, ::Org::BouncyCastle::Asn1::DerTaggedObject* externalData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerTaggedObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, directReference, indirectReference, dataValueDescriptor, externalData);
}
inline void Org::BouncyCastle::Asn1::DerExternal::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference, ::Org::BouncyCastle::Asn1::DerInteger* indirectReference,
                                                        ::Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor, int32_t encoding, ::Org::BouncyCastle::Asn1::Asn1Object* externalData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, directReference, indirectReference, dataValueDescriptor, encoding, externalData);
}
inline void Org::BouncyCastle::Asn1::DerExternal::Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, derOut);
}
inline int32_t Org::BouncyCastle::Asn1::DerExternal::Asn1GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::DerExternal::Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, asn1Object);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::DerExternal::get_DataValueDescriptor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "get_DataValueDescriptor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::DerExternal::set_DataValueDescriptor(::Org::BouncyCastle::Asn1::Asn1Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "set_DataValueDescriptor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::DerExternal::get_DirectReference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "get_DirectReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::DerExternal::set_DirectReference(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(),
                                                                                         { "set_DirectReference", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Org::BouncyCastle::Asn1::DerExternal::get_Encoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "get_Encoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::DerExternal::set_Encoding(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "set_Encoding", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::DerExternal::get_ExternalContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "get_ExternalContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::DerExternal::set_ExternalContent(::Org::BouncyCastle::Asn1::Asn1Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "set_ExternalContent", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::DerExternal::get_IndirectReference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "get_IndirectReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::DerExternal::set_IndirectReference(::Org::BouncyCastle::Asn1::DerInteger* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(), { "set_IndirectReference", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::DerExternal::GetObjFromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(),
                                                           { "GetObjFromVector", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(nullptr, ___internal_method, v, index);
}
inline void Org::BouncyCastle::Asn1::DerExternal::WriteEncodable(::System::IO::MemoryStream* ms, ::Org::BouncyCastle::Asn1::Asn1Encodable* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerExternal*>(),
                                                           { "WriteEncodable", {}, { ::i2c::type_of<::System::IO::MemoryStream*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ms, e);
}
inline ::Org::BouncyCastle::Asn1::DerExternal* Org::BouncyCastle::Asn1::DerExternal::New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* vector) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerExternal*>(vector));
}
inline ::Org::BouncyCastle::Asn1::DerExternal* Org::BouncyCastle::Asn1::DerExternal::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference,
                                                                                              ::Org::BouncyCastle::Asn1::DerInteger* indirectReference,
                                                                                              ::Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor,
                                                                                              ::Org::BouncyCastle::Asn1::DerTaggedObject* externalData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerExternal*>(directReference, indirectReference, dataValueDescriptor, externalData));
}
inline ::Org::BouncyCastle::Asn1::DerExternal* Org::BouncyCastle::Asn1::DerExternal::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference,
                                                                                              ::Org::BouncyCastle::Asn1::DerInteger* indirectReference,
                                                                                              ::Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor, int32_t encoding,
                                                                                              ::Org::BouncyCastle::Asn1::Asn1Object* externalData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerExternal*>(directReference, indirectReference, dataValueDescriptor, encoding, externalData));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::DerExternal::DerExternal() {}
