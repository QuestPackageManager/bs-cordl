#pragma once
// IWYU pragma private; include "UnityEngine\Internal\ExcludeFromDocsAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Internal/zzzz__ExcludeFromDocsAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Internal::ExcludeFromDocsAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Internal::ExcludeFromDocsAttribute::*)()>(&::UnityEngine::Internal::ExcludeFromDocsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b03aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Internal::ExcludeFromDocsAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Internal::ExcludeFromDocsAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Internal::ExcludeFromDocsAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Internal::ExcludeFromDocsAttribute* UnityEngine::Internal::ExcludeFromDocsAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Internal::ExcludeFromDocsAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Internal::ExcludeFromDocsAttribute::ExcludeFromDocsAttribute() {}
