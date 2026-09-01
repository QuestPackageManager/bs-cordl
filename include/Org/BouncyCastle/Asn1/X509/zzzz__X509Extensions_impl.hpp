#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\X509Extensions.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extension_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions.GetExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Asn1::X509::X509Extension* (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
        &::Org::BouncyCastle::Asn1::X509::X509Extensions::GetExtension)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x366c740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                            { "GetExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions.GetExtensionParsedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
        &::Org::BouncyCastle::Asn1::X509::X509Extensions::GetExtensionParsedValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3659df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
            { "GetExtensionParsedValue", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::GetInstance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x366c768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::X509Extensions::GetInstance)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x3667a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Extensions::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::_ctor)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0x366c7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Extensions::*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x366cfa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Extensions::*)(::System::Collections::IList*, ::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::_ctor)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x366cfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Extensions::*)(::System::Collections::IList*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::_ctor)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x366aa34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Extensions::*)(::System::Collections::Hashtable*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x366d4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Extensions::*)(::System::Collections::ArrayList*, ::System::Collections::Hashtable*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::_ctor)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x366d4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Extensions::*)(::System::Collections::ArrayList*, ::System::Collections::ArrayList*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::_ctor)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x366d9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions.Oids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Org::BouncyCastle::Asn1::X509::X509Extensions::*)()>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::Oids)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x366de1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { "Oids", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions.get_ExtensionOids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Asn1::X509::X509Extensions::*)()>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::get_ExtensionOids)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x366dec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { "get_ExtensionOids", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions.GetExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extension* (
    ::Org::BouncyCastle::Asn1::X509::X509Extensions::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Asn1::X509::X509Extensions::GetExtension)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x366b79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                                                                                           { "GetExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions.GetExtensionParsedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (::Org::BouncyCastle::Asn1::X509::X509Extensions::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::GetExtensionParsedValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x366c74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                                                                                           { "GetExtensionParsedValue", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::X509Extensions::*)()>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::ToAsn1Object)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x366df2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions.Equivalent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::X509::X509Extensions::*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::Equivalent)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x366e508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                                                                                           { "Equivalent", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions.GetExtensionOids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> (::Org::BouncyCastle::Asn1::X509::X509Extensions::*)()>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::GetExtensionOids)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x366eaa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { "GetExtensionOids", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions.GetNonCriticalExtensionOids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> (::Org::BouncyCastle::Asn1::X509::X509Extensions::*)()>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::GetNonCriticalExtensionOids)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x366ec3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { "GetNonCriticalExtensionOids", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions.GetCriticalExtensionOids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> (::Org::BouncyCastle::Asn1::X509::X509Extensions::*)()>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::GetCriticalExtensionOids)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x366f14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { "GetCriticalExtensionOids", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions.GetExtensionOids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> (::Org::BouncyCastle::Asn1::X509::X509Extensions::*)(bool)>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::GetExtensionOids)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x366ec44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { "GetExtensionOids", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Extensions.ToOidArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> (*)(::System::Collections::IList*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Extensions::ToOidArray)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x366eb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { "ToOidArray", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Asn1::X509::X509Extensions::__cordl_internal_get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Asn1::X509::X509Extensions::__cordl_internal_get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509Extensions::__cordl_internal_set_extensions(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extensions = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Asn1::X509::X509Extensions::__cordl_internal_get_ordering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ordering;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Asn1::X509::X509Extensions::__cordl_internal_get_ordering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ordering;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509Extensions::__cordl_internal_set_ordering(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ordering = value;
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_SubjectDirectoryAttributes(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SubjectDirectoryAttributes", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_SubjectDirectoryAttributes() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SubjectDirectoryAttributes", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_SubjectKeyIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SubjectKeyIdentifier", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_SubjectKeyIdentifier() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SubjectKeyIdentifier", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_KeyUsage(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "KeyUsage", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_KeyUsage() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "KeyUsage", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_PrivateKeyUsagePeriod(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PrivateKeyUsagePeriod", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_PrivateKeyUsagePeriod() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PrivateKeyUsagePeriod", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_SubjectAlternativeName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SubjectAlternativeName", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_SubjectAlternativeName() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SubjectAlternativeName", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_IssuerAlternativeName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IssuerAlternativeName", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_IssuerAlternativeName() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IssuerAlternativeName", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_BasicConstraints(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "BasicConstraints", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_BasicConstraints() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "BasicConstraints", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_CrlNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CrlNumber", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_CrlNumber() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CrlNumber", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_ReasonCode(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ReasonCode", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_ReasonCode() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ReasonCode", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_InstructionCode(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "InstructionCode", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_InstructionCode() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "InstructionCode", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_InvalidityDate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "InvalidityDate", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_InvalidityDate() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "InvalidityDate", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_DeltaCrlIndicator(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DeltaCrlIndicator", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_DeltaCrlIndicator() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DeltaCrlIndicator", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_IssuingDistributionPoint(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IssuingDistributionPoint", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_IssuingDistributionPoint() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "IssuingDistributionPoint", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_CertificateIssuer(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CertificateIssuer", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_CertificateIssuer() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CertificateIssuer", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_NameConstraints(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "NameConstraints", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_NameConstraints() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "NameConstraints", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_CrlDistributionPoints(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CrlDistributionPoints", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_CrlDistributionPoints() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CrlDistributionPoints", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_CertificatePolicies(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CertificatePolicies", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_CertificatePolicies() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CertificatePolicies", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_PolicyMappings(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PolicyMappings", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_PolicyMappings() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PolicyMappings", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_AuthorityKeyIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "AuthorityKeyIdentifier", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_AuthorityKeyIdentifier() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "AuthorityKeyIdentifier", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_PolicyConstraints(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PolicyConstraints", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_PolicyConstraints() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PolicyConstraints", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_ExtendedKeyUsage(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ExtendedKeyUsage", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_ExtendedKeyUsage() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ExtendedKeyUsage", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_FreshestCrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "FreshestCrl", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_FreshestCrl() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "FreshestCrl", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_InhibitAnyPolicy(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "InhibitAnyPolicy", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_InhibitAnyPolicy() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "InhibitAnyPolicy", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_AuthorityInfoAccess(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "AuthorityInfoAccess", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_AuthorityInfoAccess() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "AuthorityInfoAccess", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_SubjectInfoAccess(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SubjectInfoAccess", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_SubjectInfoAccess() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SubjectInfoAccess", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_LogoType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "LogoType", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_LogoType() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "LogoType", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_BiometricInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "BiometricInfo", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_BiometricInfo() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "BiometricInfo", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_QCStatements(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "QCStatements", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_QCStatements() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "QCStatements", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_AuditIdentity(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "AuditIdentity", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_AuditIdentity() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "AuditIdentity", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_NoRevAvail(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "NoRevAvail", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_NoRevAvail() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "NoRevAvail", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_TargetInformation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "TargetInformation", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_TargetInformation() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "TargetInformation", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::setStaticF_ExpiredCertsOnCrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ExpiredCertsOnCrl", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Extensions::getStaticF_ExpiredCertsOnCrl() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ExpiredCertsOnCrl", ::Org::BouncyCastle::Asn1::X509::X509Extensions*>();
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extension* Org::BouncyCastle::Asn1::X509::X509Extensions::GetExtension(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions,
                                                                                                                   ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                          { "GetExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extension*>(nullptr, ___internal_method, extensions, oid);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::X509::X509Extensions::GetExtensionParsedValue(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions,
                                                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                       { "GetExtensionParsedValue", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(nullptr, ___internal_method, extensions, oid);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::X509::X509Extensions::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::X509::X509Extensions::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::_ctor(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extensions);
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::_ctor(::System::Collections::IList* ordering, ::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ordering, extensions);
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::_ctor(::System::Collections::IList* oids, ::System::Collections::IList* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oids, values);
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::_ctor(::System::Collections::Hashtable* extensions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extensions);
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::_ctor(::System::Collections::ArrayList* ordering, ::System::Collections::Hashtable* extensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ordering, extensions);
}
inline void Org::BouncyCastle::Asn1::X509::X509Extensions::_ctor(::System::Collections::ArrayList* oids, ::System::Collections::ArrayList* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oids, values);
}
inline ::System::Collections::IEnumerator* Org::BouncyCastle::Asn1::X509::X509Extensions::Oids() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { "Oids", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Asn1::X509::X509Extensions::get_ExtensionOids() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { "get_ExtensionOids", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extension* Org::BouncyCastle::Asn1::X509::X509Extensions::GetExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                                                                                         { "GetExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extension*>(this, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::X509::X509Extensions::GetExtensionParsedValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                                                                                         { "GetExtensionParsedValue", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(this, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::X509Extensions::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::X509::X509Extensions::Equivalent(::Org::BouncyCastle::Asn1::X509::X509Extensions* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(),
                                                                                         { "Equivalent", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> Org::BouncyCastle::Asn1::X509::X509Extensions::GetExtensionOids() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { "GetExtensionOids", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> Org::BouncyCastle::Asn1::X509::X509Extensions::GetNonCriticalExtensionOids() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { "GetNonCriticalExtensionOids", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> Org::BouncyCastle::Asn1::X509::X509Extensions::GetCriticalExtensionOids() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { "GetCriticalExtensionOids", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> Org::BouncyCastle::Asn1::X509::X509Extensions::GetExtensionOids(bool isCritical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { "GetExtensionOids", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>>(this, ___internal_method, isCritical);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> Org::BouncyCastle::Asn1::X509::X509Extensions::ToOidArray(::System::Collections::IList* oids) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(), { "ToOidArray", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>>(nullptr, ___internal_method, oids);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::X509::X509Extensions::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::X509::X509Extensions::New_ctor(::System::Collections::IDictionary* extensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(extensions));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::X509::X509Extensions::New_ctor(::System::Collections::IList* ordering,
                                                                                                                ::System::Collections::IDictionary* extensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(ordering, extensions));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::X509::X509Extensions::New_ctor(::System::Collections::IList* oids, ::System::Collections::IList* values) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(oids, values));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::X509::X509Extensions::New_ctor(::System::Collections::Hashtable* extensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(extensions));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::X509::X509Extensions::New_ctor(::System::Collections::ArrayList* ordering,
                                                                                                                ::System::Collections::Hashtable* extensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(ordering, extensions));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::X509::X509Extensions::New_ctor(::System::Collections::ArrayList* oids, ::System::Collections::ArrayList* values) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(oids, values));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions::X509Extensions() {}
