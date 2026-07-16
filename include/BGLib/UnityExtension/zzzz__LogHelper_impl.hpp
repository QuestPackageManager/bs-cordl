#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/LogHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/UnityExtension/zzzz__LogHelper_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::LogHelper.LogBuildOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::BGLib::UnityExtension::LogHelper::LogBuildOnly)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3326b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::LogHelper*>(), { "LogBuildOnly", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::LogHelper.LogBuildOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::Object*)>(&::BGLib::UnityExtension::LogHelper::LogBuildOnly)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3326bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::LogHelper*>(), { "LogBuildOnly", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::UnityExtension::LogHelper::LogBuildOnly(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::LogHelper*>(), { "LogBuildOnly", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void BGLib::UnityExtension::LogHelper::LogBuildOnly(::StringW message, ::UnityEngine::Object* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::LogHelper*>(), { "LogBuildOnly", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, context);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::LogHelper::LogHelper() {}
