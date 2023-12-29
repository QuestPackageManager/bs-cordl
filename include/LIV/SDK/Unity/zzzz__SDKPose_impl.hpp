#pragma once
#include "LIV/SDK/Unity/zzzz__SDKMatrix4x4_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPose_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKMatrix4x4_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPose.get_empty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKPose (*)()>(&::LIV::SDK::Unity::SDKPose::get_empty)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x20af07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPose>::get(), "get_empty",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPose.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKPose::*)()>(&::LIV::SDK::Unity::SDKPose::ToString)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x20b5400;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPose>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPose>::get(), 3));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKPose LIV::SDK::Unity::SDKPose::get_empty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPose>::get(), "get_empty",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKPose, false>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKPose::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPose>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "projectionMatrix", ty: "::LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "localPosition", ty:
// "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "localRotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "verticalFieldOfView", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nearClipPlane", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "farClipPlane", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unused0", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unused1", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKPose::SDKPose(::LIV::SDK::Unity::SDKMatrix4x4 projectionMatrix, ::LIV::SDK::Unity::SDKVector3 localPosition, ::LIV::SDK::Unity::SDKQuaternion localRotation,
                                              float_t verticalFieldOfView, float_t nearClipPlane, float_t farClipPlane, int32_t unused0, int32_t unused1) noexcept {
  this->projectionMatrix = projectionMatrix;
  this->localPosition = localPosition;
  this->localRotation = localRotation;
  this->verticalFieldOfView = verticalFieldOfView;
  this->nearClipPlane = nearClipPlane;
  this->farClipPlane = farClipPlane;
  this->unused0 = unused0;
  this->unused1 = unused1;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKPose::SDKPose() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
