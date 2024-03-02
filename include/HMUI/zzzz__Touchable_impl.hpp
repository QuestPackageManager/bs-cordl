#pragma once
#include "UnityEngine/UI/zzzz__Graphic_impl.hpp"
#include "HMUI/zzzz__Touchable_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
//  Writing Method size for method: ::HMUI::Touchable.get_skew
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::Touchable::*)()>(&::HMUI::Touchable::get_skew)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2287300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Touchable*>::get(), "get_skew",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Touchable.OnPopulateMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Touchable::*)(::UnityEngine::UI::VertexHelper*)>(&::HMUI::Touchable::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2287308;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Touchable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Touchable*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Touchable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Touchable::*)()>(&::HMUI::Touchable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2286b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Touchable*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::Touchable::__cordl_internal_get__skew() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skew;
}
constexpr float_t const& HMUI::Touchable::__cordl_internal_get__skew() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skew;
}
constexpr void HMUI::Touchable::__cordl_internal_set__skew(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____skew = value;
}
inline float_t HMUI::Touchable::get_skew() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Touchable*>::get(), "get_skew",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void HMUI::Touchable::OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Touchable*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vh);
}
inline ::HMUI::Touchable* HMUI::Touchable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::Touchable*>());
}
inline void HMUI::Touchable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Touchable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::Touchable::Touchable() {}
