#pragma once
#include "HMUI/zzzz__ScrollView_impl.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::HMUI::TextPageScrollView.SetText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TextPageScrollView::*)(::StringW)>(&::HMUI::TextPageScrollView::SetText)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x214aa2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TextPageScrollView*>::get(), "SetText", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextPageScrollView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TextPageScrollView::*)()>(&::HMUI::TextPageScrollView::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x214aa94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TextPageScrollView*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::TMPro::TextMeshProUGUI*& HMUI::TextPageScrollView::__get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& HMUI::TextPageScrollView::__get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void HMUI::TextPageScrollView::__set__text(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::TextPageScrollView::SetText(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TextPageScrollView*>::get(), "SetText", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline ::HMUI::TextPageScrollView* HMUI::TextPageScrollView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::TextPageScrollView*>());
}
inline void HMUI::TextPageScrollView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TextPageScrollView*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::TextPageScrollView::TextPageScrollView() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
