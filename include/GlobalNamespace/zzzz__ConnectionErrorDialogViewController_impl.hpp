#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectionErrorDialogViewController.hpp"
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectionErrorDialogViewController_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionErrorDialogViewController_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0::*)()>(
    &::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a118b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0._Init_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0::*)(int32_t)>(
    &::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0::_Init_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a118cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0*>(), { "<Init>b__0", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0::__cordl_internal_get_buttonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonAction;
}
constexpr ::System::Action* const& GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0::__cordl_internal_get_buttonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonAction;
}
constexpr void GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0::__cordl_internal_set_buttonAction(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buttonAction = value;
}
inline void GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0::_Init_b__0(int32_t btnIdx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0*>(), { "<Init>b__0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, btnIdx);
}
inline ::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0* GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectionErrorDialogViewController___c__DisplayClass2_0::ConnectionErrorDialogViewController___c__DisplayClass2_0() {}
//  Writing Method size for method: ::GlobalNamespace::ConnectionErrorDialogViewController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectionErrorDialogViewController::*)(::GlobalNamespace::DisconnectedReason, ::System::Action*)>(
    &::GlobalNamespace::ConnectionErrorDialogViewController::Init)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5a116dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectionErrorDialogViewController*>(),
                                                             { "Init", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectionErrorDialogViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectionErrorDialogViewController::*)()>(&::GlobalNamespace::ConnectionErrorDialogViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a118c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectionErrorDialogViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ConnectionErrorDialogViewController::Init(::GlobalNamespace::DisconnectedReason reason, ::System::Action* buttonAction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectionErrorDialogViewController*>(),
                                                           { "Init", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason, buttonAction);
}
inline void GlobalNamespace::ConnectionErrorDialogViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConnectionErrorDialogViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectionErrorDialogViewController* GlobalNamespace::ConnectionErrorDialogViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConnectionErrorDialogViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectionErrorDialogViewController::ConnectionErrorDialogViewController() {}
