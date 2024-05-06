#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CursorManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__Cursor_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICursorManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::CursorManager.get_isCursorOverriden
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::CursorManager::*)()>(
    &::UnityEngine::UIElements::CursorManager::get_isCursorOverriden)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3514200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CursorManager*>::get(),
                                                                               "get_isCursorOverriden", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CursorManager.set_isCursorOverriden
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CursorManager::*)(bool)>(
    &::UnityEngine::UIElements::CursorManager::set_isCursorOverriden)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3514208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CursorManager*>::get(), "set_isCursorOverriden",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CursorManager.SetCursor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CursorManager::*)(::UnityEngine::UIElements::Cursor)>(
    &::UnityEngine::UIElements::CursorManager::SetCursor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3514214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CursorManager*>::get(), "SetCursor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Cursor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CursorManager.ResetCursor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CursorManager::*)()>(&::UnityEngine::UIElements::CursorManager::ResetCursor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3514304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CursorManager*>::get(), "ResetCursor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CursorManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CursorManager::*)()>(&::UnityEngine::UIElements::CursorManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351436c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CursorManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::ICursorManager"
constexpr UnityEngine::UIElements::CursorManager::operator ::UnityEngine::UIElements::ICursorManager*() noexcept {
  return static_cast<::UnityEngine::UIElements::ICursorManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::ICursorManager"
constexpr ::UnityEngine::UIElements::ICursorManager* UnityEngine::UIElements::CursorManager::i___UnityEngine__UIElements__ICursorManager() noexcept {
  return static_cast<::UnityEngine::UIElements::ICursorManager*>(static_cast<void*>(this));
}
constexpr bool& UnityEngine::UIElements::CursorManager::__cordl_internal_get__isCursorOverriden_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCursorOverriden_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::CursorManager::__cordl_internal_get__isCursorOverriden_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCursorOverriden_k__BackingField;
}
constexpr void UnityEngine::UIElements::CursorManager::__cordl_internal_set__isCursorOverriden_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isCursorOverriden_k__BackingField = value;
}
inline bool UnityEngine::UIElements::CursorManager::get_isCursorOverriden() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CursorManager*>::get(),
                                                                             "get_isCursorOverriden", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::CursorManager::set_isCursorOverriden(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CursorManager*>::get(), "set_isCursorOverriden",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::CursorManager::SetCursor(::UnityEngine::UIElements::Cursor cursor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CursorManager*>::get(), "SetCursor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Cursor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cursor);
}
inline void UnityEngine::UIElements::CursorManager::ResetCursor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CursorManager*>::get(), "ResetCursor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::CursorManager* UnityEngine::UIElements::CursorManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::CursorManager*>());
}
inline void UnityEngine::UIElements::CursorManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CursorManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CursorManager::CursorManager() {}
