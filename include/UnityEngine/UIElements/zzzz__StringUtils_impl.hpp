#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StringUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StringUtils_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StringUtils.StartsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::UnityEngine::UIElements::StringUtils::StartsWith)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x7279550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StringUtils*>(), { "StartsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::StringUtils::StartsWith(::StringW originalString, ::StringW pattern) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StringUtils*>(), { "StartsWith", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, originalString, pattern);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StringUtils::StringUtils() {}
