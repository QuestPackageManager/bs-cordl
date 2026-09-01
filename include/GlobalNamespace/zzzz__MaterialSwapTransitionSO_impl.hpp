#pragma once
// IWYU pragma private; include "GlobalNamespace\MaterialSwapTransitionSO.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialSwapTransitionSO_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialSwapTransitionSO.get_normalMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::MaterialSwapTransitionSO::*)()>(
    &::GlobalNamespace::MaterialSwapTransitionSO::get_normalMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialSwapTransitionSO*>(), { "get_normalMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialSwapTransitionSO.get_highlightedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::MaterialSwapTransitionSO::*)()>(
    &::GlobalNamespace::MaterialSwapTransitionSO::get_highlightedMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialSwapTransitionSO*>(), { "get_highlightedMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialSwapTransitionSO.get_pressedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::MaterialSwapTransitionSO::*)()>(
    &::GlobalNamespace::MaterialSwapTransitionSO::get_pressedMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialSwapTransitionSO*>(), { "get_pressedMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialSwapTransitionSO.get_disabledMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::MaterialSwapTransitionSO::*)()>(
    &::GlobalNamespace::MaterialSwapTransitionSO::get_disabledMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialSwapTransitionSO*>(), { "get_disabledMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialSwapTransitionSO.get_selectedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::MaterialSwapTransitionSO::*)()>(
    &::GlobalNamespace::MaterialSwapTransitionSO::get_selectedMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialSwapTransitionSO*>(), { "get_selectedMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialSwapTransitionSO.get_selectedAndHighlightedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::MaterialSwapTransitionSO::*)()>(
    &::GlobalNamespace::MaterialSwapTransitionSO::get_selectedAndHighlightedMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialSwapTransitionSO*>(), { "get_selectedAndHighlightedMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialSwapTransitionSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialSwapTransitionSO::*)()>(&::GlobalNamespace::MaterialSwapTransitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialSwapTransitionSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_get__normalMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_get__normalMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalMaterial;
}
constexpr void GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_set__normalMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_get__highlightedMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_get__highlightedMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedMaterial;
}
constexpr void GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_set__highlightedMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightedMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_get__pressedMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_get__pressedMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedMaterial;
}
constexpr void GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_set__pressedMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressedMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_get__disabledMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_get__disabledMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledMaterial;
}
constexpr void GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_set__disabledMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_get__selectedMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_get__selectedMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedMaterial;
}
constexpr void GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_set__selectedMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_get__selectedAndHighlightedMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_get__selectedAndHighlightedMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedMaterial;
}
constexpr void GlobalNamespace::MaterialSwapTransitionSO::__cordl_internal_set__selectedAndHighlightedMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAndHighlightedMaterial = value;
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::MaterialSwapTransitionSO::get_normalMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialSwapTransitionSO*>(), { "get_normalMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::MaterialSwapTransitionSO::get_highlightedMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialSwapTransitionSO*>(), { "get_highlightedMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::MaterialSwapTransitionSO::get_pressedMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialSwapTransitionSO*>(), { "get_pressedMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::MaterialSwapTransitionSO::get_disabledMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialSwapTransitionSO*>(), { "get_disabledMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::MaterialSwapTransitionSO::get_selectedMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialSwapTransitionSO*>(), { "get_selectedMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::MaterialSwapTransitionSO::get_selectedAndHighlightedMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialSwapTransitionSO*>(), { "get_selectedAndHighlightedMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialSwapTransitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialSwapTransitionSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialSwapTransitionSO* GlobalNamespace::MaterialSwapTransitionSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialSwapTransitionSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialSwapTransitionSO::MaterialSwapTransitionSO() {}
