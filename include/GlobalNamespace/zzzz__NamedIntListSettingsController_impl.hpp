#pragma once
// IWYU pragma private; include "GlobalNamespace\NamedIntListSettingsController.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NamedIntListSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__NamedIntListSettingsController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NamedIntListSettingsController_TextValuePair.get_localizedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NamedIntListSettingsController_TextValuePair::*)()>(
    &::GlobalNamespace::NamedIntListSettingsController_TextValuePair::get_localizedText)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a14ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*>(), { "get_localizedText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListSettingsController_TextValuePair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedIntListSettingsController_TextValuePair::*)()>(
    &::GlobalNamespace::NamedIntListSettingsController_TextValuePair::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a14d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::NamedIntListSettingsController_TextValuePair::__cordl_internal_get_text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr ::StringW const& GlobalNamespace::NamedIntListSettingsController_TextValuePair::__cordl_internal_get_text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr void GlobalNamespace::NamedIntListSettingsController_TextValuePair::__cordl_internal_set_text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___text = value;
}
constexpr int32_t& GlobalNamespace::NamedIntListSettingsController_TextValuePair::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr int32_t const& GlobalNamespace::NamedIntListSettingsController_TextValuePair::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::NamedIntListSettingsController_TextValuePair::__cordl_internal_set_value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline ::StringW GlobalNamespace::NamedIntListSettingsController_TextValuePair::get_localizedText() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*>(), { "get_localizedText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::NamedIntListSettingsController_TextValuePair::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NamedIntListSettingsController_TextValuePair* GlobalNamespace::NamedIntListSettingsController_TextValuePair::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NamedIntListSettingsController_TextValuePair::NamedIntListSettingsController_TextValuePair() {}
//  Writing Method size for method: ::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0::*)()>(
    &::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a14c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0._SetValue_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0::*)(
    ::GlobalNamespace::NamedIntListSettingsController_TextValuePair*)>(&::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0::_SetValue_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a14d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0*>(),
                                                             { "<SetValue>b__0", {}, { ::i2c::type_of<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr int32_t const& GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0::__cordl_internal_set_value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0::_SetValue_b__0(::GlobalNamespace::NamedIntListSettingsController_TextValuePair* entry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0*>(),
                                                           { "<SetValue>b__0", {}, { ::i2c::type_of<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry);
}
inline ::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0* GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NamedIntListSettingsController___c__DisplayClass6_0::NamedIntListSettingsController___c__DisplayClass6_0() {}
//  Writing Method size for method: ::GlobalNamespace::NamedIntListSettingsController.add_valueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedIntListSettingsController::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::NamedIntListSettingsController::add_valueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a149a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(),
                                                                                           { "add_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListSettingsController.remove_valueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedIntListSettingsController::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::NamedIntListSettingsController::remove_valueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a14a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(),
                                                                                           { "remove_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListSettingsController.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedIntListSettingsController::*)(int32_t, bool)>(&::GlobalNamespace::NamedIntListSettingsController::SetValue)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5a14b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListSettingsController.GetInitValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NamedIntListSettingsController::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::GlobalNamespace::NamedIntListSettingsController::GetInitValues)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a14c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(), { ::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListSettingsController.ApplyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedIntListSettingsController::*)(int32_t)>(&::GlobalNamespace::NamedIntListSettingsController::ApplyValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a14c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(), { ::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListSettingsController.TextForValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NamedIntListSettingsController::*)(int32_t)>(&::GlobalNamespace::NamedIntListSettingsController::TextForValue)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a14cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(), { ::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListSettingsController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedIntListSettingsController::*)()>(&::GlobalNamespace::NamedIntListSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a14d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*>& GlobalNamespace::NamedIntListSettingsController::__cordl_internal_get__textValuePairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textValuePairs;
}
constexpr ::ArrayW<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*> const& GlobalNamespace::NamedIntListSettingsController::__cordl_internal_get__textValuePairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textValuePairs;
}
constexpr void GlobalNamespace::NamedIntListSettingsController::__cordl_internal_set__textValuePairs(::ArrayW<::GlobalNamespace::NamedIntListSettingsController_TextValuePair*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textValuePairs = value;
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::NamedIntListSettingsController::__cordl_internal_get_valueDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueDidChangeEvent;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::NamedIntListSettingsController::__cordl_internal_get_valueDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueDidChangeEvent;
}
constexpr void GlobalNamespace::NamedIntListSettingsController::__cordl_internal_set_valueDidChangeEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueDidChangeEvent = value;
}
constexpr int32_t& GlobalNamespace::NamedIntListSettingsController::__cordl_internal_get__selectedIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedIndex;
}
constexpr int32_t const& GlobalNamespace::NamedIntListSettingsController::__cordl_internal_get__selectedIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedIndex;
}
constexpr void GlobalNamespace::NamedIntListSettingsController::__cordl_internal_set__selectedIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedIndex = value;
}
inline void GlobalNamespace::NamedIntListSettingsController::add_valueDidChangeEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(), { "add_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NamedIntListSettingsController::remove_valueDidChangeEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(),
                                                                                         { "remove_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NamedIntListSettingsController::SetValue(int32_t value, bool applyValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, applyValue);
}
inline bool GlobalNamespace::NamedIntListSettingsController::GetInitValues(::by_ref<int32_t> idx, ::by_ref<int32_t> numberOfElements) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::NamedIntListSettingsController::ApplyValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::NamedIntListSettingsController::TextForValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, idx);
}
inline void GlobalNamespace::NamedIntListSettingsController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListSettingsController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NamedIntListSettingsController* GlobalNamespace::NamedIntListSettingsController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NamedIntListSettingsController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NamedIntListSettingsController::NamedIntListSettingsController() {}
