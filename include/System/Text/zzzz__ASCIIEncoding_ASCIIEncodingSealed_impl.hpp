#pragma once
// IWYU pragma private; include "System/Text/ASCIIEncoding_ASCIIEncodingSealed.hpp"
#include "System/Text/zzzz__ASCIIEncoding_impl.hpp"
#include "System/Text/zzzz__ASCIIEncoding_ASCIIEncodingSealed_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed::*)()>(&::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cc8a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed* GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed::ASCIIEncoding_ASCIIEncodingSealed() {}
