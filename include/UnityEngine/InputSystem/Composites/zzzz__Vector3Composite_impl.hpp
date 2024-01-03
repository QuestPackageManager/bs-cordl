#pragma once
#include "UnityEngine/InputSystem/Composites/zzzz__Vector3Composite_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__Vector3Composite_def.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__Vector3Composite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode::__Vector3Composite__Mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode::__Vector3Composite__Mode() {}
constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode UnityEngine::InputSystem::Composites::__Vector3Composite__Mode::Analog{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode UnityEngine::InputSystem::Composites::__Vector3Composite__Mode::DigitalNormalized{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode UnityEngine::InputSystem::Composites::__Vector3Composite__Mode::Digital{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::Vector3Composite.ReadValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::Composites::Vector3Composite::*)(
    ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::Vector3Composite::ReadValue)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2a5bc2c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector3Composite*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector3Composite*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::Vector3Composite._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Composites::Vector3Composite::*)()>(
    &::UnityEngine::InputSystem::Composites::Vector3Composite::_ctor)> {
  constexpr static std::size_t size = 0x1048;
  constexpr static std::size_t addrs = 0x2a5be80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector3Composite*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__get_up() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___up;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__get_up() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___up;
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_up(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___up = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__get_down() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___down;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__get_down() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___down;
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_down(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___down = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__get_left() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___left;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__get_left() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___left;
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_left(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___left = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__get_right() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___right;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__get_right() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___right;
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_right(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___right = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__get_forward() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forward;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__get_forward() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forward;
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_forward(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forward = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__get_backward() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backward;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__get_backward() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backward;
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_backward(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backward = value;
}
constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode& UnityEngine::InputSystem::Composites::Vector3Composite::__get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode const& UnityEngine::InputSystem::Composites::Vector3Composite::__get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_mode(::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mode = value;
}
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::Composites::Vector3Composite::ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector3Composite*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, context);
}
inline ::UnityEngine::InputSystem::Composites::Vector3Composite* UnityEngine::InputSystem::Composites::Vector3Composite::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Composites::Vector3Composite*>());
}
inline void UnityEngine::InputSystem::Composites::Vector3Composite::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector3Composite*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::Vector3Composite::Vector3Composite() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
