#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\X509Name.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509NameEntryConverter_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.get_DefaultReverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Org::BouncyCastle::Asn1::X509::X509Name::get_DefaultReverse)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x366feac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "get_DefaultReverse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.set_DefaultReverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Org::BouncyCastle::Asn1::X509::X509Name::set_DefaultReverse)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x366ff20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "set_DefaultReverse", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::X509Name::GetInstance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x365d678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::X509Name::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x365d850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Name::*)()>(&::Org::BouncyCastle::Asn1::X509::X509Name::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x367234c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Name::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Name::_ctor)> {
  constexpr static std::size_t size = 0x8f8;
  constexpr static std::size_t addrs = 0x3671a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Name::*)(::System::Collections::IList*, ::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Name::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36723c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Name::*)(
    ::System::Collections::IList*, ::System::Collections::IDictionary*, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*)>(&::Org::BouncyCastle::Asn1::X509::X509Name::_ctor)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x3672430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IDictionary*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Name::*)(::System::Collections::IList*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Name::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3672a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Name::*)(
    ::System::Collections::IList*, ::System::Collections::IList*, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*)>(&::Org::BouncyCastle::Asn1::X509::X509Name::_ctor)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x3672ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Name::*)(::StringW)>(&::Org::BouncyCastle::Asn1::X509::X509Name::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x365cff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Name::*)(::StringW, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Name::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3672fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Name::*)(bool, ::StringW)>(&::Org::BouncyCastle::Asn1::X509::X509Name::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3673a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Name::*)(bool, ::StringW, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Name::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3673afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Name::*)(bool, ::System::Collections::IDictionary*, ::StringW)>(
    &::Org::BouncyCastle::Asn1::X509::X509Name::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3672f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.DecodeOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::X509::X509Name::*)(::StringW, ::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Name::DecodeOid)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x3673b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                             { "DecodeOid", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Name::*)(
    bool, ::System::Collections::IDictionary*, ::StringW, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*)>(&::Org::BouncyCastle::Asn1::X509::X509Name::_ctor)> {
  constexpr static std::size_t size = 0xa50;
  constexpr static std::size_t addrs = 0x3673030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.GetOidList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Asn1::X509::X509Name::*)()>(&::Org::BouncyCastle::Asn1::X509::X509Name::GetOidList)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x367404c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "GetOidList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.GetValueList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Asn1::X509::X509Name::*)()>(&::Org::BouncyCastle::Asn1::X509::X509Name::GetValueList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36740ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "GetValueList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.GetValueList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Asn1::X509::X509Name::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Name::GetValueList)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x36740b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                                                           { "GetValueList", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::X509Name::*)()>(
    &::Org::BouncyCastle::Asn1::X509::X509Name::ToAsn1Object)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x36743ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.Equivalent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::X509::X509Name::*)(::Org::BouncyCastle::Asn1::X509::X509Name*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::X509Name::Equivalent)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x3674860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                             { "Equivalent", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.Equivalent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::X509::X509Name::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Name::Equivalent)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x3674cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "Equivalent", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.equivalentStrings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::Org::BouncyCastle::Asn1::X509::X509Name::equivalentStrings)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x36752bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "equivalentStrings", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.canonicalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Org::BouncyCastle::Asn1::X509::X509Name::canonicalize)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3675398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "canonicalize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.decodeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (*)(::StringW)>(&::Org::BouncyCastle::Asn1::X509::X509Name::decodeObject)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3675680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "decodeObject", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.stripInternalSpaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Org::BouncyCastle::Asn1::X509::X509Name::stripInternalSpaces)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3675574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "stripInternalSpaces", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.AppendValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509Name::*)(
    ::System::Text::StringBuilder*, ::System::Collections::IDictionary*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::StringW)>(&::Org::BouncyCastle::Asn1::X509::X509Name::AppendValue)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x36757f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                                                           { "AppendValue",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Collections::IDictionary*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::X509::X509Name::*)(bool, ::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Asn1::X509::X509Name::ToString)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x3675ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                                                           { "ToString", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509Name.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::X509::X509Name::*)()>(&::Org::BouncyCastle::Asn1::X509::X509Name::ToString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3676078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Asn1::X509::X509Name::__cordl_internal_get_ordering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ordering;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Asn1::X509::X509Name::__cordl_internal_get_ordering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ordering;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509Name::__cordl_internal_set_ordering(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ordering = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*& Org::BouncyCastle::Asn1::X509::X509Name::__cordl_internal_get_converter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___converter;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* const& Org::BouncyCastle::Asn1::X509::X509Name::__cordl_internal_get_converter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___converter;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509Name::__cordl_internal_set_converter(::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___converter = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Asn1::X509::X509Name::__cordl_internal_get_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Asn1::X509::X509Name::__cordl_internal_get_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509Name::__cordl_internal_set_values(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___values = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Asn1::X509::X509Name::__cordl_internal_get_added() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___added;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Asn1::X509::X509Name::__cordl_internal_get_added() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___added;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509Name::__cordl_internal_set_added(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___added = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::X509::X509Name::__cordl_internal_get_seq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::X509::X509Name::__cordl_internal_get_seq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509Name::__cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seq = value;
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_C(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "C", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_C() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "C", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_O(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "O", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_O() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "O", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_OU(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "OU", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_OU() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "OU", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_T(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "T", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_T() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "T", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_CN(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CN", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_CN() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CN", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_Street(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Street", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_Street() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Street", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_SerialNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SerialNumber", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_SerialNumber() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "SerialNumber", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_L(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "L", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_L() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "L", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_ST(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ST", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_ST() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "ST", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_Surname(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Surname", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_Surname() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Surname", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_GivenName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "GivenName", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_GivenName() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "GivenName", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_Initials(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Initials", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_Initials() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Initials", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_Generation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Generation", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_Generation() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Generation", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_UniqueIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "UniqueIdentifier", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_UniqueIdentifier() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "UniqueIdentifier", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_BusinessCategory(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "BusinessCategory", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_BusinessCategory() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "BusinessCategory", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_PostalCode(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PostalCode", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_PostalCode() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PostalCode", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_DnQualifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DnQualifier", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_DnQualifier() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DnQualifier", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_Pseudonym(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pseudonym", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_Pseudonym() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Pseudonym", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_DateOfBirth(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DateOfBirth", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_DateOfBirth() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DateOfBirth", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_PlaceOfBirth(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PlaceOfBirth", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_PlaceOfBirth() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PlaceOfBirth", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_Gender(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Gender", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_Gender() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Gender", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_CountryOfCitizenship(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CountryOfCitizenship", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_CountryOfCitizenship() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CountryOfCitizenship", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_CountryOfResidence(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CountryOfResidence", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_CountryOfResidence() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "CountryOfResidence", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_NameAtBirth(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "NameAtBirth", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_NameAtBirth() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "NameAtBirth", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_PostalAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PostalAddress", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_PostalAddress() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "PostalAddress", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_DmdName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DmdName", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_DmdName() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DmdName", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_TelephoneNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "TelephoneNumber", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_TelephoneNumber() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "TelephoneNumber", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_OrganizationIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "OrganizationIdentifier", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_OrganizationIdentifier() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "OrganizationIdentifier", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_Name(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Name", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_Name() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Name", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_EmailAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "EmailAddress", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_EmailAddress() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "EmailAddress", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_UnstructuredName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "UnstructuredName", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_UnstructuredName() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "UnstructuredName", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_UnstructuredAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "UnstructuredAddress", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_UnstructuredAddress() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "UnstructuredAddress", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_E(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "E", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_E() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "E", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_DC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DC", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_DC() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "DC", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_UID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "UID", ::Org::BouncyCastle::Asn1::X509::X509Name*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_UID() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "UID", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_defaultReverse(::ArrayW<bool> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool>, "defaultReverse", ::Org::BouncyCastle::Asn1::X509::X509Name*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_defaultReverse() {
  return ::cordl_internals::getStaticField<::ArrayW<bool>, "defaultReverse", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_DefaultSymbols(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "DefaultSymbols", ::Org::BouncyCastle::Asn1::X509::X509Name*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_DefaultSymbols() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "DefaultSymbols", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_RFC2253Symbols(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "RFC2253Symbols", ::Org::BouncyCastle::Asn1::X509::X509Name*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_RFC2253Symbols() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "RFC2253Symbols", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_RFC1779Symbols(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "RFC1779Symbols", ::Org::BouncyCastle::Asn1::X509::X509Name*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_RFC1779Symbols() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "RFC1779Symbols", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::setStaticF_DefaultLookup(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "DefaultLookup", ::Org::BouncyCastle::Asn1::X509::X509Name*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* Org::BouncyCastle::Asn1::X509::X509Name::getStaticF_DefaultLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "DefaultLookup", ::Org::BouncyCastle::Asn1::X509::X509Name*>();
}
inline bool Org::BouncyCastle::Asn1::X509::X509Name::get_DefaultReverse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "get_DefaultReverse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::set_DefaultReverse(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "set_DefaultReverse", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::X509Name::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::X509Name::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::_ctor(::System::Collections::IList* ordering, ::System::Collections::IDictionary* attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ordering, attributes);
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::_ctor(::System::Collections::IList* ordering, ::System::Collections::IDictionary* attributes,
                                                           ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IDictionary*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ordering, attributes, converter);
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::_ctor(::System::Collections::IList* oids, ::System::Collections::IList* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oids, values);
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::_ctor(::System::Collections::IList* oids, ::System::Collections::IList* values,
                                                           ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oids, values, converter);
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::_ctor(::StringW dirName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dirName);
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::_ctor(::StringW dirName, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dirName, converter);
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::_ctor(bool reverse, ::StringW dirName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reverse, dirName);
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::_ctor(bool reverse, ::StringW dirName, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                              { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reverse, dirName, converter);
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::_ctor(bool reverse, ::System::Collections::IDictionary* lookUp, ::StringW dirName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reverse, lookUp, dirName);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::X509Name::DecodeOid(::StringW name, ::System::Collections::IDictionary* lookUp) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                                                         { "DecodeOid", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method, name, lookUp);
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::_ctor(bool reverse, ::System::Collections::IDictionary* lookUp, ::StringW dirName,
                                                           ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reverse, lookUp, dirName, converter);
}
inline ::System::Collections::IList* Org::BouncyCastle::Asn1::X509::X509Name::GetOidList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "GetOidList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Asn1::X509::X509Name::GetValueList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "GetValueList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Asn1::X509::X509Name::GetValueList(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "GetValueList", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::X509Name::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::X509::X509Name::Equivalent(::Org::BouncyCastle::Asn1::X509::X509Name* other, bool inOrder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                           { "Equivalent", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, inOrder);
}
inline bool Org::BouncyCastle::Asn1::X509::X509Name::Equivalent(::Org::BouncyCastle::Asn1::X509::X509Name* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "Equivalent", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool Org::BouncyCastle::Asn1::X509::X509Name::equivalentStrings(::StringW s1, ::StringW s2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "equivalentStrings", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s1, s2);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::X509Name::canonicalize(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "canonicalize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::X509Name::decodeObject(::StringW v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "decodeObject", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(nullptr, ___internal_method, v);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::X509Name::stripInternalSpaces(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), { "stripInternalSpaces", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
inline void Org::BouncyCastle::Asn1::X509::X509Name::AppendValue(::System::Text::StringBuilder* buf, ::System::Collections::IDictionary* oidSymbols,
                                                                 ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                                                         { "AppendValue",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Collections::IDictionary*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, oidSymbols, oid, val);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::X509Name::ToString(bool reverse, ::System::Collections::IDictionary* oidSymbols) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(),
                                                                                         { "ToString", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, reverse, oidSymbols);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::X509Name::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::X509Name::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Name*>());
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::X509Name::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Name*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::X509Name::New_ctor(::System::Collections::IList* ordering, ::System::Collections::IDictionary* attributes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Name*>(ordering, attributes));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::X509Name::New_ctor(::System::Collections::IList* ordering, ::System::Collections::IDictionary* attributes,
                                                                                                    ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Name*>(ordering, attributes, converter));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::X509Name::New_ctor(::System::Collections::IList* oids, ::System::Collections::IList* values) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Name*>(oids, values));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::X509Name::New_ctor(::System::Collections::IList* oids, ::System::Collections::IList* values,
                                                                                                    ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Name*>(oids, values, converter));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::X509Name::New_ctor(::StringW dirName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Name*>(dirName));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::X509Name::New_ctor(::StringW dirName, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Name*>(dirName, converter));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::X509Name::New_ctor(bool reverse, ::StringW dirName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Name*>(reverse, dirName));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::X509Name::New_ctor(bool reverse, ::StringW dirName,
                                                                                                    ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Name*>(reverse, dirName, converter));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::X509Name::New_ctor(bool reverse, ::System::Collections::IDictionary* lookUp, ::StringW dirName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Name*>(reverse, lookUp, dirName));
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::X509Name::New_ctor(bool reverse, ::System::Collections::IDictionary* lookUp, ::StringW dirName,
                                                                                                    ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::X509Name*>(reverse, lookUp, dirName, converter));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::X509Name::X509Name() {}
