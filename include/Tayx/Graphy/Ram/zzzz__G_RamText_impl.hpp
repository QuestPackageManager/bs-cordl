#pragma once
// IWYU pragma private; include "Tayx/Graphy/Ram/G_RamText.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Tayx/Graphy/Ram/zzzz__G_RamText_def.hpp"
#include "Tayx/Graphy/Ram/zzzz__G_RamMonitor_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::Ram::G_RamText.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Ram::G_RamText::*)()>(&::Tayx::Graphy::Ram::G_RamText::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643a20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Ram::G_RamText*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Ram::G_RamText.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Ram::G_RamText::*)()>(&::Tayx::Graphy::Ram::G_RamText::Update)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x643a210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Ram::G_RamText*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Ram::G_RamText.UpdateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Ram::G_RamText::*)()>(&::Tayx::Graphy::Ram::G_RamText::UpdateParameters)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6439ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Ram::G_RamText*>(), { "UpdateParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Ram::G_RamText.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Ram::G_RamText::*)()>(&::Tayx::Graphy::Ram::G_RamText::Init)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6439f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Ram::G_RamText*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Ram::G_RamText._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Ram::G_RamText::*)()>(&::Tayx::Graphy::Ram::G_RamText::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x643a38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Ram::G_RamText*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& Tayx::Graphy::Ram::G_RamText::__cordl_internal_get_m_allocatedSystemMemorySizeText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_allocatedSystemMemorySizeText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Tayx::Graphy::Ram::G_RamText::__cordl_internal_get_m_allocatedSystemMemorySizeText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_allocatedSystemMemorySizeText;
}
constexpr void Tayx::Graphy::Ram::G_RamText::__cordl_internal_set_m_allocatedSystemMemorySizeText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_allocatedSystemMemorySizeText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Tayx::Graphy::Ram::G_RamText::__cordl_internal_get_m_reservedSystemMemorySizeText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_reservedSystemMemorySizeText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Tayx::Graphy::Ram::G_RamText::__cordl_internal_get_m_reservedSystemMemorySizeText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_reservedSystemMemorySizeText;
}
constexpr void Tayx::Graphy::Ram::G_RamText::__cordl_internal_set_m_reservedSystemMemorySizeText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_reservedSystemMemorySizeText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Tayx::Graphy::Ram::G_RamText::__cordl_internal_get_m_monoSystemMemorySizeText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_monoSystemMemorySizeText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Tayx::Graphy::Ram::G_RamText::__cordl_internal_get_m_monoSystemMemorySizeText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_monoSystemMemorySizeText;
}
constexpr void Tayx::Graphy::Ram::G_RamText::__cordl_internal_set_m_monoSystemMemorySizeText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_monoSystemMemorySizeText = value;
}
constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& Tayx::Graphy::Ram::G_RamText::__cordl_internal_get_m_graphyManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyManager;
}
constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& Tayx::Graphy::Ram::G_RamText::__cordl_internal_get_m_graphyManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyManager;
}
constexpr void Tayx::Graphy::Ram::G_RamText::__cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_graphyManager = value;
}
constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor>& Tayx::Graphy::Ram::G_RamText::__cordl_internal_get_m_ramMonitor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramMonitor;
}
constexpr ::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> const& Tayx::Graphy::Ram::G_RamText::__cordl_internal_get_m_ramMonitor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ramMonitor;
}
constexpr void Tayx::Graphy::Ram::G_RamText::__cordl_internal_set_m_ramMonitor(::UnityW<::Tayx::Graphy::Ram::G_RamMonitor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ramMonitor = value;
}
constexpr float_t& Tayx::Graphy::Ram::G_RamText::__cordl_internal_get_m_updateRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_updateRate;
}
constexpr float_t const& Tayx::Graphy::Ram::G_RamText::__cordl_internal_get_m_updateRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_updateRate;
}
constexpr void Tayx::Graphy::Ram::G_RamText::__cordl_internal_set_m_updateRate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_updateRate = value;
}
constexpr float_t& Tayx::Graphy::Ram::G_RamText::__cordl_internal_get_m_deltaTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_deltaTime;
}
constexpr float_t const& Tayx::Graphy::Ram::G_RamText::__cordl_internal_get_m_deltaTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_deltaTime;
}
constexpr void Tayx::Graphy::Ram::G_RamText::__cordl_internal_set_m_deltaTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_deltaTime = value;
}
inline void Tayx::Graphy::Ram::G_RamText::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Ram::G_RamText*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Ram::G_RamText::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Ram::G_RamText*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Ram::G_RamText::UpdateParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Ram::G_RamText*>(), { "UpdateParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Ram::G_RamText::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Ram::G_RamText*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Ram::G_RamText::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Ram::G_RamText*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Tayx::Graphy::Ram::G_RamText* Tayx::Graphy::Ram::G_RamText::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::Ram::G_RamText*>());
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::Ram::G_RamText::G_RamText() {}
