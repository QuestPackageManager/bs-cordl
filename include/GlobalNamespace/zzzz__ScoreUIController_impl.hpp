#pragma once
// IWYU pragma private; include "GlobalNamespace\ScoreUIController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ScoreUIController_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
#include "GlobalNamespace/zzzz__ScoreUIController_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ScoreUIController_ScoreDisplayType::ScoreUIController_ScoreDisplayType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreUIController_ScoreDisplayType::ScoreUIController_ScoreDisplayType() {}
constexpr ::GlobalNamespace::ScoreUIController_ScoreDisplayType GlobalNamespace::ScoreUIController_ScoreDisplayType::MultipliedScore{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ScoreUIController_ScoreDisplayType GlobalNamespace::ScoreUIController_ScoreDisplayType::ModifiedScore{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreUIController_InitData::*)(::GlobalNamespace::ScoreUIController_ScoreDisplayType)>(
    &::GlobalNamespace::ScoreUIController_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59adff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController_InitData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::ScoreUIController_ScoreDisplayType>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ScoreUIController_ScoreDisplayType& GlobalNamespace::ScoreUIController_InitData::__cordl_internal_get_scoreDisplayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoreDisplayType;
}
constexpr ::GlobalNamespace::ScoreUIController_ScoreDisplayType const& GlobalNamespace::ScoreUIController_InitData::__cordl_internal_get_scoreDisplayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoreDisplayType;
}
constexpr void GlobalNamespace::ScoreUIController_InitData::__cordl_internal_set_scoreDisplayType(::GlobalNamespace::ScoreUIController_ScoreDisplayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scoreDisplayType = value;
}
inline void GlobalNamespace::ScoreUIController_InitData::_ctor(::GlobalNamespace::ScoreUIController_ScoreDisplayType scoreDisplayType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController_InitData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::ScoreUIController_ScoreDisplayType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scoreDisplayType);
}
inline ::GlobalNamespace::ScoreUIController_InitData* GlobalNamespace::ScoreUIController_InitData::New_ctor(::GlobalNamespace::ScoreUIController_ScoreDisplayType scoreDisplayType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScoreUIController_InitData*>(scoreDisplayType));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreUIController_InitData::ScoreUIController_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreUIController::*)()>(&::GlobalNamespace::ScoreUIController::Start)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x59ada20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreUIController::*)()>(&::GlobalNamespace::ScoreUIController::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59adc8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreUIController::*)()>(&::GlobalNamespace::ScoreUIController::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59adc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.RegisterForEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreUIController::*)()>(&::GlobalNamespace::ScoreUIController::RegisterForEvents)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x59ada94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "RegisterForEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.UnregisterFromEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreUIController::*)()>(&::GlobalNamespace::ScoreUIController::UnregisterFromEvents)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x59adc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "UnregisterFromEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.HandleScoreDidChangeRealtime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreUIController::*)(int32_t, int32_t)>(&::GlobalNamespace::ScoreUIController::HandleScoreDidChangeRealtime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59addd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "HandleScoreDidChangeRealtime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.UpdateScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreUIController::*)(int32_t, int32_t)>(&::GlobalNamespace::ScoreUIController::UpdateScore)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59adc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "UpdateScore", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.UpdateScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreUIController::*)(int32_t)>(&::GlobalNamespace::ScoreUIController::UpdateScore)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x59addd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "UpdateScore", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.Append000Number
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t)>(&::GlobalNamespace::ScoreUIController::Append000Number)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59adf4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "Append000Number", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreUIController::*)()>(&::GlobalNamespace::ScoreUIController::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59adf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::ScoreUIController::__cordl_internal_get__scoreText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::ScoreUIController::__cordl_internal_get__scoreText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreText;
}
constexpr void GlobalNamespace::ScoreUIController::__cordl_internal_set__scoreText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreText = value;
}
constexpr ::GlobalNamespace::IScoreController*& GlobalNamespace::ScoreUIController::__cordl_internal_get__scoreController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr ::GlobalNamespace::IScoreController* const& GlobalNamespace::ScoreUIController::__cordl_internal_get__scoreController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr void GlobalNamespace::ScoreUIController::__cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreController = value;
}
constexpr ::GlobalNamespace::ScoreUIController_InitData*& GlobalNamespace::ScoreUIController::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::ScoreUIController_InitData* const& GlobalNamespace::ScoreUIController::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::ScoreUIController::__cordl_internal_set__initData(::GlobalNamespace::ScoreUIController_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::ScoreUIController::__cordl_internal_get__stringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringBuilder;
}
constexpr ::System::Text::StringBuilder* const& GlobalNamespace::ScoreUIController::__cordl_internal_get__stringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringBuilder;
}
constexpr void GlobalNamespace::ScoreUIController::__cordl_internal_set__stringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stringBuilder = value;
}
inline void GlobalNamespace::ScoreUIController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScoreUIController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScoreUIController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScoreUIController::RegisterForEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "RegisterForEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScoreUIController::UnregisterFromEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "UnregisterFromEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScoreUIController::HandleScoreDidChangeRealtime(int32_t multipliedScore, int32_t modifiedScore) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "HandleScoreDidChangeRealtime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multipliedScore, modifiedScore);
}
inline void GlobalNamespace::ScoreUIController::UpdateScore(int32_t multipliedScore, int32_t modifiedScore) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "UpdateScore", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multipliedScore, modifiedScore);
}
inline void GlobalNamespace::ScoreUIController::UpdateScore(int32_t displayScore) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { "UpdateScore", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayScore);
}
inline void GlobalNamespace::ScoreUIController::Append000Number(::System::Text::StringBuilder* stringBuilder, int32_t number) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(),
                                                                                         { "Append000Number", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stringBuilder, number);
}
inline void GlobalNamespace::ScoreUIController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreUIController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScoreUIController* GlobalNamespace::ScoreUIController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScoreUIController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreUIController::ScoreUIController() {}
