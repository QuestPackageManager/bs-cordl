#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivacyPolicyNoticeViewController.hpp"
#include "GlobalNamespace/zzzz__CompletableViewController_impl.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyNoticeViewController_def.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyNoticeView_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyNoticeViewController.DidActivate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyNoticeViewController::*)(bool, bool, bool)>(&::GlobalNamespace::PrivacyPolicyNoticeViewController::DidActivate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x573596c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyNoticeViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyNoticeViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyNoticeViewController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyNoticeViewController::*)()>(&::GlobalNamespace::PrivacyPolicyNoticeViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5735a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyNoticeViewController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::PrivacyPolicyNoticeViewController::__cordl_internal_get__continueButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____continueButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::PrivacyPolicyNoticeViewController::__cordl_internal_get__continueButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____continueButton;
}
constexpr void GlobalNamespace::PrivacyPolicyNoticeViewController::__cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____continueButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyNoticeView>& GlobalNamespace::PrivacyPolicyNoticeViewController::__cordl_internal_get__privacyPolicyNoticeView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____privacyPolicyNoticeView;
}
constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyNoticeView> const& GlobalNamespace::PrivacyPolicyNoticeViewController::__cordl_internal_get__privacyPolicyNoticeView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____privacyPolicyNoticeView;
}
constexpr void GlobalNamespace::PrivacyPolicyNoticeViewController::__cordl_internal_set__privacyPolicyNoticeView(::UnityW<::GlobalNamespace::PrivacyPolicyNoticeView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____privacyPolicyNoticeView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PrivacyPolicyNoticeViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyNoticeViewController*>::get(),
                            5
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::PrivacyPolicyNoticeViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyNoticeViewController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PrivacyPolicyNoticeViewController* GlobalNamespace::PrivacyPolicyNoticeViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PrivacyPolicyNoticeViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PrivacyPolicyNoticeViewController::PrivacyPolicyNoticeViewController()   {
}
