#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DefaultGroupManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupManager_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultGroupManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBoxOption_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultGroupManager.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultGroupManager::*)(::UnityEngine::UIElements::IGroupBox*)>(
    &::UnityEngine::UIElements::DefaultGroupManager::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a37648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGroupBox*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultGroupManager.OnOptionSelectionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(
    &::UnityEngine::UIElements::DefaultGroupManager::OnOptionSelectionChanged)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x4a37650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(), "OnOptionSelectionChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGroupBoxOption*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultGroupManager.RegisterOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(
    &::UnityEngine::UIElements::DefaultGroupManager::RegisterOption)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x4a37820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(), "RegisterOption", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGroupBoxOption*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultGroupManager.UnregisterOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(
    &::UnityEngine::UIElements::DefaultGroupManager::UnregisterOption)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4a3796c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(), "UnregisterOption", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGroupBoxOption*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultGroupManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultGroupManager::*)()>(&::UnityEngine::UIElements::DefaultGroupManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4a36eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>*& UnityEngine::UIElements::DefaultGroupManager::__cordl_internal_get_m_GroupOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GroupOptions;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>* const& UnityEngine::UIElements::DefaultGroupManager::__cordl_internal_get_m_GroupOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GroupOptions;
}
constexpr void UnityEngine::UIElements::DefaultGroupManager::__cordl_internal_set_m_GroupOptions(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GroupOptions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::IGroupBoxOption*& UnityEngine::UIElements::DefaultGroupManager::__cordl_internal_get_m_SelectedOption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedOption;
}
constexpr ::UnityEngine::UIElements::IGroupBoxOption* const& UnityEngine::UIElements::DefaultGroupManager::__cordl_internal_get_m_SelectedOption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedOption;
}
constexpr void UnityEngine::UIElements::DefaultGroupManager::__cordl_internal_set_m_SelectedOption(::UnityEngine::UIElements::IGroupBoxOption* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectedOption)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::IGroupBox*& UnityEngine::UIElements::DefaultGroupManager::__cordl_internal_get_m_GroupBox() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GroupBox;
}
constexpr ::UnityEngine::UIElements::IGroupBox* const& UnityEngine::UIElements::DefaultGroupManager::__cordl_internal_get_m_GroupBox() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GroupBox;
}
constexpr void UnityEngine::UIElements::DefaultGroupManager::__cordl_internal_set_m_GroupBox(::UnityEngine::UIElements::IGroupBox* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GroupBox)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::DefaultGroupManager::Init(::UnityEngine::UIElements::IGroupBox* groupBox) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGroupBox*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupBox);
}
inline void UnityEngine::UIElements::DefaultGroupManager::OnOptionSelectionChanged(::UnityEngine::UIElements::IGroupBoxOption* selectedOption) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(), "OnOptionSelectionChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGroupBoxOption*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectedOption);
}
inline void UnityEngine::UIElements::DefaultGroupManager::RegisterOption(::UnityEngine::UIElements::IGroupBoxOption* option) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(), "RegisterOption", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGroupBoxOption*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, option);
}
inline void UnityEngine::UIElements::DefaultGroupManager::UnregisterOption(::UnityEngine::UIElements::IGroupBoxOption* option) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(), "UnregisterOption", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGroupBoxOption*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, option);
}
inline void UnityEngine::UIElements::DefaultGroupManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultGroupManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DefaultGroupManager* UnityEngine::UIElements::DefaultGroupManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::DefaultGroupManager*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IGroupManager"
constexpr UnityEngine::UIElements::DefaultGroupManager::operator ::UnityEngine::UIElements::IGroupManager*() noexcept {
  return static_cast<::UnityEngine::UIElements::IGroupManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IGroupManager"
constexpr ::UnityEngine::UIElements::IGroupManager* UnityEngine::UIElements::DefaultGroupManager::i___UnityEngine__UIElements__IGroupManager() noexcept {
  return static_cast<::UnityEngine::UIElements::IGroupManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DefaultGroupManager::DefaultGroupManager() {}
