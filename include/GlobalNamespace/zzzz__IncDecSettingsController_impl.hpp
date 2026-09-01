#pragma once
// IWYU pragma private; include "GlobalNamespace\IncDecSettingsController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__IncDecSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__StepValuePicker_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IncDecSettingsController.set_enableDec
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IncDecSettingsController::*)(bool)>(&::GlobalNamespace::IncDecSettingsController::set_enableDec)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a2f64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), { "set_enableDec", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IncDecSettingsController.set_enableInc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IncDecSettingsController::*)(bool)>(&::GlobalNamespace::IncDecSettingsController::set_enableInc)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a2f690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), { "set_enableInc", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IncDecSettingsController.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IncDecSettingsController::*)(::StringW)>(&::GlobalNamespace::IncDecSettingsController::set_text)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a2f6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IncDecSettingsController.set_interactable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IncDecSettingsController::*)(bool)>(&::GlobalNamespace::IncDecSettingsController::set_interactable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5a2f720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), { "set_interactable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IncDecSettingsController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IncDecSettingsController::*)()>(&::GlobalNamespace::IncDecSettingsController::Awake)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5a2f774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), { ::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IncDecSettingsController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IncDecSettingsController::*)()>(&::GlobalNamespace::IncDecSettingsController::OnDestroy)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5a2f9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IncDecSettingsController.IncButtonPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IncDecSettingsController::*)()>(&::GlobalNamespace::IncDecSettingsController::IncButtonPressed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), { ::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IncDecSettingsController.DecButtonPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IncDecSettingsController::*)()>(&::GlobalNamespace::IncDecSettingsController::DecButtonPressed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), { ::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IncDecSettingsController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IncDecSettingsController::*)()>(&::GlobalNamespace::IncDecSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a2fcac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::StepValuePicker>& GlobalNamespace::IncDecSettingsController::__cordl_internal_get__stepValuePicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepValuePicker;
}
constexpr ::UnityW<::GlobalNamespace::StepValuePicker> const& GlobalNamespace::IncDecSettingsController::__cordl_internal_get__stepValuePicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepValuePicker;
}
constexpr void GlobalNamespace::IncDecSettingsController::__cordl_internal_set__stepValuePicker(::UnityW<::GlobalNamespace::StepValuePicker> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stepValuePicker = value;
}
inline void GlobalNamespace::IncDecSettingsController::set_enableDec(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), { "set_enableDec", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IncDecSettingsController::set_enableInc(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), { "set_enableInc", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IncDecSettingsController::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IncDecSettingsController::set_interactable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), { "set_interactable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IncDecSettingsController::Awake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IncDecSettingsController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IncDecSettingsController::IncButtonPressed() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IncDecSettingsController::DecButtonPressed() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IncDecSettingsController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncDecSettingsController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::IncDecSettingsController* GlobalNamespace::IncDecSettingsController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IncDecSettingsController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IncDecSettingsController::IncDecSettingsController() {}
