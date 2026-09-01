#pragma once
// IWYU pragma private; include "GlobalNamespace\ComboUIController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ComboUIController_def.hpp"
#include "GlobalNamespace/zzzz__IComboController_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ComboUIController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComboUIController::*)()>(&::GlobalNamespace::ComboUIController::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59aae0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboUIController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComboUIController.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComboUIController::*)()>(&::GlobalNamespace::ComboUIController::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ab1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboUIController*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComboUIController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComboUIController::*)()>(&::GlobalNamespace::ComboUIController::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ab1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboUIController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComboUIController.RegisterForEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComboUIController::*)()>(&::GlobalNamespace::ComboUIController::RegisterForEvents)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x59aae9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboUIController*>(), { "RegisterForEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComboUIController.UnregisterFromEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComboUIController::*)()>(&::GlobalNamespace::ComboUIController::UnregisterFromEvents)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x59ab1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboUIController*>(), { "UnregisterFromEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComboUIController.HandleComboDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComboUIController::*)(int32_t)>(&::GlobalNamespace::ComboUIController::HandleComboDidChange)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x59ab3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboUIController*>(), { "HandleComboDidChange", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComboUIController.HandleComboBreakingEventHappened
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComboUIController::*)()>(&::GlobalNamespace::ComboUIController::HandleComboBreakingEventHappened)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59ab3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboUIController*>(), { "HandleComboBreakingEventHappened", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComboUIController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComboUIController::*)()>(&::GlobalNamespace::ComboUIController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ab428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboUIController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::ComboUIController::__cordl_internal_get__comboText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comboText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::ComboUIController::__cordl_internal_get__comboText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comboText;
}
constexpr void GlobalNamespace::ComboUIController::__cordl_internal_set__comboText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____comboText = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::ComboUIController::__cordl_internal_get__animator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::ComboUIController::__cordl_internal_get__animator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr void GlobalNamespace::ComboUIController::__cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animator = value;
}
constexpr ::GlobalNamespace::IComboController*& GlobalNamespace::ComboUIController::__cordl_internal_get__comboController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comboController;
}
constexpr ::GlobalNamespace::IComboController* const& GlobalNamespace::ComboUIController::__cordl_internal_get__comboController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comboController;
}
constexpr void GlobalNamespace::ComboUIController::__cordl_internal_set__comboController(::GlobalNamespace::IComboController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____comboController = value;
}
constexpr int32_t& GlobalNamespace::ComboUIController::__cordl_internal_get__comboLostId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comboLostId;
}
constexpr int32_t const& GlobalNamespace::ComboUIController::__cordl_internal_get__comboLostId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comboLostId;
}
constexpr void GlobalNamespace::ComboUIController::__cordl_internal_set__comboLostId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____comboLostId = value;
}
constexpr bool& GlobalNamespace::ComboUIController::__cordl_internal_get__fullComboLost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullComboLost;
}
constexpr bool const& GlobalNamespace::ComboUIController::__cordl_internal_get__fullComboLost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullComboLost;
}
constexpr void GlobalNamespace::ComboUIController::__cordl_internal_set__fullComboLost(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullComboLost = value;
}
inline void GlobalNamespace::ComboUIController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboUIController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ComboUIController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboUIController*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ComboUIController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboUIController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ComboUIController::RegisterForEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboUIController*>(), { "RegisterForEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ComboUIController::UnregisterFromEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboUIController*>(), { "UnregisterFromEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ComboUIController::HandleComboDidChange(int32_t combo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboUIController*>(), { "HandleComboDidChange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, combo);
}
inline void GlobalNamespace::ComboUIController::HandleComboBreakingEventHappened() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboUIController*>(), { "HandleComboBreakingEventHappened", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ComboUIController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboUIController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ComboUIController* GlobalNamespace::ComboUIController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ComboUIController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ComboUIController::ComboUIController() {}
