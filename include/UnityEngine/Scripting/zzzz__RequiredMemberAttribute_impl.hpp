#pragma once
// IWYU pragma private; include "UnityEngine/Scripting/RequiredMemberAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Scripting/zzzz__RequiredMemberAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Scripting::RequiredMemberAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Scripting::RequiredMemberAttribute::*)()>(&::UnityEngine::Scripting::RequiredMemberAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6afbd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::RequiredMemberAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Scripting::RequiredMemberAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::RequiredMemberAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Scripting::RequiredMemberAttribute* UnityEngine::Scripting::RequiredMemberAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Scripting::RequiredMemberAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Scripting::RequiredMemberAttribute::RequiredMemberAttribute() {}
