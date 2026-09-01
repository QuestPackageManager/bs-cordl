#pragma once
// IWYU pragma private; include "Tayx\Graphy\Fps\G_FpsGraph.hpp"
#include "Tayx/Graphy/Graph/zzzz__G_Graph_impl.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsGraph_def.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsMonitor_def.hpp"
#include "Tayx/Graphy/zzzz__G_GraphShader_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsGraph.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsGraph::*)()>(&::Tayx::Graphy::Fps::G_FpsGraph::Update)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x643fbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsGraph*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsGraph.UpdateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsGraph::*)()>(&::Tayx::Graphy::Fps::G_FpsGraph::UpdateParameters)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x643fbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsGraph*>(), { "UpdateParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsGraph.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsGraph::*)()>(&::Tayx::Graphy::Fps::G_FpsGraph::Init)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x643fcb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsGraph*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsGraph.UpdateGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsGraph::*)()>(&::Tayx::Graphy::Fps::G_FpsGraph::UpdateGraph)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x643fdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsGraph*>(), { ::i2c::class_of<::Tayx::Graphy::Fps::G_FpsGraph*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsGraph.CreatePoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsGraph::*)()>(&::Tayx::Graphy::Fps::G_FpsGraph::CreatePoints)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x644004c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsGraph*>(), { ::i2c::class_of<::Tayx::Graphy::Fps::G_FpsGraph*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsGraph._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsGraph::*)()>(&::Tayx::Graphy::Fps::G_FpsGraph::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64401a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsGraph*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Image>& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_m_imageGraph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_imageGraph;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_m_imageGraph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_imageGraph;
}
constexpr void Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_set_m_imageGraph(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_imageGraph = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_ShaderFull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShaderFull;
}
constexpr ::UnityW<::UnityEngine::Shader> const& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_ShaderFull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShaderFull;
}
constexpr void Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_set_ShaderFull(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ShaderFull = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_ShaderLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShaderLight;
}
constexpr ::UnityW<::UnityEngine::Shader> const& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_ShaderLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShaderLight;
}
constexpr void Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_set_ShaderLight(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ShaderLight = value;
}
constexpr bool& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_m_isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isInitialized;
}
constexpr bool const& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_m_isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isInitialized;
}
constexpr void Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_set_m_isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isInitialized = value;
}
constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_m_graphyManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyManager;
}
constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_m_graphyManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyManager;
}
constexpr void Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_graphyManager = value;
}
constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor>& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_m_fpsMonitor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsMonitor;
}
constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> const& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_m_fpsMonitor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsMonitor;
}
constexpr void Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_set_m_fpsMonitor(::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsMonitor = value;
}
constexpr int32_t& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_m_resolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_resolution;
}
constexpr int32_t const& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_m_resolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_resolution;
}
constexpr void Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_set_m_resolution(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_resolution = value;
}
constexpr ::Tayx::Graphy::G_GraphShader*& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_m_shaderGraph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_shaderGraph;
}
constexpr ::Tayx::Graphy::G_GraphShader* const& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_m_shaderGraph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_shaderGraph;
}
constexpr void Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_set_m_shaderGraph(::Tayx::Graphy::G_GraphShader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_shaderGraph = value;
}
constexpr ::ArrayW<int32_t>& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_m_fpsArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsArray;
}
constexpr ::ArrayW<int32_t> const& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_m_fpsArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsArray;
}
constexpr void Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_set_m_fpsArray(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsArray = value;
}
constexpr int32_t& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_m_highestFps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_highestFps;
}
constexpr int32_t const& Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_get_m_highestFps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_highestFps;
}
constexpr void Tayx::Graphy::Fps::G_FpsGraph::__cordl_internal_set_m_highestFps(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_highestFps = value;
}
inline void Tayx::Graphy::Fps::G_FpsGraph::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsGraph*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsGraph::UpdateParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsGraph*>(), { "UpdateParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsGraph::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsGraph*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsGraph::UpdateGraph() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tayx::Graphy::Fps::G_FpsGraph*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsGraph::CreatePoints() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tayx::Graphy::Fps::G_FpsGraph*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsGraph::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsGraph*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Tayx::Graphy::Fps::G_FpsGraph* Tayx::Graphy::Fps::G_FpsGraph::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::Fps::G_FpsGraph*>());
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::Fps::G_FpsGraph::G_FpsGraph() {}
