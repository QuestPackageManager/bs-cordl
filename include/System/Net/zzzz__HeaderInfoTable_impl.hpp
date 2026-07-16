#pragma once
// IWYU pragma private; include "System/Net/HeaderInfoTable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HeaderInfoTable_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/zzzz__HeaderInfo_def.hpp"
#include "System/Net/zzzz__HeaderParser_def.hpp"
//  Writing Method size for method: ::System::Net::HeaderInfoTable.ParseSingleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&::System::Net::HeaderInfoTable::ParseSingleValue)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x640ffe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HeaderInfoTable*>(), { "ParseSingleValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HeaderInfoTable.ParseMultiValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&::System::Net::HeaderInfoTable::ParseMultiValue)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6410050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HeaderInfoTable*>(), { "ParseMultiValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HeaderInfoTable.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HeaderInfo* (::System::Net::HeaderInfoTable::*)(::StringW)>(&::System::Net::HeaderInfoTable::get_Item)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x640a50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HeaderInfoTable*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HeaderInfoTable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HeaderInfoTable::*)()>(&::System::Net::HeaderInfoTable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x640ca28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HeaderInfoTable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::HeaderInfoTable::setStaticF_HeaderHashTable(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "HeaderHashTable", ::System::Net::HeaderInfoTable*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Net::HeaderInfoTable::getStaticF_HeaderHashTable() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "HeaderHashTable", ::System::Net::HeaderInfoTable*>();
}
inline void System::Net::HeaderInfoTable::setStaticF_UnknownHeaderInfo(::System::Net::HeaderInfo* value) {
  ::cordl_internals::setStaticField<::System::Net::HeaderInfo*, "UnknownHeaderInfo", ::System::Net::HeaderInfoTable*>(std::forward<::System::Net::HeaderInfo*>(value));
}
inline ::System::Net::HeaderInfo* System::Net::HeaderInfoTable::getStaticF_UnknownHeaderInfo() {
  return ::cordl_internals::getStaticField<::System::Net::HeaderInfo*, "UnknownHeaderInfo", ::System::Net::HeaderInfoTable*>();
}
inline void System::Net::HeaderInfoTable::setStaticF_SingleParser(::System::Net::HeaderParser* value) {
  ::cordl_internals::setStaticField<::System::Net::HeaderParser*, "SingleParser", ::System::Net::HeaderInfoTable*>(std::forward<::System::Net::HeaderParser*>(value));
}
inline ::System::Net::HeaderParser* System::Net::HeaderInfoTable::getStaticF_SingleParser() {
  return ::cordl_internals::getStaticField<::System::Net::HeaderParser*, "SingleParser", ::System::Net::HeaderInfoTable*>();
}
inline void System::Net::HeaderInfoTable::setStaticF_MultiParser(::System::Net::HeaderParser* value) {
  ::cordl_internals::setStaticField<::System::Net::HeaderParser*, "MultiParser", ::System::Net::HeaderInfoTable*>(std::forward<::System::Net::HeaderParser*>(value));
}
inline ::System::Net::HeaderParser* System::Net::HeaderInfoTable::getStaticF_MultiParser() {
  return ::cordl_internals::getStaticField<::System::Net::HeaderParser*, "MultiParser", ::System::Net::HeaderInfoTable*>();
}
inline ::ArrayW<::StringW> System::Net::HeaderInfoTable::ParseSingleValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HeaderInfoTable*>(), { "ParseSingleValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, value);
}
inline ::ArrayW<::StringW> System::Net::HeaderInfoTable::ParseMultiValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HeaderInfoTable*>(), { "ParseMultiValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, value);
}
inline ::System::Net::HeaderInfo* System::Net::HeaderInfoTable::get_Item(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HeaderInfoTable*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HeaderInfo*>(this, ___internal_method, name);
}
inline void System::Net::HeaderInfoTable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HeaderInfoTable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::HeaderInfoTable* System::Net::HeaderInfoTable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HeaderInfoTable*>());
}
// Ctor Parameters []
constexpr ::System::Net::HeaderInfoTable::HeaderInfoTable() {}
