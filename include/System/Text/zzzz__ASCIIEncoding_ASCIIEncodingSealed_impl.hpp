#pragma once
#include "System/Text/zzzz__ASCIIEncoding_impl.hpp"
#include "System/Text/zzzz__ASCIIEncoding_ASCIIEncodingSealed_def.hpp"
//  Writing Method size for method: ::System::Text::__ASCIIEncoding__ASCIIEncodingSealed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__ASCIIEncoding__ASCIIEncodingSealed::*)()>(
    &::System::Text::__ASCIIEncoding__ASCIIEncodingSealed::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x24d5f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__ASCIIEncoding__ASCIIEncodingSealed*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Text::__ASCIIEncoding__ASCIIEncodingSealed* System::Text::__ASCIIEncoding__ASCIIEncodingSealed::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Text::__ASCIIEncoding__ASCIIEncodingSealed*>());
}
inline void System::Text::__ASCIIEncoding__ASCIIEncodingSealed::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__ASCIIEncoding__ASCIIEncodingSealed*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::__ASCIIEncoding__ASCIIEncodingSealed::__ASCIIEncoding__ASCIIEncodingSealed() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
