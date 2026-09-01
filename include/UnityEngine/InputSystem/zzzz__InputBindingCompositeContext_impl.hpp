#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\InputBindingCompositeContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding.get_part
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding::*)()>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding::get_part)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x650d418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>(), { "get_part", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding.set_part
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding::set_part)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x650d420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>(), { "set_part", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding.get_control
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding::*)()>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding::get_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x650d428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>(), { "get_control", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding.set_control
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding::*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding::set_control)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x650d430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>(),
                                                                                           { "set_control", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding::get_part() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>(), { "get_part", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding::set_part(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>(), { "set_part", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding::get_control() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>(), { "get_control", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding::set_control(::UnityEngine::InputSystem::InputControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>(),
                                                                                         { "set_control", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_part_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_control_k__BackingField", ty:
// "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding::InputBindingCompositeContext_PartBinding(int32_t _part_k__BackingField,
                                                                                                                         ::UnityEngine::InputSystem::InputControl* _control_k__BackingField) noexcept {
  this->_part_k__BackingField = _part_k__BackingField;
  this->_control_k__BackingField = _control_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding::InputBindingCompositeContext_PartBinding() {}
template <typename TValue> inline int32_t UnityEngine::InputSystem::InputBindingCompositeContext_DefaultComparer_1<TValue>::Compare(TValue x, TValue y) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext_DefaultComparer_1<TValue>>(),
                                                                                         { "Compare", {}, { ::i2c::type_of<TValue>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, x, y);
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<TValue>"
template <typename TValue> constexpr UnityEngine::InputSystem::InputBindingCompositeContext_DefaultComparer_1<TValue>::operator ::System::Collections::Generic::IComparer_1<TValue>*() {
  return static_cast<::System::Collections::Generic::IComparer_1<TValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<TValue>"
template <typename TValue>
constexpr ::System::Collections::Generic::IComparer_1<TValue>*
UnityEngine::InputSystem::InputBindingCompositeContext_DefaultComparer_1<TValue>::i___System__Collections__Generic__IComparer_1_TValue_() {
  return static_cast<::System::Collections::Generic::IComparer_1<TValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext_DefaultComparer_1<TValue>::InputBindingCompositeContext_DefaultComparer_1() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext.get_controls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>* (
    ::UnityEngine::InputSystem::InputBindingCompositeContext::*)()>(&::UnityEngine::InputSystem::InputBindingCompositeContext::get_controls)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x650d268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext>(), { "get_controls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputBindingCompositeContext::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x650d2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext>(), { "EvaluateMagnitude", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext.ReadValueAsButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputBindingCompositeContext::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext::ReadValueAsButton)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x650d31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext>(), { "ReadValueAsButton", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext.ReadValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBindingCompositeContext::*)(int32_t, void*, int32_t)>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x650d3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext>(),
                                                                                           { "ReadValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext.ReadValueAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputBindingCompositeContext::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x650d3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext>(), { "ReadValueAsObject", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext.GetPressTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::InputSystem::InputBindingCompositeContext::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext::GetPressTime)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x650d3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext>(), { "GetPressTime", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>* UnityEngine::InputSystem::InputBindingCompositeContext::get_controls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext>(), { "get_controls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>*>(*this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::InputBindingCompositeContext::EvaluateMagnitude(int32_t partNumber) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext>(), { "EvaluateMagnitude", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, partNumber);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue(int32_t partNumber) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext>(), { "ReadValue", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method, partNumber);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue(int32_t partNumber, ::by_ref<::UnityEngine::InputSystem::InputControl*> sourceControl) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext>(),
                                              { "ReadValue", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControl*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method, partNumber, sourceControl);
}
template <typename TValue, typename TComparer> inline TValue UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue(int32_t partNumber, TComparer comparer) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext>(),
                                                           { "ReadValue", { ::i2c::class_of<TValue>(), ::i2c::class_of<TComparer>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<TComparer>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TComparer>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method, partNumber, comparer);
}
template <typename TValue, typename TComparer>
inline TValue UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue(int32_t partNumber, ::by_ref<::UnityEngine::InputSystem::InputControl*> sourceControl, TComparer comparer) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext>(),
                                                           { "ReadValue",
                                                             { ::i2c::class_of<TValue>(), ::i2c::class_of<TComparer>() },
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControl*>>(), ::i2c::type_of<TComparer>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>(), ::i2c::class_of<TComparer>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method, partNumber, sourceControl, comparer);
}
inline bool UnityEngine::InputSystem::InputBindingCompositeContext::ReadValueAsButton(int32_t partNumber) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext>(), { "ReadValueAsButton", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, partNumber);
}
inline void UnityEngine::InputSystem::InputBindingCompositeContext::ReadValue(int32_t partNumber, void* buffer, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext>(),
                                                                                         { "ReadValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, partNumber, buffer, bufferSize);
}
inline ::System::Object* UnityEngine::InputSystem::InputBindingCompositeContext::ReadValueAsObject(int32_t partNumber) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext>(), { "ReadValueAsObject", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, partNumber);
}
inline double_t UnityEngine::InputSystem::InputBindingCompositeContext::GetPressTime(int32_t partNumber) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext>(), { "GetPressTime", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, partNumber);
}
// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BindingIndex", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext::InputBindingCompositeContext(::UnityEngine::InputSystem::InputActionState* m_State, int32_t m_BindingIndex) noexcept {
  this->m_State = m_State;
  this->m_BindingIndex = m_BindingIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext::InputBindingCompositeContext() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x650d2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::*)()>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x650d438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::*)()>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x650d43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding (::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::*)()>(
        &::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::
            System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x650d53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(),
                                                             { "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::*)()>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x650d548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::*)()>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x650d580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>* (
    ::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::*)()>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::
        System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x650d5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(),
                                                             { "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::*)()>(
    &::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x650d678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding const&
UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void
UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_set___2__current(::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext const& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_set___4__this(::UnityEngine::InputSystem::InputBindingCompositeContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get___3____4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3____4__this;
}
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext const& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get___3____4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3____4__this;
}
constexpr void UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_set___3____4__this(::UnityEngine::InputSystem::InputBindingCompositeContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3____4__this = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get__totalBindingCount_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalBindingCount_5__2;
}
constexpr int32_t const& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get__totalBindingCount_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalBindingCount_5__2;
}
constexpr void UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_set__totalBindingCount_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalBindingCount_5__2 = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get__bindingIndex_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingIndex_5__3;
}
constexpr int32_t const& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get__bindingIndex_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingIndex_5__3;
}
constexpr void UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_set__bindingIndex_5__3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindingIndex_5__3 = value;
}
constexpr ::UnityEngine::InputSystem::InputActionState_BindingState& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get__bindingState_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingState_5__4;
}
constexpr ::UnityEngine::InputSystem::InputActionState_BindingState const& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get__bindingState_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingState_5__4;
}
constexpr void UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_set__bindingState_5__4(::UnityEngine::InputSystem::InputActionState_BindingState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindingState_5__4 = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get__controlStartIndex_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controlStartIndex_5__5;
}
constexpr int32_t const& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get__controlStartIndex_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controlStartIndex_5__5;
}
constexpr void UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_set__controlStartIndex_5__5(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____controlStartIndex_5__5 = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get__i_5__6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__6;
}
constexpr int32_t const& UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_get__i_5__6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__6;
}
constexpr void UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::__cordl_internal_set__i_5__6(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__6 = value;
}
inline void UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding
UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(),
                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>*
UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(),
                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2* UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>"
constexpr UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::operator ::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>* UnityEngine::InputSystem::
    InputBindingCompositeContext__get_controls_d__2::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputBindingCompositeContext_PartBinding_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>"
constexpr UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::operator ::System::Collections::Generic::IEnumerator_1<
    ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>* UnityEngine::InputSystem::
    InputBindingCompositeContext__get_controls_d__2::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputBindingCompositeContext_PartBinding_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2::InputBindingCompositeContext__get_controls_d__2() {}
