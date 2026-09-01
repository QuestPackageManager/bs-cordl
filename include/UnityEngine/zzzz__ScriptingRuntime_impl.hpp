#pragma once
// IWYU pragma private; include "UnityEngine\ScriptingRuntime.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptingRuntime_def.hpp"
//  Writing Method size for method: ::UnityEngine::ScriptingRuntime.GetAllUserAssemblies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::UnityEngine::ScriptingRuntime::GetAllUserAssemblies)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ae5ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScriptingRuntime*>(), { "GetAllUserAssemblies", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<::StringW> UnityEngine::ScriptingRuntime::GetAllUserAssemblies() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ScriptingRuntime*>(), { "GetAllUserAssemblies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ScriptingRuntime::ScriptingRuntime() {}
