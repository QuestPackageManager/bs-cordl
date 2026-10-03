#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RadioButtonGroup.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UQueryBuilder_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__RadioButtonGroup_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBoxOption_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__RadioButtonGroup_def.hpp"
#include "UnityEngine/UIElements/zzzz__RadioButton_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory::*)()>(&::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x71f7138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::RadioButtonGroup_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory* UnityEngine::UIElements::RadioButtonGroup_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RadioButtonGroup_UxmlFactory::RadioButtonGroup_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x71f71a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits::*)()>(&::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x71f72cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::RadioButtonGroup_UxmlTraits::__cordl_internal_get_m_Choices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Choices;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::RadioButtonGroup_UxmlTraits::__cordl_internal_get_m_Choices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Choices;
}
constexpr void UnityEngine::UIElements::RadioButtonGroup_UxmlTraits::__cordl_internal_set_m_Choices(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Choices = value;
}
inline void UnityEngine::UIElements::RadioButtonGroup_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                       ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::RadioButtonGroup_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits* UnityEngine::UIElements::RadioButtonGroup_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RadioButtonGroup_UxmlTraits::RadioButtonGroup_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::*)(int32_t)>(
    &::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x71f7370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::*)()>(
    &::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x71f7390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::*)()>(
    &::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x71f7474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::*)()>(
    &::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__m__Finally1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x71f7710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17.__m__Finally2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::*)()>(
    &::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__m__Finally2)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x71f76c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(), { "<>m__Finally2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17.System_Collections_Generic_IEnumerator_System_String__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::*)()>(
    &::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::System_Collections_Generic_IEnumerator_System_String__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71f7764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.String>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::*)()>(
    &::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x71f776c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::*)()>(
    &::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71f77a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17.System_Collections_Generic_IEnumerable_System_String__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>* (::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::*)()>(
    &::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::System_Collections_Generic_IEnumerable_System_String__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x71f77ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<System.String>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::*)()>(
    &::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x71f7844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::StringW& UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::StringW const& UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_set___2__current(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityEngine::UIElements::RadioButtonGroup*& UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityEngine::UIElements::RadioButtonGroup* const& UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_set___4__this(::UnityEngine::UIElements::RadioButtonGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*>&
UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_get____5__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->______5__1;
}
constexpr ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*> const&
UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_get____5__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->______5__1;
}
constexpr void UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_set____5__1(
    ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->______5__1 = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*& UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_get__radioButtons_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radioButtons_5__2;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* const&
UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_get__radioButtons_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radioButtons_5__2;
}
constexpr void
UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_set__radioButtons_5__2(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____radioButtons_5__2 = value;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::RadioButton*>& UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_get___s__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__3;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::RadioButton*> const&
UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_get___s__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__3;
}
constexpr void
UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_set___s__3(::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::RadioButton*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____s__3 = value;
}
constexpr ::UnityEngine::UIElements::RadioButton*& UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_get__button_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button_5__4;
}
constexpr ::UnityEngine::UIElements::RadioButton* const& UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_get__button_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button_5__4;
}
constexpr void UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__cordl_internal_set__button_5__4(::UnityEngine::UIElements::RadioButton* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____button_5__4 = value;
}
inline void UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(), { "<>m__Finally2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::System_Collections_Generic_IEnumerator_System_String__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.String>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::StringW>* UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::System_Collections_Generic_IEnumerable_System_String__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<System.String>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17* UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*
UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>*
UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RadioButtonGroup__get_choices_d__17::RadioButtonGroup__get_choices_d__17() {}
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.get_choices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::UnityEngine::UIElements::RadioButtonGroup::*)()>(
    &::UnityEngine::UIElements::RadioButtonGroup::get_choices)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x71f54c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), { "get_choices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.set_choices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::UnityEngine::UIElements::RadioButtonGroup::set_choices)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x71f5534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                                                           { "set_choices", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.RebuildRadioButtonsFromChoices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)()>(&::UnityEngine::UIElements::RadioButtonGroup::RebuildRadioButtonsFromChoices)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x71f5b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), { "RebuildRadioButtonsFromChoices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.set_choicesList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::UnityEngine::UIElements::RadioButtonGroup::set_choicesList)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x71f5f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                                                           { "set_choicesList", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.get_contentContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::RadioButtonGroup::*)()>(
    &::UnityEngine::UIElements::RadioButtonGroup::get_contentContainer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x71f5f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), { ::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), 138 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)()>(&::UnityEngine::UIElements::RadioButtonGroup::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x71f5f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)(::StringW, ::System::Collections::Generic::List_1<::StringW>*)>(
    &::UnityEngine::UIElements::RadioButtonGroup::_ctor)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x71f5f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.RadioButtonValueChangedCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)(::UnityEngine::UIElements::ChangeEvent_1<bool>*)>(
    &::UnityEngine::UIElements::RadioButtonGroup::RadioButtonValueChangedCallback)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x71f62fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                             { "RadioButtonValueChangedCallback", {}, { ::i2c::type_of<::UnityEngine::UIElements::ChangeEvent_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)(int32_t)>(&::UnityEngine::UIElements::RadioButtonGroup::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x71f65dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), { ::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), 159 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.GetAllRadioButtons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*)>(
    &::UnityEngine::UIElements::RadioButtonGroup::GetAllRadioButtons)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x71f6508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                             { "GetAllRadioButtons", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.UpdateRadioButtons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)(bool)>(&::UnityEngine::UIElements::RadioButtonGroup::UpdateRadioButtons)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x71f6644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), { "UpdateRadioButtons", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.ScheduleRadioButtons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)()>(&::UnityEngine::UIElements::RadioButtonGroup::ScheduleRadioButtons)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x71f5e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), { "ScheduleRadioButtons", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.RegisterRadioButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)(::UnityEngine::UIElements::RadioButton*)>(
    &::UnityEngine::UIElements::RadioButtonGroup::RegisterRadioButton)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x71f6a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                                                           { "RegisterRadioButton", {}, { ::i2c::type_of<::UnityEngine::UIElements::RadioButton*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.UnregisterRadioButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)(::UnityEngine::UIElements::RadioButton*)>(
    &::UnityEngine::UIElements::RadioButtonGroup::UnregisterRadioButton)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x71f6cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                                                           { "UnregisterRadioButton", {}, { ::i2c::type_of<::UnityEngine::UIElements::RadioButton*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.UnityEngine_UIElements_IGroupBox_OnOptionAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(
    &::UnityEngine::UIElements::RadioButtonGroup::UnityEngine_UIElements_IGroupBox_OnOptionAdded)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x71f6dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                             { "UnityEngine.UIElements.IGroupBox.OnOptionAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBoxOption*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.UnityEngine_UIElements_IGroupBox_OnOptionRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(
    &::UnityEngine::UIElements::RadioButtonGroup::UnityEngine_UIElements_IGroupBox_OnOptionRemoved)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x71f6e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                             { "UnityEngine.UIElements.IGroupBox.OnOptionRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBoxOption*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup._set_choices_g__AreListEqual_18_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::UnityEngine::UIElements::RadioButtonGroup::_set_choices_g__AreListEqual_18_0)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x71f5690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                         { "<set_choices>g__AreListEqual|18_0",
                                           {},
                                           { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup._ScheduleRadioButtons_b__31_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)()>(&::UnityEngine::UIElements::RadioButtonGroup::_ScheduleRadioButtons_b__31_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71f7130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), { "<ScheduleRadioButtons>b__31_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_get_m_ChoiceRadioButtonContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChoiceRadioButtonContainer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_get_m_ChoiceRadioButtonContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChoiceRadioButtonContainer;
}
constexpr void UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_set_m_ChoiceRadioButtonContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChoiceRadioButtonContainer = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_get_m_ContentContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_get_m_ContentContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainer;
}
constexpr void UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentContainer = value;
}
constexpr ::UnityEngine::UIElements::UQueryBuilder_1<::UnityEngine::UIElements::RadioButton*>& UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_get_m_GetAllRadioButtonsQuery() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetAllRadioButtonsQuery;
}
constexpr ::UnityEngine::UIElements::UQueryBuilder_1<::UnityEngine::UIElements::RadioButton*> const& UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_get_m_GetAllRadioButtonsQuery() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetAllRadioButtonsQuery;
}
constexpr void UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_set_m_GetAllRadioButtonsQuery(::UnityEngine::UIElements::UQueryBuilder_1<::UnityEngine::UIElements::RadioButton*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GetAllRadioButtonsQuery = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*& UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_get_m_RegisteredRadioButtons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegisteredRadioButtons;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* const& UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_get_m_RegisteredRadioButtons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegisteredRadioButtons;
}
constexpr void UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_set_m_RegisteredRadioButtons(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RegisteredRadioButtons = value;
}
constexpr ::UnityEngine::UIElements::RadioButton*& UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_get_m_SelectedRadioButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedRadioButton;
}
constexpr ::UnityEngine::UIElements::RadioButton* const& UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_get_m_SelectedRadioButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedRadioButton;
}
constexpr void UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_set_m_SelectedRadioButton(::UnityEngine::UIElements::RadioButton* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectedRadioButton = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>*&
UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_get_m_RadioButtonValueChangedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RadioButtonValueChangedCallback;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* const&
UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_get_m_RadioButtonValueChangedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RadioButtonValueChangedCallback;
}
constexpr void
UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_set_m_RadioButtonValueChangedCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RadioButtonValueChangedCallback = value;
}
constexpr bool& UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_get_m_UpdatingButtons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdatingButtons;
}
constexpr bool const& UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_get_m_UpdatingButtons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdatingButtons;
}
constexpr void UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_set_m_UpdatingButtons(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdatingButtons = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_get_m_Choices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Choices;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_get_m_Choices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Choices;
}
constexpr void UnityEngine::UIElements::RadioButtonGroup::__cordl_internal_set_m_Choices(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Choices = value;
}
inline void UnityEngine::UIElements::RadioButtonGroup::setStaticF_choicesProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "choicesProperty", ::UnityEngine::UIElements::RadioButtonGroup*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::RadioButtonGroup::getStaticF_choicesProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "choicesProperty", ::UnityEngine::UIElements::RadioButtonGroup*>();
}
inline void UnityEngine::UIElements::RadioButtonGroup::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::RadioButtonGroup*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RadioButtonGroup::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::RadioButtonGroup*>();
}
inline void UnityEngine::UIElements::RadioButtonGroup::setStaticF_containerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "containerUssClassName", ::UnityEngine::UIElements::RadioButtonGroup*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RadioButtonGroup::getStaticF_containerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "containerUssClassName", ::UnityEngine::UIElements::RadioButtonGroup*>();
}
inline void UnityEngine::UIElements::RadioButtonGroup::setStaticF_containerName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "containerName", ::UnityEngine::UIElements::RadioButtonGroup*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RadioButtonGroup::getStaticF_containerName() {
  return ::cordl_internals::getStaticField<::StringW, "containerName", ::UnityEngine::UIElements::RadioButtonGroup*>();
}
inline void UnityEngine::UIElements::RadioButtonGroup::setStaticF_choicesContainerName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "choicesContainerName", ::UnityEngine::UIElements::RadioButtonGroup*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RadioButtonGroup::getStaticF_choicesContainerName() {
  return ::cordl_internals::getStaticField<::StringW, "choicesContainerName", ::UnityEngine::UIElements::RadioButtonGroup*>();
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::UIElements::RadioButtonGroup::get_choices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), { "get_choices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RadioButtonGroup::set_choices(::System::Collections::Generic::IEnumerable_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                                                         { "set_choices", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::RadioButtonGroup::RebuildRadioButtonsFromChoices() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), { "RebuildRadioButtonsFromChoices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RadioButtonGroup::set_choicesList(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                                                         { "set_choicesList", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::RadioButtonGroup::get_contentContainer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), 138 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RadioButtonGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RadioButtonGroup::_ctor(::StringW label, ::System::Collections::Generic::List_1<::StringW>* radioButtonChoices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, radioButtonChoices);
}
inline void UnityEngine::UIElements::RadioButtonGroup::RadioButtonValueChangedCallback(::UnityEngine::UIElements::ChangeEvent_1<bool>* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                           { "RadioButtonValueChangedCallback", {}, { ::i2c::type_of<::UnityEngine::UIElements::ChangeEvent_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::RadioButtonGroup::SetValueWithoutNotify(int32_t newValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), 159 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void UnityEngine::UIElements::RadioButtonGroup::GetAllRadioButtons(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>* radioButtons) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                           { "GetAllRadioButtons", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, radioButtons);
}
inline void UnityEngine::UIElements::RadioButtonGroup::UpdateRadioButtons(bool notify) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), { "UpdateRadioButtons", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notify);
}
inline void UnityEngine::UIElements::RadioButtonGroup::ScheduleRadioButtons() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), { "ScheduleRadioButtons", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RadioButtonGroup::RegisterRadioButton(::UnityEngine::UIElements::RadioButton* radioButton) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), { "RegisterRadioButton", {}, { ::i2c::type_of<::UnityEngine::UIElements::RadioButton*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, radioButton);
}
inline void UnityEngine::UIElements::RadioButtonGroup::UnregisterRadioButton(::UnityEngine::UIElements::RadioButton* radioButton) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                                                         { "UnregisterRadioButton", {}, { ::i2c::type_of<::UnityEngine::UIElements::RadioButton*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, radioButton);
}
inline void UnityEngine::UIElements::RadioButtonGroup::UnityEngine_UIElements_IGroupBox_OnOptionAdded(::UnityEngine::UIElements::IGroupBoxOption* option) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                           { "UnityEngine.UIElements.IGroupBox.OnOptionAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBoxOption*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, option);
}
inline void UnityEngine::UIElements::RadioButtonGroup::UnityEngine_UIElements_IGroupBox_OnOptionRemoved(::UnityEngine::UIElements::IGroupBoxOption* option) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                                           { "UnityEngine.UIElements.IGroupBox.OnOptionRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBoxOption*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, option);
}
inline bool UnityEngine::UIElements::RadioButtonGroup::_set_choices_g__AreListEqual_18_0(::System::Collections::Generic::List_1<::StringW>* list1,
                                                                                         ::System::Collections::Generic::IEnumerable_1<::StringW>* list2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(),
                                       { "<set_choices>g__AreListEqual|18_0",
                                         {},
                                         { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list1, list2);
}
inline void UnityEngine::UIElements::RadioButtonGroup::_ScheduleRadioButtons_b__31_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RadioButtonGroup*>(), { "<ScheduleRadioButtons>b__31_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RadioButtonGroup* UnityEngine::UIElements::RadioButtonGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RadioButtonGroup*>());
}
inline ::UnityEngine::UIElements::RadioButtonGroup* UnityEngine::UIElements::RadioButtonGroup::New_ctor(::StringW label, ::System::Collections::Generic::List_1<::StringW>* radioButtonChoices) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RadioButtonGroup*>(label, radioButtonChoices));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IGroupBox"
constexpr UnityEngine::UIElements::RadioButtonGroup::operator ::UnityEngine::UIElements::IGroupBox*() noexcept {
  return static_cast<::UnityEngine::UIElements::IGroupBox*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IGroupBox"
constexpr ::UnityEngine::UIElements::IGroupBox* UnityEngine::UIElements::RadioButtonGroup::i___UnityEngine__UIElements__IGroupBox() noexcept {
  return static_cast<::UnityEngine::UIElements::IGroupBox*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RadioButtonGroup::RadioButtonGroup() {}
