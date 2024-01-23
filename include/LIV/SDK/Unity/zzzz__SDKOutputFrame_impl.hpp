#pragma once
#include "LIV/SDK/Unity/zzzz__RENDERING_PIPELINE_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTrackedSpace_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKOutputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__RENDERING_PIPELINE_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTrackedSpace_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKOutputFrame.get_empty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKOutputFrame (*)()>(&::LIV::SDK::Unity::SDKOutputFrame::get_empty)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x220ff54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKOutputFrame>::get(), "get_empty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKOutputFrame.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKOutputFrame::*)()>(&::LIV::SDK::Unity::SDKOutputFrame::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2215614;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKOutputFrame>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKOutputFrame>::get(), 3));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKOutputFrame LIV::SDK::Unity::SDKOutputFrame::get_empty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKOutputFrame>::get(), "get_empty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKOutputFrame, false>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKOutputFrame::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKOutputFrame>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "renderingPipeline", ty: "::LIV::SDK::Unity::RENDERING_PIPELINE", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackedSpace", ty:
// "::LIV::SDK::Unity::SDKTrackedSpace", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKOutputFrame::SDKOutputFrame(::LIV::SDK::Unity::RENDERING_PIPELINE renderingPipeline, ::LIV::SDK::Unity::SDKTrackedSpace trackedSpace) noexcept {
  this->renderingPipeline = renderingPipeline;
  this->trackedSpace = trackedSpace;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKOutputFrame::SDKOutputFrame() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
