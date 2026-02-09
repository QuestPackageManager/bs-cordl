#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivacyPolicyNoticeDisplayViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyNoticeDisplayViewController_def.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyNoticeView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController.DidActivate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController::*)(bool, bool, bool)>(&::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController::DidActivate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x57357f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController::*)()>(&::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5735968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyNoticeView>& GlobalNamespace::PrivacyPolicyNoticeDisplayViewController::__cordl_internal_get__privacyPolicyNoticeView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____privacyPolicyNoticeView;
}
constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyNoticeView> const& GlobalNamespace::PrivacyPolicyNoticeDisplayViewController::__cordl_internal_get__privacyPolicyNoticeView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____privacyPolicyNoticeView;
}
constexpr void GlobalNamespace::PrivacyPolicyNoticeDisplayViewController::__cordl_internal_set__privacyPolicyNoticeView(::UnityW<::GlobalNamespace::PrivacyPolicyNoticeView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____privacyPolicyNoticeView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PrivacyPolicyNoticeDisplayViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController*>::get(),
                            5
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::PrivacyPolicyNoticeDisplayViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController* GlobalNamespace::PrivacyPolicyNoticeDisplayViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController::PrivacyPolicyNoticeDisplayViewController()   {
}
