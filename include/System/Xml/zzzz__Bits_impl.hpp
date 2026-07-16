#pragma once
// IWYU pragma private; include "System/Xml/Bits.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__Bits_def.hpp"
//  Writing Method size for method: ::System::Xml::Bits.Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::System::Xml::Bits::Count)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x61a6fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Bits*>(), { "Count", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Bits.LeastPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::System::Xml::Bits::LeastPosition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61a7060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Bits*>(), { "LeastPosition", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::Bits::setStaticF_MASK_0101010101010101(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "MASK_0101010101010101", ::System::Xml::Bits*>(std::forward<uint32_t>(value));
}
inline uint32_t System::Xml::Bits::getStaticF_MASK_0101010101010101() {
  return ::cordl_internals::getStaticField<uint32_t, "MASK_0101010101010101", ::System::Xml::Bits*>();
}
inline void System::Xml::Bits::setStaticF_MASK_0011001100110011(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "MASK_0011001100110011", ::System::Xml::Bits*>(std::forward<uint32_t>(value));
}
inline uint32_t System::Xml::Bits::getStaticF_MASK_0011001100110011() {
  return ::cordl_internals::getStaticField<uint32_t, "MASK_0011001100110011", ::System::Xml::Bits*>();
}
inline void System::Xml::Bits::setStaticF_MASK_0000111100001111(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "MASK_0000111100001111", ::System::Xml::Bits*>(std::forward<uint32_t>(value));
}
inline uint32_t System::Xml::Bits::getStaticF_MASK_0000111100001111() {
  return ::cordl_internals::getStaticField<uint32_t, "MASK_0000111100001111", ::System::Xml::Bits*>();
}
inline void System::Xml::Bits::setStaticF_MASK_0000000011111111(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "MASK_0000000011111111", ::System::Xml::Bits*>(std::forward<uint32_t>(value));
}
inline uint32_t System::Xml::Bits::getStaticF_MASK_0000000011111111() {
  return ::cordl_internals::getStaticField<uint32_t, "MASK_0000000011111111", ::System::Xml::Bits*>();
}
inline void System::Xml::Bits::setStaticF_MASK_1111111111111111(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "MASK_1111111111111111", ::System::Xml::Bits*>(std::forward<uint32_t>(value));
}
inline uint32_t System::Xml::Bits::getStaticF_MASK_1111111111111111() {
  return ::cordl_internals::getStaticField<uint32_t, "MASK_1111111111111111", ::System::Xml::Bits*>();
}
inline int32_t System::Xml::Bits::Count(uint32_t num) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Bits*>(), { "Count", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, num);
}
inline int32_t System::Xml::Bits::LeastPosition(uint32_t num) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Bits*>(), { "LeastPosition", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, num);
}
// Ctor Parameters []
constexpr ::System::Xml::Bits::Bits() {}
