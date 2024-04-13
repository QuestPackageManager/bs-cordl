#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__GroupBoxUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBoxOption_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::GroupBoxUtility.OnOptionAttachToPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::AttachToPanelEvent*)>(
    &::UnityEngine::UIElements::GroupBoxUtility::OnOptionAttachToPanel)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x3353d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get(), "OnOptionAttachToPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GroupBoxUtility.OnOptionDetachFromPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(
    &::UnityEngine::UIElements::GroupBoxUtility::OnOptionDetachFromPanel)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x335436c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get(), "OnOptionDetachFromPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GroupBoxUtility.FindOrCreateGroupManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IGroupManager* (*)(::UnityEngine::UIElements::IGroupBox*)>(
    &::UnityEngine::UIElements::GroupBoxUtility::FindOrCreateGroupManager)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x3353f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get(), "FindOrCreateGroupManager", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGroupBox*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GroupBoxUtility.OnGroupBoxDetachedFromPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(
    &::UnityEngine::UIElements::GroupBoxUtility::OnGroupBoxDetachedFromPanel)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3354520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get(), "OnGroupBoxDetachedFromPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GroupBoxUtility.OnPanelDestroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::GroupBoxUtility::OnPanelDestroyed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x33545d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get(), "OnPanelDestroyed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::GroupBoxUtility::setStaticF_s_GroupManagers(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*, ::UnityEngine::UIElements::IGroupManager*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*, ::UnityEngine::UIElements::IGroupManager*>*, "s_GroupManagers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*, ::UnityEngine::UIElements::IGroupManager*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*, ::UnityEngine::UIElements::IGroupManager*>*
UnityEngine::UIElements::GroupBoxUtility::getStaticF_s_GroupManagers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*, ::UnityEngine::UIElements::IGroupManager*>*, "s_GroupManagers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get>();
}
inline void UnityEngine::UIElements::GroupBoxUtility::setStaticF_s_GroupOptionManagerCache(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*, ::UnityEngine::UIElements::IGroupManager*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*, ::UnityEngine::UIElements::IGroupManager*>*, "s_GroupOptionManagerCache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*, ::UnityEngine::UIElements::IGroupManager*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*, ::UnityEngine::UIElements::IGroupManager*>*
UnityEngine::UIElements::GroupBoxUtility::getStaticF_s_GroupOptionManagerCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*, ::UnityEngine::UIElements::IGroupManager*>*,
                                           "s_GroupOptionManagerCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get>();
}
inline void UnityEngine::UIElements::GroupBoxUtility::setStaticF_k_GenericGroupBoxType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "k_GenericGroupBoxType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* UnityEngine::UIElements::GroupBoxUtility::getStaticF_k_GenericGroupBoxType() {
  return ::cordl_internals::getStaticField<::System::Type*, "k_GenericGroupBoxType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get>();
}
template <typename T> inline void UnityEngine::UIElements::GroupBoxUtility::RegisterGroupBoxOptionCallbacks(T option) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get(), "RegisterGroupBoxOptionCallbacks",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, option);
}
template <typename T> inline void UnityEngine::UIElements::GroupBoxUtility::OnOptionSelected(T selectedOption) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get(), "OnOptionSelected",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, selectedOption);
}
inline void UnityEngine::UIElements::GroupBoxUtility::OnOptionAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get(), "OnOptionAttachToPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GroupBoxUtility::OnOptionDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get(), "OnOptionDetachFromPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::IGroupManager* UnityEngine::UIElements::GroupBoxUtility::FindOrCreateGroupManager(::UnityEngine::UIElements::IGroupBox* groupBox) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get(), "FindOrCreateGroupManager", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGroupBox*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IGroupManager*, false>(nullptr, ___internal_method, groupBox);
}
inline void UnityEngine::UIElements::GroupBoxUtility::OnGroupBoxDetachedFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get(), "OnGroupBoxDetachedFromPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GroupBoxUtility::OnPanelDestroyed(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBoxUtility*>::get(), "OnPanelDestroyed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, panel);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::GroupBoxUtility::GroupBoxUtility() {}
