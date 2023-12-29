#pragma once
#include "LIV/SDK/Unity/zzzz__SDKResolution_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKResolution.get_zero
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKResolution (*)()>(&::LIV::SDK::Unity::SDKResolution::get_zero)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20aec6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKResolution>::get(), "get_zero",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKResolution.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKResolution::*)()>(&::LIV::SDK::Unity::SDKResolution::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x20b2ebc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKResolution>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKResolution>::get(), 3));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKResolution LIV::SDK::Unity::SDKResolution::get_zero() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKResolution>::get(), "get_zero",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKResolution, false>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKResolution::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKResolution>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKResolution::SDKResolution(int32_t width, int32_t height) noexcept {
  this->width = width;
  this->height = height;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKResolution::SDKResolution() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
