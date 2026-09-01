#pragma once
// IWYU pragma private; include "GlobalNamespace\FloatTransitionSO.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_impl.hpp"
#include "GlobalNamespace/zzzz__FloatTransitionSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatTransitionSO.get_normalState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FloatTransitionSO::*)()>(&::GlobalNamespace::FloatTransitionSO::get_normalState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTransitionSO*>(), { "get_normalState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatTransitionSO.get_highlightedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FloatTransitionSO::*)()>(&::GlobalNamespace::FloatTransitionSO::get_highlightedState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTransitionSO*>(), { "get_highlightedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatTransitionSO.get_pressedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FloatTransitionSO::*)()>(&::GlobalNamespace::FloatTransitionSO::get_pressedState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTransitionSO*>(), { "get_pressedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatTransitionSO.get_disabledState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FloatTransitionSO::*)()>(&::GlobalNamespace::FloatTransitionSO::get_disabledState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTransitionSO*>(), { "get_disabledState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatTransitionSO.get_selectedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FloatTransitionSO::*)()>(&::GlobalNamespace::FloatTransitionSO::get_selectedState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTransitionSO*>(), { "get_selectedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatTransitionSO.get_selectedAndHighlightedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FloatTransitionSO::*)()>(&::GlobalNamespace::FloatTransitionSO::get_selectedAndHighlightedState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTransitionSO*>(), { "get_selectedAndHighlightedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatTransitionSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatTransitionSO::*)()>(&::GlobalNamespace::FloatTransitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTransitionSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::FloatTransitionSO::__cordl_internal_get__normalState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalState;
}
constexpr float_t const& GlobalNamespace::FloatTransitionSO::__cordl_internal_get__normalState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalState;
}
constexpr void GlobalNamespace::FloatTransitionSO::__cordl_internal_set__normalState(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalState = value;
}
constexpr float_t& GlobalNamespace::FloatTransitionSO::__cordl_internal_get__highlightedState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedState;
}
constexpr float_t const& GlobalNamespace::FloatTransitionSO::__cordl_internal_get__highlightedState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedState;
}
constexpr void GlobalNamespace::FloatTransitionSO::__cordl_internal_set__highlightedState(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightedState = value;
}
constexpr float_t& GlobalNamespace::FloatTransitionSO::__cordl_internal_get__pressedState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedState;
}
constexpr float_t const& GlobalNamespace::FloatTransitionSO::__cordl_internal_get__pressedState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedState;
}
constexpr void GlobalNamespace::FloatTransitionSO::__cordl_internal_set__pressedState(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressedState = value;
}
constexpr float_t& GlobalNamespace::FloatTransitionSO::__cordl_internal_get__disabledState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledState;
}
constexpr float_t const& GlobalNamespace::FloatTransitionSO::__cordl_internal_get__disabledState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledState;
}
constexpr void GlobalNamespace::FloatTransitionSO::__cordl_internal_set__disabledState(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledState = value;
}
constexpr float_t& GlobalNamespace::FloatTransitionSO::__cordl_internal_get__selectedState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedState;
}
constexpr float_t const& GlobalNamespace::FloatTransitionSO::__cordl_internal_get__selectedState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedState;
}
constexpr void GlobalNamespace::FloatTransitionSO::__cordl_internal_set__selectedState(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedState = value;
}
constexpr float_t& GlobalNamespace::FloatTransitionSO::__cordl_internal_get__selectedAndHighlightedState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedState;
}
constexpr float_t const& GlobalNamespace::FloatTransitionSO::__cordl_internal_get__selectedAndHighlightedState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedState;
}
constexpr void GlobalNamespace::FloatTransitionSO::__cordl_internal_set__selectedAndHighlightedState(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAndHighlightedState = value;
}
inline float_t GlobalNamespace::FloatTransitionSO::get_normalState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTransitionSO*>(), { "get_normalState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::FloatTransitionSO::get_highlightedState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTransitionSO*>(), { "get_highlightedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::FloatTransitionSO::get_pressedState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTransitionSO*>(), { "get_pressedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::FloatTransitionSO::get_disabledState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTransitionSO*>(), { "get_disabledState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::FloatTransitionSO::get_selectedState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTransitionSO*>(), { "get_selectedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::FloatTransitionSO::get_selectedAndHighlightedState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTransitionSO*>(), { "get_selectedAndHighlightedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::FloatTransitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatTransitionSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatTransitionSO* GlobalNamespace::FloatTransitionSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatTransitionSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatTransitionSO::FloatTransitionSO() {}
