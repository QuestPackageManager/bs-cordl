#pragma once
// IWYU pragma private; include "UnityEngine\Events\PersistentCallGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__PersistentCallGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__InvokableCallList_def.hpp"
#include "UnityEngine/Events/zzzz__PersistentCall_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::Events::PersistentCallGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::PersistentCallGroup::*)()>(&::UnityEngine::Events::PersistentCallGroup::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6afdaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::PersistentCallGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::PersistentCallGroup.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::PersistentCallGroup::*)(::UnityEngine::Events::InvokableCallList*, ::UnityEngine::Events::UnityEventBase*)>(
    &::UnityEngine::Events::PersistentCallGroup::Initialize)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6afdb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::PersistentCallGroup*>(),
                                                { "Initialize", {}, { ::i2c::type_of<::UnityEngine::Events::InvokableCallList*>(), ::i2c::type_of<::UnityEngine::Events::UnityEventBase*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>*& UnityEngine::Events::PersistentCallGroup::__cordl_internal_get_m_Calls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Calls;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>* const& UnityEngine::Events::PersistentCallGroup::__cordl_internal_get_m_Calls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Calls;
}
constexpr void UnityEngine::Events::PersistentCallGroup::__cordl_internal_set_m_Calls(::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Calls = value;
}
inline void UnityEngine::Events::PersistentCallGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::PersistentCallGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Events::PersistentCallGroup::Initialize(::UnityEngine::Events::InvokableCallList* invokableList, ::UnityEngine::Events::UnityEventBase* unityEventBase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::PersistentCallGroup*>(),
                                              { "Initialize", {}, { ::i2c::type_of<::UnityEngine::Events::InvokableCallList*>(), ::i2c::type_of<::UnityEngine::Events::UnityEventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, invokableList, unityEventBase);
}
inline ::UnityEngine::Events::PersistentCallGroup* UnityEngine::Events::PersistentCallGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Events::PersistentCallGroup*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Events::PersistentCallGroup::PersistentCallGroup() {}
