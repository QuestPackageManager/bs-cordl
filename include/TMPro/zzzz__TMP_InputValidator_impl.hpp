#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "TMPro/zzzz__TMP_InputValidator_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_InputValidator.Validate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::TMPro::TMP_InputValidator::*)(ByRef<::StringW>, ByRef<int32_t>, char16_t)>(
    &::TMPro::TMP_InputValidator::Validate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputValidator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputValidator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputValidator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputValidator::*)()>(&::TMPro::TMP_InputValidator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336ea74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputValidator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline char16_t TMPro::TMP_InputValidator::Validate(ByRef<::StringW> text, ByRef<int32_t> pos, char16_t ch) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputValidator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, text, pos, ch);
}
inline ::TMPro::TMP_InputValidator* TMPro::TMP_InputValidator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_InputValidator*>());
}
inline void TMPro::TMP_InputValidator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputValidator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_InputValidator::TMP_InputValidator() {}
