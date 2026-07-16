#pragma once
// IWYU pragma private; include "UnityEngine/UnityString.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__UnityString_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::UnityString.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::UnityString::Format)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6bb2958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnityString*>(), { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UnityString::Format(::StringW fmt, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UnityString*>(), { "Format", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, fmt, args);
}
// Ctor Parameters []
constexpr ::UnityEngine::UnityString::UnityString() {}
