#pragma once
// IWYU pragma private; include "GlobalNamespace\MurmurHash.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MurmurHash_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MurmurHash.MurmurHash2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW)>(&::GlobalNamespace::MurmurHash::MurmurHash2)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x377e970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MurmurHash*>(), { "MurmurHash2", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline uint32_t GlobalNamespace::MurmurHash::MurmurHash2(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MurmurHash*>(), { "MurmurHash2", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, key);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MurmurHash::MurmurHash() {}
