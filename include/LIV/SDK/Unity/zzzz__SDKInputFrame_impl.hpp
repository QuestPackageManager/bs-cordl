#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKInputFrame.hpp"
#include "LIV/SDK/Unity/zzzz__FEATURES_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKClipPlane_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPose_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPriority_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTransform_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKInputFrame.get_empty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKInputFrame (*)()>(&::LIV::SDK::Unity::SDKInputFrame::get_empty)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3abd1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKInputFrame>::get(), "get_empty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKInputFrame.ReleaseControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKInputFrame::*)()>(&::LIV::SDK::Unity::SDKInputFrame::ReleaseControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3ac14a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKInputFrame>::get(), "ReleaseControl",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKInputFrame.ObtainControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKInputFrame::*)()>(&::LIV::SDK::Unity::SDKInputFrame::ObtainControl)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ac14b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKInputFrame>::get(), "ObtainControl",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKInputFrame.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKInputFrame::*)()>(&::LIV::SDK::Unity::SDKInputFrame::ToString)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x3ac2e88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKInputFrame>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKInputFrame>::get(), 3));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKInputFrame LIV::SDK::Unity::SDKInputFrame::get_empty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKInputFrame>::get(), "get_empty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKInputFrame, false>(nullptr, ___internal_method);
}
inline void LIV::SDK::Unity::SDKInputFrame::ReleaseControl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKInputFrame>::get(), "ReleaseControl",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKInputFrame::ObtainControl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKInputFrame>::get(), "ObtainControl",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKInputFrame::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKInputFrame>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "pose", ty: "::LIV::SDK::Unity::SDKPose", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipPlane", ty: "::LIV::SDK::Unity::SDKClipPlane", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "stageTransform", ty: "::LIV::SDK::Unity::SDKTransform", modifiers: "", def_value: Some("{}") }, CppParam { name: "features", ty:
// "::LIV::SDK::Unity::FEATURES", modifiers: "", def_value: Some("{}") }, CppParam { name: "groundClipPlane", ty: "::LIV::SDK::Unity::SDKClipPlane", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "frameid", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "referenceframe", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "priority", ty:
// "::LIV::SDK::Unity::SDKPriority", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKInputFrame::SDKInputFrame(::LIV::SDK::Unity::SDKPose pose, ::LIV::SDK::Unity::SDKClipPlane clipPlane, ::LIV::SDK::Unity::SDKTransform stageTransform,
                                                          ::LIV::SDK::Unity::FEATURES features, ::LIV::SDK::Unity::SDKClipPlane groundClipPlane, uint64_t frameid, uint64_t referenceframe,
                                                          ::LIV::SDK::Unity::SDKPriority priority) noexcept {
  this->pose = pose;
  this->clipPlane = clipPlane;
  this->stageTransform = stageTransform;
  this->features = features;
  this->groundClipPlane = groundClipPlane;
  this->frameid = frameid;
  this->referenceframe = referenceframe;
  this->priority = priority;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKInputFrame::SDKInputFrame() {}
