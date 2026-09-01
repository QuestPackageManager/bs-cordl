#pragma once
// IWYU pragma private; include "Mono\Security\ASN1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
//  Writing Method size for method: ::Mono::Security::ASN1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::ASN1::*)(uint8_t)>(&::Mono::Security::ASN1::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ab8e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::ASN1::*)(uint8_t, ::ArrayW<uint8_t>)>(&::Mono::Security::ASN1::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ab8e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::ASN1::*)(::ArrayW<uint8_t>)>(&::Mono::Security::ASN1::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5ab8ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::ASN1::*)()>(&::Mono::Security::ASN1::get_Count)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ab910c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::ASN1::*)()>(&::Mono::Security::ASN1::get_Value)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ab9128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (::Mono::Security::ASN1::*)(::Mono::Security::ASN1*)>(&::Mono::Security::ASN1::Add)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ab91b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { "Add", {}, { ::i2c::type_of<::Mono::Security::ASN1*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::ASN1::*)()>(&::Mono::Security::ASN1::GetBytes)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x5ab9250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { ::i2c::class_of<::Mono::Security::ASN1*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::ASN1::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, int32_t)>(&::Mono::Security::ASN1::Decode)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ab8ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1.DecodeTLV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::ASN1::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, ::by_ref<uint8_t>, ::by_ref<int32_t>, ::by_ref<::ArrayW<uint8_t>>)>(
    &::Mono::Security::ASN1::DecodeTLV)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5ab98b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { "DecodeTLV",
                                                                                       {},
                                                                                       { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint8_t>>(),
                                                                                         ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::ASN1.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::ASN1::*)()>(&::Mono::Security::ASN1::ToString)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5ab99dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { ::i2c::class_of<::Mono::Security::ASN1*>(), 3 }));
    return ___internal_method;
  }
};
constexpr uint8_t& Mono::Security::ASN1::__cordl_internal_get_m_nTag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nTag;
}
constexpr uint8_t const& Mono::Security::ASN1::__cordl_internal_get_m_nTag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nTag;
}
constexpr void Mono::Security::ASN1::__cordl_internal_set_m_nTag(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_nTag = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::ASN1::__cordl_internal_get_m_aValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_aValue;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::ASN1::__cordl_internal_get_m_aValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_aValue;
}
constexpr void Mono::Security::ASN1::__cordl_internal_set_m_aValue(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_aValue = value;
}
constexpr ::System::Collections::ArrayList*& Mono::Security::ASN1::__cordl_internal_get_elist() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elist;
}
constexpr ::System::Collections::ArrayList* const& Mono::Security::ASN1::__cordl_internal_get_elist() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elist;
}
constexpr void Mono::Security::ASN1::__cordl_internal_set_elist(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elist = value;
}
inline void Mono::Security::ASN1::_ctor(uint8_t tag) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag);
}
inline void Mono::Security::ASN1::_ctor(uint8_t tag, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, data);
}
inline void Mono::Security::ASN1::_ctor(::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline int32_t Mono::Security::ASN1::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::ASN1::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Mono::Security::ASN1* Mono::Security::ASN1::Add(::Mono::Security::ASN1* asn1) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { "Add", {}, { ::i2c::type_of<::Mono::Security::ASN1*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(this, ___internal_method, asn1);
}
inline ::ArrayW<uint8_t> Mono::Security::ASN1::GetBytes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::ASN1*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Mono::Security::ASN1::Decode(::ArrayW<uint8_t> asn1, ::by_ref<int32_t> anPos, int32_t anLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asn1, anPos, anLength);
}
inline void Mono::Security::ASN1::DecodeTLV(::ArrayW<uint8_t> asn1, ::by_ref<int32_t> pos, ::by_ref<uint8_t> tag, ::by_ref<int32_t> length, ::by_ref<::ArrayW<uint8_t>> content) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Security::ASN1*>(), { "DecodeTLV",
                                                                                     {},
                                                                                     { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint8_t>>(),
                                                                                       ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asn1, pos, tag, length, content);
}
inline ::StringW Mono::Security::ASN1::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::ASN1*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Mono::Security::ASN1* Mono::Security::ASN1::New_ctor(uint8_t tag) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::ASN1*>(tag));
}
inline ::Mono::Security::ASN1* Mono::Security::ASN1::New_ctor(uint8_t tag, ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::ASN1*>(tag, data));
}
inline ::Mono::Security::ASN1* Mono::Security::ASN1::New_ctor(::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::ASN1*>(data));
}
// Ctor Parameters []
constexpr ::Mono::Security::ASN1::ASN1() {}
