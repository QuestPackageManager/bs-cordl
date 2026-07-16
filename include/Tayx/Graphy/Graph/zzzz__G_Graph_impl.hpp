#pragma once
// IWYU pragma private; include "Tayx/Graphy/Graph/G_Graph.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Tayx/Graphy/Graph/zzzz__G_Graph_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::Graph::G_Graph.UpdateGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Graph::G_Graph::*)()>(&::Tayx::Graphy::Graph::G_Graph::UpdateGraph)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Graph::G_Graph*>(), { ::i2c::class_of<::Tayx::Graphy::Graph::G_Graph*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Graph::G_Graph.CreatePoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Graph::G_Graph::*)()>(&::Tayx::Graphy::Graph::G_Graph::CreatePoints)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Graph::G_Graph*>(), { ::i2c::class_of<::Tayx::Graphy::Graph::G_Graph*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Graph::G_Graph._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Graph::G_Graph::*)()>(&::Tayx::Graphy::Graph::G_Graph::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6439e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Graph::G_Graph*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Tayx::Graphy::Graph::G_Graph::UpdateGraph() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tayx::Graphy::Graph::G_Graph*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Graph::G_Graph::CreatePoints() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tayx::Graphy::Graph::G_Graph*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Graph::G_Graph::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Graph::G_Graph*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Tayx::Graphy::Graph::G_Graph* Tayx::Graphy::Graph::G_Graph::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::Graph::G_Graph*>());
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::Graph::G_Graph::G_Graph() {}
