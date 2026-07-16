#pragma once
// IWYU pragma private; include "Tayx/Graphy/Fps/G_FpsText.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsText_def.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsMonitor_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsText.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsText::*)()>(&::Tayx::Graphy::Fps::G_FpsText::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643b0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsText*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsText.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsText::*)()>(&::Tayx::Graphy::Fps::G_FpsText::Update)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x643b0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsText*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsText.UpdateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsText::*)()>(&::Tayx::Graphy::Fps::G_FpsText::UpdateParameters)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x643aa20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsText*>(), { "UpdateParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsText.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsText::*)()>(&::Tayx::Graphy::Fps::G_FpsText::Init)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x643aa3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsText*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsText.SetFpsRelatedTextColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsText::*)(::UnityEngine::UI::Text*, float_t)>(&::Tayx::Graphy::Fps::G_FpsText::SetFpsRelatedTextColor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x643b46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsText*>(), { "SetFpsRelatedTextColor", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsText.SetFrameTimeRelatedTextColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsText::*)(::UnityEngine::UI::Text*, float_t)>(&::Tayx::Graphy::Fps::G_FpsText::SetFrameTimeRelatedTextColor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x643b50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsText*>(), { "SetFrameTimeRelatedTextColor", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsText::*)()>(&::Tayx::Graphy::Fps::G_FpsText::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x643b5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsText*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_fpsText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_fpsText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsText;
}
constexpr void Tayx::Graphy::Fps::G_FpsText::__cordl_internal_set_m_fpsText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_msText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_msText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_msText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_msText;
}
constexpr void Tayx::Graphy::Fps::G_FpsText::__cordl_internal_set_m_msText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_msText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_msTextGPU() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_msTextGPU;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_msTextGPU() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_msTextGPU;
}
constexpr void Tayx::Graphy::Fps::G_FpsText::__cordl_internal_set_m_msTextGPU(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_msTextGPU = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_avgFpsText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_avgFpsText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_avgFpsText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_avgFpsText;
}
constexpr void Tayx::Graphy::Fps::G_FpsText::__cordl_internal_set_m_avgFpsText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_avgFpsText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_onePercentFpsText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_onePercentFpsText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_onePercentFpsText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_onePercentFpsText;
}
constexpr void Tayx::Graphy::Fps::G_FpsText::__cordl_internal_set_m_onePercentFpsText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_onePercentFpsText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_zero1PercentFpsText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_zero1PercentFpsText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_zero1PercentFpsText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_zero1PercentFpsText;
}
constexpr void Tayx::Graphy::Fps::G_FpsText::__cordl_internal_set_m_zero1PercentFpsText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_zero1PercentFpsText = value;
}
constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_graphyManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyManager;
}
constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_graphyManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyManager;
}
constexpr void Tayx::Graphy::Fps::G_FpsText::__cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_graphyManager = value;
}
constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor>& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_fpsMonitor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsMonitor;
}
constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> const& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_fpsMonitor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsMonitor;
}
constexpr void Tayx::Graphy::Fps::G_FpsText::__cordl_internal_set_m_fpsMonitor(::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsMonitor = value;
}
constexpr int32_t& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_updateRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_updateRate;
}
constexpr int32_t const& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_updateRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_updateRate;
}
constexpr void Tayx::Graphy::Fps::G_FpsText::__cordl_internal_set_m_updateRate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_updateRate = value;
}
constexpr int32_t& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_frameCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_frameCount;
}
constexpr int32_t const& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_frameCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_frameCount;
}
constexpr void Tayx::Graphy::Fps::G_FpsText::__cordl_internal_set_m_frameCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_frameCount = value;
}
constexpr float_t& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_deltaTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_deltaTime;
}
constexpr float_t const& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_deltaTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_deltaTime;
}
constexpr void Tayx::Graphy::Fps::G_FpsText::__cordl_internal_set_m_deltaTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_deltaTime = value;
}
constexpr float_t& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_fps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fps;
}
constexpr float_t const& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_fps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fps;
}
constexpr void Tayx::Graphy::Fps::G_FpsText::__cordl_internal_set_m_fps(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fps = value;
}
constexpr float_t& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_cpuMs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cpuMs;
}
constexpr float_t const& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_cpuMs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cpuMs;
}
constexpr void Tayx::Graphy::Fps::G_FpsText::__cordl_internal_set_m_cpuMs(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_cpuMs = value;
}
constexpr float_t& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_gpuMs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_gpuMs;
}
constexpr float_t const& Tayx::Graphy::Fps::G_FpsText::__cordl_internal_get_m_gpuMs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_gpuMs;
}
constexpr void Tayx::Graphy::Fps::G_FpsText::__cordl_internal_set_m_gpuMs(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_gpuMs = value;
}
inline void Tayx::Graphy::Fps::G_FpsText::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsText*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsText::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsText*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsText::UpdateParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsText*>(), { "UpdateParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsText::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsText*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsText::SetFpsRelatedTextColor(::UnityEngine::UI::Text* text, float_t fps) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsText*>(),
                                                                                         { "SetFpsRelatedTextColor", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, fps);
}
inline void Tayx::Graphy::Fps::G_FpsText::SetFrameTimeRelatedTextColor(::UnityEngine::UI::Text* text, float_t frameTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsText*>(), { "SetFrameTimeRelatedTextColor", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, frameTime);
}
inline void Tayx::Graphy::Fps::G_FpsText::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsText*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Tayx::Graphy::Fps::G_FpsText* Tayx::Graphy::Fps::G_FpsText::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::Fps::G_FpsText*>());
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::Fps::G_FpsText::G_FpsText() {}
