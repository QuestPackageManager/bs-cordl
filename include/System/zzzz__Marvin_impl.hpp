#pragma once
// IWYU pragma private; include "System/Marvin.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Marvin_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::Marvin.ComputeHash32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<uint8_t>, uint64_t)>(&::System::Marvin::ComputeHash32)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5c46e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Marvin*>(), { "ComputeHash32", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Marvin.ComputeHash32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<uint8_t>, int32_t, uint64_t)>(&::System::Marvin::ComputeHash32)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x5c46f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Marvin*>(), { "ComputeHash32", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Marvin.Block
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::System::Marvin::Block)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c47370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Marvin*>(), { "Block", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Marvin._rotl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t)>(&::System::Marvin::_rotl)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c473fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Marvin*>(), { "_rotl", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Marvin.get_DefaultSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)()>(&::System::Marvin::get_DefaultSeed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c47408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Marvin*>(), { "get_DefaultSeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Marvin.GenerateSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)()>(&::System::Marvin::GenerateSeed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c47464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Marvin*>(), { "GenerateSeed", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Marvin::setStaticF__DefaultSeed_k__BackingField(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "<DefaultSeed>k__BackingField", ::System::Marvin*>(std::forward<uint64_t>(value));
}
inline uint64_t System::Marvin::getStaticF__DefaultSeed_k__BackingField() {
  return ::cordl_internals::getStaticField<uint64_t, "<DefaultSeed>k__BackingField", ::System::Marvin*>();
}
inline int32_t System::Marvin::ComputeHash32(::System::ReadOnlySpan_1<uint8_t> data, uint64_t seed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Marvin*>(), { "ComputeHash32", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, seed);
}
inline int32_t System::Marvin::ComputeHash32(::by_ref<uint8_t> data, int32_t count, uint64_t seed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Marvin*>(), { "ComputeHash32", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, count, seed);
}
inline void System::Marvin::Block(::by_ref<uint32_t> rp0, ::by_ref<uint32_t> rp1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Marvin*>(), { "Block", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rp0, rp1);
}
inline uint32_t System::Marvin::_rotl(uint32_t value, int32_t shift) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Marvin*>(), { "_rotl", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value, shift);
}
inline uint64_t System::Marvin::get_DefaultSeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Marvin*>(), { "get_DefaultSeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method);
}
inline uint64_t System::Marvin::GenerateSeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Marvin*>(), { "GenerateSeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Marvin::Marvin() {}
