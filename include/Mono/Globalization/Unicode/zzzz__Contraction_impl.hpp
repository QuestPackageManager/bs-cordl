#pragma once
// IWYU pragma private; include "Mono\Globalization\Unicode\Contraction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__Contraction_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::Contraction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::Contraction::*)(int32_t, ::ArrayW<char16_t>, ::StringW, ::ArrayW<uint8_t>)>(
    &::Mono::Globalization::Unicode::Contraction::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ab0794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::Contraction*>(),
                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Mono::Globalization::Unicode::Contraction::__cordl_internal_get_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Index;
}
constexpr int32_t const& Mono::Globalization::Unicode::Contraction::__cordl_internal_get_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Index;
}
constexpr void Mono::Globalization::Unicode::Contraction::__cordl_internal_set_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Index = value;
}
constexpr ::ArrayW<char16_t>& Mono::Globalization::Unicode::Contraction::__cordl_internal_get_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Source;
}
constexpr ::ArrayW<char16_t> const& Mono::Globalization::Unicode::Contraction::__cordl_internal_get_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Source;
}
constexpr void Mono::Globalization::Unicode::Contraction::__cordl_internal_set_Source(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Source = value;
}
constexpr ::StringW& Mono::Globalization::Unicode::Contraction::__cordl_internal_get_Replacement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Replacement;
}
constexpr ::StringW const& Mono::Globalization::Unicode::Contraction::__cordl_internal_get_Replacement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Replacement;
}
constexpr void Mono::Globalization::Unicode::Contraction::__cordl_internal_set_Replacement(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Replacement = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Globalization::Unicode::Contraction::__cordl_internal_get_SortKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SortKey;
}
constexpr ::ArrayW<uint8_t> const& Mono::Globalization::Unicode::Contraction::__cordl_internal_get_SortKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SortKey;
}
constexpr void Mono::Globalization::Unicode::Contraction::__cordl_internal_set_SortKey(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SortKey = value;
}
inline void Mono::Globalization::Unicode::Contraction::_ctor(int32_t index, ::ArrayW<char16_t> source, ::StringW replacement, ::ArrayW<uint8_t> sortkey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::Contraction*>(),
                                              { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, source, replacement, sortkey);
}
inline ::Mono::Globalization::Unicode::Contraction* Mono::Globalization::Unicode::Contraction::New_ctor(int32_t index, ::ArrayW<char16_t> source, ::StringW replacement, ::ArrayW<uint8_t> sortkey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Globalization::Unicode::Contraction*>(index, source, replacement, sortkey));
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::Contraction::Contraction() {}
