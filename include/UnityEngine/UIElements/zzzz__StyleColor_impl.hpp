#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StyleColor.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleColor_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleValue_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleColor.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::StyleColor::*)()>(&::UnityEngine::UIElements::StyleColor::get_value)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c92bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleColor.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleColor::*)(::UnityEngine::Color)>(&::UnityEngine::UIElements::StyleColor::set_value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c92be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { "set_value", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleColor.get_keyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleKeyword (::UnityEngine::UIElements::StyleColor::*)()>(&::UnityEngine::UIElements::StyleColor::get_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c92bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { "get_keyword", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleColor.set_keyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleColor::*)(::UnityEngine::UIElements::StyleKeyword)>(&::UnityEngine::UIElements::StyleColor::set_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c92bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { "set_keyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleColor::*)(::UnityEngine::Color)>(&::UnityEngine::UIElements::StyleColor::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c92c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleColor::*)(::UnityEngine::UIElements::StyleKeyword)>(&::UnityEngine::UIElements::StyleColor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c92c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleColor::*)(::UnityEngine::Color, ::UnityEngine::UIElements::StyleKeyword)>(
    &::UnityEngine::UIElements::StyleColor::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c90990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleColor.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::StyleColor, ::UnityEngine::UIElements::StyleColor)>(&::UnityEngine::UIElements::StyleColor::op_Equality)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c92c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>(), ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleColor.op_Implicit___UnityEngine__UIElements__StyleColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleColor (*)(::UnityEngine::UIElements::StyleKeyword)>(
    &::UnityEngine::UIElements::StyleColor::op_Implicit___UnityEngine__UIElements__StyleColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c909a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleColor.op_Implicit___UnityEngine__UIElements__StyleColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleColor (*)(::UnityEngine::Color)>(
    &::UnityEngine::UIElements::StyleColor::op_Implicit___UnityEngine__UIElements__StyleColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c92c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleColor.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleColor::*)(::UnityEngine::UIElements::StyleColor)>(&::UnityEngine::UIElements::StyleColor::Equals)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c92c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleColor.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleColor::*)(::System::Object*)>(&::UnityEngine::UIElements::StyleColor::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c92cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleColor.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleColor::*)()>(&::UnityEngine::UIElements::StyleColor::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c92d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleColor.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleColor::*)()>(&::UnityEngine::UIElements::StyleColor::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6c92dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Color UnityEngine::UIElements::StyleColor::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleColor::set_value(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { "set_value", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleKeyword UnityEngine::UIElements::StyleColor::get_keyword() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { "get_keyword", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleKeyword>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleColor::set_keyword(::UnityEngine::UIElements::StyleKeyword value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { "set_keyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::StyleColor::_ctor(::UnityEngine::Color v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void UnityEngine::UIElements::StyleColor::_ctor(::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keyword);
}
inline void UnityEngine::UIElements::StyleColor::_ctor(::UnityEngine::Color v, ::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v, keyword);
}
inline bool UnityEngine::UIElements::StyleColor::op_Equality(::UnityEngine::UIElements::StyleColor lhs, ::UnityEngine::UIElements::StyleColor rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>(), ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::StyleColor::op_Implicit___UnityEngine__UIElements__StyleColor(::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor>(nullptr, ___internal_method, keyword);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::StyleColor::op_Implicit___UnityEngine__UIElements__StyleColor(::UnityEngine::Color v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor>(nullptr, ___internal_method, v);
}
inline bool UnityEngine::UIElements::StyleColor::Equals(::UnityEngine::UIElements::StyleColor other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::StyleColor::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::StyleColor::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::StyleColor::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleColor>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>"
constexpr UnityEngine::UIElements::StyleColor::operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>*() {
  return static_cast<::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>"
constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>* UnityEngine::UIElements::StyleColor::i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__Color_() {
  return static_cast<::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>"
constexpr UnityEngine::UIElements::StyleColor::operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>* UnityEngine::UIElements::StyleColor::i___System__IEquatable_1___UnityEngine__UIElements__StyleColor_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleColor::StyleColor(::UnityEngine::Color m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept {
  this->m_Value = m_Value;
  this->m_Keyword = m_Keyword;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleColor::StyleColor() {}
