#pragma once
// IWYU pragma private; include "GlobalNamespace/RomanNumerals.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RomanNumerals_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RomanNumerals.ToRomanNumeralString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::GlobalNamespace::RomanNumerals::ToRomanNumeralString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x576cc08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RomanNumerals*>::get(), "ToRomanNumeralString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::RomanNumerals::ToRomanNumeralString(int32_t input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RomanNumerals*>::get(), "ToRomanNumeralString",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, input);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RomanNumerals::RomanNumerals() {}
