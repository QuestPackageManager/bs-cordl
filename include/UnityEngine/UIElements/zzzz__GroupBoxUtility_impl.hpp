#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\GroupBoxUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__GroupBoxUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBoxOption_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::GroupBoxUtility.FindOrCreateGroupManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IGroupManager* (*)(::UnityEngine::UIElements::IGroupBox*)>(
    &::UnityEngine::UIElements::GroupBoxUtility::FindOrCreateGroupManager)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x6db0b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GroupBoxUtility*>(),
                                                                                           { "FindOrCreateGroupManager", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBox*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GroupBoxUtility.OnGroupBoxDetachedFromPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(&::UnityEngine::UIElements::GroupBoxUtility::OnGroupBoxDetachedFromPanel)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6db1160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GroupBoxUtility*>(),
                                                             { "OnGroupBoxDetachedFromPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::DetachFromPanelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GroupBoxUtility.OnPanelDestroyed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(&::UnityEngine::UIElements::GroupBoxUtility::OnPanelDestroyed)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6db1220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GroupBoxUtility*>(),
                                                                                           { "OnPanelDestroyed", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::GroupBoxUtility::setStaticF_s_GroupManagers(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*, ::UnityEngine::UIElements::IGroupManager*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*, ::UnityEngine::UIElements::IGroupManager*>*, "s_GroupManagers",
                                    ::UnityEngine::UIElements::GroupBoxUtility*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*, ::UnityEngine::UIElements::IGroupManager*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*, ::UnityEngine::UIElements::IGroupManager*>*
UnityEngine::UIElements::GroupBoxUtility::getStaticF_s_GroupManagers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*, ::UnityEngine::UIElements::IGroupManager*>*, "s_GroupManagers",
                                           ::UnityEngine::UIElements::GroupBoxUtility*>();
}
inline void UnityEngine::UIElements::GroupBoxUtility::setStaticF_s_GroupOptionManagerCache(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*, ::UnityEngine::UIElements::IGroupManager*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*, ::UnityEngine::UIElements::IGroupManager*>*, "s_GroupOptionManagerCache",
                                    ::UnityEngine::UIElements::GroupBoxUtility*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*, ::UnityEngine::UIElements::IGroupManager*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*, ::UnityEngine::UIElements::IGroupManager*>*
UnityEngine::UIElements::GroupBoxUtility::getStaticF_s_GroupOptionManagerCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*, ::UnityEngine::UIElements::IGroupManager*>*,
                                           "s_GroupOptionManagerCache", ::UnityEngine::UIElements::GroupBoxUtility*>();
}
inline void UnityEngine::UIElements::GroupBoxUtility::setStaticF_k_GenericGroupBoxType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "k_GenericGroupBoxType", ::UnityEngine::UIElements::GroupBoxUtility*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* UnityEngine::UIElements::GroupBoxUtility::getStaticF_k_GenericGroupBoxType() {
  return ::cordl_internals::getStaticField<::System::Type*, "k_GenericGroupBoxType", ::UnityEngine::UIElements::GroupBoxUtility*>();
}
template <typename T> inline void UnityEngine::UIElements::GroupBoxUtility::RegisterGroupBoxOption(T option) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GroupBoxUtility*>(), { "RegisterGroupBoxOption", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, option);
}
template <typename T> inline void UnityEngine::UIElements::GroupBoxUtility::UnregisterGroupBoxOption(T option) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GroupBoxUtility*>(), { "UnregisterGroupBoxOption", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, option);
}
template <typename T> inline void UnityEngine::UIElements::GroupBoxUtility::OnOptionSelected(T selectedOption) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GroupBoxUtility*>(), { "OnOptionSelected", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, selectedOption);
}
inline ::UnityEngine::UIElements::IGroupManager* UnityEngine::UIElements::GroupBoxUtility::FindOrCreateGroupManager(::UnityEngine::UIElements::IGroupBox* groupBox) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GroupBoxUtility*>(),
                                                                                         { "FindOrCreateGroupManager", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBox*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IGroupManager*>(nullptr, ___internal_method, groupBox);
}
inline void UnityEngine::UIElements::GroupBoxUtility::OnGroupBoxDetachedFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GroupBoxUtility*>(),
                                                           { "OnGroupBoxDetachedFromPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::DetachFromPanelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GroupBoxUtility::OnPanelDestroyed(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GroupBoxUtility*>(),
                                                                                         { "OnPanelDestroyed", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, panel);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::GroupBoxUtility::GroupBoxUtility() {}
