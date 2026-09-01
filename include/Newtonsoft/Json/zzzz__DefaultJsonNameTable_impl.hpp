#pragma once
// IWYU pragma private; include "Newtonsoft\Json\DefaultJsonNameTable.hpp"
#include "Newtonsoft/Json/zzzz__JsonNameTable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/zzzz__DefaultJsonNameTable_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultJsonNameTable_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::DefaultJsonNameTable_Entry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::DefaultJsonNameTable_Entry::*)(::StringW, int32_t, ::Newtonsoft::Json::DefaultJsonNameTable_Entry*)>(
    &::Newtonsoft::Json::DefaultJsonNameTable_Entry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cd2ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::DefaultJsonNameTable_Entry*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::DefaultJsonNameTable_Entry*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Newtonsoft::Json::DefaultJsonNameTable_Entry::__cordl_internal_get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr ::StringW const& Newtonsoft::Json::DefaultJsonNameTable_Entry::__cordl_internal_get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr void Newtonsoft::Json::DefaultJsonNameTable_Entry::__cordl_internal_set_Value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Value = value;
}
constexpr int32_t& Newtonsoft::Json::DefaultJsonNameTable_Entry::__cordl_internal_get_HashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HashCode;
}
constexpr int32_t const& Newtonsoft::Json::DefaultJsonNameTable_Entry::__cordl_internal_get_HashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HashCode;
}
constexpr void Newtonsoft::Json::DefaultJsonNameTable_Entry::__cordl_internal_set_HashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HashCode = value;
}
constexpr ::Newtonsoft::Json::DefaultJsonNameTable_Entry*& Newtonsoft::Json::DefaultJsonNameTable_Entry::__cordl_internal_get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr ::Newtonsoft::Json::DefaultJsonNameTable_Entry* const& Newtonsoft::Json::DefaultJsonNameTable_Entry::__cordl_internal_get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr void Newtonsoft::Json::DefaultJsonNameTable_Entry::__cordl_internal_set_Next(::Newtonsoft::Json::DefaultJsonNameTable_Entry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Next = value;
}
inline void Newtonsoft::Json::DefaultJsonNameTable_Entry::_ctor(::StringW value, int32_t hashCode, ::Newtonsoft::Json::DefaultJsonNameTable_Entry* next) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::DefaultJsonNameTable_Entry*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::DefaultJsonNameTable_Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, hashCode, next);
}
inline ::Newtonsoft::Json::DefaultJsonNameTable_Entry* Newtonsoft::Json::DefaultJsonNameTable_Entry::New_ctor(::StringW value, int32_t hashCode, ::Newtonsoft::Json::DefaultJsonNameTable_Entry* next) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::DefaultJsonNameTable_Entry*>(value, hashCode, next));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::DefaultJsonNameTable_Entry::DefaultJsonNameTable_Entry() {}
//  Writing Method size for method: ::Newtonsoft::Json::DefaultJsonNameTable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::DefaultJsonNameTable::*)()>(&::Newtonsoft::Json::DefaultJsonNameTable::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cd2abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::DefaultJsonNameTable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::DefaultJsonNameTable.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::DefaultJsonNameTable::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::Newtonsoft::Json::DefaultJsonNameTable::Get)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5cd2b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::DefaultJsonNameTable*>(), { ::i2c::class_of<::Newtonsoft::Json::DefaultJsonNameTable*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::DefaultJsonNameTable.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::DefaultJsonNameTable::*)(::StringW)>(&::Newtonsoft::Json::DefaultJsonNameTable::Add)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5cd2d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::DefaultJsonNameTable*>(), { "Add", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::DefaultJsonNameTable.AddEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::DefaultJsonNameTable::*)(::StringW, int32_t)>(&::Newtonsoft::Json::DefaultJsonNameTable::AddEntry)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cd2ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::DefaultJsonNameTable*>(), { "AddEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::DefaultJsonNameTable.Grow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::DefaultJsonNameTable::*)()>(&::Newtonsoft::Json::DefaultJsonNameTable::Grow)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5cd3000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::DefaultJsonNameTable*>(), { "Grow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::DefaultJsonNameTable.TextEquals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::ArrayW<char16_t>, int32_t, int32_t)>(&::Newtonsoft::Json::DefaultJsonNameTable::TextEquals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5cd2ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::DefaultJsonNameTable*>(),
                                                { "TextEquals", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int32_t const& Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
constexpr ::ArrayW<::Newtonsoft::Json::DefaultJsonNameTable_Entry*>& Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_get__entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
constexpr ::ArrayW<::Newtonsoft::Json::DefaultJsonNameTable_Entry*> const& Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_get__entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
constexpr void Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_set__entries(::ArrayW<::Newtonsoft::Json::DefaultJsonNameTable_Entry*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entries = value;
}
constexpr int32_t& Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_get__mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mask;
}
constexpr int32_t const& Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_get__mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mask;
}
constexpr void Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_set__mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mask = value;
}
inline void Newtonsoft::Json::DefaultJsonNameTable::setStaticF_HashCodeRandomizer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "HashCodeRandomizer", ::Newtonsoft::Json::DefaultJsonNameTable*>(std::forward<int32_t>(value));
}
inline int32_t Newtonsoft::Json::DefaultJsonNameTable::getStaticF_HashCodeRandomizer() {
  return ::cordl_internals::getStaticField<int32_t, "HashCodeRandomizer", ::Newtonsoft::Json::DefaultJsonNameTable*>();
}
inline void Newtonsoft::Json::DefaultJsonNameTable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::DefaultJsonNameTable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::DefaultJsonNameTable::Get(::ArrayW<char16_t> key, int32_t start, int32_t length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::DefaultJsonNameTable*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key, start, length);
}
inline ::StringW Newtonsoft::Json::DefaultJsonNameTable::Add(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::DefaultJsonNameTable*>(), { "Add", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key);
}
inline ::StringW Newtonsoft::Json::DefaultJsonNameTable::AddEntry(::StringW str, int32_t hashCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::DefaultJsonNameTable*>(), { "AddEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, str, hashCode);
}
inline void Newtonsoft::Json::DefaultJsonNameTable::Grow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::DefaultJsonNameTable*>(), { "Grow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::DefaultJsonNameTable::TextEquals(::StringW str1, ::ArrayW<char16_t> str2, int32_t str2Start, int32_t str2Length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::DefaultJsonNameTable*>(),
                                              { "TextEquals", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str1, str2, str2Start, str2Length);
}
inline ::Newtonsoft::Json::DefaultJsonNameTable* Newtonsoft::Json::DefaultJsonNameTable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::DefaultJsonNameTable*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::DefaultJsonNameTable::DefaultJsonNameTable() {}
