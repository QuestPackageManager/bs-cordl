#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/BMPAlloc.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__OwnedState_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BMPAlloc.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::BMPAlloc::*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::BMPAlloc::Equals)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x49ab464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BMPAlloc>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BMPAlloc>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BMPAlloc.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::BMPAlloc::*)()>(&::UnityEngine::UIElements::UIR::BMPAlloc::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x49a9040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BMPAlloc>::get(), "IsValid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BMPAlloc.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::UIR::BMPAlloc::*)()>(&::UnityEngine::UIElements::UIR::BMPAlloc::ToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x49ab49c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BMPAlloc>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BMPAlloc>::get(), 3));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::BMPAlloc::setStaticF_Invalid(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::BMPAlloc, "Invalid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BMPAlloc>::get>(
      std::forward<::UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
inline ::UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::BMPAlloc::getStaticF_Invalid() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::BMPAlloc, "Invalid",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BMPAlloc>::get>();
}
inline bool UnityEngine::UIElements::UIR::BMPAlloc::Equals(::UnityEngine::UIElements::UIR::BMPAlloc other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BMPAlloc>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BMPAlloc>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::UIR::BMPAlloc::IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BMPAlloc>::get(), "IsValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::UIR::BMPAlloc::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BMPAlloc>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "page", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pageLine", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "bitIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ownedState", ty: "::UnityEngine::UIElements::UIR::OwnedState", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc::BMPAlloc(int32_t page, uint16_t pageLine, uint8_t bitIndex, ::UnityEngine::UIElements::UIR::OwnedState ownedState) noexcept {
  this->page = page;
  this->pageLine = pageLine;
  this->bitIndex = bitIndex;
  this->ownedState = ownedState;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc::BMPAlloc() {}
