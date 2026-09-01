#pragma once
// IWYU pragma private; include "Mono\Globalization\Unicode\SortKeyBuffer.hpp"
#include "System/Globalization/zzzz__CompareOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__SortKeyBuffer_def.hpp"
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/Globalization/zzzz__SortKey_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::SortKeyBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::SortKeyBuffer::*)(int32_t)>(&::Mono::Globalization::Unicode::SortKeyBuffer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ab40ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SortKeyBuffer.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::SortKeyBuffer::*)()>(&::Mono::Globalization::Unicode::SortKeyBuffer::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ab8884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SortKeyBuffer.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::SortKeyBuffer::*)(::System::Globalization::CompareOptions, int32_t, ::StringW, bool)>(
    &::Mono::Globalization::Unicode::SortKeyBuffer::Initialize)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5ab40b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(),
                            { "Initialize", {}, { ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SortKeyBuffer.AppendCJKExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::SortKeyBuffer::*)(uint8_t, uint8_t)>(&::Mono::Globalization::Unicode::SortKeyBuffer::AppendCJKExtension)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ab4cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(), { "AppendCJKExtension", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SortKeyBuffer.AppendKana
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::SortKeyBuffer::*)(uint8_t, uint8_t, uint8_t, uint8_t, bool, uint8_t, bool, bool)>(
    &::Mono::Globalization::Unicode::SortKeyBuffer::AppendKana)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ab4e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(),
                                                             { "AppendKana",
                                                               {},
                                                               { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SortKeyBuffer.AppendNormal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::SortKeyBuffer::*)(uint8_t, uint8_t, uint8_t, uint8_t)>(
    &::Mono::Globalization::Unicode::SortKeyBuffer::AppendNormal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5ab4bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(),
                                                             { "AppendNormal", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SortKeyBuffer.AppendLevel5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::SortKeyBuffer::*)(uint8_t, uint8_t)>(&::Mono::Globalization::Unicode::SortKeyBuffer::AppendLevel5)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ab8964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(), { "AppendLevel5", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SortKeyBuffer.AppendBufferPrimitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Globalization::Unicode::SortKeyBuffer::*)(uint8_t, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>)>(
    &::Mono::Globalization::Unicode::SortKeyBuffer::AppendBufferPrimitive)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ab8898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(),
                                                { "AppendBufferPrimitive", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SortKeyBuffer.GetResultAndReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::SortKey* (::Mono::Globalization::Unicode::SortKeyBuffer::*)()>(
    &::Mono::Globalization::Unicode::SortKeyBuffer::GetResultAndReset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ab45b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(), { "GetResultAndReset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SortKeyBuffer.GetOptimizedLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Globalization::Unicode::SortKeyBuffer::*)(::ArrayW<uint8_t>, int32_t, uint8_t)>(
    &::Mono::Globalization::Unicode::SortKeyBuffer::GetOptimizedLength)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ab8e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(),
                                                             { "GetOptimizedLength", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::SortKeyBuffer.GetResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::SortKey* (::Mono::Globalization::Unicode::SortKeyBuffer::*)()>(
    &::Mono::Globalization::Unicode::SortKeyBuffer::GetResult)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x5ab89f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(), { "GetResult", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l1b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l1b;
}
constexpr ::ArrayW<uint8_t> const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l1b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l1b;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_l1b(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l1b = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l2b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l2b;
}
constexpr ::ArrayW<uint8_t> const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l2b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l2b;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_l2b(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l2b = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l3b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l3b;
}
constexpr ::ArrayW<uint8_t> const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l3b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l3b;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_l3b(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l3b = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l4sb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l4sb;
}
constexpr ::ArrayW<uint8_t> const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l4sb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l4sb;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_l4sb(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l4sb = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l4tb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l4tb;
}
constexpr ::ArrayW<uint8_t> const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l4tb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l4tb;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_l4tb(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l4tb = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l4kb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l4kb;
}
constexpr ::ArrayW<uint8_t> const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l4kb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l4kb;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_l4kb(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l4kb = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l4wb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l4wb;
}
constexpr ::ArrayW<uint8_t> const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l4wb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l4wb;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_l4wb(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l4wb = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l5b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l5b;
}
constexpr ::ArrayW<uint8_t> const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l5b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l5b;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_l5b(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l5b = value;
}
constexpr ::StringW& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::StringW const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_source(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr int32_t& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l1;
}
constexpr int32_t const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l1;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_l1(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l1 = value;
}
constexpr int32_t& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l2;
}
constexpr int32_t const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l2;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_l2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l2 = value;
}
constexpr int32_t& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l3;
}
constexpr int32_t const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l3;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_l3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l3 = value;
}
constexpr int32_t& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l4s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l4s;
}
constexpr int32_t const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l4s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l4s;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_l4s(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l4s = value;
}
constexpr int32_t& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l4t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l4t;
}
constexpr int32_t const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l4t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l4t;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_l4t(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l4t = value;
}
constexpr int32_t& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l4k() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l4k;
}
constexpr int32_t const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l4k() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l4k;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_l4k(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l4k = value;
}
constexpr int32_t& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l4w() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l4w;
}
constexpr int32_t const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l4w() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l4w;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_l4w(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l4w = value;
}
constexpr int32_t& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l5;
}
constexpr int32_t const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_l5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l5;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_l5(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l5 = value;
}
constexpr int32_t& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_lcid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lcid;
}
constexpr int32_t const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_lcid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lcid;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_lcid(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lcid = value;
}
constexpr ::System::Globalization::CompareOptions& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___options;
}
constexpr ::System::Globalization::CompareOptions const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___options;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_options(::System::Globalization::CompareOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___options = value;
}
constexpr bool& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_processLevel2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processLevel2;
}
constexpr bool const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_processLevel2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processLevel2;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_processLevel2(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processLevel2 = value;
}
constexpr bool& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_frenchSort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frenchSort;
}
constexpr bool const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_frenchSort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frenchSort;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_frenchSort(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frenchSort = value;
}
constexpr bool& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_frenchSorted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frenchSorted;
}
constexpr bool const& Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_get_frenchSorted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frenchSorted;
}
constexpr void Mono::Globalization::Unicode::SortKeyBuffer::__cordl_internal_set_frenchSorted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frenchSorted = value;
}
inline void Mono::Globalization::Unicode::SortKeyBuffer::_ctor(int32_t lcid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lcid);
}
inline void Mono::Globalization::Unicode::SortKeyBuffer::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Globalization::Unicode::SortKeyBuffer::Initialize(::System::Globalization::CompareOptions options, int32_t lcid, ::StringW s, bool frenchSort) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(),
                          { "Initialize", {}, { ::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, lcid, s, frenchSort);
}
inline void Mono::Globalization::Unicode::SortKeyBuffer::AppendCJKExtension(uint8_t lv1msb, uint8_t lv1lsb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(), { "AppendCJKExtension", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lv1msb, lv1lsb);
}
inline void Mono::Globalization::Unicode::SortKeyBuffer::AppendKana(uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3, bool isSmallKana, uint8_t markType, bool isKatakana, bool isHalfWidth) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(),
                                                                                         { "AppendKana",
                                                                                           {},
                                                                                           { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category, lv1, lv2, lv3, isSmallKana, markType, isKatakana, isHalfWidth);
}
inline void Mono::Globalization::Unicode::SortKeyBuffer::AppendNormal(uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(),
                                                           { "AppendNormal", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category, lv1, lv2, lv3);
}
inline void Mono::Globalization::Unicode::SortKeyBuffer::AppendLevel5(uint8_t category, uint8_t lv1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(), { "AppendLevel5", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category, lv1);
}
inline void Mono::Globalization::Unicode::SortKeyBuffer::AppendBufferPrimitive(uint8_t value, ::by_ref<::ArrayW<uint8_t>> buf, ::by_ref<int32_t> bidx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(),
                                              { "AppendBufferPrimitive", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, buf, bidx);
}
inline ::System::Globalization::SortKey* Mono::Globalization::Unicode::SortKeyBuffer::GetResultAndReset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(), { "GetResultAndReset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::SortKey*>(this, ___internal_method);
}
inline int32_t Mono::Globalization::Unicode::SortKeyBuffer::GetOptimizedLength(::ArrayW<uint8_t> data, int32_t len, uint8_t defaultValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(),
                                                           { "GetOptimizedLength", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, len, defaultValue);
}
inline ::System::Globalization::SortKey* Mono::Globalization::Unicode::SortKeyBuffer::GetResult() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::SortKeyBuffer*>(), { "GetResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::SortKey*>(this, ___internal_method);
}
inline ::Mono::Globalization::Unicode::SortKeyBuffer* Mono::Globalization::Unicode::SortKeyBuffer::New_ctor(int32_t lcid) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Globalization::Unicode::SortKeyBuffer*>(lcid));
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::SortKeyBuffer::SortKeyBuffer() {}
