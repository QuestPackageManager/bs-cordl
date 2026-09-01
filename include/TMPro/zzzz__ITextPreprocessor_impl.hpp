#pragma once
// IWYU pragma private; include "TMPro\ITextPreprocessor.hpp"
#include "TMPro/zzzz__ITextPreprocessor_def.hpp"
//  Writing Method size for method: ::TMPro::ITextPreprocessor.PreprocessText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::TMPro::ITextPreprocessor::*)(::StringW)>(&::TMPro::ITextPreprocessor::PreprocessText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::ITextPreprocessor*>(), { ::i2c::class_of<::TMPro::ITextPreprocessor*>(), 0 }));
    return ___internal_method;
  }
};
inline ::StringW TMPro::ITextPreprocessor::PreprocessText(::StringW text) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::ITextPreprocessor*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, text);
}
