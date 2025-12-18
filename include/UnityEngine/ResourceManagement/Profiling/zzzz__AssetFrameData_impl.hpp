#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Profiling/AssetFrameData.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__ContentStatus_impl.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__AssetFrameData_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::AssetFrameData.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::Profiling::AssetFrameData::*)(::System::Object*)>(
    &::UnityEngine::ResourceManagement::Profiling::AssetFrameData::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x676c07c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Profiling::AssetFrameData>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Profiling::AssetFrameData>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::AssetFrameData.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ResourceManagement::Profiling::AssetFrameData::*)()>(
    &::UnityEngine::ResourceManagement::Profiling::AssetFrameData::GetHashCode)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x676c108;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Profiling::AssetFrameData>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Profiling::AssetFrameData>::get(), 2));
    return ___internal_method;
  }
};
inline bool UnityEngine::ResourceManagement::Profiling::AssetFrameData::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Profiling::AssetFrameData>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::ResourceManagement::Profiling::AssetFrameData::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Profiling::AssetFrameData>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "AssetCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BundleCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "ReferenceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PercentComplete", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Status", ty: "::UnityEngine::ResourceManagement::Profiling::ContentStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Profiling::AssetFrameData::AssetFrameData(int32_t AssetCode, int32_t BundleCode, int32_t ReferenceCount, float_t PercentComplete,
                                                                                       ::UnityEngine::ResourceManagement::Profiling::ContentStatus Status) noexcept {
  this->AssetCode = AssetCode;
  this->BundleCode = BundleCode;
  this->ReferenceCount = ReferenceCount;
  this->PercentComplete = PercentComplete;
  this->Status = Status;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Profiling::AssetFrameData::AssetFrameData() {}
