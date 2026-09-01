#pragma once
// IWYU pragma private; include "UnityEngine\Scripting\AlwaysLinkAssemblyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Scripting/zzzz__AlwaysLinkAssemblyAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute::*)()>(&::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6afeff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Scripting::AlwaysLinkAssemblyAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute* UnityEngine::Scripting::AlwaysLinkAssemblyAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute::AlwaysLinkAssemblyAttribute() {}
