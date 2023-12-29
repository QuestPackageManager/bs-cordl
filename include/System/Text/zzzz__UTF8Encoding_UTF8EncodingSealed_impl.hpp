#pragma once
#include "System/Text/zzzz__UTF8Encoding_impl.hpp"
#include "System/Text/zzzz__UTF8Encoding_UTF8EncodingSealed_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::Text::__UTF8Encoding__UTF8EncodingSealed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__UTF8Encoding__UTF8EncodingSealed::*)(bool)>(
    &::System::Text::__UTF8Encoding__UTF8EncodingSealed::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22eb914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF8Encoding__UTF8EncodingSealed*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UTF8Encoding__UTF8EncodingSealed.get_Preamble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<uint8_t> (::System::Text::__UTF8Encoding__UTF8EncodingSealed::*)()>(
    &::System::Text::__UTF8Encoding__UTF8EncodingSealed::get_Preamble)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22eb98c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF8Encoding__UTF8EncodingSealed*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF8Encoding__UTF8EncodingSealed*>::get(), 7));
    return ___internal_method;
  }
};
inline ::System::Text::__UTF8Encoding__UTF8EncodingSealed* System::Text::__UTF8Encoding__UTF8EncodingSealed::New_ctor(bool encoderShouldEmitUTF8Identifier) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Text::__UTF8Encoding__UTF8EncodingSealed*>(encoderShouldEmitUTF8Identifier));
}
inline void System::Text::__UTF8Encoding__UTF8EncodingSealed::_ctor(bool encoderShouldEmitUTF8Identifier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF8Encoding__UTF8EncodingSealed*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoderShouldEmitUTF8Identifier);
}
inline ::System::ReadOnlySpan_1<uint8_t> System::Text::__UTF8Encoding__UTF8EncodingSealed::get_Preamble() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF8Encoding__UTF8EncodingSealed*>::get(),
                                                                             "get_Preamble", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::__UTF8Encoding__UTF8EncodingSealed::__UTF8Encoding__UTF8EncodingSealed() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
