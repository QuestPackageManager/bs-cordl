#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RendererList.hpp"
#include "System/zzzz__UIntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RendererList.get_isValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RendererList::*)()>(&::UnityEngine::Rendering::RendererList::get_isValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68f0adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererList>::get(), "get_isValid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RendererList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RendererList::*)(::System::UIntPtr, uint32_t)>(
    &::UnityEngine::Rendering::RendererList::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68f0b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererList>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UIntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RendererList::setStaticF_nullRendererList(::UnityEngine::Rendering::RendererList value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RendererList, "nullRendererList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererList>::get>(
      std::forward<::UnityEngine::Rendering::RendererList>(value));
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::RendererList::getStaticF_nullRendererList() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RendererList, "nullRendererList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererList>::get>();
}
inline bool UnityEngine::Rendering::RendererList::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererList>::get(), "get_isValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RendererList::_ctor(::System::UIntPtr ctx, uint32_t indx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererList>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UIntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, indx);
}
// Ctor Parameters [CppParam { name: "context", ty: "::System::UIntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "frame", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "contextID", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RendererList::RendererList(::System::UIntPtr context, uint32_t index, uint32_t frame, uint32_t type, uint32_t contextID) noexcept {
  this->context = context;
  this->index = index;
  this->frame = frame;
  this->type = type;
  this->contextID = contextID;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RendererList::RendererList() {}
