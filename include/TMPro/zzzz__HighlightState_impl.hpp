#pragma once
// IWYU pragma private; include "TMPro\HighlightState.hpp"
#include "TMPro/zzzz__TMP_Offset_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "TMPro/zzzz__HighlightState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Offset_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
//  Writing Method size for method: ::TMPro::HighlightState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::HighlightState::*)(::UnityEngine::Color32, ::TMPro::TMP_Offset)>(&::TMPro::HighlightState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x694a410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::HighlightState>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::TMPro::TMP_Offset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::HighlightState.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::TMPro::HighlightState, ::TMPro::HighlightState)>(&::TMPro::HighlightState::op_Equality)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x694a420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::HighlightState>(), { "op_Equality", {}, { ::i2c::type_of<::TMPro::HighlightState>(), ::i2c::type_of<::TMPro::HighlightState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::HighlightState.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::TMPro::HighlightState, ::TMPro::HighlightState)>(&::TMPro::HighlightState::op_Inequality)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x694a4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::HighlightState>(), { "op_Inequality", {}, { ::i2c::type_of<::TMPro::HighlightState>(), ::i2c::type_of<::TMPro::HighlightState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::HighlightState.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::HighlightState::*)()>(&::TMPro::HighlightState::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x694a514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::HighlightState>(), { ::i2c::class_of<::TMPro::HighlightState>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::HighlightState.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::HighlightState::*)(::System::Object*)>(&::TMPro::HighlightState::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x694a580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::HighlightState>(), { ::i2c::class_of<::TMPro::HighlightState>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::HighlightState.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::HighlightState::*)(::TMPro::HighlightState)>(&::TMPro::HighlightState::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x694a5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::HighlightState>(), { "Equals", {}, { ::i2c::type_of<::TMPro::HighlightState>() } })));
    return ___internal_method;
  }
};
inline void TMPro::HighlightState::_ctor(::UnityEngine::Color32 color, ::TMPro::TMP_Offset padding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::HighlightState>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::TMPro::TMP_Offset>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, color, padding);
}
inline bool TMPro::HighlightState::op_Equality(::TMPro::HighlightState lhs, ::TMPro::HighlightState rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::HighlightState>(), { "op_Equality", {}, { ::i2c::type_of<::TMPro::HighlightState>(), ::i2c::type_of<::TMPro::HighlightState>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool TMPro::HighlightState::op_Inequality(::TMPro::HighlightState lhs, ::TMPro::HighlightState rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::HighlightState>(), { "op_Inequality", {}, { ::i2c::type_of<::TMPro::HighlightState>(), ::i2c::type_of<::TMPro::HighlightState>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline int32_t TMPro::HighlightState::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::HighlightState>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool TMPro::HighlightState::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::HighlightState>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool TMPro::HighlightState::Equals(::TMPro::HighlightState other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::HighlightState>(), { "Equals", {}, { ::i2c::type_of<::TMPro::HighlightState>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "padding", ty: "::TMPro::TMP_Offset", modifiers: "", def_value:
// Some("{}") }]
constexpr ::TMPro::HighlightState::HighlightState(::UnityEngine::Color32 color, ::TMPro::TMP_Offset padding) noexcept {
  this->color = color;
  this->padding = padding;
}
// Ctor Parameters []
constexpr ::TMPro::HighlightState::HighlightState() {}
