#pragma once
// IWYU pragma private; include "GlobalNamespace/AlphabetScrollInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AlphabetScrollInfo_def.hpp"
#include "GlobalNamespace/zzzz__AlphabetScrollInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AlphabetScrollInfo_Data._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlphabetScrollInfo_Data::*)(char16_t, int32_t)>(&::GlobalNamespace::AlphabetScrollInfo_Data::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58757e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphabetScrollInfo_Data*>(), { ".ctor", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr char16_t& GlobalNamespace::AlphabetScrollInfo_Data::__cordl_internal_get_character() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___character;
}
constexpr char16_t const& GlobalNamespace::AlphabetScrollInfo_Data::__cordl_internal_get_character() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___character;
}
constexpr void GlobalNamespace::AlphabetScrollInfo_Data::__cordl_internal_set_character(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___character = value;
}
constexpr int32_t& GlobalNamespace::AlphabetScrollInfo_Data::__cordl_internal_get_cellIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellIdx;
}
constexpr int32_t const& GlobalNamespace::AlphabetScrollInfo_Data::__cordl_internal_get_cellIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellIdx;
}
constexpr void GlobalNamespace::AlphabetScrollInfo_Data::__cordl_internal_set_cellIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cellIdx = value;
}
inline void GlobalNamespace::AlphabetScrollInfo_Data::_ctor(char16_t character, int32_t cellIdx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphabetScrollInfo_Data*>(), { ".ctor", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, character, cellIdx);
}
inline ::GlobalNamespace::AlphabetScrollInfo_Data* GlobalNamespace::AlphabetScrollInfo_Data::New_ctor(char16_t character, int32_t cellIdx) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AlphabetScrollInfo_Data*>(character, cellIdx));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlphabetScrollInfo_Data::AlphabetScrollInfo_Data() {}
//  Writing Method size for method: ::GlobalNamespace::AlphabetScrollInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlphabetScrollInfo::*)()>(&::GlobalNamespace::AlphabetScrollInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58757e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphabetScrollInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AlphabetScrollInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphabetScrollInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AlphabetScrollInfo* GlobalNamespace::AlphabetScrollInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AlphabetScrollInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlphabetScrollInfo::AlphabetScrollInfo() {}
