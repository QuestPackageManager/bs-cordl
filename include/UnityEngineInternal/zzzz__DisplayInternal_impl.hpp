#pragma once
// IWYU pragma private; include "UnityEngineInternal/DisplayInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngineInternal/zzzz__DisplayInternal_def.hpp"
//  Writing Method size for method: ::UnityEngineInternal::DisplayInternal.PrimaryDisplayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngineInternal::DisplayInternal::PrimaryDisplayIndex)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ead22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::DisplayInternal*>(), { "PrimaryDisplayIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::DisplayInternal.IsASecondaryDisplayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngineInternal::DisplayInternal::IsASecondaryDisplayIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6ead254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::DisplayInternal*>(), { "IsASecondaryDisplayIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngineInternal::DisplayInternal::PrimaryDisplayIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::DisplayInternal*>(), { "PrimaryDisplayIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool UnityEngineInternal::DisplayInternal::IsASecondaryDisplayIndex(int32_t displayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::DisplayInternal*>(), { "IsASecondaryDisplayIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, displayIndex);
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::DisplayInternal::DisplayInternal() {}
