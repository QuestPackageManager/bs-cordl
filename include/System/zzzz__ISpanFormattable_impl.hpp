#pragma once
// IWYU pragma private; include "System\ISpanFormattable.hpp"
#include "System/zzzz__ISpanFormattable_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::ISpanFormattable.TryFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ISpanFormattable::*)(::System::Span_1<char16_t>, ::by_ref<int32_t>, ::System::ReadOnlySpan_1<char16_t>,
                                                                                            ::System::IFormatProvider*)>(&::System::ISpanFormattable::TryFormat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ISpanFormattable*>(), { ::i2c::class_of<::System::ISpanFormattable*>(), 0 }));
    return ___internal_method;
  }
};
inline bool System::ISpanFormattable::TryFormat(::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format,
                                                ::System::IFormatProvider* provider) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ISpanFormattable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, charsWritten, format, provider);
}
