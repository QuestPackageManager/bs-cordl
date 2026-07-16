#pragma once
// IWYU pragma private; include "HMUI/EmptyBoxGraphic.hpp"
#include "UnityEngine/UI/zzzz__Graphic_impl.hpp"
#include "HMUI/zzzz__EmptyBoxGraphic_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
//  Writing Method size for method: ::HMUI::EmptyBoxGraphic.OnPopulateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::EmptyBoxGraphic::*)(::UnityEngine::UI::VertexHelper*)>(&::HMUI::EmptyBoxGraphic::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5882e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::EmptyBoxGraphic*>(), { ::i2c::class_of<::HMUI::EmptyBoxGraphic*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::EmptyBoxGraphic.OnDrawGizmosSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::EmptyBoxGraphic::*)()>(&::HMUI::EmptyBoxGraphic::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x58830d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EmptyBoxGraphic*>(), { "OnDrawGizmosSelected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::EmptyBoxGraphic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::EmptyBoxGraphic::*)()>(&::HMUI::EmptyBoxGraphic::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x588320c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EmptyBoxGraphic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::EmptyBoxGraphic::__cordl_internal_get__depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depth;
}
constexpr float_t const& HMUI::EmptyBoxGraphic::__cordl_internal_get__depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depth;
}
constexpr void HMUI::EmptyBoxGraphic::__cordl_internal_set__depth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____depth = value;
}
inline void HMUI::EmptyBoxGraphic::OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::EmptyBoxGraphic*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vh);
}
inline void HMUI::EmptyBoxGraphic::OnDrawGizmosSelected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EmptyBoxGraphic*>(), { "OnDrawGizmosSelected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::EmptyBoxGraphic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::EmptyBoxGraphic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::EmptyBoxGraphic* HMUI::EmptyBoxGraphic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::EmptyBoxGraphic*>());
}
// Ctor Parameters []
constexpr ::HMUI::EmptyBoxGraphic::EmptyBoxGraphic() {}
