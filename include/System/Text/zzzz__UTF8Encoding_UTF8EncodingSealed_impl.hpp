#pragma once
// IWYU pragma private; include "System/Text/UTF8Encoding_UTF8EncodingSealed.hpp"
#include "System/Text/zzzz__UTF8Encoding_impl.hpp"
#include "System/Text/zzzz__UTF8Encoding_UTF8EncodingSealed_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed::*)(bool)>(
    &::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c8d2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed.get_Preamble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<uint8_t> (::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed::*)()>(
    &::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed::get_Preamble)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3c8d354;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*>::get(), 7));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UTF8Encoding_UTF8EncodingSealed::_ctor(bool encoderShouldEmitUTF8Identifier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoderShouldEmitUTF8Identifier);
}
inline ::System::ReadOnlySpan_1<uint8_t> GlobalNamespace::UTF8Encoding_UTF8EncodingSealed::get_Preamble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed* GlobalNamespace::UTF8Encoding_UTF8EncodingSealed::New_ctor(bool encoderShouldEmitUTF8Identifier) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*>(encoderShouldEmitUTF8Identifier));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed::UTF8Encoding_UTF8EncodingSealed() {}
