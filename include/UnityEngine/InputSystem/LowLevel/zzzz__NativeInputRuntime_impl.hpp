#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/NativeInputRuntime.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputRuntime_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__NativeInputRuntime_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateDelegate_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__NativeInputRuntime_def.hpp"
#include "UnityEngine/zzzz__ScreenOrientation_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputEventBuffer_def.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputUpdateType_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x461e850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0._set_onBeforeUpdate_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0::*)(
    ::UnityEngineInternal::Input::NativeInputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0::_set_onBeforeUpdate_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x461efd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0*>::get(),
                                    "<set_onBeforeUpdate>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*& UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* const&
UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void
UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0::__cordl_internal_set_value(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0::_set_onBeforeUpdate_b__0(::UnityEngineInternal::Input::NativeInputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0*>::get(),
                                  "<set_onBeforeUpdate>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateType);
}
inline ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0* UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass10_0::NativeInputRuntime___c__DisplayClass10_0() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x461e96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0._set_onShouldRunUpdate_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0::*)(
    ::UnityEngineInternal::Input::NativeInputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0::_set_onShouldRunUpdate_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x461eff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0*>::get(),
                                    "<set_onShouldRunUpdate>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*& UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* const&
UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void
UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0::__cordl_internal_set_value(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0::_set_onShouldRunUpdate_b__0(::UnityEngineInternal::Input::NativeInputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0*>::get(),
                                  "<set_onShouldRunUpdate>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, updateType);
}
inline ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0* UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass13_0::NativeInputRuntime___c__DisplayClass13_0() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x461e734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0._set_onUpdate_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0::*)(
    ::UnityEngineInternal::Input::NativeInputUpdateType, ::cordl_internals::Ptr<::UnityEngineInternal::Input::NativeInputEventBuffer>)>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0::_set_onUpdate_b__0)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x461f01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0*>::get(), "<set_onUpdate>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngineInternal::Input::NativeInputEventBuffer>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*& UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* const& UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0::__cordl_internal_set_value(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0::_set_onUpdate_b__0(::UnityEngineInternal::Input::NativeInputUpdateType updateType,
                                                                                                ::cordl_internals::Ptr<::UnityEngineInternal::Input::NativeInputEventBuffer> eventBufferPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0*>::get(), "<set_onUpdate>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngineInternal::Input::NativeInputEventBuffer>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateType, eventBufferPtr);
}
inline ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0* UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime___c__DisplayClass7_0::NativeInputRuntime___c__DisplayClass7_0() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.AllocateDeviceId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::AllocateDeviceId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x461e44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "AllocateDeviceId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(
    ::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::Update)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x461e49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.QueueEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(
    ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::QueueEvent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x461e4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "QueueEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.DeviceCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(
    int32_t, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::DeviceCommand)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x461e560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "DeviceCommand", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_onUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* (
    ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x461e620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "get_onUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.set_onUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(
    ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onUpdate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x461e628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "set_onUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_onBeforeUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* (
    ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onBeforeUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x461e73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "get_onBeforeUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.set_onBeforeUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(
    ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onBeforeUpdate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x461e744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "set_onBeforeUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_onShouldRunUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* (
    ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onShouldRunUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x461e858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "get_onShouldRunUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.set_onShouldRunUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(
    ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onShouldRunUpdate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x461e860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "set_onShouldRunUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_onDeviceDiscovered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_2<int32_t, ::StringW>* (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onDeviceDiscovered)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x461e974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "get_onDeviceDiscovered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.set_onDeviceDiscovered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(::System::Action_2<int32_t, ::StringW>*)>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onDeviceDiscovered)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x461e9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "set_onDeviceDiscovered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<int32_t, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_onShutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onShutdown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x461ea1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "get_onShutdown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.set_onShutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(::System::Action*)>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onShutdown)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x461ea24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "set_onShutdown",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_onPlayerFocusChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<bool>* (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onPlayerFocusChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x461eb2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "get_onPlayerFocusChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.set_onPlayerFocusChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(::System::Action_1<bool>*)>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onPlayerFocusChanged)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x461eb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "set_onPlayerFocusChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_isPlayerFocused
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_isPlayerFocused)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x461ec3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "get_isPlayerFocused", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_pollingFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_pollingFrequency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x461ec8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "get_pollingFrequency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.set_pollingFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(float_t)>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_pollingFrequency)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x461ec94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "set_pollingFrequency",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_currentTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_currentTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x461ecfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "get_currentTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_currentTimeForFixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_currentTimeForFixedUpdate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x461ed4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "get_currentTimeForFixedUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_currentTimeOffsetToRealtimeSinceStartup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_currentTimeOffsetToRealtimeSinceStartup)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x461ed78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                 "get_currentTimeOffsetToRealtimeSinceStartup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_unscaledGameTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_unscaledGameTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x461edc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "get_unscaledGameTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_runInBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_runInBackground)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x461edd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "get_runInBackground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.set_runInBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(bool)>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_runInBackground)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x461ee40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "set_runInBackground",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.OnShutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::OnShutdown)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x461ee4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "OnShutdown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.OnWantsToShutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::OnWantsToShutdown)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x461ee70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "OnWantsToShutdown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.OnFocusChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(bool)>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::OnFocusChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x461eeb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "OnFocusChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_screenSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_screenSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x461eed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "get_screenSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_screenOrientation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ScreenOrientation (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_screenOrientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x461ef00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "get_screenOrientation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_isInBatchMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_isInBatchMode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x461ef08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "get_isInBatchMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.RegisterAnalyticsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(::StringW, int32_t, int32_t)>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::RegisterAnalyticsEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x461ef58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "RegisterAnalyticsEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.SendAnalyticsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(::StringW, ::System::Object*)>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::SendAnalyticsEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x461ef5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               "SendAnalyticsEvent", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(
    &::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x461ef60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_get_m_RunInBackground() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RunInBackground;
}
constexpr bool const& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_get_m_RunInBackground() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RunInBackground;
}
constexpr void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_set_m_RunInBackground(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RunInBackground = value;
}
constexpr ::System::Action*& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_get_m_ShutdownMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShutdownMethod;
}
constexpr ::System::Action* const& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_get_m_ShutdownMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShutdownMethod;
}
constexpr void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_set_m_ShutdownMethod(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShutdownMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_get_m_OnUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnUpdate;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* const& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_get_m_OnUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnUpdate;
}
constexpr void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_set_m_OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnUpdate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_get_m_OnBeforeUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnBeforeUpdate;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* const& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_get_m_OnBeforeUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnBeforeUpdate;
}
constexpr void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_set_m_OnBeforeUpdate(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnBeforeUpdate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_get_m_OnShouldRunUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnShouldRunUpdate;
}
constexpr ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* const&
UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_get_m_OnShouldRunUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnShouldRunUpdate;
}
constexpr void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_set_m_OnShouldRunUpdate(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnShouldRunUpdate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_get_m_PollingFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PollingFrequency;
}
constexpr float_t const& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_get_m_PollingFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PollingFrequency;
}
constexpr void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_set_m_PollingFrequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PollingFrequency = value;
}
constexpr bool& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_get_m_DidCallOnShutdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DidCallOnShutdown;
}
constexpr bool const& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_get_m_DidCallOnShutdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DidCallOnShutdown;
}
constexpr void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_set_m_DidCallOnShutdown(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DidCallOnShutdown = value;
}
constexpr ::System::Action_1<bool>*& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_get_m_FocusChangedMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FocusChangedMethod;
}
constexpr ::System::Action_1<bool>* const& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_get_m_FocusChangedMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FocusChangedMethod;
}
constexpr void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__cordl_internal_set_m_FocusChangedMethod(::System::Action_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FocusChangedMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::setStaticF_instance(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*, "instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get>(
      std::forward<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>(value));
}
inline ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*, "instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get>();
}
inline int32_t UnityEngine::InputSystem::LowLevel::NativeInputRuntime::AllocateDeviceId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "AllocateDeviceId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateType);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::QueueEvent(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> ptr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "QueueEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr);
}
inline int64_t UnityEngine::InputSystem::LowLevel::NativeInputRuntime::DeviceCommand(int32_t deviceId, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> commandPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "DeviceCommand", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, deviceId, commandPtr);
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "get_onUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "set_onUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onBeforeUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "get_onBeforeUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onBeforeUpdate(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "set_onBeforeUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onShouldRunUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "get_onShouldRunUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onShouldRunUpdate(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "set_onShouldRunUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Action_2<int32_t, ::StringW>* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onDeviceDiscovered() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "get_onDeviceDiscovered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<int32_t, ::StringW>*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onDeviceDiscovered(::System::Action_2<int32_t, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "set_onDeviceDiscovered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<int32_t, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Action* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onShutdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "get_onShutdown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onShutdown(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "set_onShutdown",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Action_1<bool>* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onPlayerFocusChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "get_onPlayerFocusChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<bool>*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onPlayerFocusChanged(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "set_onPlayerFocusChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_isPlayerFocused() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "get_isPlayerFocused", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_pollingFrequency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "get_pollingFrequency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_pollingFrequency(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "set_pollingFrequency",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_currentTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "get_currentTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_currentTimeForFixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "get_currentTimeForFixedUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_currentTimeOffsetToRealtimeSinceStartup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                               "get_currentTimeOffsetToRealtimeSinceStartup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_unscaledGameTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "get_unscaledGameTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_runInBackground() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "get_runInBackground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_runInBackground(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "set_runInBackground",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::OnShutdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "OnShutdown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::NativeInputRuntime::OnWantsToShutdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "OnWantsToShutdown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::OnFocusChanged(bool focus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "OnFocusChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, focus);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_screenSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "get_screenSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline ::UnityEngine::ScreenOrientation UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_screenOrientation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "get_screenOrientation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ScreenOrientation, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_isInBatchMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             "get_isInBatchMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::RegisterAnalyticsEvent(::StringW name, int32_t maxPerHour, int32_t maxPropertiesPerEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "RegisterAnalyticsEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, maxPerHour, maxPropertiesPerEvent);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::SendAnalyticsEvent(::StringW name, ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(), "SendAnalyticsEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, data);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>());
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputRuntime"
constexpr UnityEngine::InputSystem::LowLevel::NativeInputRuntime::operator ::UnityEngine::InputSystem::LowLevel::IInputRuntime*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputRuntime"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputRuntime* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::i___UnityEngine__InputSystem__LowLevel__IInputRuntime() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::NativeInputRuntime() {}
