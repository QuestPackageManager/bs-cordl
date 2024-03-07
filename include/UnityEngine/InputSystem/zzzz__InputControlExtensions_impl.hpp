#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBlock_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate::__InputControlExtensions__Enumerate(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate::__InputControlExtensions__Enumerate() {}
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate UnityEngine::InputSystem::__InputControlExtensions__Enumerate::IgnoreControlsInDefaultState{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate UnityEngine::InputSystem::__InputControlExtensions__Enumerate::IgnoreControlsInCurrentState{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate UnityEngine::InputSystem::__InputControlExtensions__Enumerate::IncludeSyntheticControls{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate UnityEngine::InputSystem::__InputControlExtensions__Enumerate::IncludeNoisyControls{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate UnityEngine::InputSystem::__InputControlExtensions__Enumerate::IncludeNonLeafControls{ static_cast<int32_t>(0x10) };
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection.get_eventPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (
    ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::*)()>(&::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::get_eventPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2baeab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection>::get(),
                                                 "get_eventPtr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator (
    ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::*)()>(&::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bae3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection>::get(),
                                                 "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* (::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::*)()>(
        &::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2baec1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection>::get(),
        "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::*)()>(
        &::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2baecc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*
UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputControl__() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::get_eventPtr() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection>::get(),
                                               "get_eventPtr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventPtr, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection>::get(),
                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*
UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection>::get(),
      "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_EventPtr", ty:
// "::UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::UnityEngine::InputSystem::__InputControlExtensions__Enumerate",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MagnitudeThreshold", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::__InputControlExtensions__InputEventControlCollection(
    ::UnityEngine::InputSystem::InputDevice* m_Device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr m_EventPtr, ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate m_Flags,
    float_t m_MagnitudeThreshold) noexcept {
  this->m_Device = m_Device;
  this->m_EventPtr = m_EventPtr;
  this->m_Flags = m_Flags;
  this->m_MagnitudeThreshold = m_MagnitudeThreshold;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection::__InputControlExtensions__InputEventControlCollection() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate, float_t)>(
    &::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2baeac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlExtensions__Enumerate>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator.CheckDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::*)(uint32_t)>(
    &::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::CheckDefault)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2baf1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator>::get(), "CheckDefault",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator.CheckCurrent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::*)(uint32_t)>(
    &::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::CheckCurrent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2baf200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator>::get(), "CheckCurrent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::*)()>(
    &::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x2bae3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::*)()>(
    &::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::Reset)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x2baed64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator>::get(),
                                                 "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::*)()>(
    &::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2baf23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator>::get(),
                                                 "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (
    ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::*)()>(&::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2baf244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator>::get(),
                                                 "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::*)()>(
    &::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2baf24c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*
UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputControl__() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @param magnitudeThreshold: float_t (default: 0.0)
inline void UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::_ctor(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                                                                                   ::UnityEngine::InputSystem::InputDevice* device,
                                                                                                   ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate flags, float_t magnitudeThreshold) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlExtensions__Enumerate>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventPtr, device, flags, magnitudeThreshold);
}
inline bool UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::CheckDefault(uint32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator>::get(), "CheckDefault",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, numBits);
}
inline bool UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::CheckCurrent(uint32_t numBits) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator>::get(), "CheckCurrent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, numBits);
}
inline bool UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator>::get(),
                                               "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator>::get(),
                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator>::get(),
                                               "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Flags", ty: "::UnityEngine::InputSystem::__InputControlExtensions__Enumerate", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Device", ty:
// "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_StateOffsetToControlIndex", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "m_StateOffsetToControlIndexLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllControls", ty:
// "::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_DefaultState", ty:
// "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_CurrentState", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "m_NoiseMask", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_EventPtr", ty:
// "::UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentControl", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "m_CurrentIndexInStateOffsetToControlIndexMap", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_CurrentControlStateBitOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EventState", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "m_CurrentBitOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EndBitOffset", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_MagnitudeThreshold", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::__InputControlExtensions__InputEventControlEnumerator(
    ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate m_Flags, ::UnityEngine::InputSystem::InputDevice* m_Device, ::ArrayW<uint32_t, ::Array<uint32_t>*> m_StateOffsetToControlIndex,
    int32_t m_StateOffsetToControlIndexLength, ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> m_AllControls,
    ::cordl_internals::Ptr<uint8_t> m_DefaultState, ::cordl_internals::Ptr<uint8_t> m_CurrentState, ::cordl_internals::Ptr<uint8_t> m_NoiseMask,
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr m_EventPtr, ::UnityEngine::InputSystem::InputControl* m_CurrentControl, int32_t m_CurrentIndexInStateOffsetToControlIndexMap,
    uint32_t m_CurrentControlStateBitOffset, ::cordl_internals::Ptr<uint8_t> m_EventState, uint32_t m_CurrentBitOffset, uint32_t m_EndBitOffset, float_t m_MagnitudeThreshold) noexcept {
  this->m_Flags = m_Flags;
  this->m_Device = m_Device;
  this->m_StateOffsetToControlIndex = m_StateOffsetToControlIndex;
  this->m_StateOffsetToControlIndexLength = m_StateOffsetToControlIndexLength;
  this->m_AllControls = m_AllControls;
  this->m_DefaultState = m_DefaultState;
  this->m_CurrentState = m_CurrentState;
  this->m_NoiseMask = m_NoiseMask;
  this->m_EventPtr = m_EventPtr;
  this->m_CurrentControl = m_CurrentControl;
  this->m_CurrentIndexInStateOffsetToControlIndexMap = m_CurrentIndexInStateOffsetToControlIndexMap;
  this->m_CurrentControlStateBitOffset = m_CurrentControlStateBitOffset;
  this->m_EventState = m_EventState;
  this->m_CurrentBitOffset = m_CurrentBitOffset;
  this->m_EndBitOffset = m_EndBitOffset;
  this->m_MagnitudeThreshold = m_MagnitudeThreshold;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator::__InputControlExtensions__InputEventControlEnumerator() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.get_control
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)()>(&::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::get_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2baf254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "get_control",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.set_control
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(
    ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::set_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2baf25c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "set_control", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.At
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(::UnityEngine::InputSystem::InputDevice*, int32_t)>(
    &::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::At)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2baf264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "At", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.WithParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithParent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2baf2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithParent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.WithName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(::StringW)>(&::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2baf30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.WithDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(::StringW)>(&::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithDisplayName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2baf354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithDisplayName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.WithShortDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(::StringW)>(&::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithShortDisplayName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2baf3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithShortDisplayName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.WithLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithLayout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2baf3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithLayout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.WithUsages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(int32_t, int32_t)>(&::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithUsages)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2baf414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithUsages", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.WithAliases
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(int32_t, int32_t)>(&::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithAliases)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2baf434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithAliases", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.WithChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(int32_t, int32_t)>(&::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithChildren)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2baf454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithChildren", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.WithStateBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(::UnityEngine::InputSystem::LowLevel::InputStateBlock)>(
    &::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithStateBlock)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2baf474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithStateBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateBlock>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.WithDefaultState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(
    &::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithDefaultState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2baf494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithDefaultState",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.WithMinAndMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue, ::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(
    &::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithMinAndMax)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2baf4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithMinAndMax", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.IsNoisy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(bool)>(&::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::IsNoisy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2baf518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "IsNoisy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.IsSynthetic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(bool)>(&::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::IsSynthetic)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2baf540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "IsSynthetic",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.DontReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(bool)>(&::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::DontReset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2baf574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "DontReset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.IsButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)(bool)>(&::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::IsButton)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2baf5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "IsButton",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder.Finish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::*)()>(
    &::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::Finish)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2baf610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "Finish",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::get_control() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "get_control",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::set_control(::UnityEngine::InputSystem::InputControl* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "set_control", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::At(::UnityEngine::InputSystem::InputDevice* device,
                                                                                                                                                   int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "At", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, device, index);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder
UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithParent(::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithParent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, parent);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithDisplayName(::StringW displayName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithDisplayName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, displayName);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithShortDisplayName(::StringW shortDisplayName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithShortDisplayName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, shortDisplayName);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder
UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithLayout(::UnityEngine::InputSystem::Utilities::InternedString layout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithLayout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, layout);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithUsages(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithUsages", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, startIndex, count);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithAliases(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithAliases", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, startIndex, count);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithChildren(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithChildren", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, startIndex, count);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder
UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithStateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock stateBlock) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithStateBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateBlock>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, stateBlock);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder
UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithDefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithDefaultState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder
UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithMinAndMax(::UnityEngine::InputSystem::Utilities::PrimitiveValue min,
                                                                                  ::UnityEngine::InputSystem::Utilities::PrimitiveValue max) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithMinAndMax", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::PrimitiveValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, min, max);
}
template <typename TProcessor, typename TValue>
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::WithProcessor(TProcessor processor) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "WithProcessor",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TProcessor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TProcessor>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TProcessor>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, processor);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::IsNoisy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "IsNoisy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::IsSynthetic(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "IsSynthetic",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::DontReset(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "DontReset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::IsButton(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "IsButton",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::Finish() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder>::get(), "Finish",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_control_k__BackingField", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::__InputControlExtensions__ControlBuilder(::UnityEngine::InputSystem::InputControl* _control_k__BackingField) noexcept {
  this->_control_k__BackingField = _control_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder::__InputControlExtensions__ControlBuilder() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder.get_device
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::*)()>(
    &::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2baf634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "get_device",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder.set_device
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::*)(
    ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::set_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2baf63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "set_device", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder.WithName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::*)(::StringW)>(&::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2baf644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder.WithDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::*)(::StringW)>(&::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithDisplayName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2baf68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithDisplayName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder.WithShortDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::*)(::StringW)>(&::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithShortDisplayName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2baf6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithShortDisplayName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder.WithLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithLayout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2baf72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithLayout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder.WithChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::*)(int32_t, int32_t)>(&::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithChildren)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2baf74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithChildren", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder.WithStateBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::*)(::UnityEngine::InputSystem::LowLevel::InputStateBlock)>(
    &::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithStateBlock)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2baf76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithStateBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateBlock>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder.IsNoisy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::*)(bool)>(&::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::IsNoisy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2baf78c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "IsNoisy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder.WithControlUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::*)(int32_t, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithControlUsage)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2baf7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithControlUsage",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder.WithControlAlias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder (
    ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::*)(int32_t, ::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithControlAlias)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2baf858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithControlAlias",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder.WithStateOffsetToControlIndexMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder (::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::*)(::ArrayW<uint32_t, ::Array<uint32_t>*>)>(
        &::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithStateOffsetToControlIndexMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2baf898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithStateOffsetToControlIndexMap",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder.Finish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::*)()>(
    &::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::Finish)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2baf8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "Finish",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::get_device() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "get_device",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::set_device(::UnityEngine::InputSystem::InputDevice* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "set_device", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder, false>(this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithDisplayName(::StringW displayName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithDisplayName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder, false>(this, ___internal_method, displayName);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithShortDisplayName(::StringW shortDisplayName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithShortDisplayName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder, false>(this, ___internal_method, shortDisplayName);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder
UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithLayout(::UnityEngine::InputSystem::Utilities::InternedString layout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithLayout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder, false>(this, ___internal_method, layout);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithChildren(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithChildren", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder, false>(this, ___internal_method, startIndex, count);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder
UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithStateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock stateBlock) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithStateBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateBlock>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder, false>(this, ___internal_method, stateBlock);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::IsNoisy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "IsNoisy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder
UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithControlUsage(int32_t controlIndex, ::UnityEngine::InputSystem::Utilities::InternedString usage,
                                                                                    ::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithControlUsage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder, false>(this, ___internal_method, controlIndex, usage, control);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder
UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithControlAlias(int32_t controlIndex, ::UnityEngine::InputSystem::Utilities::InternedString alias) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithControlAlias", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder, false>(this, ___internal_method, controlIndex, alias);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder
UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::WithStateOffsetToControlIndexMap(::ArrayW<uint32_t, ::Array<uint32_t>*> map) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "WithStateOffsetToControlIndexMap",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder, false>(this, ___internal_method, map);
}
inline void UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::Finish() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder>::get(), "Finish",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_device_k__BackingField", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::__InputControlExtensions__DeviceBuilder(::UnityEngine::InputSystem::InputDevice* _device_k__BackingField) noexcept {
  this->_device_k__BackingField = _device_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder::__InputControlExtensions__DeviceBuilder() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::*)(int32_t)>(
    &::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2bae7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::*)()>(
    &::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2baf8dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::*)()>(
    &::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2baf900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::*)()>(
    &::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__m__Finally1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bafb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(),
                                                 "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::*)()>(
        &::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bafb98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(),
        "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControl>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::*)()>(
    &::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2bafba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::*)()>(
    &::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bafbe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* (::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::*)()>(
        &::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2bafbe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(),
        "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::*)()>(
        &::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bafc9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::operator ::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::InputSystem::InputControl*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*
UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputControl__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::operator ::System::Collections::Generic::IEnumerator_1<
    ::UnityEngine::InputSystem::InputControl*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*
UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputControl__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::InputSystem::InputControl*& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputControl*> const&
UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_set___2__current(::UnityEngine::InputSystem::InputControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get_eventPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventPtr;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get_eventPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventPtr;
}
constexpr void UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_set_eventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventPtr = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get___3__eventPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__eventPtr;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get___3__eventPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__eventPtr;
}
constexpr void UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_set___3__eventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__eventPtr = value;
}
constexpr float_t& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get_magnitude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___magnitude;
}
constexpr float_t const& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get_magnitude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___magnitude;
}
constexpr void UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_set_magnitude(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___magnitude = value;
}
constexpr float_t& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get___3__magnitude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__magnitude;
}
constexpr float_t const& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get___3__magnitude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__magnitude;
}
constexpr void UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_set___3__magnitude(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__magnitude = value;
}
constexpr bool& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get_buttonControlsOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonControlsOnly;
}
constexpr bool const& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get_buttonControlsOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonControlsOnly;
}
constexpr void UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_set_buttonControlsOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buttonControlsOnly = value;
}
constexpr bool& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get___3__buttonControlsOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__buttonControlsOnly;
}
constexpr bool const& UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get___3__buttonControlsOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__buttonControlsOnly;
}
constexpr void UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_set___3__buttonControlsOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__buttonControlsOnly = value;
}
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator&
UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator const&
UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__cordl_internal_set___7__wrap1(
    ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
inline ::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43* UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>(__1__state));
}
inline void UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(),
                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl*
UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(),
      "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControl>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*
UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(),
      "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43::__InputControlExtensions___GetAllButtonPresses_d__43() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.IsPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, float_t)>(
    &::UnityEngine::InputSystem::InputControlExtensions::IsPressed)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2bac8c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "IsPressed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.IsActuated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, float_t)>(
    &::UnityEngine::InputSystem::InputControlExtensions::IsActuated)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2baca08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "IsActuated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.ReadValueAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputControlExtensions::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2babf30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "ReadValueAsObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.ReadValueIntoBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::cordl_internals::Ptr<void>, int32_t)>(
    &::UnityEngine::InputSystem::InputControlExtensions::ReadValueIntoBuffer)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2bacb4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "ReadValueIntoBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.ReadDefaultValueAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputControlExtensions::ReadDefaultValueAsObject)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2bacc08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "ReadDefaultValueAsObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.ReadValueFromEventAsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
        &::UnityEngine::InputSystem::InputControlExtensions::ReadValueFromEventAsObject)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2baccb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "ReadValueFromEventAsObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.WriteValueFromObjectIntoEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr,
                                                                                           ::System::Object*)>(&::UnityEngine::InputSystem::InputControlExtensions::WriteValueFromObjectIntoEvent)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2bacdf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "WriteValueFromObjectIntoEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.WriteValueIntoState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2bace88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "WriteValueIntoState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CopyState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::cordl_internals::Ptr<void>, int32_t)>(
    &::UnityEngine::InputSystem::InputControlExtensions::CopyState)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2bad024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "CopyState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CheckStateIsAtDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefault)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2bacad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "CheckStateIsAtDefault", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CheckStateIsAtDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, ::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefault)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2bad18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "CheckStateIsAtDefault", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CheckStateIsAtDefaultIgnoringNoise
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefaultIgnoringNoise)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2bad320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "CheckStateIsAtDefaultIgnoringNoise",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CheckStateIsAtDefaultIgnoringNoise
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, ::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefaultIgnoringNoise)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2bad394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(),
                                                 "CheckStateIsAtDefaultIgnoringNoise", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CompareStateIgnoringNoise
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, ::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::InputControlExtensions::CompareStateIgnoringNoise)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2bad464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "CompareStateIgnoringNoise", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CompareState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, ::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<void>,
                                                                                           ::cordl_internals::Ptr<void>)>(&::UnityEngine::InputSystem::InputControlExtensions::CompareState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2bad26c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "CompareState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CompareState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, ::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::InputControlExtensions::CompareState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2bad550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "CompareState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.HasValueChangeInState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, ::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::InputControlExtensions::HasValueChangeInState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2bad604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "HasValueChangeInState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.HasValueChangeInEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::InputControlExtensions::HasValueChangeInEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2bad6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "HasValueChangeInEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.GetStatePtrFromStateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (*)(
    ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::InputControlExtensions::GetStatePtrFromStateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2bacd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "GetStatePtrFromStateEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.GetStatePtrFromStateEventUnchecked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::cordl_internals::Ptr<void> (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::Utilities::FourCC)>(
        &::UnityEngine::InputSystem::InputControlExtensions::GetStatePtrFromStateEventUnchecked)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x2bad798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(),
                                                 "GetStatePtrFromStateEventUnchecked", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.ResetToDefaultStateInEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::InputControlExtensions::ResetToDefaultStateInEvent)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2bada90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "ResetToDefaultStateInEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.AccumulateValueInEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::InputSystem::InputControl_1<float_t>*, ::cordl_internals::Ptr<void>, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
        &::UnityEngine::InputSystem::InputControlExtensions::AccumulateValueInEvent)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2badc44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "AccumulateValueInEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl_1<float_t>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.AccumulateValueInEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>*, ::cordl_internals::Ptr<void>, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
        &::UnityEngine::InputSystem::InputControlExtensions::AccumulateValueInEvent)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2badd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "AccumulateValueInEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.BuildPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::InputControl*, ::StringW, ::System::Text::StringBuilder*)>(
    &::UnityEngine::InputSystem::InputControlExtensions::BuildPath)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2bade48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "BuildPath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.EnumerateControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection (*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate, ::UnityEngine::InputSystem::InputDevice*, float_t)>(
    &::UnityEngine::InputSystem::InputControlExtensions::EnumerateControls)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2bae124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "EnumerateControls", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlExtensions__Enumerate>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.EnumerateChangedControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection (*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, float_t)>(&::UnityEngine::InputSystem::InputControlExtensions::EnumerateChangedControls)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2bae350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "EnumerateChangedControls", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.HasButtonPress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t, bool)>(
    &::UnityEngine::InputSystem::InputControlExtensions::HasButtonPress)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2bae388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "HasButtonPress", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.GetFirstButtonPressOrNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t, bool)>(
    &::UnityEngine::InputSystem::InputControlExtensions::GetFirstButtonPressOrNull)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2baafd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "GetFirstButtonPressOrNull", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.GetAllButtonPresses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t, bool)>(
        &::UnityEngine::InputSystem::InputControlExtensions::GetAllButtonPresses)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2bae70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "GetAllButtonPresses", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder (*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputControlExtensions::Setup)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2bae7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder (*)(
    ::UnityEngine::InputSystem::InputDevice*, int32_t, int32_t, int32_t)>(&::UnityEngine::InputSystem::InputControlExtensions::Setup)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2bae8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
template <typename TControl> inline TControl UnityEngine::InputSystem::InputControlExtensions::FindInParentChain(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "FindInParentChain",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() }));
  return ::cordl_internals::RunMethodRethrow<TControl, false>(nullptr, ___internal_method, control);
}
/// @param buttonPressPoint: float_t (default: 0.0)
inline bool UnityEngine::InputSystem::InputControlExtensions::IsPressed(::UnityEngine::InputSystem::InputControl* control, float_t buttonPressPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "IsPressed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, buttonPressPoint);
}
/// @param threshold: float_t (default: 0.0)
inline bool UnityEngine::InputSystem::InputControlExtensions::IsActuated(::UnityEngine::InputSystem::InputControl* control, float_t threshold) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "IsActuated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, threshold);
}
inline ::System::Object* UnityEngine::InputSystem::InputControlExtensions::ReadValueAsObject(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "ReadValueAsObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, control);
}
inline void UnityEngine::InputSystem::InputControlExtensions::ReadValueIntoBuffer(::UnityEngine::InputSystem::InputControl* control, ::cordl_internals::Ptr<void> buffer, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "ReadValueIntoBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, buffer, bufferSize);
}
inline ::System::Object* UnityEngine::InputSystem::InputControlExtensions::ReadDefaultValueAsObject(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "ReadDefaultValueAsObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, control);
}
template <typename TValue>
inline TValue UnityEngine::InputSystem::InputControlExtensions::ReadValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>* control,
                                                                                   ::UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "ReadValueFromEvent",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(nullptr, ___internal_method, control, inputEvent);
}
template <typename TValue>
inline bool UnityEngine::InputSystem::InputControlExtensions::ReadValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>* control,
                                                                                 ::UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent, ByRef<TValue> value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "ReadValueFromEvent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, inputEvent, value);
}
inline ::System::Object* UnityEngine::InputSystem::InputControlExtensions::ReadValueFromEventAsObject(::UnityEngine::InputSystem::InputControl* control,
                                                                                                      ::UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "ReadValueFromEventAsObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, control, inputEvent);
}
template <typename TValue>
inline TValue UnityEngine::InputSystem::InputControlExtensions::ReadUnprocessedValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>* control,
                                                                                              ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "ReadUnprocessedValueFromEvent",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(nullptr, ___internal_method, control, eventPtr);
}
template <typename TValue>
inline bool UnityEngine::InputSystem::InputControlExtensions::ReadUnprocessedValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>* control,
                                                                                            ::UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent, ByRef<TValue> value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "ReadUnprocessedValueFromEvent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, inputEvent, value);
}
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueFromObjectIntoEvent(::UnityEngine::InputSystem::InputControl* control,
                                                                                            ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "WriteValueFromObjectIntoEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, eventPtr, value);
}
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(::UnityEngine::InputSystem::InputControl* control, ::cordl_internals::Ptr<void> statePtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "WriteValueIntoState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, statePtr);
}
template <typename TValue>
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(::UnityEngine::InputSystem::InputControl* control, TValue value, ::cordl_internals::Ptr<void> statePtr) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "WriteValueIntoState",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, value, statePtr);
}
template <typename TValue>
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(::UnityEngine::InputSystem::InputControl_1<TValue>* control, TValue value, ::cordl_internals::Ptr<void> statePtr) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "WriteValueIntoState",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, value, statePtr);
}
template <typename TValue>
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(::UnityEngine::InputSystem::InputControl_1<TValue>* control, ::cordl_internals::Ptr<void> statePtr) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "WriteValueIntoState",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, statePtr);
}
template <typename TValue, typename TState>
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(::UnityEngine::InputSystem::InputControl_1<TValue>* control, TValue value, ByRef<TState> state) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "WriteValueIntoState",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TState>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, value, state);
}
template <typename TValue>
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoEvent(::UnityEngine::InputSystem::InputControl* control, TValue value,
                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "WriteValueIntoEvent",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, value, eventPtr);
}
template <typename TValue>
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoEvent(::UnityEngine::InputSystem::InputControl_1<TValue>* control, TValue value,
                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "WriteValueIntoEvent",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, value, eventPtr);
}
inline void UnityEngine::InputSystem::InputControlExtensions::CopyState(::UnityEngine::InputSystem::InputDevice* device, ::cordl_internals::Ptr<void> buffer, int32_t bufferSizeInBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "CopyState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, buffer, bufferSizeInBytes);
}
template <typename TState> inline void UnityEngine::InputSystem::InputControlExtensions::CopyState(::UnityEngine::InputSystem::InputDevice* device, ByRef<TState> state) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "CopyState",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TState>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, state);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefault(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "CheckStateIsAtDefault", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control);
}
/// @param maskPtr: ::cordl_internals::Ptr<void> (default: nullptr)
inline bool UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefault(::UnityEngine::InputSystem::InputControl* control, ::cordl_internals::Ptr<void> statePtr,
                                                                                    ::cordl_internals::Ptr<void> maskPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "CheckStateIsAtDefault", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, statePtr, maskPtr);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefaultIgnoringNoise(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "CheckStateIsAtDefaultIgnoringNoise",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefaultIgnoringNoise(::UnityEngine::InputSystem::InputControl* control, ::cordl_internals::Ptr<void> statePtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "CheckStateIsAtDefaultIgnoringNoise",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, statePtr);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CompareStateIgnoringNoise(::UnityEngine::InputSystem::InputControl* control, ::cordl_internals::Ptr<void> statePtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "CompareStateIgnoringNoise", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, statePtr);
}
/// @param maskPtr: ::cordl_internals::Ptr<void> (default: nullptr)
inline bool UnityEngine::InputSystem::InputControlExtensions::CompareState(::UnityEngine::InputSystem::InputControl* control, ::cordl_internals::Ptr<void> firstStatePtr,
                                                                           ::cordl_internals::Ptr<void> secondStatePtr, ::cordl_internals::Ptr<void> maskPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "CompareState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, firstStatePtr, secondStatePtr, maskPtr);
}
/// @param maskPtr: ::cordl_internals::Ptr<void> (default: nullptr)
inline bool UnityEngine::InputSystem::InputControlExtensions::CompareState(::UnityEngine::InputSystem::InputControl* control, ::cordl_internals::Ptr<void> statePtr,
                                                                           ::cordl_internals::Ptr<void> maskPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "CompareState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, statePtr, maskPtr);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::HasValueChangeInState(::UnityEngine::InputSystem::InputControl* control, ::cordl_internals::Ptr<void> statePtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "HasValueChangeInState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, statePtr);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::HasValueChangeInEvent(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "HasValueChangeInEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, eventPtr);
}
inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::InputControlExtensions::GetStatePtrFromStateEvent(::UnityEngine::InputSystem::InputControl* control,
                                                                                                                ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "GetStatePtrFromStateEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(nullptr, ___internal_method, control, eventPtr);
}
inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::InputControlExtensions::GetStatePtrFromStateEventUnchecked(::UnityEngine::InputSystem::InputControl* control,
                                                                                                                         ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                                                                                                         ::UnityEngine::InputSystem::Utilities::FourCC eventType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "GetStatePtrFromStateEventUnchecked",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::FourCC>::get() })));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(nullptr, ___internal_method, control, eventPtr, eventType);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::ResetToDefaultStateInEvent(::UnityEngine::InputSystem::InputControl* control,
                                                                                         ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "ResetToDefaultStateInEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, control, eventPtr);
}
/// @param time: double_t (default: -1.0)
template <typename TValue> inline void UnityEngine::InputSystem::InputControlExtensions::QueueValueChange(::UnityEngine::InputSystem::InputControl_1<TValue>* control, TValue value, double_t time) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "QueueValueChange",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, value, time);
}
inline void UnityEngine::InputSystem::InputControlExtensions::AccumulateValueInEvent(::UnityEngine::InputSystem::InputControl_1<float_t>* control, ::cordl_internals::Ptr<void> currentStatePtr,
                                                                                     ::UnityEngine::InputSystem::LowLevel::InputEventPtr newState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "AccumulateValueInEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl_1<float_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, currentStatePtr, newState);
}
inline void UnityEngine::InputSystem::InputControlExtensions::AccumulateValueInEvent(::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>* control,
                                                                                     ::cordl_internals::Ptr<void> currentStatePtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr newState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "AccumulateValueInEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, currentStatePtr, newState);
}
template <typename TControl>
inline void UnityEngine::InputSystem::InputControlExtensions::FindControlsRecursive(::UnityEngine::InputSystem::InputControl* parent, ::System::Collections::Generic::IList_1<TControl>* controls,
                                                                                    ::System::Func_2<TControl, bool>* predicate) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "FindControlsRecursive",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<TControl>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TControl, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parent, controls, predicate);
}
/// @param builder: ::System::Text::StringBuilder* (default: nullptr)
inline ::StringW UnityEngine::InputSystem::InputControlExtensions::BuildPath(::UnityEngine::InputSystem::InputControl* control, ::StringW deviceLayout, ::System::Text::StringBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "BuildPath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, control, deviceLayout, builder);
}
/// @param device: ::UnityEngine::InputSystem::InputDevice* (default: nullptr)
/// @param magnitudeThreshold: float_t (default: 0.0)
inline ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection
UnityEngine::InputSystem::InputControlExtensions::EnumerateControls(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate flags,
                                                                    ::UnityEngine::InputSystem::InputDevice* device, float_t magnitudeThreshold) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "EnumerateControls", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlExtensions__Enumerate>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection, false>(nullptr, ___internal_method, eventPtr, flags, device,
                                                                                                                                       magnitudeThreshold);
}
/// @param device: ::UnityEngine::InputSystem::InputDevice* (default: nullptr)
/// @param magnitudeThreshold: float_t (default: 0.0)
inline ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection
UnityEngine::InputSystem::InputControlExtensions::EnumerateChangedControls(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device,
                                                                           float_t magnitudeThreshold) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "EnumerateChangedControls", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection, false>(nullptr, ___internal_method, eventPtr, device,
                                                                                                                                       magnitudeThreshold);
}
/// @param magnitude: float_t (default: -1.0)
/// @param buttonControlsOnly: bool (default: true)
inline bool UnityEngine::InputSystem::InputControlExtensions::HasButtonPress(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, float_t magnitude, bool buttonControlsOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "HasButtonPress", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, eventPtr, magnitude, buttonControlsOnly);
}
/// @param magnitude: float_t (default: -1.0)
/// @param buttonControlsOnly: bool (default: true)
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControlExtensions::GetFirstButtonPressOrNull(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                                                                                                             float_t magnitude, bool buttonControlsOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "GetFirstButtonPressOrNull", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(nullptr, ___internal_method, eventPtr, magnitude, buttonControlsOnly);
}
/// @param magnitude: float_t (default: -1.0)
/// @param buttonControlsOnly: bool (default: true)
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*
UnityEngine::InputSystem::InputControlExtensions::GetAllButtonPresses(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, float_t magnitude, bool buttonControlsOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "GetAllButtonPresses", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*, false>(nullptr, ___internal_method, eventPtr, magnitude,
                                                                                                                                               buttonControlsOnly);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder UnityEngine::InputSystem::InputControlExtensions::Setup(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, false>(nullptr, ___internal_method, control);
}
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder UnityEngine::InputSystem::InputControlExtensions::Setup(::UnityEngine::InputSystem::InputDevice* device,
                                                                                                                                   int32_t controlCount, int32_t usageCount, int32_t aliasCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlExtensions*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder, false>(nullptr, ___internal_method, device, controlCount, usageCount, aliasCount);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControlExtensions::InputControlExtensions() {}
