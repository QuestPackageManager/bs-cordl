#pragma once
// IWYU pragma private; include "GlobalNamespace\CreditsScenesTransitionSetupData.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__CreditsScenesTransitionSetupData_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreditsScenesTransitionSetupData.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsScenesTransitionSetupData::*)(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>*)>(
    &::GlobalNamespace::CreditsScenesTransitionSetupData::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x590dfa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupData*>(),
                                                             { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsScenesTransitionSetupData.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsScenesTransitionSetupData::*)(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>*)>(
    &::GlobalNamespace::CreditsScenesTransitionSetupData::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x590e064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupData*>(),
                                                             { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsScenesTransitionSetupData.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsScenesTransitionSetupData::*)()>(&::GlobalNamespace::CreditsScenesTransitionSetupData::Init)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x590e124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupData*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsScenesTransitionSetupData.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsScenesTransitionSetupData::*)()>(&::GlobalNamespace::CreditsScenesTransitionSetupData::Finish)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x590e1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupData*>(), { "Finish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsScenesTransitionSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsScenesTransitionSetupData::*)()>(&::GlobalNamespace::CreditsScenesTransitionSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590e204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>*& GlobalNamespace::CreditsScenesTransitionSetupData::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>* const& GlobalNamespace::CreditsScenesTransitionSetupData::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::CreditsScenesTransitionSetupData::__cordl_internal_set_didFinishEvent(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
inline void GlobalNamespace::CreditsScenesTransitionSetupData::add_didFinishEvent(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupData*>(),
                                                           { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CreditsScenesTransitionSetupData::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupData*>(),
                                                           { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CreditsScenesTransitionSetupData::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupData*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CreditsScenesTransitionSetupData::Finish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupData*>(), { "Finish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CreditsScenesTransitionSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreditsScenesTransitionSetupData* GlobalNamespace::CreditsScenesTransitionSetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreditsScenesTransitionSetupData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreditsScenesTransitionSetupData::CreditsScenesTransitionSetupData() {}
