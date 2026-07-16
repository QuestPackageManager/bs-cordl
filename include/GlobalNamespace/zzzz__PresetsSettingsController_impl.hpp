#pragma once
// IWYU pragma private; include "GlobalNamespace/PresetsSettingsController.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__PresetsSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController.add_valueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PresetsSettingsController::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::PresetsSettingsController::add_valueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a0e7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { "add_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController.remove_valueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PresetsSettingsController::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::PresetsSettingsController::remove_valueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a0e8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { "remove_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PresetsSettingsController::*)()>(&::GlobalNamespace::PresetsSettingsController::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0e978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { "GetValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PresetsSettingsController::*)(int32_t)>(&::GlobalNamespace::PresetsSettingsController::SetValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a0e980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController.SetNumberOfElementsLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PresetsSettingsController::*)(int32_t)>(&::GlobalNamespace::PresetsSettingsController::SetNumberOfElementsLimit)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a0ea00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { "SetNumberOfElementsLimit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController.SetInteractable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PresetsSettingsController::*)(bool)>(&::GlobalNamespace::PresetsSettingsController::SetInteractable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a0ea48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { "SetInteractable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController.GetInitValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PresetsSettingsController::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::GlobalNamespace::PresetsSettingsController::GetInitValues)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a0ea78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { ::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController.ApplyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PresetsSettingsController::*)(int32_t)>(&::GlobalNamespace::PresetsSettingsController::ApplyValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a0eb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { ::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController.TextForValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PresetsSettingsController::*)(int32_t)>(&::GlobalNamespace::PresetsSettingsController::TextForValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a0eb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { ::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PresetsSettingsController::*)()>(&::GlobalNamespace::PresetsSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a0eb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NamedPresetsSO>& GlobalNamespace::PresetsSettingsController::__cordl_internal_get__presets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presets;
}
constexpr ::UnityW<::GlobalNamespace::NamedPresetsSO> const& GlobalNamespace::PresetsSettingsController::__cordl_internal_get__presets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presets;
}
constexpr void GlobalNamespace::PresetsSettingsController::__cordl_internal_set__presets(::UnityW<::GlobalNamespace::NamedPresetsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____presets = value;
}
constexpr bool& GlobalNamespace::PresetsSettingsController::__cordl_internal_get__limitNumberOfElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limitNumberOfElements;
}
constexpr bool const& GlobalNamespace::PresetsSettingsController::__cordl_internal_get__limitNumberOfElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limitNumberOfElements;
}
constexpr void GlobalNamespace::PresetsSettingsController::__cordl_internal_set__limitNumberOfElements(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____limitNumberOfElements = value;
}
constexpr int32_t& GlobalNamespace::PresetsSettingsController::__cordl_internal_get__numberOfElementsLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfElementsLimit;
}
constexpr int32_t const& GlobalNamespace::PresetsSettingsController::__cordl_internal_get__numberOfElementsLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfElementsLimit;
}
constexpr void GlobalNamespace::PresetsSettingsController::__cordl_internal_set__numberOfElementsLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfElementsLimit = value;
}
constexpr int32_t& GlobalNamespace::PresetsSettingsController::__cordl_internal_get__customIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customIndex;
}
constexpr int32_t const& GlobalNamespace::PresetsSettingsController::__cordl_internal_get__customIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customIndex;
}
constexpr void GlobalNamespace::PresetsSettingsController::__cordl_internal_set__customIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____customIndex = value;
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::PresetsSettingsController::__cordl_internal_get_valueDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueDidChangeEvent;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::PresetsSettingsController::__cordl_internal_get_valueDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueDidChangeEvent;
}
constexpr void GlobalNamespace::PresetsSettingsController::__cordl_internal_set_valueDidChangeEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueDidChangeEvent = value;
}
inline void GlobalNamespace::PresetsSettingsController::add_valueDidChangeEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { "add_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PresetsSettingsController::remove_valueDidChangeEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { "remove_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PresetsSettingsController::GetValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { "GetValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PresetsSettingsController::SetValue(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::PresetsSettingsController::SetNumberOfElementsLimit(int32_t numberOfElementsLimit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { "SetNumberOfElementsLimit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numberOfElementsLimit);
}
inline void GlobalNamespace::PresetsSettingsController::SetInteractable(bool interactable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { "SetInteractable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline bool GlobalNamespace::PresetsSettingsController::GetInitValues(::by_ref<int32_t> idx, ::by_ref<int32_t> numberOfElements) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::PresetsSettingsController::ApplyValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::PresetsSettingsController::TextForValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, idx);
}
inline void GlobalNamespace::PresetsSettingsController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresetsSettingsController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PresetsSettingsController* GlobalNamespace::PresetsSettingsController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PresetsSettingsController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PresetsSettingsController::PresetsSettingsController() {}
