#pragma once
// IWYU pragma private; include "GlobalNamespace\EnabledTransitionSO.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_impl.hpp"
#include "GlobalNamespace/zzzz__EnabledTransitionSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnabledTransitionSO.get_normalState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EnabledTransitionSO::*)()>(&::GlobalNamespace::EnabledTransitionSO::get_normalState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnabledTransitionSO*>(), { "get_normalState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnabledTransitionSO.get_highlightedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EnabledTransitionSO::*)()>(&::GlobalNamespace::EnabledTransitionSO::get_highlightedState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnabledTransitionSO*>(), { "get_highlightedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnabledTransitionSO.get_pressedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EnabledTransitionSO::*)()>(&::GlobalNamespace::EnabledTransitionSO::get_pressedState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnabledTransitionSO*>(), { "get_pressedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnabledTransitionSO.get_disabledState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EnabledTransitionSO::*)()>(&::GlobalNamespace::EnabledTransitionSO::get_disabledState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnabledTransitionSO*>(), { "get_disabledState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnabledTransitionSO.get_selectedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EnabledTransitionSO::*)()>(&::GlobalNamespace::EnabledTransitionSO::get_selectedState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnabledTransitionSO*>(), { "get_selectedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnabledTransitionSO.get_selectedAndHighlightedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EnabledTransitionSO::*)()>(&::GlobalNamespace::EnabledTransitionSO::get_selectedAndHighlightedState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnabledTransitionSO*>(), { "get_selectedAndHighlightedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnabledTransitionSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnabledTransitionSO::*)()>(&::GlobalNamespace::EnabledTransitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnabledTransitionSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::EnabledTransitionSO::__cordl_internal_get__normalState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalState;
}
constexpr bool const& GlobalNamespace::EnabledTransitionSO::__cordl_internal_get__normalState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalState;
}
constexpr void GlobalNamespace::EnabledTransitionSO::__cordl_internal_set__normalState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalState = value;
}
constexpr bool& GlobalNamespace::EnabledTransitionSO::__cordl_internal_get__highlightedState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedState;
}
constexpr bool const& GlobalNamespace::EnabledTransitionSO::__cordl_internal_get__highlightedState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedState;
}
constexpr void GlobalNamespace::EnabledTransitionSO::__cordl_internal_set__highlightedState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightedState = value;
}
constexpr bool& GlobalNamespace::EnabledTransitionSO::__cordl_internal_get__pressedState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedState;
}
constexpr bool const& GlobalNamespace::EnabledTransitionSO::__cordl_internal_get__pressedState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedState;
}
constexpr void GlobalNamespace::EnabledTransitionSO::__cordl_internal_set__pressedState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressedState = value;
}
constexpr bool& GlobalNamespace::EnabledTransitionSO::__cordl_internal_get__disabledState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledState;
}
constexpr bool const& GlobalNamespace::EnabledTransitionSO::__cordl_internal_get__disabledState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledState;
}
constexpr void GlobalNamespace::EnabledTransitionSO::__cordl_internal_set__disabledState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledState = value;
}
constexpr bool& GlobalNamespace::EnabledTransitionSO::__cordl_internal_get__selectedState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedState;
}
constexpr bool const& GlobalNamespace::EnabledTransitionSO::__cordl_internal_get__selectedState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedState;
}
constexpr void GlobalNamespace::EnabledTransitionSO::__cordl_internal_set__selectedState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedState = value;
}
constexpr bool& GlobalNamespace::EnabledTransitionSO::__cordl_internal_get__selectedAndHighlightedState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedState;
}
constexpr bool const& GlobalNamespace::EnabledTransitionSO::__cordl_internal_get__selectedAndHighlightedState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedState;
}
constexpr void GlobalNamespace::EnabledTransitionSO::__cordl_internal_set__selectedAndHighlightedState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAndHighlightedState = value;
}
inline bool GlobalNamespace::EnabledTransitionSO::get_normalState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnabledTransitionSO*>(), { "get_normalState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::EnabledTransitionSO::get_highlightedState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnabledTransitionSO*>(), { "get_highlightedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::EnabledTransitionSO::get_pressedState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnabledTransitionSO*>(), { "get_pressedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::EnabledTransitionSO::get_disabledState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnabledTransitionSO*>(), { "get_disabledState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::EnabledTransitionSO::get_selectedState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnabledTransitionSO*>(), { "get_selectedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::EnabledTransitionSO::get_selectedAndHighlightedState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnabledTransitionSO*>(), { "get_selectedAndHighlightedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::EnabledTransitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnabledTransitionSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnabledTransitionSO* GlobalNamespace::EnabledTransitionSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnabledTransitionSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnabledTransitionSO::EnabledTransitionSO() {}
