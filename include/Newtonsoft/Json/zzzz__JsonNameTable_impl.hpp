#pragma once
// IWYU pragma private; include "Newtonsoft\Json\JsonNameTable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonNameTable_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonNameTable.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::JsonNameTable::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::Newtonsoft::Json::JsonNameTable::Get)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonNameTable*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonNameTable*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonNameTable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonNameTable::*)()>(&::Newtonsoft::Json::JsonNameTable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cd2b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonNameTable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Newtonsoft::Json::JsonNameTable::Get(::ArrayW<char16_t> key, int32_t start, int32_t length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonNameTable*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key, start, length);
}
inline void Newtonsoft::Json::JsonNameTable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonNameTable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonNameTable* Newtonsoft::Json::JsonNameTable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonNameTable*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonNameTable::JsonNameTable() {}
