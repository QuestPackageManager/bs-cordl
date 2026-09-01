#pragma once
// IWYU pragma private; include "GlobalNamespace\NamedColorListController.hpp"
#include "GlobalNamespace/zzzz__ListColorController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__NamedColorListController_def.hpp"
#include "GlobalNamespace/zzzz__NamedColorListController_def.hpp"
#include "HMUI/zzzz__IValueChanger_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NamedColorListController_ColorValuePair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedColorListController_ColorValuePair::*)()>(&::GlobalNamespace::NamedColorListController_ColorValuePair::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a30234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedColorListController_ColorValuePair*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::NamedColorListController_ColorValuePair::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::NamedColorListController_ColorValuePair::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void GlobalNamespace::NamedColorListController_ColorValuePair::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
constexpr int32_t& GlobalNamespace::NamedColorListController_ColorValuePair::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr int32_t const& GlobalNamespace::NamedColorListController_ColorValuePair::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::NamedColorListController_ColorValuePair::__cordl_internal_set_value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void GlobalNamespace::NamedColorListController_ColorValuePair::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedColorListController_ColorValuePair*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NamedColorListController_ColorValuePair* GlobalNamespace::NamedColorListController_ColorValuePair::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NamedColorListController_ColorValuePair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NamedColorListController_ColorValuePair::NamedColorListController_ColorValuePair() {}
//  Writing Method size for method: ::GlobalNamespace::NamedColorListController.add_valueChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedColorListController::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::NamedColorListController::add_valueChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a2ff6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), { "add_valueChangedEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedColorListController.remove_valueChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedColorListController::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::NamedColorListController::remove_valueChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a3002c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), { "remove_valueChangedEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedColorListController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedColorListController::*)(::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*>, int32_t)>(
    &::GlobalNamespace::NamedColorListController::Init)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5a300ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedColorListController*>(),
                                                             { "Init", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedColorListController.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedColorListController::*)(int32_t)>(&::GlobalNamespace::NamedColorListController::SetValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a30128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedColorListController.GetInitValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NamedColorListController::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::GlobalNamespace::NamedColorListController::GetInitValues)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a30160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), { ::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedColorListController.ApplyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedColorListController::*)(int32_t)>(&::GlobalNamespace::NamedColorListController::ApplyValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a301d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), { ::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedColorListController.ColorForValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::NamedColorListController::*)(int32_t)>(&::GlobalNamespace::NamedColorListController::ColorForValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5a301f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), { ::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedColorListController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedColorListController::*)()>(&::GlobalNamespace::NamedColorListController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a30230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*>& GlobalNamespace::NamedColorListController::__cordl_internal_get__textValuePairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textValuePairs;
}
constexpr ::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*> const& GlobalNamespace::NamedColorListController::__cordl_internal_get__textValuePairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textValuePairs;
}
constexpr void GlobalNamespace::NamedColorListController::__cordl_internal_set__textValuePairs(::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textValuePairs = value;
}
constexpr int32_t& GlobalNamespace::NamedColorListController::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr int32_t const& GlobalNamespace::NamedColorListController::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void GlobalNamespace::NamedColorListController::__cordl_internal_set__value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::NamedColorListController::__cordl_internal_get_valueChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChangedEvent;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::NamedColorListController::__cordl_internal_get_valueChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChangedEvent;
}
constexpr void GlobalNamespace::NamedColorListController::__cordl_internal_set_valueChangedEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueChangedEvent = value;
}
inline void GlobalNamespace::NamedColorListController::add_valueChangedEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), { "add_valueChangedEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NamedColorListController::remove_valueChangedEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), { "remove_valueChangedEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NamedColorListController::Init(::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*> values, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedColorListController*>(),
                                                           { "Init", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::NamedColorListController_ColorValuePair*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values, value);
}
inline void GlobalNamespace::NamedColorListController::SetValue(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::NamedColorListController::GetInitValues(::by_ref<int32_t> idx, ::by_ref<int32_t> numberOfElements) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::NamedColorListController::ApplyValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline ::UnityEngine::Color GlobalNamespace::NamedColorListController::ColorForValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, idx);
}
inline void GlobalNamespace::NamedColorListController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NamedColorListController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NamedColorListController* GlobalNamespace::NamedColorListController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NamedColorListController*>());
}
/// @brief Convert operator to "::HMUI::IValueChanger_1<int32_t>"
constexpr GlobalNamespace::NamedColorListController::operator ::HMUI::IValueChanger_1<int32_t>*() noexcept {
  return static_cast<::HMUI::IValueChanger_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::IValueChanger_1<int32_t>"
constexpr ::HMUI::IValueChanger_1<int32_t>* GlobalNamespace::NamedColorListController::i___HMUI__IValueChanger_1_int32_t_() noexcept {
  return static_cast<::HMUI::IValueChanger_1<int32_t>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NamedColorListController::NamedColorListController() {}
