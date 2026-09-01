#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ICursorManager.hpp"
#include "UnityEngine/UIElements/zzzz__ICursorManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__Cursor_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ICursorManager.SetCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ICursorManager::*)(::UnityEngine::UIElements::Cursor)>(&::UnityEngine::UIElements::ICursorManager::SetCursor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ICursorManager*>(), { ::i2c::class_of<::UnityEngine::UIElements::ICursorManager*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ICursorManager.ResetCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ICursorManager::*)()>(&::UnityEngine::UIElements::ICursorManager::ResetCursor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ICursorManager*>(), { ::i2c::class_of<::UnityEngine::UIElements::ICursorManager*>(), 1 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ICursorManager::SetCursor(::UnityEngine::UIElements::Cursor cursor) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ICursorManager*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cursor);
}
inline void UnityEngine::UIElements::ICursorManager::ResetCursor() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ICursorManager*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
