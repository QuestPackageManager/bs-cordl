#pragma once
#include "UnityEngine/InputSystem/Controls/zzzz__TouchControl_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Pointer_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateCallbackReceiver_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IEventMerger_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__ICustomDeviceReset_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.get_primaryTouch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::TouchControl* (::UnityEngine::InputSystem::Touchscreen::*)()>(
    &::UnityEngine::InputSystem::Touchscreen::get_primaryTouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa93a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                                                               "get_primaryTouch", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.set_primaryTouch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::Controls::TouchControl*)>(
    &::UnityEngine::InputSystem::Touchscreen::set_primaryTouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa93ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "set_primaryTouch", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::TouchControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.get_touches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> (
    ::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::get_touches)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aa93b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "get_touches",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.set_touches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>)>(&::UnityEngine::InputSystem::Touchscreen::set_touches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa93c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "set_touches", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.get_touchControlArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*, ::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*> (::UnityEngine::InputSystem::Touchscreen::*)()>(
        &::UnityEngine::InputSystem::Touchscreen::get_touchControlArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa93c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                                                               "get_touchControlArray", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.set_touchControlArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)(
    ::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*, ::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*>)>(&::UnityEngine::InputSystem::Touchscreen::set_touchControlArray)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2aa93d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "set_touchControlArray", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*, ::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.get_current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Touchscreen* (*)()>(&::UnityEngine::InputSystem::Touchscreen::get_current)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2aa9444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "get_current",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.set_current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Touchscreen*)>(&::UnityEngine::InputSystem::Touchscreen::set_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2aa948c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "set_current", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.MakeCurrent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::MakeCurrent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2aa94d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.OnRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::OnRemoved)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2aa952c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.FinishSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::FinishSetup)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x2aa95b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.OnNextUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::OnNextUpdate)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x2aa9964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "OnNextUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.OnStateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::Touchscreen::OnStateEvent)> {
  constexpr static std::size_t size = 0x664;
  constexpr static std::size_t addrs = 0x2aa9c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "OnStateEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(
    &::UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2aaa36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                                 "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2aaa370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ByRef<uint32_t>)>(
        &::UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x2aaa374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                                 "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(
    &::UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x2aaa5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                                 "UnityEngine.InputSystem.LowLevel.ICustomDeviceReset.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.MergeForward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::Touchscreen::MergeForward)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2aaa9cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "MergeForward", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
        &::UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aaab3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                    "UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.TriggerTap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::InputSystem::Controls::TouchControl*, ByRef<::UnityEngine::InputSystem::LowLevel::TouchState>, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
        &::UnityEngine::InputSystem::Touchscreen::TriggerTap)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2aaa2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "TriggerTap", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::TouchControl*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::TouchState>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aaab48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
constexpr UnityEngine::InputSystem::Touchscreen::operator ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IEventMerger"
constexpr UnityEngine::InputSystem::Touchscreen::operator ::UnityEngine::InputSystem::LowLevel::IEventMerger*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IEventMerger*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset"
constexpr UnityEngine::InputSystem::Touchscreen::operator ::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::InputSystem::Controls::TouchControl*& UnityEngine::InputSystem::Touchscreen::__get__primaryTouch_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryTouch_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::TouchControl*> const& UnityEngine::InputSystem::Touchscreen::__get__primaryTouch_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryTouch_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Touchscreen::__set__primaryTouch_k__BackingField(::UnityEngine::InputSystem::Controls::TouchControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____primaryTouch_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>& UnityEngine::InputSystem::Touchscreen::__get__touches_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touches_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> const&
UnityEngine::InputSystem::Touchscreen::__get__touches_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touches_k__BackingField;
}
constexpr void
UnityEngine::InputSystem::Touchscreen::__set__touches_k__BackingField(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____touches_k__BackingField = value;
}
inline void UnityEngine::InputSystem::Touchscreen::setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Touchscreen* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Touchscreen*, "<current>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get>(
      std::forward<::UnityEngine::InputSystem::Touchscreen*>(value));
}
inline ::UnityEngine::InputSystem::Touchscreen* UnityEngine::InputSystem::Touchscreen::getStaticF__current_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Touchscreen*, "<current>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get>();
}
inline void UnityEngine::InputSystem::Touchscreen::setStaticF_s_TapTime(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_TapTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get>(std::forward<float_t>(value));
}
inline float_t UnityEngine::InputSystem::Touchscreen::getStaticF_s_TapTime() {
  return ::cordl_internals::getStaticField<float_t, "s_TapTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get>();
}
inline void UnityEngine::InputSystem::Touchscreen::setStaticF_s_TapDelayTime(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_TapDelayTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get>(std::forward<float_t>(value));
}
inline float_t UnityEngine::InputSystem::Touchscreen::getStaticF_s_TapDelayTime() {
  return ::cordl_internals::getStaticField<float_t, "s_TapDelayTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get>();
}
inline void UnityEngine::InputSystem::Touchscreen::setStaticF_s_TapRadiusSquared(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_TapRadiusSquared", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get>(std::forward<float_t>(value));
}
inline float_t UnityEngine::InputSystem::Touchscreen::getStaticF_s_TapRadiusSquared() {
  return ::cordl_internals::getStaticField<float_t, "s_TapRadiusSquared", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get>();
}
inline ::UnityEngine::InputSystem::Controls::TouchControl* UnityEngine::InputSystem::Touchscreen::get_primaryTouch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                                                             "get_primaryTouch", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchControl*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::set_primaryTouch(::UnityEngine::InputSystem::Controls::TouchControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "set_primaryTouch", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::TouchControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> UnityEngine::InputSystem::Touchscreen::get_touches() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "get_touches",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::set_touches(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "set_touches", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*, ::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*> UnityEngine::InputSystem::Touchscreen::get_touchControlArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                                                             "get_touchControlArray", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*, ::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*>, false>(this,
                                                                                                                                                                                  ___internal_method);
}
inline void
UnityEngine::InputSystem::Touchscreen::set_touchControlArray(::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*, ::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "set_touchControlArray", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*, ::Array<::UnityEngine::InputSystem::Controls::TouchControl*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Touchscreen* UnityEngine::InputSystem::Touchscreen::get_current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "get_current",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Touchscreen*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::set_current(::UnityEngine::InputSystem::Touchscreen* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "set_current", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Touchscreen*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Touchscreen::MakeCurrent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "MakeCurrent",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::OnRemoved() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "OnRemoved",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::FinishSetup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "FinishSetup",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::OnNextUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "OnNextUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "OnStateEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventPtr);
}
inline void UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                               "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventPtr);
}
inline bool UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* control,
                                                                                                                                       ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                                                                                                                       ByRef<uint32_t> offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                               "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, control, eventPtr, offset);
}
inline void UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                               "UnityEngine.InputSystem.LowLevel.ICustomDeviceReset.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Touchscreen::MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "MergeForward", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, currentEventPtr, nextEventPtr);
}
inline bool UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr,
                                                                                                              ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(),
                                               "UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, currentEventPtr, nextEventPtr);
}
inline void UnityEngine::InputSystem::Touchscreen::TriggerTap(::UnityEngine::InputSystem::Controls::TouchControl* control, ByRef<::UnityEngine::InputSystem::LowLevel::TouchState> state,
                                                              ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), "TriggerTap", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::TouchControl*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::TouchState>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, state, eventPtr);
}
inline ::UnityEngine::InputSystem::Touchscreen* UnityEngine::InputSystem::Touchscreen::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Touchscreen*>());
}
inline void UnityEngine::InputSystem::Touchscreen::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Touchscreen*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Touchscreen::Touchscreen() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
