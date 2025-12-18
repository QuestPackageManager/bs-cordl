#pragma once
// IWYU pragma private; include "TMPro/TMP_SelectionCaret.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_impl.hpp"
#include "TMPro/zzzz__TMP_SelectionCaret_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_SelectionCaret.Cull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_SelectionCaret::*)(::UnityEngine::Rect, bool)>(&::TMPro::TMP_SelectionCaret::Cull)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x67e38d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_SelectionCaret*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_SelectionCaret*>::get(), 59));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SelectionCaret.UpdateGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_SelectionCaret::*)()>(&::TMPro::TMP_SelectionCaret::UpdateGeometry)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67e397c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_SelectionCaret*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_SelectionCaret*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SelectionCaret._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_SelectionCaret::*)()>(&::TMPro::TMP_SelectionCaret::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67e3980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_SelectionCaret*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void TMPro::TMP_SelectionCaret::Cull(::UnityEngine::Rect clipRect, bool validRect) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_SelectionCaret*>::get(), 59)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clipRect, validRect);
}
inline void TMPro::TMP_SelectionCaret::UpdateGeometry() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_SelectionCaret*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_SelectionCaret::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_SelectionCaret*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::TMPro::TMP_SelectionCaret* TMPro::TMP_SelectionCaret::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_SelectionCaret*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_SelectionCaret::TMP_SelectionCaret() {}
