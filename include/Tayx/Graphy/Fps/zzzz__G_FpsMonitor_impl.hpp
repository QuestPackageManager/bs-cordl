#pragma once
// IWYU pragma private; include "Tayx/Graphy/Fps/G_FpsMonitor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsMonitor_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsMonitor_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsMonitor___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsMonitor___c::*)()>(&::Tayx::Graphy::Fps::G_FpsMonitor___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643b0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsMonitor___c._Update_b__25_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Tayx::Graphy::Fps::G_FpsMonitor___c::*)(int16_t, int16_t)>(&::Tayx::Graphy::Fps::G_FpsMonitor___c::_Update_b__25_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x643b0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor___c*>(), { "<Update>b__25_0", {}, { ::i2c::type_of<int16_t>(), ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
inline void Tayx::Graphy::Fps::G_FpsMonitor___c::setStaticF___9(::Tayx::Graphy::Fps::G_FpsMonitor___c* value) {
  ::cordl_internals::setStaticField<::Tayx::Graphy::Fps::G_FpsMonitor___c*, "<>9", ::Tayx::Graphy::Fps::G_FpsMonitor___c*>(std::forward<::Tayx::Graphy::Fps::G_FpsMonitor___c*>(value));
}
inline ::Tayx::Graphy::Fps::G_FpsMonitor___c* Tayx::Graphy::Fps::G_FpsMonitor___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Tayx::Graphy::Fps::G_FpsMonitor___c*, "<>9", ::Tayx::Graphy::Fps::G_FpsMonitor___c*>();
}
inline void Tayx::Graphy::Fps::G_FpsMonitor___c::setStaticF___9__25_0(::System::Comparison_1<int16_t>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<int16_t>*, "<>9__25_0", ::Tayx::Graphy::Fps::G_FpsMonitor___c*>(std::forward<::System::Comparison_1<int16_t>*>(value));
}
inline ::System::Comparison_1<int16_t>* Tayx::Graphy::Fps::G_FpsMonitor___c::getStaticF___9__25_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<int16_t>*, "<>9__25_0", ::Tayx::Graphy::Fps::G_FpsMonitor___c*>();
}
inline void Tayx::Graphy::Fps::G_FpsMonitor___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Tayx::Graphy::Fps::G_FpsMonitor___c::_Update_b__25_0(int16_t x, int16_t y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor___c*>(), { "<Update>b__25_0", {}, { ::i2c::type_of<int16_t>(), ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline ::Tayx::Graphy::Fps::G_FpsMonitor___c* Tayx::Graphy::Fps::G_FpsMonitor___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::Fps::G_FpsMonitor___c*>());
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::Fps::G_FpsMonitor___c::G_FpsMonitor___c() {}
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsMonitor.get_CurrentFPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::Tayx::Graphy::Fps::G_FpsMonitor::*)()>(&::Tayx::Graphy::Fps::G_FpsMonitor::get_CurrentFPS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643ac70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "get_CurrentFPS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsMonitor.set_CurrentFPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsMonitor::*)(int16_t)>(&::Tayx::Graphy::Fps::G_FpsMonitor::set_CurrentFPS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643ac78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "set_CurrentFPS", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsMonitor.get_AverageFPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::Tayx::Graphy::Fps::G_FpsMonitor::*)()>(&::Tayx::Graphy::Fps::G_FpsMonitor::get_AverageFPS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643ac80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "get_AverageFPS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsMonitor.set_AverageFPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsMonitor::*)(int16_t)>(&::Tayx::Graphy::Fps::G_FpsMonitor::set_AverageFPS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643ac88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "set_AverageFPS", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsMonitor.get_OnePercentFPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::Tayx::Graphy::Fps::G_FpsMonitor::*)()>(&::Tayx::Graphy::Fps::G_FpsMonitor::get_OnePercentFPS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643ac90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "get_OnePercentFPS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsMonitor.set_OnePercentFPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsMonitor::*)(int16_t)>(&::Tayx::Graphy::Fps::G_FpsMonitor::set_OnePercentFPS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643ac98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "set_OnePercentFPS", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsMonitor.get_Zero1PercentFps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::Tayx::Graphy::Fps::G_FpsMonitor::*)()>(&::Tayx::Graphy::Fps::G_FpsMonitor::get_Zero1PercentFps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643aca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "get_Zero1PercentFps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsMonitor.set_Zero1PercentFps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsMonitor::*)(int16_t)>(&::Tayx::Graphy::Fps::G_FpsMonitor::set_Zero1PercentFps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643aca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "set_Zero1PercentFps", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsMonitor.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsMonitor::*)()>(&::Tayx::Graphy::Fps::G_FpsMonitor::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643acb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsMonitor.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsMonitor::*)()>(&::Tayx::Graphy::Fps::G_FpsMonitor::Update)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x643acb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsMonitor.UpdateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsMonitor::*)()>(&::Tayx::Graphy::Fps::G_FpsMonitor::UpdateParameters)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x643a9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "UpdateParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsMonitor.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsMonitor::*)()>(&::Tayx::Graphy::Fps::G_FpsMonitor::Init)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6435878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsMonitor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsMonitor::*)()>(&::Tayx::Graphy::Fps::G_FpsMonitor::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x643b068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int16_t>& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get_m_fpsSamples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsSamples;
}
constexpr ::ArrayW<int16_t> const& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get_m_fpsSamples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsSamples;
}
constexpr void Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_set_m_fpsSamples(::ArrayW<int16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsSamples = value;
}
constexpr ::ArrayW<int16_t>& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get_m_fpsSamplesSorted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsSamplesSorted;
}
constexpr ::ArrayW<int16_t> const& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get_m_fpsSamplesSorted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsSamplesSorted;
}
constexpr void Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_set_m_fpsSamplesSorted(::ArrayW<int16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsSamplesSorted = value;
}
constexpr int16_t& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get_m_fpsSamplesCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsSamplesCapacity;
}
constexpr int16_t const& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get_m_fpsSamplesCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsSamplesCapacity;
}
constexpr void Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_set_m_fpsSamplesCapacity(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsSamplesCapacity = value;
}
constexpr int16_t& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get_m_onePercentSamples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_onePercentSamples;
}
constexpr int16_t const& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get_m_onePercentSamples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_onePercentSamples;
}
constexpr void Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_set_m_onePercentSamples(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_onePercentSamples = value;
}
constexpr int16_t& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get_m_zero1PercentSamples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_zero1PercentSamples;
}
constexpr int16_t const& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get_m_zero1PercentSamples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_zero1PercentSamples;
}
constexpr void Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_set_m_zero1PercentSamples(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_zero1PercentSamples = value;
}
constexpr int16_t& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get_m_fpsSamplesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsSamplesCount;
}
constexpr int16_t const& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get_m_fpsSamplesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsSamplesCount;
}
constexpr void Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_set_m_fpsSamplesCount(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsSamplesCount = value;
}
constexpr int16_t& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get_m_indexSample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_indexSample;
}
constexpr int16_t const& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get_m_indexSample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_indexSample;
}
constexpr void Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_set_m_indexSample(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_indexSample = value;
}
constexpr float_t& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get_m_unscaledDeltaTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_unscaledDeltaTime;
}
constexpr float_t const& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get_m_unscaledDeltaTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_unscaledDeltaTime;
}
constexpr void Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_set_m_unscaledDeltaTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_unscaledDeltaTime = value;
}
constexpr int16_t& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get__CurrentFPS_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentFPS_k__BackingField;
}
constexpr int16_t const& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get__CurrentFPS_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentFPS_k__BackingField;
}
constexpr void Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_set__CurrentFPS_k__BackingField(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CurrentFPS_k__BackingField = value;
}
constexpr int16_t& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get__AverageFPS_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AverageFPS_k__BackingField;
}
constexpr int16_t const& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get__AverageFPS_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AverageFPS_k__BackingField;
}
constexpr void Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_set__AverageFPS_k__BackingField(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AverageFPS_k__BackingField = value;
}
constexpr int16_t& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get__OnePercentFPS_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OnePercentFPS_k__BackingField;
}
constexpr int16_t const& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get__OnePercentFPS_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OnePercentFPS_k__BackingField;
}
constexpr void Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_set__OnePercentFPS_k__BackingField(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____OnePercentFPS_k__BackingField = value;
}
constexpr int16_t& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get__Zero1PercentFps_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Zero1PercentFps_k__BackingField;
}
constexpr int16_t const& Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_get__Zero1PercentFps_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Zero1PercentFps_k__BackingField;
}
constexpr void Tayx::Graphy::Fps::G_FpsMonitor::__cordl_internal_set__Zero1PercentFps_k__BackingField(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Zero1PercentFps_k__BackingField = value;
}
inline int16_t Tayx::Graphy::Fps::G_FpsMonitor::get_CurrentFPS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "get_CurrentFPS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsMonitor::set_CurrentFPS(int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "set_CurrentFPS", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int16_t Tayx::Graphy::Fps::G_FpsMonitor::get_AverageFPS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "get_AverageFPS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsMonitor::set_AverageFPS(int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "set_AverageFPS", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int16_t Tayx::Graphy::Fps::G_FpsMonitor::get_OnePercentFPS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "get_OnePercentFPS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsMonitor::set_OnePercentFPS(int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "set_OnePercentFPS", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int16_t Tayx::Graphy::Fps::G_FpsMonitor::get_Zero1PercentFps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "get_Zero1PercentFps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsMonitor::set_Zero1PercentFps(int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "set_Zero1PercentFps", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Tayx::Graphy::Fps::G_FpsMonitor::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsMonitor::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsMonitor::UpdateParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "UpdateParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsMonitor::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsMonitor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsMonitor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Tayx::Graphy::Fps::G_FpsMonitor* Tayx::Graphy::Fps::G_FpsMonitor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::Fps::G_FpsMonitor*>());
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::Fps::G_FpsMonitor::G_FpsMonitor() {}
