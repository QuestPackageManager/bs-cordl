#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\EventCallbackList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctorBase_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackList_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctorBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventCallbackList::*)()>(&::UnityEngine::UIElements::EventCallbackList::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6d98b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventCallbackList::*)(::UnityEngine::UIElements::EventCallbackList*)>(
    &::UnityEngine::UIElements::EventCallbackList::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6d98b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackList*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventCallbackList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackList.Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventCallbackFunctorBase* (::UnityEngine::UIElements::EventCallbackList::*)(int64_t, ::System::Delegate*)>(
    &::UnityEngine::UIElements::EventCallbackList::Find)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6d98dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackList*>(), { "Find", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Delegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackList.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::EventCallbackList::*)(
    int64_t, ::System::Delegate*, ::by_ref<::UnityEngine::UIElements::EventCallbackFunctorBase*>)>(&::UnityEngine::UIElements::EventCallbackList::Remove)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6d98e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackList*>(),
                            { "Remove", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::EventCallbackFunctorBase*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackList.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventCallbackList::*)(::UnityEngine::UIElements::EventCallbackFunctorBase*)>(
    &::UnityEngine::UIElements::EventCallbackList::Add)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6d98f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackList*>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventCallbackFunctorBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackList.AddRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventCallbackList::*)(::UnityEngine::UIElements::EventCallbackList*)>(
    &::UnityEngine::UIElements::EventCallbackList::AddRange)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6d98be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackList*>(), { "AddRange", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventCallbackList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackList.get_Span
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<::UnityEngine::UIElements::EventCallbackFunctorBase*> (::UnityEngine::UIElements::EventCallbackList::*)()>(
    &::UnityEngine::UIElements::EventCallbackList::get_Span)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6d9906c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackList*>(), { "get_Span", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackList.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventCallbackList::*)()>(&::UnityEngine::UIElements::EventCallbackList::Clear)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6d98d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackList*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::UIElements::EventCallbackFunctorBase*>& UnityEngine::UIElements::EventCallbackList::__cordl_internal_get_m_Array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Array;
}
constexpr ::ArrayW<::UnityEngine::UIElements::EventCallbackFunctorBase*> const& UnityEngine::UIElements::EventCallbackList::__cordl_internal_get_m_Array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Array;
}
constexpr void UnityEngine::UIElements::EventCallbackList::__cordl_internal_set_m_Array(::ArrayW<::UnityEngine::UIElements::EventCallbackFunctorBase*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Array = value;
}
constexpr int32_t& UnityEngine::UIElements::EventCallbackList::__cordl_internal_get_m_Count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Count;
}
constexpr int32_t const& UnityEngine::UIElements::EventCallbackList::__cordl_internal_get_m_Count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Count;
}
constexpr void UnityEngine::UIElements::EventCallbackList::__cordl_internal_set_m_Count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Count = value;
}
inline void UnityEngine::UIElements::EventCallbackList::setStaticF_EmptyList(::UnityEngine::UIElements::EventCallbackList* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::EventCallbackList*, "EmptyList", ::UnityEngine::UIElements::EventCallbackList*>(
      std::forward<::UnityEngine::UIElements::EventCallbackList*>(value));
}
inline ::UnityEngine::UIElements::EventCallbackList* UnityEngine::UIElements::EventCallbackList::getStaticF_EmptyList() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventCallbackList*, "EmptyList", ::UnityEngine::UIElements::EventCallbackList*>();
}
inline void UnityEngine::UIElements::EventCallbackList::setStaticF_EmptyArray(::ArrayW<::UnityEngine::UIElements::EventCallbackFunctorBase*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::UIElements::EventCallbackFunctorBase*>, "EmptyArray", ::UnityEngine::UIElements::EventCallbackList*>(
      std::forward<::ArrayW<::UnityEngine::UIElements::EventCallbackFunctorBase*>>(value));
}
inline ::ArrayW<::UnityEngine::UIElements::EventCallbackFunctorBase*> UnityEngine::UIElements::EventCallbackList::getStaticF_EmptyArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::UIElements::EventCallbackFunctorBase*>, "EmptyArray", ::UnityEngine::UIElements::EventCallbackList*>();
}
inline void UnityEngine::UIElements::EventCallbackList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventCallbackList::_ctor(::UnityEngine::UIElements::EventCallbackList* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackList*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventCallbackList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::UnityEngine::UIElements::EventCallbackFunctorBase* UnityEngine::UIElements::EventCallbackList::Find(int64_t eventTypeId, ::System::Delegate* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackList*>(), { "Find", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Delegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackFunctorBase*>(this, ___internal_method, eventTypeId, callback);
}
inline bool UnityEngine::UIElements::EventCallbackList::Remove(int64_t eventTypeId, ::System::Delegate* callback, ::by_ref<::UnityEngine::UIElements::EventCallbackFunctorBase*> removedFunctor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackList*>(),
                          { "Remove", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::EventCallbackFunctorBase*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventTypeId, callback, removedFunctor);
}
inline void UnityEngine::UIElements::EventCallbackList::Add(::UnityEngine::UIElements::EventCallbackFunctorBase* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackList*>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventCallbackFunctorBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void UnityEngine::UIElements::EventCallbackList::AddRange(::UnityEngine::UIElements::EventCallbackList* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackList*>(), { "AddRange", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventCallbackList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline ::System::Span_1<::UnityEngine::UIElements::EventCallbackFunctorBase*> UnityEngine::UIElements::EventCallbackList::get_Span() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackList*>(), { "get_Span", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventCallbackList::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackList*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventCallbackList* UnityEngine::UIElements::EventCallbackList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EventCallbackList*>());
}
inline ::UnityEngine::UIElements::EventCallbackList* UnityEngine::UIElements::EventCallbackList::New_ctor(::UnityEngine::UIElements::EventCallbackList* source) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EventCallbackList*>(source));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventCallbackList::EventCallbackList() {}
