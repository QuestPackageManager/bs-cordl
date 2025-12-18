#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/TouchscreenState.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchscreenState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchscreenState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer::TouchscreenState__primaryTouchData_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer::TouchscreenState__primaryTouchData_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer::TouchscreenState__touchData_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer::TouchscreenState__touchData_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchscreenState.get_Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(
    &::UnityEngine::InputSystem::LowLevel::TouchscreenState::get_Format)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63f804c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                                                                               "get_Format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchscreenState.get_primaryTouch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::TouchState* (::UnityEngine::InputSystem::LowLevel::TouchscreenState::*)()>(
    &::UnityEngine::InputSystem::LowLevel::TouchscreenState::get_primaryTouch)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63f8058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                                                                               "get_primaryTouch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchscreenState.get_touches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::TouchState* (::UnityEngine::InputSystem::LowLevel::TouchscreenState::*)()>(
    &::UnityEngine::InputSystem::LowLevel::TouchscreenState::get_touches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63f805c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                                                                               "get_touches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchscreenState.get_format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::TouchscreenState::*)()>(
    &::UnityEngine::InputSystem::LowLevel::TouchscreenState::get_format)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63f8064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                                                                               "get_format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer& UnityEngine::InputSystem::LowLevel::TouchscreenState::__cordl_internal_get_primaryTouchData() {
  return this->___primaryTouchData;
}
constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer const&
UnityEngine::InputSystem::LowLevel::TouchscreenState::__cordl_internal_get_primaryTouchData() const {
  return this->___primaryTouchData;
}
constexpr void
UnityEngine::InputSystem::LowLevel::TouchscreenState::__cordl_internal_set_primaryTouchData(::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer value) {
  this->___primaryTouchData = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer& UnityEngine::InputSystem::LowLevel::TouchscreenState::__cordl_internal_get_touchData() {
  return this->___touchData;
}
constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer const& UnityEngine::InputSystem::LowLevel::TouchscreenState::__cordl_internal_get_touchData() const {
  return this->___touchData;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchscreenState::__cordl_internal_set_touchData(::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer value) {
  this->___touchData = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::TouchscreenState::get_Format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                                                                             "get_Format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::TouchState* UnityEngine::InputSystem::LowLevel::TouchscreenState::get_primaryTouch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                                                                             "get_primaryTouch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::TouchState*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::TouchState* UnityEngine::InputSystem::LowLevel::TouchscreenState::get_touches() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                                                                             "get_touches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::TouchState*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::TouchscreenState::get_format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                                                                             "get_format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::TouchscreenState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* UnityEngine::InputSystem::LowLevel::TouchscreenState::i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "primaryTouchData", ty: "::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "touchData", ty: "::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState::TouchscreenState(::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer primaryTouchData,
                                                                                   ::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer touchData) noexcept {
  this->primaryTouchData = primaryTouchData;
  this->touchData = touchData;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState::TouchscreenState() {}
