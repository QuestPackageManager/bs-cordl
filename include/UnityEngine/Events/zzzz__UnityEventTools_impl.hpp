#pragma once
// IWYU pragma private; include "UnityEngine\Events\UnityEventTools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEventTools_def.hpp"
//  Writing Method size for method: ::UnityEngine::Events::UnityEventTools.TidyAssemblyTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::Events::UnityEventTools::TidyAssemblyTypeName)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6afc860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEventTools*>(), { "TidyAssemblyTypeName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Events::UnityEventTools::TidyAssemblyTypeName(::StringW assemblyTypeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEventTools*>(), { "TidyAssemblyTypeName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, assemblyTypeName);
}
// Ctor Parameters []
constexpr ::UnityEngine::Events::UnityEventTools::UnityEventTools() {}
