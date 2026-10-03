#pragma once
// IWYU pragma private; include "UnityEngine/Scripting/RequireAttributeUsagesAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Scripting/zzzz__RequireAttributeUsagesAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Scripting::RequireAttributeUsagesAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Scripting::RequireAttributeUsagesAttribute::*)()>(&::UnityEngine::Scripting::RequireAttributeUsagesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f5a304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::RequireAttributeUsagesAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Scripting::RequireAttributeUsagesAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::RequireAttributeUsagesAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Scripting::RequireAttributeUsagesAttribute* UnityEngine::Scripting::RequireAttributeUsagesAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Scripting::RequireAttributeUsagesAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Scripting::RequireAttributeUsagesAttribute::RequireAttributeUsagesAttribute() {}
