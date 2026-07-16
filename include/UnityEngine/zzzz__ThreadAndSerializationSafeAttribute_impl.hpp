#pragma once
// IWYU pragma private; include "UnityEngine/ThreadAndSerializationSafeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__ThreadAndSerializationSafeAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ThreadAndSerializationSafeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ThreadAndSerializationSafeAttribute::*)()>(&::UnityEngine::ThreadAndSerializationSafeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb28cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ThreadAndSerializationSafeAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ThreadAndSerializationSafeAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ThreadAndSerializationSafeAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ThreadAndSerializationSafeAttribute* UnityEngine::ThreadAndSerializationSafeAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ThreadAndSerializationSafeAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ThreadAndSerializationSafeAttribute::ThreadAndSerializationSafeAttribute() {}
