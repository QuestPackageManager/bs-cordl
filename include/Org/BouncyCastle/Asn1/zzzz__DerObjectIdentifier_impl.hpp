#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerObjectIdentifier.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::DerObjectIdentifier::GetInstance)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x3549834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::DerObjectIdentifier::GetInstance)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x355d108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerObjectIdentifier::*)(::StringW)>(&::Org::BouncyCastle::Asn1::DerObjectIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x353ff34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerObjectIdentifier::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::StringW)>(
    &::Org::BouncyCastle::Asn1::DerObjectIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x355d2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.get_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::DerObjectIdentifier::*)()>(&::Org::BouncyCastle::Asn1::DerObjectIdentifier::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355d4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { "get_Id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.Branch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::DerObjectIdentifier::*)(::StringW)>(
    &::Org::BouncyCastle::Asn1::DerObjectIdentifier::Branch)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x355d4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.On
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::DerObjectIdentifier::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::DerObjectIdentifier::On)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x355d514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerObjectIdentifier::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::DerObjectIdentifier::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x355d5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.WriteField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerObjectIdentifier::*)(::System::IO::Stream*, int64_t)>(
    &::Org::BouncyCastle::Asn1::DerObjectIdentifier::WriteField)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x355d914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                                                           { "WriteField", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.WriteField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerObjectIdentifier::*)(::System::IO::Stream*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Asn1::DerObjectIdentifier::WriteField)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x355d9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                             { "WriteField", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.DoOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerObjectIdentifier::*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Asn1::DerObjectIdentifier::DoOutput)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x355db6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { "DoOutput", {}, { ::i2c::type_of<::System::IO::MemoryStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.GetBody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::DerObjectIdentifier::*)()>(&::Org::BouncyCastle::Asn1::DerObjectIdentifier::GetBody)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x355dd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { "GetBody", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerObjectIdentifier::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(
    &::Org::BouncyCastle::Asn1::DerObjectIdentifier::Encode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x355de28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.Asn1GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::DerObjectIdentifier::*)()>(&::Org::BouncyCastle::Asn1::DerObjectIdentifier::Asn1GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x355de54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.Asn1Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::DerObjectIdentifier::*)(::Org::BouncyCastle::Asn1::Asn1Object*)>(
    &::Org::BouncyCastle::Asn1::DerObjectIdentifier::Asn1Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x355de68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::DerObjectIdentifier::*)()>(&::Org::BouncyCastle::Asn1::DerObjectIdentifier::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355df10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.IsValidBranchID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, int32_t)>(&::Org::BouncyCastle::Asn1::DerObjectIdentifier::IsValidBranchID)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x355d3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { "IsValidBranchID", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.IsValidIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Org::BouncyCastle::Asn1::DerObjectIdentifier::IsValidIdentifier)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x355d218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { "IsValidIdentifier", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.MakeOidStringFromBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::DerObjectIdentifier::MakeOidStringFromBytes)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x355d688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { "MakeOidStringFromBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerObjectIdentifier.FromOctetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::DerObjectIdentifier::FromOctetString)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x355cec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { "FromOctetString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Asn1::DerObjectIdentifier::__cordl_internal_get_identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identifier;
}
constexpr ::StringW const& Org::BouncyCastle::Asn1::DerObjectIdentifier::__cordl_internal_get_identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identifier;
}
constexpr void Org::BouncyCastle::Asn1::DerObjectIdentifier::__cordl_internal_set_identifier(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___identifier = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Asn1::DerObjectIdentifier::__cordl_internal_get_body() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___body;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Asn1::DerObjectIdentifier::__cordl_internal_get_body() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___body;
}
constexpr void Org::BouncyCastle::Asn1::DerObjectIdentifier::__cordl_internal_set_body(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___body = value;
}
inline void Org::BouncyCastle::Asn1::DerObjectIdentifier::setStaticF_cache(::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>, "cache", ::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(
      std::forward<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>>(value));
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> Org::BouncyCastle::Asn1::DerObjectIdentifier::getStaticF_cache() {
  return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>, "cache", ::Org::BouncyCastle::Asn1::DerObjectIdentifier*>();
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::DerObjectIdentifier::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::DerObjectIdentifier::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(nullptr, ___internal_method, obj, explicitly);
}
inline void Org::BouncyCastle::Asn1::DerObjectIdentifier::_ctor(::StringW identifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identifier);
}
inline void Org::BouncyCastle::Asn1::DerObjectIdentifier::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW branchID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, branchID);
}
inline ::StringW Org::BouncyCastle::Asn1::DerObjectIdentifier::get_Id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { "get_Id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::DerObjectIdentifier::Branch(::StringW branchID) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method, branchID);
}
inline bool Org::BouncyCastle::Asn1::DerObjectIdentifier::On(::Org::BouncyCastle::Asn1::DerObjectIdentifier* stem) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stem);
}
inline void Org::BouncyCastle::Asn1::DerObjectIdentifier::_ctor(::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline void Org::BouncyCastle::Asn1::DerObjectIdentifier::WriteField(::System::IO::Stream* outputStream, int64_t fieldValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                                                         { "WriteField", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputStream, fieldValue);
}
inline void Org::BouncyCastle::Asn1::DerObjectIdentifier::WriteField(::System::IO::Stream* outputStream, ::Org::BouncyCastle::Math::BigInteger* fieldValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                           { "WriteField", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputStream, fieldValue);
}
inline void Org::BouncyCastle::Asn1::DerObjectIdentifier::DoOutput(::System::IO::MemoryStream* bOut) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { "DoOutput", {}, { ::i2c::type_of<::System::IO::MemoryStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bOut);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::DerObjectIdentifier::GetBody() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { "GetBody", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::DerObjectIdentifier::Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, derOut);
}
inline int32_t Org::BouncyCastle::Asn1::DerObjectIdentifier::Asn1GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::DerObjectIdentifier::Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, asn1Object);
}
inline ::StringW Org::BouncyCastle::Asn1::DerObjectIdentifier::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::DerObjectIdentifier::IsValidBranchID(::StringW branchID, int32_t start) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { "IsValidBranchID", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, branchID, start);
}
inline bool Org::BouncyCastle::Asn1::DerObjectIdentifier::IsValidIdentifier(::StringW identifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { "IsValidIdentifier", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, identifier);
}
inline ::StringW Org::BouncyCastle::Asn1::DerObjectIdentifier::MakeOidStringFromBytes(::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { "MakeOidStringFromBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::DerObjectIdentifier::FromOctetString(::ArrayW<uint8_t> enc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), { "FromOctetString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(nullptr, ___internal_method, enc);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::DerObjectIdentifier::New_ctor(::StringW identifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(identifier));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::DerObjectIdentifier::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW branchID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(oid, branchID));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::DerObjectIdentifier::New_ctor(::ArrayW<uint8_t> bytes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(bytes));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier::DerObjectIdentifier() {}
