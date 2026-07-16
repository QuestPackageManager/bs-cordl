#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
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
constexpr ::UnityEngine::InputSystem::InputControlExtensions_Enumerate::InputControlExtensions_Enumerate(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControlExtensions_Enumerate::InputControlExtensions_Enumerate() {}
constexpr ::UnityEngine::InputSystem::InputControlExtensions_Enumerate UnityEngine::InputSystem::InputControlExtensions_Enumerate::IgnoreControlsInDefaultState{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::InputControlExtensions_Enumerate UnityEngine::InputSystem::InputControlExtensions_Enumerate::IgnoreControlsInCurrentState{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::InputControlExtensions_Enumerate UnityEngine::InputSystem::InputControlExtensions_Enumerate::IncludeSyntheticControls{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::InputControlExtensions_Enumerate UnityEngine::InputSystem::InputControlExtensions_Enumerate::IncludeNoisyControls{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::InputControlExtensions_Enumerate UnityEngine::InputSystem::InputControlExtensions_Enumerate::IncludeNonLeafControls{ static_cast<int32_t>(0x10) };
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection.get_eventPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::get_eventPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6515128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection>(), { "get_eventPtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator (
    ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::*)()>(&::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6514a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* (::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::*)()>(
        &::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x65152f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection>(),
                                                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6515370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection>(),
                                                                                           { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::get_eventPtr() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection>(), { "get_eventPtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*
UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection>(),
                                                                                         { "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*
UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputControl__() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EventPtr", ty:
// "::UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::UnityEngine::InputSystem::InputControlExtensions_Enumerate",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MagnitudeThreshold", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::InputControlExtensions_InputEventControlCollection(
    ::UnityEngine::InputSystem::InputDevice* m_Device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr m_EventPtr, ::UnityEngine::InputSystem::InputControlExtensions_Enumerate m_Flags,
    float_t m_MagnitudeThreshold) noexcept {
  this->m_Device = m_Device;
  this->m_EventPtr = m_EventPtr;
  this->m_Flags = m_Flags;
  this->m_MagnitudeThreshold = m_MagnitudeThreshold;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection::InputControlExtensions_InputEventControlCollection() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputControlExtensions_Enumerate, float_t)>(
    &::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6515130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::InputControlExtensions_Enumerate>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator.CheckDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::*)(uint32_t)>(
    &::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::CheckDefault)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65157f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(), { "CheckDefault", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator.CheckCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::*)(uint32_t)>(
    &::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::CheckCurrent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6515814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(), { "CheckCurrent", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x6514a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::Reset)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x65153f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x651584c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6515854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x651585c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::_ctor(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                                                                                ::UnityEngine::InputSystem::InputDevice* device,
                                                                                                ::UnityEngine::InputSystem::InputControlExtensions_Enumerate flags, float_t magnitudeThreshold) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::InputControlExtensions_Enumerate>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventPtr, device, flags, magnitudeThreshold);
}
inline bool UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::CheckDefault(uint32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(), { "CheckDefault", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, numBits);
}
inline bool UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::CheckCurrent(uint32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(), { "CheckCurrent", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, numBits);
}
inline bool UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*
UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputControl__() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Flags", ty: "::UnityEngine::InputSystem::InputControlExtensions_Enumerate", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Device", ty:
// "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StateOffsetToControlIndex", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_StateOffsetToControlIndexLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllControls", ty:
// "::ArrayW<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DefaultState", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_CurrentState", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NoiseMask", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_EventPtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentControl", ty:
// "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentIndexInStateOffsetToControlIndexMap", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_CurrentControlStateBitOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EventState", ty: "uint8_t*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_CurrentBitOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EndBitOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "m_MagnitudeThreshold", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::InputControlExtensions_InputEventControlEnumerator(
    ::UnityEngine::InputSystem::InputControlExtensions_Enumerate m_Flags, ::UnityEngine::InputSystem::InputDevice* m_Device, ::ArrayW<uint32_t> m_StateOffsetToControlIndex,
    int32_t m_StateOffsetToControlIndexLength, ::ArrayW<::UnityEngine::InputSystem::InputControl*> m_AllControls, uint8_t* m_DefaultState, uint8_t* m_CurrentState, uint8_t* m_NoiseMask,
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr m_EventPtr, ::UnityEngine::InputSystem::InputControl* m_CurrentControl, int32_t m_CurrentIndexInStateOffsetToControlIndexMap,
    uint32_t m_CurrentControlStateBitOffset, uint8_t* m_EventState, uint32_t m_CurrentBitOffset, uint32_t m_EndBitOffset, float_t m_MagnitudeThreshold) noexcept {
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
constexpr ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator::InputControlExtensions_InputEventControlEnumerator() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.get_control
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::get_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6515864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "get_control", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.set_control
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::set_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x651586c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                           { "set_control", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.At
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(
    ::UnityEngine::InputSystem::InputDevice*, int32_t)>(&::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::At)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6515874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                           { "At", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.WithParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(
    ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithParent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65158fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                           { "WithParent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.WithName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(
    ::StringW)>(&::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6515918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "WithName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.WithDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(
    ::StringW)>(&::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithDisplayName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6515960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "WithDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.WithShortDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(
    ::StringW)>(&::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithShortDisplayName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65159bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "WithShortDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.WithLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithLayout)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6515a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                           { "WithLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.WithUsages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(
    int32_t, int32_t)>(&::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithUsages)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6515a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                           { "WithUsages", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.WithAliases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(
    int32_t, int32_t)>(&::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithAliases)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6515a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                           { "WithAliases", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.WithChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(
    int32_t, int32_t)>(&::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithChildren)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6515a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                           { "WithChildren", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.WithStateBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(
    ::UnityEngine::InputSystem::LowLevel::InputStateBlock)>(&::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithStateBlock)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6515a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                           { "WithStateBlock", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.WithDefaultState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(
    ::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithDefaultState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6515aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                           { "WithDefaultState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.WithMinAndMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(
    ::UnityEngine::InputSystem::Utilities::PrimitiveValue, ::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithMinAndMax)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6515b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
            { "WithMinAndMax", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.IsNoisy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(bool)>(
    &::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::IsNoisy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6515b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "IsNoisy", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.IsSynthetic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(bool)>(
    &::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::IsSynthetic)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6515b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "IsSynthetic", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.DontReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(bool)>(
    &::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::DontReset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6515b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "DontReset", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.IsButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)(bool)>(
    &::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::IsButton)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6515bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "IsButton", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::Finish)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6515c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "Finish", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::get_control() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "get_control", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::set_control(::UnityEngine::InputSystem::InputControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                         { "set_control", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::At(::UnityEngine::InputSystem::InputDevice* device,
                                                                                                                                             int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                         { "At", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, device, index);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithParent(::UnityEngine::InputSystem::InputControl* parent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                         { "WithParent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, parent);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "WithName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithDisplayName(::StringW displayName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "WithDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, displayName);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithShortDisplayName(::StringW shortDisplayName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "WithShortDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, shortDisplayName);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder
UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithLayout(::UnityEngine::InputSystem::Utilities::InternedString layout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                         { "WithLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, layout);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithUsages(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                         { "WithUsages", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, startIndex, count);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithAliases(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                         { "WithAliases", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, startIndex, count);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithChildren(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                         { "WithChildren", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, startIndex, count);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder
UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithStateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock stateBlock) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                         { "WithStateBlock", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, stateBlock);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder
UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithDefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                                                         { "WithDefaultState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder
UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithMinAndMax(::UnityEngine::InputSystem::Utilities::PrimitiveValue min, ::UnityEngine::InputSystem::Utilities::PrimitiveValue max) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                       { "WithMinAndMax", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, min, max);
}
template <typename TProcessor, typename TValue>
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::WithProcessor(TProcessor processor) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(),
                                                           { "WithProcessor", { ::i2c::class_of<TProcessor>(), ::i2c::class_of<TValue>() }, { ::i2c::type_of<TProcessor>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TProcessor>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, processor);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::IsNoisy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "IsNoisy", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::IsSynthetic(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "IsSynthetic", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::DontReset(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "DontReset", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::IsButton(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "IsButton", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::Finish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(), { "Finish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_control_k__BackingField", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::InputControlExtensions_ControlBuilder(::UnityEngine::InputSystem::InputControl* _control_k__BackingField) noexcept {
  this->_control_k__BackingField = _control_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder::InputControlExtensions_ControlBuilder() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder.get_device
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6515c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(), { "get_device", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder.set_device
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::set_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6515c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(),
                                                                                           { "set_device", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder.WithName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder (::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::*)(
    ::StringW)>(&::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6515c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(), { "WithName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder.WithDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder (::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::*)(
    ::StringW)>(&::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithDisplayName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6515ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(), { "WithDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder.WithShortDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder (::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::*)(
    ::StringW)>(&::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithShortDisplayName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6515d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(), { "WithShortDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder.WithLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder (::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::*)(
    ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithLayout)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6515d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(),
                                                                                           { "WithLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder.WithChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder (::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::*)(
    int32_t, int32_t)>(&::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithChildren)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6515d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(),
                                                                                           { "WithChildren", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder.WithStateBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder (::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::*)(
    ::UnityEngine::InputSystem::LowLevel::InputStateBlock)>(&::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithStateBlock)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6515d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(),
                                                                                           { "WithStateBlock", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder.IsNoisy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder (::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::*)(bool)>(
    &::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::IsNoisy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6515db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(), { "IsNoisy", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder.WithControlUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder (::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::*)(
    int32_t, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithControlUsage)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6515dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(),
                            { "WithControlUsage",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder.WithControlAlias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder (::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::*)(
    int32_t, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithControlAlias)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6515e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(),
                                                             { "WithControlAlias", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder.WithStateOffsetToControlIndexMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder (::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::*)(
    ::ArrayW<uint32_t>)>(&::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithStateOffsetToControlIndexMap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6515eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(),
                                                                                           { "WithStateOffsetToControlIndexMap", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder.WithControlTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder (::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::*)(
    ::ArrayW<uint8_t>, ::ArrayW<uint16_t>)>(&::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithControlTree)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6515ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(),
                                                                                           { "WithControlTree", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::Finish)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x6516014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(), { "Finish", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::get_device() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(), { "get_device", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::set_device(::UnityEngine::InputSystem::InputDevice* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(),
                                                                                         { "set_device", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(), { "WithName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithDisplayName(::StringW displayName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(), { "WithDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, displayName);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithShortDisplayName(::StringW shortDisplayName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(), { "WithShortDisplayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, shortDisplayName);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder
UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithLayout(::UnityEngine::InputSystem::Utilities::InternedString layout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(),
                                                                                         { "WithLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, layout);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithChildren(int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(),
                                                                                         { "WithChildren", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, startIndex, count);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder
UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithStateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock stateBlock) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(),
                                                                                         { "WithStateBlock", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateBlock>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, stateBlock);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::IsNoisy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(), { "IsNoisy", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder
UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithControlUsage(int32_t controlIndex, ::UnityEngine::InputSystem::Utilities::InternedString usage,
                                                                                 ::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(),
                          { "WithControlUsage",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, controlIndex, usage, control);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder
UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithControlAlias(int32_t controlIndex, ::UnityEngine::InputSystem::Utilities::InternedString alias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(),
                                                           { "WithControlAlias", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, controlIndex, alias);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithStateOffsetToControlIndexMap(::ArrayW<uint32_t> map) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(),
                                                                                         { "WithStateOffsetToControlIndexMap", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, map);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::WithControlTree(::ArrayW<uint8_t> controlTreeNodes,
                                                                                                                                                        ::ArrayW<uint16_t> controlTreeIndicies) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(),
                                                                                         { "WithControlTree", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(*this, ___internal_method, controlTreeNodes, controlTreeIndicies);
}
inline void UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::Finish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(), { "Finish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_device_k__BackingField", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::InputControlExtensions_DeviceBuilder(::UnityEngine::InputSystem::InputDevice* _device_k__BackingField) noexcept {
  this->_device_k__BackingField = _device_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder::InputControlExtensions_DeviceBuilder() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6514e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x65162e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6516304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__m__Finally1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6516538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6516548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControl>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6516550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6516588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)()>(
        &::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6516590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::*)()>(
    &::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6516638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                                                                                           { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::InputSystem::InputControl*& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityEngine::InputSystem::InputControl* const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set___2__current(::UnityEngine::InputSystem::InputControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get_eventPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventPtr;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get_eventPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventPtr;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set_eventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventPtr = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___3__eventPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__eventPtr;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___3__eventPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__eventPtr;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set___3__eventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__eventPtr = value;
}
constexpr float_t& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get_magnitude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___magnitude;
}
constexpr float_t const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get_magnitude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___magnitude;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set_magnitude(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___magnitude = value;
}
constexpr float_t& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___3__magnitude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__magnitude;
}
constexpr float_t const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___3__magnitude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__magnitude;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set___3__magnitude(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__magnitude = value;
}
constexpr bool& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get_buttonControlsOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonControlsOnly;
}
constexpr bool const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get_buttonControlsOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonControlsOnly;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set_buttonControlsOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buttonControlsOnly = value;
}
constexpr bool& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___3__buttonControlsOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__buttonControlsOnly;
}
constexpr bool const& UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___3__buttonControlsOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__buttonControlsOnly;
}
constexpr void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set___3__buttonControlsOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__buttonControlsOnly = value;
}
constexpr ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator&
UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator const&
UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void
UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__cordl_internal_set___7__wrap1(::UnityEngine::InputSystem::InputControlExtensions_InputEventControlEnumerator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
inline void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl*
UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControl>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*
UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43* UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*
UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputControl__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*
UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputControl__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControlExtensions__GetAllButtonPresses_d__43::InputControlExtensions__GetAllButtonPresses_d__43() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.IsPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, float_t)>(&::UnityEngine::InputSystem::InputControlExtensions::IsPressed)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6512e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                             { "IsPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.IsActuated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, float_t)>(&::UnityEngine::InputSystem::InputControlExtensions::IsActuated)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6512f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                             { "IsActuated", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.ReadValueAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlExtensions::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6511c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                                                           { "ReadValueAsObject", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.ReadValueIntoBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, void*, int32_t)>(&::UnityEngine::InputSystem::InputControlExtensions::ReadValueIntoBuffer)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6513140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                { "ReadValueIntoBuffer", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.ReadDefaultValueAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputControlExtensions::ReadDefaultValueAsObject)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x65131f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                                                           { "ReadDefaultValueAsObject", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.ReadValueFromEventAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::InputControlExtensions::ReadValueFromEventAsObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x651329c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
            { "ReadValueFromEventAsObject", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.WriteValueFromObjectIntoEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Object*)>(
    &::UnityEngine::InputSystem::InputControlExtensions::WriteValueFromObjectIntoEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x651339c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                             { "WriteValueFromObjectIntoEvent",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                                 ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.WriteValueIntoState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, void*)>(&::UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x651342c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                             { "WriteValueIntoState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CopyState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, void*, int32_t)>(&::UnityEngine::InputSystem::InputControlExtensions::CopyState)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x651360c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                             { "CopyState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CheckStateIsAtDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefault)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x65130cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                                                           { "CheckStateIsAtDefault", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CheckStateIsAtDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, void*, void*)>(&::UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefault)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x65137b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                { "CheckStateIsAtDefault", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CheckStateIsAtDefaultIgnoringNoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefaultIgnoringNoise)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6513a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                             { "CheckStateIsAtDefaultIgnoringNoise", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CheckStateIsAtDefaultIgnoringNoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, void*)>(
    &::UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefaultIgnoringNoise)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6513a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                             { "CheckStateIsAtDefaultIgnoringNoise", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CompareStateIgnoringNoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, void*)>(&::UnityEngine::InputSystem::InputControlExtensions::CompareStateIgnoringNoise)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6513b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                             { "CompareStateIgnoringNoise", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CompareState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, void*, void*, void*)>(&::UnityEngine::InputSystem::InputControlExtensions::CompareState)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x651388c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                            { "CompareState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.CompareState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, void*, void*)>(&::UnityEngine::InputSystem::InputControlExtensions::CompareState)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6513c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                { "CompareState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.HasValueChangeInState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, void*)>(&::UnityEngine::InputSystem::InputControlExtensions::HasValueChangeInState)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6513cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                             { "HasValueChangeInState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.HasValueChangeInEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::InputControlExtensions::HasValueChangeInEvent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6513d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                            { "HasValueChangeInEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.GetStatePtrFromStateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::InputControlExtensions::GetStatePtrFromStateEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x651331c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                         { "GetStatePtrFromStateEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.GetStatePtrFromStateEventUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void* (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::Utilities::FourCC)>(
        &::UnityEngine::InputSystem::InputControlExtensions::GetStatePtrFromStateEventUnchecked)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x6513e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                             { "GetStatePtrFromStateEventUnchecked",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.ResetToDefaultStateInEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::InputControlExtensions::ResetToDefaultStateInEvent)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6514120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
            { "ResetToDefaultStateInEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.AccumulateValueInEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl_1<float_t>*, void*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::InputControlExtensions::AccumulateValueInEvent)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x65142c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                                                           { "AccumulateValueInEvent",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<float_t>*>(), ::i2c::type_of<void*>(),
                                                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.AccumulateValueInEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>*, void*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::InputControlExtensions::AccumulateValueInEvent)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x65143e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                                                           { "AccumulateValueInEvent",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>*>(),
                                                                                               ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.BuildPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::InputSystem::InputControl*, ::StringW, ::System::Text::StringBuilder*)>(
    &::UnityEngine::InputSystem::InputControlExtensions::BuildPath)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x6514504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                            { "BuildPath", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.EnumerateControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection (*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControlExtensions_Enumerate, ::UnityEngine::InputSystem::InputDevice*, float_t)>(
    &::UnityEngine::InputSystem::InputControlExtensions::EnumerateControls)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x65147e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                         { "EnumerateControls",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControlExtensions_Enumerate>(),
                                             ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.EnumerateChangedControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection (*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, float_t)>(&::UnityEngine::InputSystem::InputControlExtensions::EnumerateChangedControls)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x65149b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                            { "EnumerateChangedControls",
                              {},
                              { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.HasButtonPress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t, bool)>(
    &::UnityEngine::InputSystem::InputControlExtensions::HasButtonPress)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65149f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                         { "HasButtonPress", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.GetFirstButtonPressOrNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t, bool)>(
    &::UnityEngine::InputSystem::InputControlExtensions::GetFirstButtonPressOrNull)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6510ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                            { "GetFirstButtonPressOrNull", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.GetAllButtonPresses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t, bool)>(
        &::UnityEngine::InputSystem::InputControlExtensions::GetAllButtonPresses)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6514db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                         { "GetAllButtonPresses", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder (*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputControlExtensions::Setup)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6514e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(), { "Setup", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlExtensions.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder (*)(::UnityEngine::InputSystem::InputDevice*, int32_t, int32_t, int32_t)>(
    &::UnityEngine::InputSystem::InputControlExtensions::Setup)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6514f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                            { "Setup", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
template <typename TControl> inline TControl UnityEngine::InputSystem::InputControlExtensions::FindInParentChain(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                           { "FindInParentChain", { ::i2c::class_of<TControl>() }, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TControl>() })));
  return ::cordl_internals::RunMethodRethrow<TControl>(nullptr, ___internal_method, control);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::IsPressed(::UnityEngine::InputSystem::InputControl* control, float_t buttonPressPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                           { "IsPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, buttonPressPoint);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::IsActuated(::UnityEngine::InputSystem::InputControl* control, float_t threshold) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                           { "IsActuated", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, threshold);
}
inline ::System::Object* UnityEngine::InputSystem::InputControlExtensions::ReadValueAsObject(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                                                         { "ReadValueAsObject", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, control);
}
inline void UnityEngine::InputSystem::InputControlExtensions::ReadValueIntoBuffer(::UnityEngine::InputSystem::InputControl* control, void* buffer, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                              { "ReadValueIntoBuffer", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, buffer, bufferSize);
}
inline ::System::Object* UnityEngine::InputSystem::InputControlExtensions::ReadDefaultValueAsObject(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                                                         { "ReadDefaultValueAsObject", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, control);
}
template <typename TValue>
inline TValue UnityEngine::InputSystem::InputControlExtensions::ReadValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>* control,
                                                                                   ::UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                              { "ReadValueFromEvent",
                                                { ::i2c::class_of<TValue>() },
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(nullptr, ___internal_method, control, inputEvent);
}
template <typename TValue>
inline bool UnityEngine::InputSystem::InputControlExtensions::ReadValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>* control,
                                                                                 ::UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent, ::by_ref<TValue> value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                           { "ReadValueFromEvent",
                                                             { ::i2c::class_of<TValue>() },
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, inputEvent, value);
}
inline ::System::Object* UnityEngine::InputSystem::InputControlExtensions::ReadValueFromEventAsObject(::UnityEngine::InputSystem::InputControl* control,
                                                                                                      ::UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                       { "ReadValueFromEventAsObject", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, control, inputEvent);
}
template <typename TValue>
inline TValue UnityEngine::InputSystem::InputControlExtensions::ReadUnprocessedValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>* control,
                                                                                              ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                              { "ReadUnprocessedValueFromEvent",
                                                { ::i2c::class_of<TValue>() },
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(nullptr, ___internal_method, control, eventPtr);
}
template <typename TValue>
inline bool UnityEngine::InputSystem::InputControlExtensions::ReadUnprocessedValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>* control,
                                                                                            ::UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent, ::by_ref<TValue> value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                           { "ReadUnprocessedValueFromEvent",
                                                             { ::i2c::class_of<TValue>() },
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, inputEvent, value);
}
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueFromObjectIntoEvent(::UnityEngine::InputSystem::InputControl* control,
                                                                                            ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                           { "WriteValueFromObjectIntoEvent",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                               ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, eventPtr, value);
}
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(::UnityEngine::InputSystem::InputControl* control, void* statePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                           { "WriteValueIntoState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, statePtr);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(::UnityEngine::InputSystem::InputControl* control, TValue value, void* statePtr) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                       { "WriteValueIntoState", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<TValue>(), ::i2c::type_of<void*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, value, statePtr);
}
template <typename TValue>
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(::UnityEngine::InputSystem::InputControl_1<TValue>* control, TValue value, void* statePtr) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
          { "WriteValueIntoState", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<TValue>(), ::i2c::type_of<void*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, value, statePtr);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(::UnityEngine::InputSystem::InputControl_1<TValue>* control, void* statePtr) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                       { "WriteValueIntoState", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<void*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, statePtr);
}
template <typename TValue, typename TState>
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoState(::UnityEngine::InputSystem::InputControl_1<TValue>* control, TValue value, ::by_ref<TState> state) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                              { "WriteValueIntoState",
                                                { ::i2c::class_of<TValue>(), ::i2c::class_of<TState>() },
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<TValue>(), ::i2c::type_of<::by_ref<TState>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TState>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, value, state);
}
template <typename TValue>
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoEvent(::UnityEngine::InputSystem::InputControl* control, TValue value,
                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                          { "WriteValueIntoEvent",
                            { ::i2c::class_of<TValue>() },
                            { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<TValue>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, value, eventPtr);
}
template <typename TValue>
inline void UnityEngine::InputSystem::InputControlExtensions::WriteValueIntoEvent(::UnityEngine::InputSystem::InputControl_1<TValue>* control, TValue value,
                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                                                              { "WriteValueIntoEvent",
                                                                                                { ::i2c::class_of<TValue>() },
                                                                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<TValue>(),
                                                                                                  ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, value, eventPtr);
}
inline void UnityEngine::InputSystem::InputControlExtensions::CopyState(::UnityEngine::InputSystem::InputDevice* device, void* buffer, int32_t bufferSizeInBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                           { "CopyState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, buffer, bufferSizeInBytes);
}
template <typename TState> inline void UnityEngine::InputSystem::InputControlExtensions::CopyState(::UnityEngine::InputSystem::InputDevice* device, ::by_ref<TState> state) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                              { "CopyState", { ::i2c::class_of<TState>() }, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::by_ref<TState>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TState>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, state);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefault(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                                                         { "CheckStateIsAtDefault", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefault(::UnityEngine::InputSystem::InputControl* control, void* statePtr, void* maskPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                              { "CheckStateIsAtDefault", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, statePtr, maskPtr);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefaultIgnoringNoise(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                           { "CheckStateIsAtDefaultIgnoringNoise", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CheckStateIsAtDefaultIgnoringNoise(::UnityEngine::InputSystem::InputControl* control, void* statePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                           { "CheckStateIsAtDefaultIgnoringNoise", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, statePtr);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CompareStateIgnoringNoise(::UnityEngine::InputSystem::InputControl* control, void* statePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                           { "CompareStateIgnoringNoise", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, statePtr);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CompareState(::UnityEngine::InputSystem::InputControl* control, void* firstStatePtr, void* secondStatePtr, void* maskPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                          { "CompareState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, firstStatePtr, secondStatePtr, maskPtr);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::CompareState(::UnityEngine::InputSystem::InputControl* control, void* statePtr, void* maskPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                           { "CompareState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, statePtr, maskPtr);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::HasValueChangeInState(::UnityEngine::InputSystem::InputControl* control, void* statePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                           { "HasValueChangeInState", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, statePtr);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::HasValueChangeInEvent(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                          { "HasValueChangeInEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, eventPtr);
}
inline void* UnityEngine::InputSystem::InputControlExtensions::GetStatePtrFromStateEvent(::UnityEngine::InputSystem::InputControl* control,
                                                                                         ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                       { "GetStatePtrFromStateEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, control, eventPtr);
}
inline void* UnityEngine::InputSystem::InputControlExtensions::GetStatePtrFromStateEventUnchecked(::UnityEngine::InputSystem::InputControl* control,
                                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                                                                                  ::UnityEngine::InputSystem::Utilities::FourCC eventType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                           { "GetStatePtrFromStateEventUnchecked",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, control, eventPtr, eventType);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::ResetToDefaultStateInEvent(::UnityEngine::InputSystem::InputControl* control,
                                                                                         ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                       { "ResetToDefaultStateInEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, eventPtr);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControlExtensions::QueueValueChange(::UnityEngine::InputSystem::InputControl_1<TValue>* control, TValue value, double_t time) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
          { "QueueValueChange", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), ::i2c::type_of<TValue>(), ::i2c::type_of<double_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, value, time);
}
inline void UnityEngine::InputSystem::InputControlExtensions::AccumulateValueInEvent(::UnityEngine::InputSystem::InputControl_1<float_t>* control, void* currentStatePtr,
                                                                                     ::UnityEngine::InputSystem::LowLevel::InputEventPtr newState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                                                         { "AccumulateValueInEvent",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<float_t>*>(), ::i2c::type_of<void*>(),
                                                                                             ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, currentStatePtr, newState);
}
inline void UnityEngine::InputSystem::InputControlExtensions::AccumulateValueInEvent(::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>* control, void* currentStatePtr,
                                                                                     ::UnityEngine::InputSystem::LowLevel::InputEventPtr newState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                                                         { "AccumulateValueInEvent",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>*>(),
                                                                                             ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, currentStatePtr, newState);
}
template <typename TControl>
inline void UnityEngine::InputSystem::InputControlExtensions::FindControlsRecursive(::UnityEngine::InputSystem::InputControl* parent, ::System::Collections::Generic::IList_1<TControl>* controls,
                                                                                    ::System::Func_2<TControl, bool>* predicate) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                                           { "FindControlsRecursive",
                                                             { ::i2c::class_of<TControl>() },
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<TControl>*>(),
                                                               ::i2c::type_of<::System::Func_2<TControl, bool>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TControl>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parent, controls, predicate);
}
inline ::StringW UnityEngine::InputSystem::InputControlExtensions::BuildPath(::UnityEngine::InputSystem::InputControl* control, ::StringW deviceLayout, ::System::Text::StringBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                          { "BuildPath", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, control, deviceLayout, builder);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection
UnityEngine::InputSystem::InputControlExtensions::EnumerateControls(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputControlExtensions_Enumerate flags,
                                                                    ::UnityEngine::InputSystem::InputDevice* device, float_t magnitudeThreshold) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                              { "EnumerateControls",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControlExtensions_Enumerate>(),
                                                  ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection>(nullptr, ___internal_method, eventPtr, flags, device, magnitudeThreshold);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection
UnityEngine::InputSystem::InputControlExtensions::EnumerateChangedControls(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device,
                                                                           float_t magnitudeThreshold) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                          { "EnumerateChangedControls",
                            {},
                            { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_InputEventControlCollection>(nullptr, ___internal_method, eventPtr, device, magnitudeThreshold);
}
inline bool UnityEngine::InputSystem::InputControlExtensions::HasButtonPress(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, float_t magnitude, bool buttonControlsOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                              { "HasButtonPress", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eventPtr, magnitude, buttonControlsOnly);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControlExtensions::GetFirstButtonPressOrNull(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                                                                                                             float_t magnitude, bool buttonControlsOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                          { "GetFirstButtonPressOrNull", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(nullptr, ___internal_method, eventPtr, magnitude, buttonControlsOnly);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*
UnityEngine::InputSystem::InputControlExtensions::GetAllButtonPresses(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, float_t magnitude, bool buttonControlsOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                                       { "GetAllButtonPresses", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>(nullptr, ___internal_method, eventPtr, magnitude,
                                                                                                                                        buttonControlsOnly);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder UnityEngine::InputSystem::InputControlExtensions::Setup(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(), { "Setup", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_ControlBuilder>(nullptr, ___internal_method, control);
}
inline ::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder UnityEngine::InputSystem::InputControlExtensions::Setup(::UnityEngine::InputSystem::InputDevice* device, int32_t controlCount,
                                                                                                                                int32_t usageCount, int32_t aliasCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlExtensions*>(),
                          { "Setup", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder>(nullptr, ___internal_method, device, controlCount, usageCount, aliasCount);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControlExtensions::InputControlExtensions() {}
