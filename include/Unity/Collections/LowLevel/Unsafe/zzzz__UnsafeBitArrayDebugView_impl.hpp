#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\UnsafeBitArrayDebugView.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeBitArray_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeBitArrayDebugView_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeBitArray_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::*)(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64ceb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView.get_Bits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::get_Bits)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x64ceb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView*>(), { "get_Bits", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray& Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::__cordl_internal_get_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray const& Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::__cordl_internal_get_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
constexpr void Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::__cordl_internal_set_Data(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Data = value;
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::ArrayW<bool> Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::get_Bits() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView*>(), { "get_Bits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(this, ___internal_method);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView*
Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::New_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView*>(data));
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView::UnsafeBitArrayDebugView() {}
