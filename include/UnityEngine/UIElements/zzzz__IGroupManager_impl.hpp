#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IGroupManager.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBoxOption_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IGroupManager.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IGroupManager::*)(::UnityEngine::UIElements::IGroupBox*)>(&::UnityEngine::UIElements::IGroupManager::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IGroupManager*>(), { ::i2c::class_of<::UnityEngine::UIElements::IGroupManager*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IGroupManager.OnOptionSelectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(
    &::UnityEngine::UIElements::IGroupManager::OnOptionSelectionChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IGroupManager*>(), { ::i2c::class_of<::UnityEngine::UIElements::IGroupManager*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IGroupManager.RegisterOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(
    &::UnityEngine::UIElements::IGroupManager::RegisterOption)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IGroupManager*>(), { ::i2c::class_of<::UnityEngine::UIElements::IGroupManager*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IGroupManager.UnregisterOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(
    &::UnityEngine::UIElements::IGroupManager::UnregisterOption)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IGroupManager*>(), { ::i2c::class_of<::UnityEngine::UIElements::IGroupManager*>(), 3 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IGroupManager::Init(::UnityEngine::UIElements::IGroupBox* groupBox) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IGroupManager*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupBox);
}
inline void UnityEngine::UIElements::IGroupManager::OnOptionSelectionChanged(::UnityEngine::UIElements::IGroupBoxOption* selectedOption) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IGroupManager*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectedOption);
}
inline void UnityEngine::UIElements::IGroupManager::RegisterOption(::UnityEngine::UIElements::IGroupBoxOption* option) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IGroupManager*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, option);
}
inline void UnityEngine::UIElements::IGroupManager::UnregisterOption(::UnityEngine::UIElements::IGroupBoxOption* option) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IGroupManager*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, option);
}
