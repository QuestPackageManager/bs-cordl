#pragma once
// IWYU pragma private; include "UnityEngineInternal\GenericStack.hpp"
#include "System/Collections/zzzz__Stack_impl.hpp"
#include "UnityEngineInternal/zzzz__GenericStack_def.hpp"
//  Writing Method size for method: ::UnityEngineInternal::GenericStack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngineInternal::GenericStack::*)()>(&::UnityEngineInternal::GenericStack::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5b938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::GenericStack*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngineInternal::GenericStack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::GenericStack*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngineInternal::GenericStack* UnityEngineInternal::GenericStack::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngineInternal::GenericStack*>());
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::GenericStack::GenericStack() {}
