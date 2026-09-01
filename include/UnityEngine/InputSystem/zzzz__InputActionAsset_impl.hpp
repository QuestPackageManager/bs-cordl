#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\InputActionAsset.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::InputActionMap_WriteMapJson>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "controlSchemes", ty: "::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputActionAsset_WriteFileJson::InputActionAsset_WriteFileJson(::StringW name, ::ArrayW<::UnityEngine::InputSystem::InputActionMap_WriteMapJson> maps,
                                                                                                     ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson> controlSchemes) noexcept {
  this->name = name;
  this->maps = maps;
  this->controlSchemes = controlSchemes;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionAsset_WriteFileJson::InputActionAsset_WriteFileJson() {}
// Ctor Parameters [CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::InputActionMap_WriteMapJson>", modifiers: "", def_value: Some("{}") }, CppParam { name: "controlSchemes", ty:
// "::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputActionAsset_WriteFileJsonNoName::InputActionAsset_WriteFileJsonNoName(
    ::ArrayW<::UnityEngine::InputSystem::InputActionMap_WriteMapJson> maps, ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson> controlSchemes) noexcept {
  this->maps = maps;
  this->controlSchemes = controlSchemes;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionAsset_WriteFileJsonNoName::InputActionAsset_WriteFileJsonNoName() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset_ReadFileJson.ToAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset_ReadFileJson::*)(::UnityEngine::InputSystem::InputActionAsset*)>(
    &::UnityEngine::InputSystem::InputActionAsset_ReadFileJson::ToAsset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64d6a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset_ReadFileJson>(),
                                                                                           { "ToAsset", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputActionAsset_ReadFileJson::ToAsset(::UnityEngine::InputSystem::InputActionAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset_ReadFileJson>(),
                                                                                         { "ToAsset", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, asset);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::InputActionMap_ReadMapJson>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "controlSchemes", ty: "::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputActionAsset_ReadFileJson::InputActionAsset_ReadFileJson(::StringW name, ::ArrayW<::UnityEngine::InputSystem::InputActionMap_ReadMapJson> maps,
                                                                                                   ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson> controlSchemes) noexcept {
  this->name = name;
  this->maps = maps;
  this->controlSchemes = controlSchemes;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionAsset_ReadFileJson::InputActionAsset_ReadFileJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d79a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::*)()>(
    &::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64d8eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::*)()>(
    &::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x64d8eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::*)()>(
    &::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d9034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::*)()>(
    &::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x64d903c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::*)()>(
    &::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d9074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_set___2__current(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_set___4__this(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__2 = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>&
UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_get__actions_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actions_5__3;
}
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> const&
UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_get__actions_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actions_5__3;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_set__actions_5__3(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____actions_5__3 = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_get__actionCount_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionCount_5__4;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_get__actionCount_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionCount_5__4;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_set__actionCount_5__4(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____actionCount_5__4 = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_get__n_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____n_5__5;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_get__n_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____n_5__5;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::__cordl_internal_set__n_5__5(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____n_5__5 = value;
}
inline void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction*
UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32* UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>"
constexpr UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*
UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputAction__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__32::InputActionAsset__GetEnumerator_d__32() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::*)(int32_t)>(
    &::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64d5d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::*)()>(
    &::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64d907c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::*)()>(
    &::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x64d9080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputBinding (::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::*)()>(
    &::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64d91dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBinding>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::*)()>(
    &::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x64d91ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::*)()>(
    &::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x64d9224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>* (::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::*)()>(
        &::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x64d928c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBinding>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::*)()>(
    &::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64d9324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::InputSystem::InputBinding& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityEngine::InputSystem::InputBinding const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set___2__current(::UnityEngine::InputSystem::InputBinding value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set___4__this(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__numActionMaps_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numActionMaps_5__2;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__numActionMaps_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numActionMaps_5__2;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set__numActionMaps_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numActionMaps_5__2 = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__i_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__i_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set__i_5__3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__3 = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding>& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__bindings_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindings_5__4;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding> const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__bindings_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindings_5__4;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set__bindings_5__4(::ArrayW<::UnityEngine::InputSystem::InputBinding> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindings_5__4 = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__numBindings_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numBindings_5__5;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__numBindings_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numBindings_5__5;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set__numBindings_5__5(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numBindings_5__5 = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__n_5__6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____n_5__6;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__n_5__6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____n_5__6;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set__n_5__6(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____n_5__6 = value;
}
inline void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputBinding
UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBinding>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputBinding>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*
UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBinding>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9* UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>"
constexpr UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*
UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputBinding_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>"
constexpr UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*
UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputBinding_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::InputActionAsset__get_bindings_d__9() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_enabled)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x64d5adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_actionMaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*> (
    ::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_actionMaps)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x64d5c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "get_actionMaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_controlSchemes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> (
    ::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_controlSchemes)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x64d5c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "get_controlSchemes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_bindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* (::UnityEngine::InputSystem::InputActionAsset::*)()>(
    &::UnityEngine::InputSystem::InputActionAsset::get_bindings)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64d5ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "get_bindings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_bindingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionAsset::*)()>(
    &::UnityEngine::InputSystem::InputActionAsset::get_bindingMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64d5d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "get_bindingMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.set_bindingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>)>(
    &::UnityEngine::InputSystem::InputActionAsset::set_bindingMask)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x64d5d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                                                             { "set_bindingMask", {}, { ::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_devices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> (
    ::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_devices)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x64d5f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "get_devices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.set_devices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(
    ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>)>(&::UnityEngine::InputSystem::InputActionAsset::set_devices)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64d5fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                            { "set_devices", {}, { ::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputActionAsset::get_Item)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64d61b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.ToJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::ToJson)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x64d6570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "ToJson", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.LoadFromJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::LoadFromJson)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x64d6954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "LoadFromJson", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FromJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionAsset> (*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::FromJson)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x64d6ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "FromJson", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW, bool)>(
    &::UnityEngine::InputSystem::InputActionAsset::FindAction)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x64d6234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "FindAction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionAsset::*)(
    ::UnityEngine::InputSystem::InputBinding, ::by_ref<::UnityEngine::InputSystem::InputAction*>)>(&::UnityEngine::InputSystem::InputActionAsset::FindBinding)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x64d6c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                                         { "FindBinding", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindActionMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW, bool)>(
    &::UnityEngine::InputSystem::InputActionAsset::FindActionMap)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x64d6e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "FindActionMap", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindActionMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputActionAsset::*)(::System::Guid)>(
    &::UnityEngine::InputSystem::InputActionAsset::FindActionMap)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x64d705c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "FindActionMap", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionAsset::*)(::System::Guid)>(
    &::UnityEngine::InputSystem::InputActionAsset::FindAction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64d70e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "FindAction", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindControlSchemeIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::FindControlSchemeIndex)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x64d719c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "FindControlSchemeIndex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindControlScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW)>(
    &::UnityEngine::InputSystem::InputActionAsset::FindControlScheme)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x64d7270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "FindControlScheme", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.IsUsableWithDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::InputActionAsset::IsUsableWithDevice)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x64d7378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                                                                                           { "IsUsableWithDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.Enable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::Enable)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x64d75d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "Enable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.Disable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::Disable)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x64d7754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "Disable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::InputActionAsset::Contains)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x64d78b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "Contains", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* (::UnityEngine::InputSystem::InputActionAsset::*)()>(
    &::UnityEngine::InputSystem::InputActionAsset::GetEnumerator)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64d7954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::InputActionAsset::*)()>(
    &::UnityEngine::InputSystem::InputActionAsset::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64d79b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.MarkAsDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::MarkAsDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64d79b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "MarkAsDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::IsEmpty)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64d79b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.OnWantToChangeSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::OnWantToChangeSetup)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x64d7a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "OnWantToChangeSetup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.OnSetupChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::OnSetupChanged)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x64d7d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "OnSetupChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.ReResolveIfNecessary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(bool)>(&::UnityEngine::InputSystem::InputActionAsset::ReResolveIfNecessary)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x64d5ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "ReResolveIfNecessary", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.ResolveBindingsIfNecessary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::ResolveBindingsIfNecessary)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x64d7f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "ResolveBindingsIfNecessary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::OnDestroy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64d7fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d7fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*>& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_ActionMaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionMaps;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*> const& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_ActionMaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionMaps;
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__cordl_internal_set_m_ActionMaps(::ArrayW<::UnityEngine::InputSystem::InputActionMap*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionMaps = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme>& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_ControlSchemes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlSchemes;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme> const& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_ControlSchemes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ControlSchemes;
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__cordl_internal_set_m_ControlSchemes(::ArrayW<::UnityEngine::InputSystem::InputControlScheme> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ControlSchemes = value;
}
constexpr bool& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_IsProjectWide() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsProjectWide;
}
constexpr bool const& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_IsProjectWide() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsProjectWide;
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__cordl_internal_set_m_IsProjectWide(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsProjectWide = value;
}
constexpr ::UnityEngine::InputSystem::InputActionState*& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_SharedStateForAllMaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedStateForAllMaps;
}
constexpr ::UnityEngine::InputSystem::InputActionState* const& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_SharedStateForAllMaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedStateForAllMaps;
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__cordl_internal_set_m_SharedStateForAllMaps(::UnityEngine::InputSystem::InputActionState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SharedStateForAllMaps = value;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_BindingMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingMask;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_BindingMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingMask;
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__cordl_internal_set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindingMask = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_ParameterOverridesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParameterOverridesCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_ParameterOverridesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParameterOverridesCount;
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__cordl_internal_set_m_ParameterOverridesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParameterOverridesCount = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride>& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_ParameterOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParameterOverrides;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride> const& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_ParameterOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParameterOverrides;
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__cordl_internal_set_m_ParameterOverrides(::ArrayW<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParameterOverrides = value;
}
constexpr ::UnityEngine::InputSystem::InputActionMap_DeviceArray& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_Devices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Devices;
}
constexpr ::UnityEngine::InputSystem::InputActionMap_DeviceArray const& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_Devices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Devices;
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__cordl_internal_set_m_Devices(::UnityEngine::InputSystem::InputActionMap_DeviceArray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Devices = value;
}
inline bool UnityEngine::InputSystem::InputActionAsset::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*> UnityEngine::InputSystem::InputActionAsset::get_actionMaps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "get_actionMaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*>>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::InputActionAsset::get_controlSchemes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "get_controlSchemes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* UnityEngine::InputSystem::InputActionAsset::get_bindings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "get_bindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*>(this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputActionAsset::get_bindingMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "get_bindingMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                                                           { "set_bindingMask", {}, { ::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> UnityEngine::InputSystem::InputActionAsset::get_devices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "get_devices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                          { "set_devices", {}, { ::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionAsset::get_Item(::StringW actionNameOrId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method, actionNameOrId);
}
inline ::StringW UnityEngine::InputSystem::InputActionAsset::ToJson() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "ToJson", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::LoadFromJson(::StringW json) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "LoadFromJson", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> UnityEngine::InputSystem::InputActionAsset::FromJson(::StringW json) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "FromJson", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>(nullptr, ___internal_method, json);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionAsset::FindAction(::StringW actionNameOrId, bool throwIfNotFound) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "FindAction", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method, actionNameOrId, throwIfNotFound);
}
inline int32_t UnityEngine::InputSystem::InputActionAsset::FindBinding(::UnityEngine::InputSystem::InputBinding mask, ::by_ref<::UnityEngine::InputSystem::InputAction*> action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                                       { "FindBinding", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, mask, action);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionAsset::FindActionMap(::StringW nameOrId, bool throwIfNotFound) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "FindActionMap", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*>(this, ___internal_method, nameOrId, throwIfNotFound);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionAsset::FindActionMap(::System::Guid id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "FindActionMap", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*>(this, ___internal_method, id);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionAsset::FindAction(::System::Guid guid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "FindAction", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method, guid);
}
inline int32_t UnityEngine::InputSystem::InputActionAsset::FindControlSchemeIndex(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "FindControlSchemeIndex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::InputActionAsset::FindControlScheme(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "FindControlScheme", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>>(this, ___internal_method, name);
}
inline bool UnityEngine::InputSystem::InputActionAsset::IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                                                                                         { "IsUsableWithDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputActionAsset::Enable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "Enable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::Disable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "Disable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionAsset::Contains(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "Contains", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, action);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* UnityEngine::InputSystem::InputActionAsset::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputActionAsset::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::MarkAsDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "MarkAsDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionAsset::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::OnWantToChangeSetup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "OnWantToChangeSetup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::OnSetupChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "OnSetupChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::ReResolveIfNecessary(bool fullResolve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "ReResolveIfNecessary", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullResolve);
}
inline void UnityEngine::InputSystem::InputActionAsset::ResolveBindingsIfNecessary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "ResolveBindingsIfNecessary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionAsset* UnityEngine::InputSystem::InputActionAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputActionAsset*>());
}
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr UnityEngine::InputSystem::InputActionAsset::operator ::UnityEngine::InputSystem::IInputActionCollection2*() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputActionCollection2*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr ::UnityEngine::InputSystem::IInputActionCollection2* UnityEngine::InputSystem::InputActionAsset::i___UnityEngine__InputSystem__IInputActionCollection2() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputActionCollection2*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr UnityEngine::InputSystem::InputActionAsset::operator ::UnityEngine::InputSystem::IInputActionCollection*() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputActionCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr ::UnityEngine::InputSystem::IInputActionCollection* UnityEngine::InputSystem::InputActionAsset::i___UnityEngine__InputSystem__IInputActionCollection() noexcept {
  return static_cast<::UnityEngine::InputSystem::IInputActionCollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr UnityEngine::InputSystem::InputActionAsset::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*
UnityEngine::InputSystem::InputActionAsset::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputAction__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::InputSystem::InputActionAsset::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::InputActionAsset::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionAsset::InputActionAsset() {}
