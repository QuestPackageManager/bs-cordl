#pragma once
// IWYU pragma private; include "BeatSaber/Init/BSRuntimePlatform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Init/zzzz__BSRuntimePlatform_def.hpp"
#include "BeatSaber/Init/zzzz__RuntimePlatformType_def.hpp"
//  Writing Method size for method: ::BeatSaber::Init::BSRuntimePlatform.GetPlatformType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Init::RuntimePlatformType (*)()>(&::BeatSaber::Init::BSRuntimePlatform::GetPlatformType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3298760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::BSRuntimePlatform*>(), { "GetPlatformType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::BSRuntimePlatform.get_IsSteam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::BeatSaber::Init::BSRuntimePlatform::get_IsSteam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3298768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::BSRuntimePlatform*>(), { "get_IsSteam", {}, {} })));
    return ___internal_method;
  }
};
inline ::BeatSaber::Init::RuntimePlatformType BeatSaber::Init::BSRuntimePlatform::GetPlatformType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::BSRuntimePlatform*>(), { "GetPlatformType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::RuntimePlatformType>(nullptr, ___internal_method);
}
inline bool BeatSaber::Init::BSRuntimePlatform::get_IsSteam() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Init::BSRuntimePlatform*>(), { "get_IsSteam", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::BSRuntimePlatform::BSRuntimePlatform() {}
