#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/HighlightState.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Offset_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__HighlightState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Offset_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::HighlightState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::HighlightState::*)(::UnityEngine::Color32, ::UnityEngine::TextCore::Text::Offset)>(
    &::UnityEngine::TextCore::Text::HighlightState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c045d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::HighlightState>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::TextCore::Text::Offset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::HighlightState.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TextCore::Text::HighlightState, ::UnityEngine::TextCore::Text::HighlightState)>(
    &::UnityEngine::TextCore::Text::HighlightState::op_Equality)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6c045e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::HighlightState>(),
                                         { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::HighlightState>(), ::i2c::type_of<::UnityEngine::TextCore::Text::HighlightState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::HighlightState.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TextCore::Text::HighlightState, ::UnityEngine::TextCore::Text::HighlightState)>(
    &::UnityEngine::TextCore::Text::HighlightState::op_Inequality)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6c046dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::HighlightState>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::HighlightState>(), ::i2c::type_of<::UnityEngine::TextCore::Text::HighlightState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::HighlightState.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::HighlightState::*)()>(&::UnityEngine::TextCore::Text::HighlightState::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c04724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::HighlightState>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::HighlightState>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::HighlightState.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::HighlightState::*)(::System::Object*)>(&::UnityEngine::TextCore::Text::HighlightState::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6c04790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::HighlightState>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::HighlightState>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::HighlightState::_ctor(::UnityEngine::Color32 color, ::UnityEngine::TextCore::Text::Offset padding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::HighlightState>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::TextCore::Text::Offset>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, color, padding);
}
inline bool UnityEngine::TextCore::Text::HighlightState::op_Equality(::UnityEngine::TextCore::Text::HighlightState lhs, ::UnityEngine::TextCore::Text::HighlightState rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::HighlightState>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::HighlightState>(), ::i2c::type_of<::UnityEngine::TextCore::Text::HighlightState>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::TextCore::Text::HighlightState::op_Inequality(::UnityEngine::TextCore::Text::HighlightState lhs, ::UnityEngine::TextCore::Text::HighlightState rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::HighlightState>(),
                                       { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::HighlightState>(), ::i2c::type_of<::UnityEngine::TextCore::Text::HighlightState>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline int32_t UnityEngine::TextCore::Text::HighlightState::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::HighlightState>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::TextCore::Text::HighlightState::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::HighlightState>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
// Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "padding", ty: "::UnityEngine::TextCore::Text::Offset", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::HighlightState::HighlightState(::UnityEngine::Color32 color, ::UnityEngine::TextCore::Text::Offset padding) noexcept {
  this->color = color;
  this->padding = padding;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::HighlightState::HighlightState() {}
