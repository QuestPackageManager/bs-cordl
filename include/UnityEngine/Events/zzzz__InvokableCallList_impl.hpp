#pragma once
// IWYU pragma private; include "UnityEngine\Events\InvokableCallList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__InvokableCallList_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
//  Writing Method size for method: ::UnityEngine::Events::InvokableCallList.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Events::InvokableCallList::*)()>(&::UnityEngine::Events::InvokableCallList::get_Count)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6afdd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCallList*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCallList.AddPersistentInvokableCall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::InvokableCallList::*)(::UnityEngine::Events::BaseInvokableCall*)>(
    &::UnityEngine::Events::InvokableCallList::AddPersistentInvokableCall)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6afdc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCallList*>(),
                                                                                           { "AddPersistentInvokableCall", {}, { ::i2c::type_of<::UnityEngine::Events::BaseInvokableCall*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCallList.AddListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::InvokableCallList::*)(::UnityEngine::Events::BaseInvokableCall*)>(
    &::UnityEngine::Events::InvokableCallList::AddListener)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6afdd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCallList*>(), { "AddListener", {}, { ::i2c::type_of<::UnityEngine::Events::BaseInvokableCall*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCallList.RemoveListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::InvokableCallList::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(
    &::UnityEngine::Events::InvokableCallList::RemoveListener)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x6afde2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCallList*>(),
                                                             { "RemoveListener", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCallList.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::InvokableCallList::*)()>(&::UnityEngine::Events::InvokableCallList::Clear)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6afe0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCallList*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCallList.ClearPersistent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::InvokableCallList::*)()>(&::UnityEngine::Events::InvokableCallList::ClearPersistent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6afe194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCallList*>(), { "ClearPersistent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCallList.PrepareInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* (::UnityEngine::Events::InvokableCallList::*)()>(
    &::UnityEngine::Events::InvokableCallList::PrepareInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6afe258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCallList*>(), { "PrepareInvoke", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCallList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::InvokableCallList::*)()>(&::UnityEngine::Events::InvokableCallList::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6afe340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCallList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*& UnityEngine::Events::InvokableCallList::__cordl_internal_get_m_PersistentCalls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PersistentCalls;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* const& UnityEngine::Events::InvokableCallList::__cordl_internal_get_m_PersistentCalls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PersistentCalls;
}
constexpr void UnityEngine::Events::InvokableCallList::__cordl_internal_set_m_PersistentCalls(::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PersistentCalls = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*& UnityEngine::Events::InvokableCallList::__cordl_internal_get_m_RuntimeCalls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimeCalls;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* const& UnityEngine::Events::InvokableCallList::__cordl_internal_get_m_RuntimeCalls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimeCalls;
}
constexpr void UnityEngine::Events::InvokableCallList::__cordl_internal_set_m_RuntimeCalls(::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RuntimeCalls = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*& UnityEngine::Events::InvokableCallList::__cordl_internal_get_m_ExecutingCalls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutingCalls;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* const& UnityEngine::Events::InvokableCallList::__cordl_internal_get_m_ExecutingCalls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutingCalls;
}
constexpr void UnityEngine::Events::InvokableCallList::__cordl_internal_set_m_ExecutingCalls(::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExecutingCalls = value;
}
constexpr bool& UnityEngine::Events::InvokableCallList::__cordl_internal_get_m_NeedsUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedsUpdate;
}
constexpr bool const& UnityEngine::Events::InvokableCallList::__cordl_internal_get_m_NeedsUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedsUpdate;
}
constexpr void UnityEngine::Events::InvokableCallList::__cordl_internal_set_m_NeedsUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NeedsUpdate = value;
}
inline int32_t UnityEngine::Events::InvokableCallList::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCallList*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Events::InvokableCallList::AddPersistentInvokableCall(::UnityEngine::Events::BaseInvokableCall* call) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCallList*>(),
                                                                                         { "AddPersistentInvokableCall", {}, { ::i2c::type_of<::UnityEngine::Events::BaseInvokableCall*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, call);
}
inline void UnityEngine::Events::InvokableCallList::AddListener(::UnityEngine::Events::BaseInvokableCall* call) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCallList*>(), { "AddListener", {}, { ::i2c::type_of<::UnityEngine::Events::BaseInvokableCall*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, call);
}
inline void UnityEngine::Events::InvokableCallList::RemoveListener(::System::Object* targetObj, ::System::Reflection::MethodInfo* method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCallList*>(),
                                                           { "RemoveListener", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetObj, method);
}
inline void UnityEngine::Events::InvokableCallList::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCallList*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Events::InvokableCallList::ClearPersistent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCallList*>(), { "ClearPersistent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* UnityEngine::Events::InvokableCallList::PrepareInvoke() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCallList*>(), { "PrepareInvoke", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*>(this, ___internal_method);
}
inline void UnityEngine::Events::InvokableCallList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCallList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Events::InvokableCallList* UnityEngine::Events::InvokableCallList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Events::InvokableCallList*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Events::InvokableCallList::InvokableCallList() {}
