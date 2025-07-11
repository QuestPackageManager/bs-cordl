#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/StateEvent.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__StateEvent_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__StateEvent_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::StateEvent__stateData_e__FixedBuffer::StateEvent__stateData_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::StateEvent__stateData_e__FixedBuffer::StateEvent__stateData_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.get_stateSizeInBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::StateEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::StateEvent::get_stateSizeInBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x460bb44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                                                                               "get_stateSizeInBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.get_state
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (::UnityEngine::InputSystem::LowLevel::StateEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::StateEvent::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4610174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                                                                               "get_state", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.ToEventPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (::UnityEngine::InputSystem::LowLevel::StateEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::StateEvent::ToEventPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x461017c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                                                                               "ToEventPtr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.get_typeStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::StateEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::StateEvent::get_typeStatic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4610180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                                                                               "get_typeStatic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.From
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::StateEvent> (*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::LowLevel::StateEvent::From)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x460ba20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.FromUnchecked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::StateEvent> (*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::LowLevel::StateEvent::FromUnchecked)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x460b87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(), "FromUnchecked", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.From
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(
    ::UnityEngine::InputSystem::InputDevice*, ::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>, ::Unity::Collections::Allocator)>(
    &::UnityEngine::InputSystem::LowLevel::StateEvent::From)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x461018c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.FromDefaultStateFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(
    ::UnityEngine::InputSystem::InputDevice*, ::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>, ::Unity::Collections::Allocator)>(
    &::UnityEngine::InputSystem::LowLevel::StateEvent::FromDefaultStateFor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46104c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(), "FromDefaultStateFor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.From
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(
    ::UnityEngine::InputSystem::InputDevice*, ::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>, ::Unity::Collections::Allocator, bool)>(
    &::UnityEngine::InputSystem::LowLevel::StateEvent::From)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x4610194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_get_baseEvent() {
  return this->___baseEvent;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_get_baseEvent() const {
  return this->___baseEvent;
}
constexpr void UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value) {
  this->___baseEvent = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC& UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_get_stateFormat() {
  return this->___stateFormat;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_get_stateFormat() const {
  return this->___stateFormat;
}
constexpr void UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC value) {
  this->___stateFormat = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::StateEvent__stateData_e__FixedBuffer& UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_get_stateData() {
  return this->___stateData;
}
constexpr ::UnityEngine::InputSystem::LowLevel::StateEvent__stateData_e__FixedBuffer const& UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_get_stateData() const {
  return this->___stateData;
}
constexpr void UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_set_stateData(::UnityEngine::InputSystem::LowLevel::StateEvent__stateData_e__FixedBuffer value) {
  this->___stateData = value;
}
inline uint32_t UnityEngine::InputSystem::LowLevel::StateEvent::get_stateSizeInBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                                                                             "get_stateSizeInBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::LowLevel::StateEvent::get_state() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                                                                             "get_state", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::LowLevel::StateEvent::ToEventPtr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                                                                             "ToEventPtr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventPtr, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::StateEvent::get_typeStatic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(),
                                                                             "get_typeStatic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
template <typename TState> inline TState UnityEngine::InputSystem::LowLevel::StateEvent::GetState() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(), "GetState",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() }));
  return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method);
}
template <typename TState> inline TState UnityEngine::InputSystem::LowLevel::StateEvent::GetState(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(), "GetState",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() }));
  return ::cordl_internals::RunMethodRethrow<TState, false>(nullptr, ___internal_method, ptr);
}
template <typename TState> inline int32_t UnityEngine::InputSystem::LowLevel::StateEvent::GetEventSizeWithPayload() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(), "GetEventSizeWithPayload",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::StateEvent> UnityEngine::InputSystem::LowLevel::StateEvent::From(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::StateEvent>, false>(nullptr, ___internal_method, ptr);
}
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::StateEvent> UnityEngine::InputSystem::LowLevel::StateEvent::FromUnchecked(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(), "FromUnchecked", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::StateEvent>, false>(nullptr, ___internal_method, ptr);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::InputSystem::LowLevel::StateEvent::From(::UnityEngine::InputSystem::InputDevice* device,
                                                                                                         ::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr,
                                                                                                         ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(nullptr, ___internal_method, device, eventPtr, allocator);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::InputSystem::LowLevel::StateEvent::FromDefaultStateFor(::UnityEngine::InputSystem::InputDevice* device,
                                                                                                                        ::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr,
                                                                                                                        ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(), "FromDefaultStateFor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(nullptr, ___internal_method, device, eventPtr, allocator);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::InputSystem::LowLevel::StateEvent::From(::UnityEngine::InputSystem::InputDevice* device,
                                                                                                         ::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr,
                                                                                                         ::Unity::Collections::Allocator allocator, bool useDefaultState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::StateEvent>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(nullptr, ___internal_method, device, eventPtr, allocator, useDefaultState);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::StateEvent::operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo* UnityEngine::InputSystem::LowLevel::StateEvent::i___UnityEngine__InputSystem__LowLevel__IInputEventTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "stateFormat", ty:
// "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: Some("{}") }, CppParam { name: "stateData", ty:
// "::UnityEngine::InputSystem::LowLevel::StateEvent__stateData_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::StateEvent::StateEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, ::UnityEngine::InputSystem::Utilities::FourCC stateFormat,
                                                                       ::UnityEngine::InputSystem::LowLevel::StateEvent__stateData_e__FixedBuffer stateData) noexcept {
  this->baseEvent = baseEvent;
  this->stateFormat = stateFormat;
  this->stateData = stateData;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::StateEvent::StateEvent() {}
