#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKTrackedSpace.hpp"
#include "LIV/SDK/Unity/zzzz__SDKMatrix4x4_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTrackedSpace_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKTrackedSpace.get_empty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKTrackedSpace (*)()>(&::LIV::SDK::Unity::SDKTrackedSpace::get_empty)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3ad5d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTrackedSpace>::get(), "get_empty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKTrackedSpace.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKTrackedSpace::*)()>(&::LIV::SDK::Unity::SDKTrackedSpace::ToString)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x3ad5e70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTrackedSpace>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTrackedSpace>::get(), 3));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKTrackedSpace LIV::SDK::Unity::SDKTrackedSpace::get_empty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTrackedSpace>::get(), "get_empty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKTrackedSpace, false>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKTrackedSpace::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKTrackedSpace>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "trackedSpaceWorldPosition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackedSpaceWorldRotation", ty:
// "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackedSpaceLocalScale", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") },
// CppParam { name: "trackedSpaceLocalToWorldMatrix", ty: "::LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackedSpaceWorldToLocalMatrix", ty:
// "::LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKTrackedSpace::SDKTrackedSpace(::LIV::SDK::Unity::SDKVector3 trackedSpaceWorldPosition, ::LIV::SDK::Unity::SDKQuaternion trackedSpaceWorldRotation,
                                                              ::LIV::SDK::Unity::SDKVector3 trackedSpaceLocalScale, ::LIV::SDK::Unity::SDKMatrix4x4 trackedSpaceLocalToWorldMatrix,
                                                              ::LIV::SDK::Unity::SDKMatrix4x4 trackedSpaceWorldToLocalMatrix) noexcept {
  this->trackedSpaceWorldPosition = trackedSpaceWorldPosition;
  this->trackedSpaceWorldRotation = trackedSpaceWorldRotation;
  this->trackedSpaceLocalScale = trackedSpaceLocalScale;
  this->trackedSpaceLocalToWorldMatrix = trackedSpaceLocalToWorldMatrix;
  this->trackedSpaceWorldToLocalMatrix = trackedSpaceWorldToLocalMatrix;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKTrackedSpace::SDKTrackedSpace() {}
