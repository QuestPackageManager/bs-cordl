#pragma once
// IWYU pragma private; include "BeatSaber\BeatAvatarAdapter\AvatarEditor\BeatAvatarEditorViewController.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_impl.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__BeatAvatarEditorViewController_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__AvatarEditHistory_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__BeatAvatarEditorViewController_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarDataModel_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartCollection_1_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartsModel_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__SkinColorSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorPickerButtonController_def.hpp"
#include "GlobalNamespace/zzzz__NamedColorListController_def.hpp"
#include "GlobalNamespace/zzzz__NamedIntListController_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "HMUI/zzzz__ValueChangedBinder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3278a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0._SetupColorButton_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::_SetupColorButton_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3278d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0*>(), { "<SetupColorButton>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::UnityEngine::Color>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::__cordl_internal_get_currentColorGetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentColorGetter;
}
constexpr ::System::Func_1<::UnityEngine::Color>* const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::__cordl_internal_get_currentColorGetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentColorGetter;
}
constexpr void
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::__cordl_internal_set_currentColorGetter(::System::Func_1<::UnityEngine::Color>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentColorGetter = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController>&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::__cordl_internal_set___4__this(
    ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Action_1<::UnityEngine::Color>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::__cordl_internal_get_colorSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSetter;
}
constexpr ::System::Action_1<::UnityEngine::Color>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::__cordl_internal_get_colorSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSetter;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::__cordl_internal_set_colorSetter(::System::Action_1<::UnityEngine::Color>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorSetter = value;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::__cordl_internal_get_avatarEditPart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarEditPart;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::__cordl_internal_get_avatarEditPart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarEditPart;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::__cordl_internal_set_avatarEditPart(::BeatSaber::BeatAvatarSDK::AvatarPart value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___avatarEditPart = value;
}
constexpr int32_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::__cordl_internal_get_uvSegment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uvSegment;
}
constexpr int32_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::__cordl_internal_get_uvSegment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uvSegment;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::__cordl_internal_set_uvSegment(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uvSegment = value;
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::_SetupColorButton_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0*>(), { "<SetupColorButton>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0*
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass60_0::BeatAvatarEditorViewController___c__DisplayClass60_0() {}
template <typename T>
constexpr ::System::Action_1<::StringW>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>::__cordl_internal_get_setIdAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIdAction;
}
template <typename T>
constexpr ::System::Action_1<::StringW>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>::__cordl_internal_get_setIdAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIdAction;
}
template <typename T>
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>::__cordl_internal_set_setIdAction(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setIdAction = value;
}
template <typename T>
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>::__cordl_internal_get_partCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partCollection;
}
template <typename T>
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>::__cordl_internal_get_partCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partCollection;
}
template <typename T>
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>::__cordl_internal_set_partCollection(
    ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___partCollection = value;
}
template <typename T>
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController>&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>::__cordl_internal_set___4__this(
    ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename T>
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>::__cordl_internal_get_avatarEditPart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarEditPart;
}
template <typename T>
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>::__cordl_internal_get_avatarEditPart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarEditPart;
}
template <typename T>
constexpr void
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>::__cordl_internal_set_avatarEditPart(::BeatSaber::BeatAvatarSDK::AvatarPart value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___avatarEditPart = value;
}
template <typename T> inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>::_SetupValuePicker_b__0(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>*>(),
                                                           { "<SetupValuePicker>b__0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
template <typename T>
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>*
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController___c__DisplayClass62_0_1<T>::BeatAvatarEditorViewController___c__DisplayClass62_0_1() {}
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57::MoveNext)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x3278da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3279028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57::BeatAvatarEditorViewController__HandleCancelButtonWasPressed_d__57() {}
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.add_didRequestColorChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(
    ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>*)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::add_didRequestColorChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3272594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                            { "add_didRequestColorChangeEvent",
                              {},
                              { ::i2c::type_of<::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.remove_didRequestColorChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(
    ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>*)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::remove_didRequestColorChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3273368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                            { "remove_didRequestColorChangeEvent",
                              {},
                              { ::i2c::type_of<::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.add_randomizeAllButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::System::Action*)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::add_randomizeAllButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x327286c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "add_randomizeAllButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.remove_randomizeAllButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::System::Action*)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::remove_randomizeAllButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3273640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "remove_randomizeAllButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.add_didChangedAvatarPartEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(
    ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>*)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::add_didChangedAvatarPartEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3272654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                             { "add_didChangedAvatarPartEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.remove_didChangedAvatarPartEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(
    ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>*)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::remove_didChangedAvatarPartEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3273428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                             { "remove_didChangedAvatarPartEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.add_cancelButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::System::Action*)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::add_cancelButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3272714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "add_cancelButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.remove_cancelButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::System::Action*)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::remove_cancelButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32734e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "remove_cancelButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.add_okButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::System::Action*)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::add_okButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32727c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "add_okButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.remove_okButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::System::Action*)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::remove_okButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3273594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "remove_okButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(bool)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::Setup)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3271e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "Setup", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.InitHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::InitHistory)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3272918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "InitHistory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.RefreshUi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::RefreshUi)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x3272ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "RefreshUi", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(bool, bool, bool)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::DidActivate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3277554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.OneTimeInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::OneTimeInitialize)> {
  constexpr static std::size_t size = 0xc08;
  constexpr static std::size_t addrs = 0x3277590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "OneTimeInitialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::Update)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x32783d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.UpdateButtons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::UpdateButtons)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32774fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "UpdateButtons", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.HandleSkinColorDidChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(int32_t)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::HandleSkinColorDidChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x32785b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "HandleSkinColorDidChanged", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.EyesValuePickerHasChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::StringW)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::EyesValuePickerHasChanged)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3278644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "EyesValuePickerHasChanged", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.HandleUndoButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::HandleUndoButtonWasPressed)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x32784fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "HandleUndoButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.HandleRedoButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::HandleRedoButtonWasPressed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x327870c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "HandleRedoButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.HandleRandomizeAllButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::HandleRandomizeAllButtonWasPressed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x327845c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "HandleRandomizeAllButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.HandleRandomizeModelsButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::HandleRandomizeModelsButtonWasPressed)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x327880c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "HandleRandomizeModelsButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.HandleRandomizeColorsButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::HandleRandomizeColorsButtonWasPressed)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3278888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "HandleRandomizeColorsButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.ReportAllChangedAndUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::ReportAllChangedAndUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32787b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "ReportAllChangedAndUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.HandleApplyButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::HandleApplyButtonWasPressed)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x32788fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "HandleApplyButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.HandleCancelButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::HandleCancelButtonWasPressed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x32789cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "HandleCancelButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.CreateColorValuePairsForAvatarPartCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*> (
    ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*>)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::CreateColorValuePairsForAvatarPartCollection)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x32782c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                             { "CreateColorValuePairsForAvatarPartCollection", {}, { ::i2c::type_of<::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.SetupColorButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(
    ::UnityEngine::UI::Button*, ::System::Action_1<::UnityEngine::Color>*, ::System::Func_1<::UnityEngine::Color>*, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::SetupColorButton)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3278198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                         { "SetupColorButton",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Color>*>(),
                                             ::i2c::type_of<::System::Func_1<::UnityEngine::Color>*>(), ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPart>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController.SaveColorChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::BeatSaber::BeatAvatarSDK::AvatarPart)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::SaveColorChange)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3273c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "SaveColorChange", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPart>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3278a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController._OneTimeInitialize_b__45_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::UnityEngine::Color)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3278afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "<OneTimeInitialize>b__45_0", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController._OneTimeInitialize_b__45_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3278b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "<OneTimeInitialize>b__45_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController._OneTimeInitialize_b__45_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::UnityEngine::Color)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_2)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3278b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "<OneTimeInitialize>b__45_2", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController._OneTimeInitialize_b__45_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_3)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3278b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "<OneTimeInitialize>b__45_3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController._OneTimeInitialize_b__45_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::UnityEngine::Color)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_4)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3278b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "<OneTimeInitialize>b__45_4", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController._OneTimeInitialize_b__45_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_5)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3278bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "<OneTimeInitialize>b__45_5", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController._OneTimeInitialize_b__45_6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::UnityEngine::Color)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_6)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3278bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "<OneTimeInitialize>b__45_6", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController._OneTimeInitialize_b__45_7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_7)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3278c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "<OneTimeInitialize>b__45_7", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController._OneTimeInitialize_b__45_8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::UnityEngine::Color)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_8)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3278c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "<OneTimeInitialize>b__45_8", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController._OneTimeInitialize_b__45_9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_9)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3278c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "<OneTimeInitialize>b__45_9", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController._OneTimeInitialize_b__45_10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::UnityEngine::Color)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_10)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3278c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "<OneTimeInitialize>b__45_10", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController._OneTimeInitialize_b__45_11
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_11)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3278cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "<OneTimeInitialize>b__45_11", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController._OneTimeInitialize_b__45_12
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::StringW)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_12)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3278cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "<OneTimeInitialize>b__45_12", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController._OneTimeInitialize_b__45_13
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::StringW)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_13)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3278d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "<OneTimeInitialize>b__45_13", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController._OneTimeInitialize_b__45_14
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::*)(::StringW)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_14)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3278d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                           { "<OneTimeInitialize>b__45_14", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NamedColorListController>& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__skinColorValuePicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skinColorValuePicker;
}
constexpr ::UnityW<::GlobalNamespace::NamedColorListController> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__skinColorValuePicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skinColorValuePicker;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__skinColorValuePicker(::UnityW<::GlobalNamespace::NamedColorListController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____skinColorValuePicker = value;
}
constexpr ::UnityW<::GlobalNamespace::NamedIntListController>& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__headTopValuePicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTopValuePicker;
}
constexpr ::UnityW<::GlobalNamespace::NamedIntListController> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__headTopValuePicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTopValuePicker;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__headTopValuePicker(::UnityW<::GlobalNamespace::NamedIntListController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headTopValuePicker = value;
}
constexpr ::UnityW<::GlobalNamespace::NamedIntListController>& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__eyesValuePicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyesValuePicker;
}
constexpr ::UnityW<::GlobalNamespace::NamedIntListController> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__eyesValuePicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyesValuePicker;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__eyesValuePicker(::UnityW<::GlobalNamespace::NamedIntListController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eyesValuePicker = value;
}
constexpr ::UnityW<::GlobalNamespace::NamedIntListController>& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__handsValuePicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handsValuePicker;
}
constexpr ::UnityW<::GlobalNamespace::NamedIntListController> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__handsValuePicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handsValuePicker;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__handsValuePicker(::UnityW<::GlobalNamespace::NamedIntListController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handsValuePicker = value;
}
constexpr ::UnityW<::GlobalNamespace::NamedIntListController>& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__clothesValuePicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesValuePicker;
}
constexpr ::UnityW<::GlobalNamespace::NamedIntListController> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__clothesValuePicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesValuePicker;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__clothesValuePicker(::UnityW<::GlobalNamespace::NamedIntListController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clothesValuePicker = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__headTopPrimaryColorButtonController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTopPrimaryColorButtonController;
}
constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__headTopPrimaryColorButtonController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTopPrimaryColorButtonController;
}
constexpr void
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__headTopPrimaryColorButtonController(::UnityW<::GlobalNamespace::ColorPickerButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headTopPrimaryColorButtonController = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__headTopSecondaryColorButtonController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTopSecondaryColorButtonController;
}
constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__headTopSecondaryColorButtonController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTopSecondaryColorButtonController;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__headTopSecondaryColorButtonController(
    ::UnityW<::GlobalNamespace::ColorPickerButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headTopSecondaryColorButtonController = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__handsColorButtonController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handsColorButtonController;
}
constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__handsColorButtonController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handsColorButtonController;
}
constexpr void
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__handsColorButtonController(::UnityW<::GlobalNamespace::ColorPickerButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handsColorButtonController = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__clothesColorButtonControllerPrimary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesColorButtonControllerPrimary;
}
constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__clothesColorButtonControllerPrimary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesColorButtonControllerPrimary;
}
constexpr void
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__clothesColorButtonControllerPrimary(::UnityW<::GlobalNamespace::ColorPickerButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clothesColorButtonControllerPrimary = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__clothesColorButtonControllerSecondary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesColorButtonControllerSecondary;
}
constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__clothesColorButtonControllerSecondary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesColorButtonControllerSecondary;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__clothesColorButtonControllerSecondary(
    ::UnityW<::GlobalNamespace::ColorPickerButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clothesColorButtonControllerSecondary = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController>&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__clothesColorButtonControllerDetail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesColorButtonControllerDetail;
}
constexpr ::UnityW<::GlobalNamespace::ColorPickerButtonController> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__clothesColorButtonControllerDetail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesColorButtonControllerDetail;
}
constexpr void
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__clothesColorButtonControllerDetail(::UnityW<::GlobalNamespace::ColorPickerButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clothesColorButtonControllerDetail = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__randomizeAllButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizeAllButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__randomizeAllButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizeAllButton;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__randomizeAllButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomizeAllButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__undoButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____undoButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__undoButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____undoButton;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__undoButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____undoButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__redoButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____redoButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__redoButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____redoButton;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__redoButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____redoButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__applyButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__applyButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyButton;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__applyButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____applyButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__cancelButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__cancelButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelButton;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__cancelButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancelButton = value;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__applyButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyButtonText;
}
constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__applyButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyButtonText;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__applyButtonText(::UnityW<::HMUI::CurvedTextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____applyButtonText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__eyesPreviewImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyesPreviewImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__eyesPreviewImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyesPreviewImage;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__eyesPreviewImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eyesPreviewImage = value;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__avatarPartsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPartsModel;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__avatarPartsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPartsModel;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__avatarPartsModel(::BeatSaber::BeatAvatarSDK::AvatarPartsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarPartsModel = value;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel*& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__avatarDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDataModel;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__avatarDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDataModel;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarDataModel = value;
}
constexpr ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>*&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get_didRequestColorChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didRequestColorChangeEvent;
}
constexpr ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>* const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get_didRequestColorChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didRequestColorChangeEvent;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set_didRequestColorChangeEvent(
    ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didRequestColorChangeEvent = value;
}
constexpr ::System::Action*& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get_randomizeAllButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomizeAllButtonWasPressedEvent;
}
constexpr ::System::Action* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get_randomizeAllButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomizeAllButtonWasPressedEvent;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set_randomizeAllButtonWasPressedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___randomizeAllButtonWasPressedEvent = value;
}
constexpr ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get_didChangedAvatarPartEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangedAvatarPartEvent;
}
constexpr ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get_didChangedAvatarPartEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangedAvatarPartEvent;
}
constexpr void
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set_didChangedAvatarPartEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didChangedAvatarPartEvent = value;
}
constexpr ::System::Action*& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get_cancelButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelButtonWasPressedEvent;
}
constexpr ::System::Action* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get_cancelButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelButtonWasPressedEvent;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set_cancelButtonWasPressedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancelButtonWasPressedEvent = value;
}
constexpr ::System::Action*& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get_okButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___okButtonWasPressedEvent;
}
constexpr ::System::Action* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get_okButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___okButtonWasPressedEvent;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set_okButtonWasPressedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___okButtonWasPressedEvent = value;
}
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory*& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__avatarEditHistory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarEditHistory;
}
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory* const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__avatarEditHistory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarEditHistory;
}
constexpr void
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__avatarEditHistory(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarEditHistory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarEditHistory = value;
}
constexpr ::HMUI::ButtonBinder*& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder = value;
}
constexpr ::HMUI::ValueChangedBinder_1<int32_t>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__intPickerBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intPickerBinder;
}
constexpr ::HMUI::ValueChangedBinder_1<int32_t>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__intPickerBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intPickerBinder;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__intPickerBinder(::HMUI::ValueChangedBinder_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intPickerBinder = value;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__lastEditedPart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastEditedPart;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart const& BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_get__lastEditedPart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastEditedPart;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::__cordl_internal_set__lastEditedPart(::BeatSaber::BeatAvatarSDK::AvatarPart value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastEditedPart = value;
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::add_didRequestColorChangeEvent(
    ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                          { "add_didRequestColorChangeEvent",
                            {},
                            { ::i2c::type_of<::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::remove_didRequestColorChangeEvent(
    ::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                          { "remove_didRequestColorChangeEvent",
                            {},
                            { ::i2c::type_of<::System::Action_4<::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::add_randomizeAllButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "add_randomizeAllButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::remove_randomizeAllButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "remove_randomizeAllButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::add_didChangedAvatarPartEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                           { "add_didChangedAvatarPartEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::remove_didChangedAvatarPartEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                           { "remove_didChangedAvatarPartEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarPart>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::add_cancelButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "add_cancelButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::remove_cancelButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "remove_cancelButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::add_okButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "add_okButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::remove_okButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "remove_okButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::Setup(bool showAsCreateView) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "Setup", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, showAsCreateView);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::InitHistory() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "InitHistory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::RefreshUi() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "RefreshUi", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::OneTimeInitialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "OneTimeInitialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::Update() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::UpdateButtons() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "UpdateButtons", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::HandleSkinColorDidChanged(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "HandleSkinColorDidChanged", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::EyesValuePickerHasChanged(::StringW eyesId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "EyesValuePickerHasChanged", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eyesId);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::HandleUndoButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "HandleUndoButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::HandleRedoButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "HandleRedoButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::HandleRandomizeAllButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "HandleRandomizeAllButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::HandleRandomizeModelsButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "HandleRandomizeModelsButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::HandleRandomizeColorsButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "HandleRandomizeColorsButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::ReportAllChangedAndUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "ReportAllChangedAndUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::HandleApplyButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "HandleApplyButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::HandleCancelButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "HandleCancelButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline ::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*>
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::CreateTextValuePairsForAvatarPartCollection(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* partCollection) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                       { "CreateTextValuePairsForAvatarPartCollection", { ::i2c::class_of<T>() }, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*>>(nullptr, ___internal_method, partCollection);
}
inline ::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*>
BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::CreateColorValuePairsForAvatarPartCollection(::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*> colors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                           { "CreateColorValuePairsForAvatarPartCollection", {}, { ::i2c::type_of<::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*>>(this, ___internal_method, colors);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::SetupColorButton(::UnityEngine::UI::Button* button, ::System::Action_1<::UnityEngine::Color>* colorSetter,
                                                                                                         ::System::Func_1<::UnityEngine::Color>* currentColorGetter,
                                                                                                         ::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart, int32_t uvSegment) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                              { "SetupColorButton",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Color>*>(),
                                                  ::i2c::type_of<::System::Func_1<::UnityEngine::Color>*>(), ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPart>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, colorSetter, currentColorGetter, avatarEditPart, uvSegment);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::SaveColorChange(::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "SaveColorChange", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPart>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarEditPart);
}
template <typename T>
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::SetupValuePicker(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* partCollection,
                                                                                                         ::GlobalNamespace::NamedIntListController* valuePicker,
                                                                                                         ::System::Action_1<::StringW>* setIdAction,
                                                                                                         ::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                           { "SetupValuePicker",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>*>(), ::i2c::type_of<::GlobalNamespace::NamedIntListController*>(),
                                                               ::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPart>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partCollection, valuePicker, setIdAction, avatarEditPart);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_0(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "<OneTimeInitialize>b__45_0", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline ::UnityEngine::Color BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_1() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "<OneTimeInitialize>b__45_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_2(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "<OneTimeInitialize>b__45_2", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline ::UnityEngine::Color BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_3() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "<OneTimeInitialize>b__45_3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_4(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "<OneTimeInitialize>b__45_4", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline ::UnityEngine::Color BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_5() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "<OneTimeInitialize>b__45_5", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_6(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "<OneTimeInitialize>b__45_6", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline ::UnityEngine::Color BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_7() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "<OneTimeInitialize>b__45_7", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_8(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "<OneTimeInitialize>b__45_8", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline ::UnityEngine::Color BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_9() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "<OneTimeInitialize>b__45_9", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_10(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "<OneTimeInitialize>b__45_10", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline ::UnityEngine::Color BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_11() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(), { "<OneTimeInitialize>b__45_11", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_12(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "<OneTimeInitialize>b__45_12", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_13(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "<OneTimeInitialize>b__45_13", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::_OneTimeInitialize_b__45_14(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(),
                                                                                         { "<OneTimeInitialize>b__45_14", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController::BeatAvatarEditorViewController() {}
