#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/ExtendedKeyUsage.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__ExtendedKeyUsage_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__KeyPurposeID_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3659af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::GetInstance)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3659b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage.FromExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::FromExtensions)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x365a0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(),
                                                                                           { "FromExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::_ctor)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x3659d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::*)(::ArrayW<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>)>(
    &::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x365a13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::*)(::System::Collections::ArrayList*)>(
    &::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x365a2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::*)(::System::Collections::IEnumerable*)>(
    &::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::_ctor)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x365a2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage.HasKeyPurposeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::*)(::Org::BouncyCastle::Asn1::X509::KeyPurposeID*)>(
    &::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::HasKeyPurposeId)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x365a6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(),
                                                                                           { "HasKeyPurposeId", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage.GetUsages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::*)()>(
    &::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::GetUsages)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x365a79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), { "GetUsages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage.GetAllUsages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::*)()>(
    &::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::GetAllUsages)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x365a884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), { "GetAllUsages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::*)()>(&::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::get_Count)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x365a968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::*)()>(
    &::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x365aa10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::__cordl_internal_get_usageTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usageTable;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::__cordl_internal_get_usageTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usageTable;
}
constexpr void Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::__cordl_internal_set_usageTable(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usageTable = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::__cordl_internal_get_seq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::__cordl_internal_get_seq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr void Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::__cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seq = value;
}
inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(),
                                                                                         { "FromExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(nullptr, ___internal_method, extensions);
}
inline void Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*> usages) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usages);
}
inline void Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::_ctor(::System::Collections::ArrayList* usages) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usages);
}
inline void Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::_ctor(::System::Collections::IEnumerable* usages) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usages);
}
inline bool Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::HasKeyPurposeId(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* keyPurposeId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(),
                                                                                         { "HasKeyPurposeId", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyPurposeId);
}
inline ::System::Collections::ArrayList* Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::GetUsages() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), { "GetUsages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::GetAllUsages() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), { "GetAllUsages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*> usages) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(usages));
}
inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::New_ctor(::System::Collections::ArrayList* usages) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(usages));
}
inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::New_ctor(::System::Collections::IEnumerable* usages) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*>(usages));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage::ExtendedKeyUsage() {}
