#pragma once
// IWYU pragma private; include "GlobalNamespace/CanvasGroupTransitionSO.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_impl.hpp"
#include "GlobalNamespace/zzzz__CanvasGroupTransitionSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CanvasGroupTransitionSO.get_normalAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CanvasGroupTransitionSO::*)()>(&::GlobalNamespace::CanvasGroupTransitionSO::get_normalAlpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6441184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CanvasGroupTransitionSO*>(), { "get_normalAlpha", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CanvasGroupTransitionSO.get_highlightedAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CanvasGroupTransitionSO::*)()>(&::GlobalNamespace::CanvasGroupTransitionSO::get_highlightedAlpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x644118c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CanvasGroupTransitionSO*>(), { "get_highlightedAlpha", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CanvasGroupTransitionSO.get_pressedAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CanvasGroupTransitionSO::*)()>(&::GlobalNamespace::CanvasGroupTransitionSO::get_pressedAlpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6441194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CanvasGroupTransitionSO*>(), { "get_pressedAlpha", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CanvasGroupTransitionSO.get_disabledAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CanvasGroupTransitionSO::*)()>(&::GlobalNamespace::CanvasGroupTransitionSO::get_disabledAlpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x644119c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CanvasGroupTransitionSO*>(), { "get_disabledAlpha", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CanvasGroupTransitionSO.get_selectedAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CanvasGroupTransitionSO::*)()>(&::GlobalNamespace::CanvasGroupTransitionSO::get_selectedAlpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64411a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CanvasGroupTransitionSO*>(), { "get_selectedAlpha", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CanvasGroupTransitionSO.get_selectedAndHighlightedAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CanvasGroupTransitionSO::*)()>(&::GlobalNamespace::CanvasGroupTransitionSO::get_selectedAndHighlightedAlpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64411ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CanvasGroupTransitionSO*>(), { "get_selectedAndHighlightedAlpha", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CanvasGroupTransitionSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CanvasGroupTransitionSO::*)()>(&::GlobalNamespace::CanvasGroupTransitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64411b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CanvasGroupTransitionSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_get__normalAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalAlpha;
}
constexpr float_t const& GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_get__normalAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalAlpha;
}
constexpr void GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_set__normalAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalAlpha = value;
}
constexpr float_t& GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_get__highlightedAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedAlpha;
}
constexpr float_t const& GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_get__highlightedAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedAlpha;
}
constexpr void GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_set__highlightedAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightedAlpha = value;
}
constexpr float_t& GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_get__pressedAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedAlpha;
}
constexpr float_t const& GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_get__pressedAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedAlpha;
}
constexpr void GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_set__pressedAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressedAlpha = value;
}
constexpr float_t& GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_get__disabledAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledAlpha;
}
constexpr float_t const& GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_get__disabledAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledAlpha;
}
constexpr void GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_set__disabledAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledAlpha = value;
}
constexpr float_t& GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_get__selectedAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAlpha;
}
constexpr float_t const& GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_get__selectedAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAlpha;
}
constexpr void GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_set__selectedAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAlpha = value;
}
constexpr float_t& GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_get__selectedAndHighlightedAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedAlpha;
}
constexpr float_t const& GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_get__selectedAndHighlightedAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedAlpha;
}
constexpr void GlobalNamespace::CanvasGroupTransitionSO::__cordl_internal_set__selectedAndHighlightedAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAndHighlightedAlpha = value;
}
inline float_t GlobalNamespace::CanvasGroupTransitionSO::get_normalAlpha() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CanvasGroupTransitionSO*>(), { "get_normalAlpha", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::CanvasGroupTransitionSO::get_highlightedAlpha() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CanvasGroupTransitionSO*>(), { "get_highlightedAlpha", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::CanvasGroupTransitionSO::get_pressedAlpha() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CanvasGroupTransitionSO*>(), { "get_pressedAlpha", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::CanvasGroupTransitionSO::get_disabledAlpha() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CanvasGroupTransitionSO*>(), { "get_disabledAlpha", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::CanvasGroupTransitionSO::get_selectedAlpha() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CanvasGroupTransitionSO*>(), { "get_selectedAlpha", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::CanvasGroupTransitionSO::get_selectedAndHighlightedAlpha() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CanvasGroupTransitionSO*>(), { "get_selectedAndHighlightedAlpha", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::CanvasGroupTransitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CanvasGroupTransitionSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CanvasGroupTransitionSO* GlobalNamespace::CanvasGroupTransitionSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CanvasGroupTransitionSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CanvasGroupTransitionSO::CanvasGroupTransitionSO() {}
