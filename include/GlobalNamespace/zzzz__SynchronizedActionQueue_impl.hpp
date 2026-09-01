#pragma once
// IWYU pragma private; include "GlobalNamespace\SynchronizedActionQueue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SynchronizedActionQueue_def.hpp"
#include "GlobalNamespace/zzzz__SynchronizedActionQueue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue_SynchronizedAction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue_SynchronizedAction::*)(float_t, ::System::Action*)>(
    &::GlobalNamespace::SynchronizedActionQueue_SynchronizedAction::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3341f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SynchronizedActionQueue_SynchronizedAction>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SynchronizedActionQueue_SynchronizedAction::_ctor(float_t time, ::System::Action* action) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SynchronizedActionQueue_SynchronizedAction>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, time, action);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SynchronizedActionQueue_SynchronizedAction::SynchronizedActionQueue_SynchronizedAction(float_t time, ::System::Action* action) noexcept {
  this->time = time;
  this->action = action;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynchronizedActionQueue_SynchronizedAction::SynchronizedActionQueue_SynchronizedAction() {}
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue::*)()>(&::GlobalNamespace::SynchronizedActionQueue::Clear)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3341e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SynchronizedActionQueue*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue.EnqueueAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue::*)(float_t, ::System::Action*)>(&::GlobalNamespace::SynchronizedActionQueue::EnqueueAction)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3341ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SynchronizedActionQueue*>(), { "EnqueueAction", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue::*)(float_t)>(&::GlobalNamespace::SynchronizedActionQueue::Update)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3341f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SynchronizedActionQueue*>(), { "Update", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue::*)()>(&::GlobalNamespace::SynchronizedActionQueue::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x334207c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SynchronizedActionQueue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SynchronizedActionQueue_SynchronizedAction>*&
GlobalNamespace::SynchronizedActionQueue::__cordl_internal_get__synchronizedActionQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____synchronizedActionQueue;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SynchronizedActionQueue_SynchronizedAction>* const&
GlobalNamespace::SynchronizedActionQueue::__cordl_internal_get__synchronizedActionQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____synchronizedActionQueue;
}
constexpr void
GlobalNamespace::SynchronizedActionQueue::__cordl_internal_set__synchronizedActionQueue(::System::Collections::Generic::List_1<::GlobalNamespace::SynchronizedActionQueue_SynchronizedAction>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____synchronizedActionQueue = value;
}
inline void GlobalNamespace::SynchronizedActionQueue::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SynchronizedActionQueue*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynchronizedActionQueue::EnqueueAction(float_t time, ::System::Action* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SynchronizedActionQueue*>(), { "EnqueueAction", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, action);
}
inline void GlobalNamespace::SynchronizedActionQueue::Update(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SynchronizedActionQueue*>(), { "Update", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void GlobalNamespace::SynchronizedActionQueue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SynchronizedActionQueue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SynchronizedActionQueue* GlobalNamespace::SynchronizedActionQueue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SynchronizedActionQueue*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynchronizedActionQueue::SynchronizedActionQueue() {}
