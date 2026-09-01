#pragma once
// IWYU pragma private; include "GlobalNamespace\NamedIntListController.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NamedIntListController_def.hpp"
#include "GlobalNamespace/zzzz__NamedIntListController_def.hpp"
#include "HMUI/zzzz__IValueChanger_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController_TextValuePair.get_localizedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NamedIntListController_TextValuePair::*)()>(
    &::GlobalNamespace::NamedIntListController_TextValuePair::get_localizedText)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a304f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController_TextValuePair*>(), { "get_localizedText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController_TextValuePair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedIntListController_TextValuePair::*)()>(&::GlobalNamespace::NamedIntListController_TextValuePair::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a3051c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController_TextValuePair*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::NamedIntListController_TextValuePair::__cordl_internal_get_localizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizationKey;
}
constexpr ::StringW const& GlobalNamespace::NamedIntListController_TextValuePair::__cordl_internal_get_localizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizationKey;
}
constexpr void GlobalNamespace::NamedIntListController_TextValuePair::__cordl_internal_set_localizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localizationKey = value;
}
constexpr int32_t& GlobalNamespace::NamedIntListController_TextValuePair::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr int32_t const& GlobalNamespace::NamedIntListController_TextValuePair::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::NamedIntListController_TextValuePair::__cordl_internal_set_value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline ::StringW GlobalNamespace::NamedIntListController_TextValuePair::get_localizedText() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController_TextValuePair*>(), { "get_localizedText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::NamedIntListController_TextValuePair::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController_TextValuePair*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NamedIntListController_TextValuePair* GlobalNamespace::NamedIntListController_TextValuePair::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NamedIntListController_TextValuePair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NamedIntListController_TextValuePair::NamedIntListController_TextValuePair() {}
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.add_valueChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedIntListController::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::NamedIntListController::add_valueChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a30238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), { "add_valueChangedEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.remove_valueChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedIntListController::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::NamedIntListController::remove_valueChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a302f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), { "remove_valueChangedEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.InitValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedIntListController::*)(::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*>)>(
    &::GlobalNamespace::NamedIntListController::InitValues)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a303b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController*>(),
                                                             { "InitValues", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedIntListController::*)(int32_t)>(&::GlobalNamespace::NamedIntListController::SetValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a303f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.GetInitValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NamedIntListController::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::GlobalNamespace::NamedIntListController::GetInitValues)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a30428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), { ::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.ApplyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedIntListController::*)(int32_t)>(&::GlobalNamespace::NamedIntListController::ApplyValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a3049c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), { ::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.TextForValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NamedIntListController::*)(int32_t)>(&::GlobalNamespace::NamedIntListController::TextForValue)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a304bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), { ::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedIntListController::*)()>(&::GlobalNamespace::NamedIntListController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a30518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*>& GlobalNamespace::NamedIntListController::__cordl_internal_get__textValuePairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textValuePairs;
}
constexpr ::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*> const& GlobalNamespace::NamedIntListController::__cordl_internal_get__textValuePairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textValuePairs;
}
constexpr void GlobalNamespace::NamedIntListController::__cordl_internal_set__textValuePairs(::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textValuePairs = value;
}
constexpr int32_t& GlobalNamespace::NamedIntListController::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr int32_t const& GlobalNamespace::NamedIntListController::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void GlobalNamespace::NamedIntListController::__cordl_internal_set__value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::NamedIntListController::__cordl_internal_get_valueChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChangedEvent;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::NamedIntListController::__cordl_internal_get_valueChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChangedEvent;
}
constexpr void GlobalNamespace::NamedIntListController::__cordl_internal_set_valueChangedEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueChangedEvent = value;
}
inline void GlobalNamespace::NamedIntListController::add_valueChangedEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), { "add_valueChangedEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NamedIntListController::remove_valueChangedEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), { "remove_valueChangedEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NamedIntListController::InitValues(::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController*>(),
                                                           { "InitValues", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::NamedIntListController_TextValuePair*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline void GlobalNamespace::NamedIntListController::SetValue(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::NamedIntListController::GetInitValues(::by_ref<int32_t> idx, ::by_ref<int32_t> numberOfElements) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::NamedIntListController::ApplyValue(int32_t idx) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::NamedIntListController::TextForValue(int32_t idx) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, idx);
}
inline void GlobalNamespace::NamedIntListController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedIntListController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NamedIntListController* GlobalNamespace::NamedIntListController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NamedIntListController*>());
}
/// @brief Convert operator to "::HMUI::IValueChanger_1<int32_t>"
constexpr GlobalNamespace::NamedIntListController::operator ::HMUI::IValueChanger_1<int32_t>*() noexcept {
  return static_cast<::HMUI::IValueChanger_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::IValueChanger_1<int32_t>"
constexpr ::HMUI::IValueChanger_1<int32_t>* GlobalNamespace::NamedIntListController::i___HMUI__IValueChanger_1_int32_t_() noexcept {
  return static_cast<::HMUI::IValueChanger_1<int32_t>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NamedIntListController::NamedIntListController() {}
