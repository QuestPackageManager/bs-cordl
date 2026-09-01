#pragma once
// IWYU pragma private; include "GlobalNamespace\GameServerListDetailTableCell.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "GlobalNamespace/zzzz__GameServerListDetailTableCell_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServerListDetailTableCell.add_joinServerButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerListDetailTableCell::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerListDetailTableCell::add_joinServerButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a01704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerListDetailTableCell*>(),
                                                                                           { "add_joinServerButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerListDetailTableCell.remove_joinServerButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerListDetailTableCell::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerListDetailTableCell::remove_joinServerButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a017b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerListDetailTableCell*>(),
                                                                                           { "remove_joinServerButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerListDetailTableCell.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerListDetailTableCell::*)()>(&::GlobalNamespace::GameServerListDetailTableCell::Start)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a0185c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerListDetailTableCell*>(), { ::i2c::class_of<::GlobalNamespace::GameServerListDetailTableCell*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerListDetailTableCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerListDetailTableCell::*)()>(&::GlobalNamespace::GameServerListDetailTableCell::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a0192c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerListDetailTableCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerListDetailTableCell._Start_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerListDetailTableCell::*)()>(&::GlobalNamespace::GameServerListDetailTableCell::_Start_b__5_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a0198c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerListDetailTableCell*>(), { "<Start>b__5_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_get__joinServerButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____joinServerButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_get__joinServerButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____joinServerButton;
}
constexpr void GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_set__joinServerButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____joinServerButton = value;
}
constexpr ::System::Action*& GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_get_joinServerButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joinServerButtonWasPressedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_get_joinServerButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joinServerButtonWasPressedEvent;
}
constexpr void GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_set_joinServerButtonWasPressedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___joinServerButtonWasPressedEvent = value;
}
constexpr ::HMUI::ButtonBinder*& GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder = value;
}
inline void GlobalNamespace::GameServerListDetailTableCell::add_joinServerButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerListDetailTableCell*>(), { "add_joinServerButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerListDetailTableCell::remove_joinServerButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerListDetailTableCell*>(),
                                                                                         { "remove_joinServerButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerListDetailTableCell::Start() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameServerListDetailTableCell*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerListDetailTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerListDetailTableCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerListDetailTableCell::_Start_b__5_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerListDetailTableCell*>(), { "<Start>b__5_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameServerListDetailTableCell* GlobalNamespace::GameServerListDetailTableCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameServerListDetailTableCell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerListDetailTableCell::GameServerListDetailTableCell() {}
