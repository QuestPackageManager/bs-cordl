#pragma once
// IWYU pragma private; include "GlobalNamespace/BitMaskUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BitMaskUtil_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BitMaskUtil.NumberOfSetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint64_t)>(&::GlobalNamespace::BitMaskUtil::NumberOfSetBits)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x32610e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskUtil*>(), { "NumberOfSetBits", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskUtil.NumberOfSetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::GlobalNamespace::BitMaskUtil::NumberOfSetBits)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3259074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskUtil*>(), { "NumberOfSetBits", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskUtil.ShiftLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::by_ref<uint64_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::BitMaskUtil::ShiftLeft)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3261114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskUtil*>(), { "ShiftLeft", {}, { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitMaskUtil.ShiftRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::by_ref<uint64_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::BitMaskUtil::ShiftRight)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3261158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskUtil*>(), { "ShiftRight", {}, { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
inline uint32_t GlobalNamespace::BitMaskUtil::NumberOfSetBits(uint64_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskUtil*>(), { "NumberOfSetBits", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, i);
}
inline uint32_t GlobalNamespace::BitMaskUtil::NumberOfSetBits(uint32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskUtil*>(), { "NumberOfSetBits", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, i);
}
inline uint64_t GlobalNamespace::BitMaskUtil::ShiftLeft(::by_ref<uint64_t> value, ::by_ref<int32_t> shift) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskUtil*>(), { "ShiftLeft", {}, { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, shift);
}
inline uint64_t GlobalNamespace::BitMaskUtil::ShiftRight(::by_ref<uint64_t> value, ::by_ref<int32_t> shift) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BitMaskUtil*>(), { "ShiftRight", {}, { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, shift);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitMaskUtil::BitMaskUtil() {}
