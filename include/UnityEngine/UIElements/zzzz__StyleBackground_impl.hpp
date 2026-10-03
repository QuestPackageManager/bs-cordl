#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleBackground.hpp"
#include "UnityEngine/UIElements/zzzz__Background_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleBackground_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleValue_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Background (::UnityEngine::UIElements::StyleBackground::*)()>(
    &::UnityEngine::UIElements::StyleBackground::get_value)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x7107da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleBackground::*)(::UnityEngine::UIElements::Background)>(
    &::UnityEngine::UIElements::StyleBackground::set_value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7107dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { "set_value", {}, { ::i2c::type_of<::UnityEngine::UIElements::Background>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground.get_keyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleKeyword (::UnityEngine::UIElements::StyleBackground::*)()>(
    &::UnityEngine::UIElements::StyleBackground::get_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7107de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { "get_keyword", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground.set_keyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleBackground::*)(::UnityEngine::UIElements::StyleKeyword)>(
    &::UnityEngine::UIElements::StyleBackground::set_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7107de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { "set_keyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleBackground::*)(::UnityEngine::UIElements::Background)>(
    &::UnityEngine::UIElements::StyleBackground::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x7107df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Background>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleBackground::*)(::UnityEngine::UIElements::StyleKeyword)>(
    &::UnityEngine::UIElements::StyleBackground::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7107e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleBackground::*)(::UnityEngine::Texture2D*, ::UnityEngine::UIElements::StyleKeyword)>(
    &::UnityEngine::UIElements::StyleBackground::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x7104eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleBackground::*)(::UnityEngine::Sprite*, ::UnityEngine::UIElements::StyleKeyword)>(
    &::UnityEngine::UIElements::StyleBackground::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x7104ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleBackground::*)(::UnityEngine::UIElements::VectorImage*, ::UnityEngine::UIElements::StyleKeyword)>(
    &::UnityEngine::UIElements::StyleBackground::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x7104f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleBackground::*)(::UnityEngine::UIElements::Background, ::UnityEngine::UIElements::StyleKeyword)>(
    &::UnityEngine::UIElements::StyleBackground::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7107e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Background>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::StyleBackground, ::UnityEngine::UIElements::StyleBackground)>(
    &::UnityEngine::UIElements::StyleBackground::op_Equality)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x7107e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(),
                                         { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackground>(), ::i2c::type_of<::UnityEngine::UIElements::StyleBackground>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground.op_Implicit___UnityEngine__UIElements__StyleBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleBackground (*)(::UnityEngine::UIElements::StyleKeyword)>(
    &::UnityEngine::UIElements::StyleBackground::op_Implicit___UnityEngine__UIElements__StyleBackground)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7104f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground.op_Implicit___UnityEngine__UIElements__StyleBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleBackground (*)(::UnityEngine::UIElements::Background)>(
    &::UnityEngine::UIElements::StyleBackground::op_Implicit___UnityEngine__UIElements__StyleBackground)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7107e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::UIElements::Background>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleBackground::*)(::UnityEngine::UIElements::StyleBackground)>(
    &::UnityEngine::UIElements::StyleBackground::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x7107e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackground>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleBackground::*)(::System::Object*)>(&::UnityEngine::UIElements::StyleBackground::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x7107ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleBackground::*)()>(&::UnityEngine::UIElements::StyleBackground::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x7107f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackground.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleBackground::*)()>(&::UnityEngine::UIElements::StyleBackground::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x7107fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::Background UnityEngine::UIElements::StyleBackground::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Background>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleBackground::set_value(::UnityEngine::UIElements::Background value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { "set_value", {}, { ::i2c::type_of<::UnityEngine::UIElements::Background>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleKeyword UnityEngine::UIElements::StyleBackground::get_keyword() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { "get_keyword", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleKeyword>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleBackground::set_keyword(::UnityEngine::UIElements::StyleKeyword value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { "set_keyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::StyleBackground::_ctor(::UnityEngine::UIElements::Background v) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Background>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void UnityEngine::UIElements::StyleBackground::_ctor(::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keyword);
}
inline void UnityEngine::UIElements::StyleBackground::_ctor(::UnityEngine::Texture2D* v, ::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v, keyword);
}
inline void UnityEngine::UIElements::StyleBackground::_ctor(::UnityEngine::Sprite* v, ::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v, keyword);
}
inline void UnityEngine::UIElements::StyleBackground::_ctor(::UnityEngine::UIElements::VectorImage* v, ::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v, keyword);
}
inline void UnityEngine::UIElements::StyleBackground::_ctor(::UnityEngine::UIElements::Background v, ::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Background>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v, keyword);
}
inline bool UnityEngine::UIElements::StyleBackground::op_Equality(::UnityEngine::UIElements::StyleBackground lhs, ::UnityEngine::UIElements::StyleBackground rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackground>(), ::i2c::type_of<::UnityEngine::UIElements::StyleBackground>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::UIElements::StyleBackground UnityEngine::UIElements::StyleBackground::op_Implicit___UnityEngine__UIElements__StyleBackground(::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleBackground>(nullptr, ___internal_method, keyword);
}
inline ::UnityEngine::UIElements::StyleBackground UnityEngine::UIElements::StyleBackground::op_Implicit___UnityEngine__UIElements__StyleBackground(::UnityEngine::UIElements::Background v) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::UIElements::Background>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleBackground>(nullptr, ___internal_method, v);
}
inline bool UnityEngine::UIElements::StyleBackground::Equals(::UnityEngine::UIElements::StyleBackground other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackground>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::StyleBackground::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::StyleBackground::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::StyleBackground::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleBackground>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Background>"
constexpr UnityEngine::UIElements::StyleBackground::operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Background>*() {
  return static_cast<::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Background>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Background>"
constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Background>*
UnityEngine::UIElements::StyleBackground::i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__Background_() {
  return static_cast<::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Background>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleBackground>"
constexpr UnityEngine::UIElements::StyleBackground::operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleBackground>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleBackground>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleBackground>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleBackground>* UnityEngine::UIElements::StyleBackground::i___System__IEquatable_1___UnityEngine__UIElements__StyleBackground_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleBackground>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::Background", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Keyword", ty:
// "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::StyleBackground::StyleBackground(::UnityEngine::UIElements::Background m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept {
  this->m_Value = m_Value;
  this->m_Keyword = m_Keyword;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleBackground::StyleBackground() {}
