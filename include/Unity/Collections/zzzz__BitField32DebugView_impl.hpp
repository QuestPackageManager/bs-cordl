#pragma once
// IWYU pragma private; include "Unity/Collections/BitField32DebugView.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__BitField32_impl.hpp"
#include "Unity/Collections/zzzz__BitField32DebugView_def.hpp"
#include "Unity/Collections/zzzz__BitField32_def.hpp"
//  Writing Method size for method: ::Unity::Collections::BitField32DebugView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::BitField32DebugView::*)(::Unity::Collections::BitField32)>(&::Unity::Collections::BitField32DebugView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a62f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::BitField32DebugView*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::BitField32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::BitField32DebugView.get_Bits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (::Unity::Collections::BitField32DebugView::*)()>(&::Unity::Collections::BitField32DebugView::get_Bits)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x64a6300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::BitField32DebugView*>(), { "get_Bits", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::BitField32& Unity::Collections::BitField32DebugView::__cordl_internal_get_BitField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BitField;
}
constexpr ::Unity::Collections::BitField32 const& Unity::Collections::BitField32DebugView::__cordl_internal_get_BitField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BitField;
}
constexpr void Unity::Collections::BitField32DebugView::__cordl_internal_set_BitField(::Unity::Collections::BitField32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BitField = value;
}
inline void Unity::Collections::BitField32DebugView::_ctor(::Unity::Collections::BitField32 bitfield) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::BitField32DebugView*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::BitField32>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bitfield);
}
inline ::ArrayW<bool> Unity::Collections::BitField32DebugView::get_Bits() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::BitField32DebugView*>(), { "get_Bits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(this, ___internal_method);
}
inline ::Unity::Collections::BitField32DebugView* Unity::Collections::BitField32DebugView::New_ctor(::Unity::Collections::BitField32 bitfield) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::BitField32DebugView*>(bitfield));
}
// Ctor Parameters []
constexpr ::Unity::Collections::BitField32DebugView::BitField32DebugView() {}
