#pragma once
// IWYU pragma private; include "GlobalNamespace/MockComboController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockComboController_def.hpp"
#include "GlobalNamespace/zzzz__IComboController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockComboController.add_comboDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockComboController::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::MockComboController::add_comboDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59ed7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockComboController*>(), { "add_comboDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockComboController.remove_comboDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockComboController::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::MockComboController::remove_comboDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59ed89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockComboController*>(), { "remove_comboDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockComboController.add_comboBreakingEventHappenedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockComboController::*)(::System::Action*)>(
    &::GlobalNamespace::MockComboController::add_comboBreakingEventHappenedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59ed95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockComboController*>(), { "add_comboBreakingEventHappenedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockComboController.remove_comboBreakingEventHappenedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockComboController::*)(::System::Action*)>(
    &::GlobalNamespace::MockComboController::remove_comboBreakingEventHappenedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59eda08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockComboController*>(), { "remove_comboBreakingEventHappenedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockComboController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockComboController::*)()>(&::GlobalNamespace::MockComboController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59edab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockComboController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::MockComboController::__cordl_internal_get_comboDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comboDidChangeEvent;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::MockComboController::__cordl_internal_get_comboDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comboDidChangeEvent;
}
constexpr void GlobalNamespace::MockComboController::__cordl_internal_set_comboDidChangeEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___comboDidChangeEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::MockComboController::__cordl_internal_get_comboBreakingEventHappenedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comboBreakingEventHappenedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::MockComboController::__cordl_internal_get_comboBreakingEventHappenedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comboBreakingEventHappenedEvent;
}
constexpr void GlobalNamespace::MockComboController::__cordl_internal_set_comboBreakingEventHappenedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___comboBreakingEventHappenedEvent = value;
}
inline void GlobalNamespace::MockComboController::add_comboDidChangeEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockComboController*>(), { "add_comboDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockComboController::remove_comboDidChangeEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockComboController*>(), { "remove_comboDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockComboController::add_comboBreakingEventHappenedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockComboController*>(), { "add_comboBreakingEventHappenedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockComboController::remove_comboBreakingEventHappenedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockComboController*>(), { "remove_comboBreakingEventHappenedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockComboController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockComboController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockComboController* GlobalNamespace::MockComboController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockComboController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IComboController"
constexpr GlobalNamespace::MockComboController::operator ::GlobalNamespace::IComboController*() noexcept {
  return static_cast<::GlobalNamespace::IComboController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IComboController"
constexpr ::GlobalNamespace::IComboController* GlobalNamespace::MockComboController::i___GlobalNamespace__IComboController() noexcept {
  return static_cast<::GlobalNamespace::IComboController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockComboController::MockComboController() {}
