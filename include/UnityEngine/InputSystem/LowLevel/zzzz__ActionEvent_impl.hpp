#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__ActionEvent_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__ActionEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__ActionEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionPhase_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer::__ActionEvent___m_ValueData_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer::__ActionEvent___m_ValueData_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::LowLevel::ActionEvent::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x301caf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                               "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.get_startTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::ActionEvent::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                               "get_startTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.set_startTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::ActionEvent::*)(double_t)>(
    &::UnityEngine::InputSystem::LowLevel::ActionEvent::set_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cb2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(), "set_startTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.get_phase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionPhase (::UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::ActionEvent::get_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                               "get_phase", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.set_phase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::ActionEvent::*)(::UnityEngine::InputSystem::InputActionPhase)>(
    &::UnityEngine::InputSystem::LowLevel::ActionEvent::set_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(), "set_phase", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.get_valueData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<uint8_t> (::UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::ActionEvent::get_valueData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cb44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                               "get_valueData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.get_valueSizeInBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::ActionEvent::get_valueSizeInBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x301cb4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                               "get_valueSizeInBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.get_stateIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::ActionEvent::get_stateIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cb60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                               "get_stateIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.set_stateIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::ActionEvent::*)(int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::ActionEvent::set_stateIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x301cb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(), "set_stateIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.get_controlIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::ActionEvent::get_controlIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cbcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                               "get_controlIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.set_controlIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::ActionEvent::*)(int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::ActionEvent::set_controlIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x301cbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(), "set_controlIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.get_bindingIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::ActionEvent::get_bindingIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cc38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                               "get_bindingIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.set_bindingIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::ActionEvent::*)(int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::ActionEvent::set_bindingIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x301cc40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(), "set_bindingIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.get_interactionIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::ActionEvent::get_interactionIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x301cca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                               "get_interactionIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.set_interactionIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::ActionEvent::*)(int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::ActionEvent::set_interactionIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x301ccb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(), "set_interactionIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.ToEventPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (::UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::ActionEvent::ToEventPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x301cd2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                               "ToEventPtr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.get_typeStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::ActionEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::ActionEvent::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x301cd30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                               "get_typeStatic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.GetEventSizeWithValueSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::ActionEvent::GetEventSizeWithValueSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cd60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(), "GetEventSizeWithValueSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::ActionEvent.From
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> (*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::LowLevel::ActionEvent::From)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x301cd68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::ActionEvent::operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo* UnityEngine::InputSystem::LowLevel::ActionEvent::i___UnityEngine__InputSystem__LowLevel__IInputEventTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_get_baseEvent() {
  return this->___baseEvent;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_get_baseEvent() const {
  return this->___baseEvent;
}
constexpr void UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value) {
  this->___baseEvent = value;
}
constexpr uint16_t& UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_get_m_ControlIndex() {
  return this->___m_ControlIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_get_m_ControlIndex() const {
  return this->___m_ControlIndex;
}
constexpr void UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_set_m_ControlIndex(uint16_t value) {
  this->___m_ControlIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_get_m_BindingIndex() {
  return this->___m_BindingIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_get_m_BindingIndex() const {
  return this->___m_BindingIndex;
}
constexpr void UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_set_m_BindingIndex(uint16_t value) {
  this->___m_BindingIndex = value;
}
constexpr uint16_t& UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_get_m_InteractionIndex() {
  return this->___m_InteractionIndex;
}
constexpr uint16_t const& UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_get_m_InteractionIndex() const {
  return this->___m_InteractionIndex;
}
constexpr void UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_set_m_InteractionIndex(uint16_t value) {
  this->___m_InteractionIndex = value;
}
constexpr uint8_t& UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_get_m_StateIndex() {
  return this->___m_StateIndex;
}
constexpr uint8_t const& UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_get_m_StateIndex() const {
  return this->___m_StateIndex;
}
constexpr void UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_set_m_StateIndex(uint8_t value) {
  this->___m_StateIndex = value;
}
constexpr uint8_t& UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_get_m_Phase() {
  return this->___m_Phase;
}
constexpr uint8_t const& UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_get_m_Phase() const {
  return this->___m_Phase;
}
constexpr void UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_set_m_Phase(uint8_t value) {
  this->___m_Phase = value;
}
constexpr double_t& UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_get_m_StartTime() {
  return this->___m_StartTime;
}
constexpr double_t const& UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_get_m_StartTime() const {
  return this->___m_StartTime;
}
constexpr void UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_set_m_StartTime(double_t value) {
  this->___m_StartTime = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer& UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_get_m_ValueData() {
  return this->___m_ValueData;
}
constexpr ::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer const& UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_get_m_ValueData() const {
  return this->___m_ValueData;
}
constexpr void UnityEngine::InputSystem::LowLevel::ActionEvent::__cordl_internal_set_m_ValueData(::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer value) {
  this->___m_ValueData = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::ActionEvent::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                             "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
inline double_t UnityEngine::InputSystem::LowLevel::ActionEvent::get_startTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                             "get_startTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::ActionEvent::set_startTime(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(), "set_startTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionPhase UnityEngine::InputSystem::LowLevel::ActionEvent::get_phase() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                             "get_phase", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionPhase, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::ActionEvent::set_phase(::UnityEngine::InputSystem::InputActionPhase value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(), "set_phase", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionPhase>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::cordl_internals::Ptr<uint8_t> UnityEngine::InputSystem::LowLevel::ActionEvent::get_valueData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                             "get_valueData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<uint8_t>, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::LowLevel::ActionEvent::get_valueSizeInBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                             "get_valueSizeInBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::LowLevel::ActionEvent::get_stateIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                             "get_stateIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::ActionEvent::set_stateIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(), "set_stateIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::LowLevel::ActionEvent::get_controlIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                             "get_controlIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::ActionEvent::set_controlIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(), "set_controlIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::LowLevel::ActionEvent::get_bindingIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                             "get_bindingIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::ActionEvent::set_bindingIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(), "set_bindingIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::LowLevel::ActionEvent::get_interactionIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                             "get_interactionIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::ActionEvent::set_interactionIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(), "set_interactionIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::LowLevel::ActionEvent::ToEventPtr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                             "ToEventPtr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventPtr, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::ActionEvent::get_typeStatic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(),
                                                                             "get_typeStatic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::LowLevel::ActionEvent::GetEventSizeWithValueSize(int32_t valueSizeInBytes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(), "GetEventSizeWithValueSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, valueSizeInBytes);
}
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> UnityEngine::InputSystem::LowLevel::ActionEvent::From(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::ActionEvent>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>, false>(nullptr, ___internal_method, ptr);
}
// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ControlIndex", ty: "uint16_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BindingIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InteractionIndex", ty: "uint16_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_StateIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "m_StartTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ValueData", ty:
// "::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::ActionEvent::ActionEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, uint16_t m_ControlIndex, uint16_t m_BindingIndex,
                                                                         uint16_t m_InteractionIndex, uint8_t m_StateIndex, uint8_t m_Phase, double_t m_StartTime,
                                                                         ::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer m_ValueData) noexcept {
  this->baseEvent = baseEvent;
  this->m_ControlIndex = m_ControlIndex;
  this->m_BindingIndex = m_BindingIndex;
  this->m_InteractionIndex = m_InteractionIndex;
  this->m_StateIndex = m_StateIndex;
  this->m_Phase = m_Phase;
  this->m_StartTime = m_StartTime;
  this->m_ValueData = m_ValueData;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::ActionEvent::ActionEvent() {}
