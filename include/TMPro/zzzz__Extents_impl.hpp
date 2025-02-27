#pragma once
// IWYU pragma private; include "TMPro/Extents.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "TMPro/zzzz__Extents_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::TMPro::Extents._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::Extents::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::TMPro::Extents::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x47d30a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::Extents.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::Extents::*)()>(&::TMPro::Extents::ToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x47d30ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get(), 3));
    return ___internal_method;
  }
};
inline void TMPro::Extents::setStaticF_zero(::TMPro::Extents value) {
  ::cordl_internals::setStaticField<::TMPro::Extents, "zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get>(std::forward<::TMPro::Extents>(value));
}
inline ::TMPro::Extents TMPro::Extents::getStaticF_zero() {
  return ::cordl_internals::getStaticField<::TMPro::Extents, "zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get>();
}
inline void TMPro::Extents::setStaticF_uninitialized(::TMPro::Extents value) {
  ::cordl_internals::setStaticField<::TMPro::Extents, "uninitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get>(std::forward<::TMPro::Extents>(value));
}
inline ::TMPro::Extents TMPro::Extents::getStaticF_uninitialized() {
  return ::cordl_internals::getStaticField<::TMPro::Extents, "uninitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get>();
}
inline void TMPro::Extents::_ctor(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, min, max);
}
inline ::StringW TMPro::Extents::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "max", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
// Some("{}") }]
constexpr ::TMPro::Extents::Extents(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max) noexcept {
  this->min = min;
  this->max = max;
}
// Ctor Parameters []
constexpr ::TMPro::Extents::Extents() {}
