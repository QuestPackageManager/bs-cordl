#pragma once
// IWYU pragma private; include "GlobalNamespace\Vector3TransitionSO.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Vector3TransitionSO_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Vector3TransitionSO.get_normalState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Vector3TransitionSO::*)()>(&::GlobalNamespace::Vector3TransitionSO::get_normalState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6446b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3TransitionSO*>(), { "get_normalState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3TransitionSO.get_highlightedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Vector3TransitionSO::*)()>(&::GlobalNamespace::Vector3TransitionSO::get_highlightedState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6446b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3TransitionSO*>(), { "get_highlightedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3TransitionSO.get_pressedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Vector3TransitionSO::*)()>(&::GlobalNamespace::Vector3TransitionSO::get_pressedState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6446b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3TransitionSO*>(), { "get_pressedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3TransitionSO.get_disabledState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Vector3TransitionSO::*)()>(&::GlobalNamespace::Vector3TransitionSO::get_disabledState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6446b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3TransitionSO*>(), { "get_disabledState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3TransitionSO.get_selectedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Vector3TransitionSO::*)()>(&::GlobalNamespace::Vector3TransitionSO::get_selectedState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6446b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3TransitionSO*>(), { "get_selectedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3TransitionSO.get_selectedAndHighlightedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Vector3TransitionSO::*)()>(
    &::GlobalNamespace::Vector3TransitionSO::get_selectedAndHighlightedState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6446b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3TransitionSO*>(), { "get_selectedAndHighlightedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3TransitionSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vector3TransitionSO::*)()>(&::GlobalNamespace::Vector3TransitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3TransitionSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::Vector3TransitionSO::__cordl_internal_get__normalState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalState;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Vector3TransitionSO::__cordl_internal_get__normalState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalState;
}
constexpr void GlobalNamespace::Vector3TransitionSO::__cordl_internal_set__normalState(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalState = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Vector3TransitionSO::__cordl_internal_get__highlightedState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedState;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Vector3TransitionSO::__cordl_internal_get__highlightedState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedState;
}
constexpr void GlobalNamespace::Vector3TransitionSO::__cordl_internal_set__highlightedState(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightedState = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Vector3TransitionSO::__cordl_internal_get__pressedState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedState;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Vector3TransitionSO::__cordl_internal_get__pressedState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedState;
}
constexpr void GlobalNamespace::Vector3TransitionSO::__cordl_internal_set__pressedState(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressedState = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Vector3TransitionSO::__cordl_internal_get__disabledState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledState;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Vector3TransitionSO::__cordl_internal_get__disabledState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledState;
}
constexpr void GlobalNamespace::Vector3TransitionSO::__cordl_internal_set__disabledState(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledState = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Vector3TransitionSO::__cordl_internal_get__selectedState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedState;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Vector3TransitionSO::__cordl_internal_get__selectedState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedState;
}
constexpr void GlobalNamespace::Vector3TransitionSO::__cordl_internal_set__selectedState(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedState = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Vector3TransitionSO::__cordl_internal_get__selectedAndHighlightedState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedState;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Vector3TransitionSO::__cordl_internal_get__selectedAndHighlightedState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedState;
}
constexpr void GlobalNamespace::Vector3TransitionSO::__cordl_internal_set__selectedAndHighlightedState(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAndHighlightedState = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::Vector3TransitionSO::get_normalState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3TransitionSO*>(), { "get_normalState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Vector3TransitionSO::get_highlightedState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3TransitionSO*>(), { "get_highlightedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Vector3TransitionSO::get_pressedState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3TransitionSO*>(), { "get_pressedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Vector3TransitionSO::get_disabledState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3TransitionSO*>(), { "get_disabledState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Vector3TransitionSO::get_selectedState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3TransitionSO*>(), { "get_selectedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Vector3TransitionSO::get_selectedAndHighlightedState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3TransitionSO*>(), { "get_selectedAndHighlightedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::Vector3TransitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3TransitionSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Vector3TransitionSO* GlobalNamespace::Vector3TransitionSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vector3TransitionSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vector3TransitionSO::Vector3TransitionSO() {}
