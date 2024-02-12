#pragma once
#include "System/Text/zzzz__ASCIIEncoding_impl.hpp"
#include "System/Text/zzzz__ASCIIEncoding_ASCIIEncodingSealed_def.hpp"
//  Writing Method size for method: ::System::Text::__ASCIIEncoding__ASCIIEncodingSealed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__ASCIIEncoding__ASCIIEncodingSealed::*)()>(
    &::System::Text::__ASCIIEncoding__ASCIIEncodingSealed::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2656148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__ASCIIEncoding__ASCIIEncodingSealed*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Text::__ASCIIEncoding__ASCIIEncodingSealed* System::Text::__ASCIIEncoding__ASCIIEncodingSealed::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::__ASCIIEncoding__ASCIIEncodingSealed*>());
}
inline void System::Text::__ASCIIEncoding__ASCIIEncodingSealed::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__ASCIIEncoding__ASCIIEncodingSealed*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::__ASCIIEncoding__ASCIIEncodingSealed::__ASCIIEncoding__ASCIIEncodingSealed() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
