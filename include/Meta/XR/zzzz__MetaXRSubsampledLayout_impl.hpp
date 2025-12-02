#pragma once
// IWYU pragma private; include "Meta/XR/MetaXRSubsampledLayout.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "Meta/XR/zzzz__MetaXRSubsampledLayout_def.hpp"
//  Writing Method size for method: ::Meta::XR::MetaXRSubsampledLayout.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::MetaXRSubsampledLayout::*)(uint64_t)>(&::Meta::XR::MetaXRSubsampledLayout::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c3b8b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MetaXRSubsampledLayout*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MetaXRSubsampledLayout*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRSubsampledLayout.MetaSetSubsampledLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Meta::XR::MetaXRSubsampledLayout::MetaSetSubsampledLayout)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c3b8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MetaXRSubsampledLayout*>::get(), "MetaSetSubsampledLayout",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRSubsampledLayout._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MetaXRSubsampledLayout::*)()>(&::Meta::XR::MetaXRSubsampledLayout::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3b94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MetaXRSubsampledLayout*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool Meta::XR::MetaXRSubsampledLayout::OnInstanceCreate(uint64_t xrInstance) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MetaXRSubsampledLayout*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, xrInstance);
}
inline void Meta::XR::MetaXRSubsampledLayout::MetaSetSubsampledLayout(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MetaXRSubsampledLayout*>::get(), "MetaSetSubsampledLayout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enabled);
}
inline void Meta::XR::MetaXRSubsampledLayout::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MetaXRSubsampledLayout*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::MetaXRSubsampledLayout* Meta::XR::MetaXRSubsampledLayout::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::MetaXRSubsampledLayout*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MetaXRSubsampledLayout::MetaXRSubsampledLayout() {}
