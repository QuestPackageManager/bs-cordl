#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/KeyControl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__KeyControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl.get_keyCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Key (::UnityEngine::InputSystem::Controls::KeyControl::*)()>(
    &::UnityEngine::InputSystem::Controls::KeyControl::get_keyCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x319f44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                                                                               "get_keyCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl.set_keyCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::KeyControl::*)(::UnityEngine::InputSystem::Key)>(
    &::UnityEngine::InputSystem::Controls::KeyControl::set_keyCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x319f454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(), "set_keyCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl.get_scanCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Controls::KeyControl::*)()>(
    &::UnityEngine::InputSystem::Controls::KeyControl::get_scanCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x319f45c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                                                                               "get_scanCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl.RefreshConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::KeyControl::*)()>(
    &::UnityEngine::InputSystem::Controls::KeyControl::RefreshConfiguration)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x319f478;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::KeyControl::*)()>(
    &::UnityEngine::InputSystem::Controls::KeyControl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x319f5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Key& UnityEngine::InputSystem::Controls::KeyControl::__cordl_internal_get__keyCode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyCode_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Key const& UnityEngine::InputSystem::Controls::KeyControl::__cordl_internal_get__keyCode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyCode_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::KeyControl::__cordl_internal_set__keyCode_k__BackingField(::UnityEngine::InputSystem::Key value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyCode_k__BackingField = value;
}
constexpr int32_t& UnityEngine::InputSystem::Controls::KeyControl::__cordl_internal_get_m_ScanCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScanCode;
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::KeyControl::__cordl_internal_get_m_ScanCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScanCode;
}
constexpr void UnityEngine::InputSystem::Controls::KeyControl::__cordl_internal_set_m_ScanCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScanCode = value;
}
inline ::UnityEngine::InputSystem::Key UnityEngine::InputSystem::Controls::KeyControl::get_keyCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                                                                             "get_keyCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Key, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::KeyControl::set_keyCode(::UnityEngine::InputSystem::Key value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(), "set_keyCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::Controls::KeyControl::get_scanCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                                                                             "get_scanCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::KeyControl::RefreshConfiguration() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Controls::KeyControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Controls::KeyControl*>());
}
inline void UnityEngine::InputSystem::Controls::KeyControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::KeyControl::KeyControl() {}
