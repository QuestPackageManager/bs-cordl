#pragma once
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTransform_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKTransform.get_empty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKTransform (*)()>(&::LIV::SDK::Unity::SDKTransform::get_empty)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20b4330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTransform>::get(), "get_empty",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKTransform.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKTransform::*)()>(&::LIV::SDK::Unity::SDKTransform::ToString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x20b4d88;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTransform>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTransform>::get(), 3));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKTransform LIV::SDK::Unity::SDKTransform::get_empty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTransform>::get(), "get_empty",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKTransform, false>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKTransform::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTransform>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "localPosition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "localRotation", ty:
// "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "localScale", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKTransform::SDKTransform(::LIV::SDK::Unity::SDKVector3 localPosition, ::LIV::SDK::Unity::SDKQuaternion localRotation,
                                                        ::LIV::SDK::Unity::SDKVector3 localScale) noexcept {
  this->localPosition = localPosition;
  this->localRotation = localRotation;
  this->localScale = localScale;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKTransform::SDKTransform() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
