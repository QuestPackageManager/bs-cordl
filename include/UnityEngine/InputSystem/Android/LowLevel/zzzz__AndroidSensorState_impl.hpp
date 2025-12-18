#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidSensorState.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorState_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState__data_e__FixedBuffer::AndroidSensorState__data_e__FixedBuffer(float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState__data_e__FixedBuffer::AndroidSensorState__data_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState.WithData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState (
    ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::*)(::ArrayW<float_t, ::Array<float_t>*>)>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::WithData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x63f6860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get(), "WithData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState.get_format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (
    ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::*)()>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::get_format)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63f6920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get(), "get_format",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::setStaticF_kFormat(::UnityEngine::InputSystem::Utilities::FourCC value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "kFormat",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get>(
      std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::getStaticF_kFormat() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "kFormat",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get>();
}
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::WithData(::ArrayW<float_t, ::Array<float_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get(), "WithData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState, false>(this, ___internal_method, data);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::get_format() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get(), "get_format",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "data", ty: "::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState__data_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::AndroidSensorState(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState__data_e__FixedBuffer data) noexcept {
  this->data = data;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::AndroidSensorState() {}
