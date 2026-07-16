#pragma once
// IWYU pragma private; include "Unity/Jobs/DOTSCompilerGeneratedAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Jobs/zzzz__DOTSCompilerGeneratedAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::DOTSCompilerGeneratedAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Jobs::DOTSCompilerGeneratedAttribute::*)()>(&::Unity::Jobs::DOTSCompilerGeneratedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a2318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::DOTSCompilerGeneratedAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Jobs::DOTSCompilerGeneratedAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::DOTSCompilerGeneratedAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Jobs::DOTSCompilerGeneratedAttribute* Unity::Jobs::DOTSCompilerGeneratedAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Jobs::DOTSCompilerGeneratedAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Jobs::DOTSCompilerGeneratedAttribute::DOTSCompilerGeneratedAttribute() {}
