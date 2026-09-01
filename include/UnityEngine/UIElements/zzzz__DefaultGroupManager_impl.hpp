#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\DefaultGroupManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultGroupManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBoxOption_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultGroupManager.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultGroupManager::*)(::UnityEngine::UIElements::IGroupBox*)>(
    &::UnityEngine::UIElements::DefaultGroupManager::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db17fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultGroupManager*>(), { "Init", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBox*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultGroupManager.OnOptionSelectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(
    &::UnityEngine::UIElements::DefaultGroupManager::OnOptionSelectionChanged)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6db1804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultGroupManager*>(),
                                                                                           { "OnOptionSelectionChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBoxOption*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultGroupManager.RegisterOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(
    &::UnityEngine::UIElements::DefaultGroupManager::RegisterOption)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6db199c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultGroupManager*>(),
                                                                                           { "RegisterOption", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBoxOption*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultGroupManager.UnregisterOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(
    &::UnityEngine::UIElements::DefaultGroupManager::UnregisterOption)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6db1b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultGroupManager*>(),
                                                                                           { "UnregisterOption", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBoxOption*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultGroupManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultGroupManager::*)()>(&::UnityEngine::UIElements::DefaultGroupManager::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6db102c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultGroupManager*>(), { ".ctor", {}, {} })));
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
  this->___m_GroupOptions = value;
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
  this->___m_SelectedOption = value;
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
  this->___m_GroupBox = value;
}
inline void UnityEngine::UIElements::DefaultGroupManager::Init(::UnityEngine::UIElements::IGroupBox* groupBox) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultGroupManager*>(), { "Init", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBox*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupBox);
}
inline void UnityEngine::UIElements::DefaultGroupManager::OnOptionSelectionChanged(::UnityEngine::UIElements::IGroupBoxOption* selectedOption) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultGroupManager*>(),
                                                                                         { "OnOptionSelectionChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBoxOption*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectedOption);
}
inline void UnityEngine::UIElements::DefaultGroupManager::RegisterOption(::UnityEngine::UIElements::IGroupBoxOption* option) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultGroupManager*>(),
                                                                                         { "RegisterOption", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBoxOption*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, option);
}
inline void UnityEngine::UIElements::DefaultGroupManager::UnregisterOption(::UnityEngine::UIElements::IGroupBoxOption* option) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultGroupManager*>(),
                                                                                         { "UnregisterOption", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBoxOption*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, option);
}
inline void UnityEngine::UIElements::DefaultGroupManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultGroupManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DefaultGroupManager* UnityEngine::UIElements::DefaultGroupManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DefaultGroupManager*>());
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
