#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizedHoverHint.hpp"
#include "BGLib/Polyglot/zzzz__LocalizedTextComponent_1_impl.hpp"
#include "GlobalNamespace/zzzz__LocalizedHoverHint_def.hpp"
#include "BGLib/Polyglot/zzzz__LanguageDirection_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalizedHoverHint.SetText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalizedHoverHint::*)(::HMUI::HoverHint*, ::StringW)>(
    &::GlobalNamespace::LocalizedHoverHint::SetText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3ba35e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizedHoverHint*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizedHoverHint*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedHoverHint.UpdateAlignment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalizedHoverHint::*)(::HMUI::HoverHint*, ::BGLib::Polyglot::LanguageDirection)>(
    &::GlobalNamespace::LocalizedHoverHint::UpdateAlignment)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3ba3600;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizedHoverHint*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizedHoverHint*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedHoverHint._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalizedHoverHint::*)()>(&::GlobalNamespace::LocalizedHoverHint::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3ba3604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizedHoverHint*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalizedHoverHint::SetText(::HMUI::HoverHint* hoverHint, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizedHoverHint*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hoverHint, value);
}
inline void GlobalNamespace::LocalizedHoverHint::UpdateAlignment(::HMUI::HoverHint* hoverHint, ::BGLib::Polyglot::LanguageDirection direction) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizedHoverHint*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hoverHint, direction);
}
inline ::GlobalNamespace::LocalizedHoverHint* GlobalNamespace::LocalizedHoverHint::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LocalizedHoverHint*>());
}
inline void GlobalNamespace::LocalizedHoverHint::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizedHoverHint*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizedHoverHint::LocalizedHoverHint() {}
