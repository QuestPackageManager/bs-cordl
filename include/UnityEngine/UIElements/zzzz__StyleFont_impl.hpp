#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StyleFont.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleFont_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleValue_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleFont.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Font> (::UnityEngine::UIElements::StyleFont::*)()>(&::UnityEngine::UIElements::StyleFont::get_value)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c932e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleFont.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleFont::*)(::UnityEngine::Font*)>(&::UnityEngine::UIElements::StyleFont::set_value)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c932fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { "set_value", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleFont.get_keyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleKeyword (::UnityEngine::UIElements::StyleFont::*)()>(&::UnityEngine::UIElements::StyleFont::get_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c93308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { "get_keyword", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleFont.set_keyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleFont::*)(::UnityEngine::UIElements::StyleKeyword)>(&::UnityEngine::UIElements::StyleFont::set_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c93310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { "set_keyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleFont._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleFont::*)(::UnityEngine::Font*)>(&::UnityEngine::UIElements::StyleFont::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c93318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleFont._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleFont::*)(::UnityEngine::UIElements::StyleKeyword)>(&::UnityEngine::UIElements::StyleFont::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c93324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleFont._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleFont::*)(::UnityEngine::Font*, ::UnityEngine::UIElements::StyleKeyword)>(
    &::UnityEngine::UIElements::StyleFont::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c90ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleFont.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::StyleFont, ::UnityEngine::UIElements::StyleFont)>(&::UnityEngine::UIElements::StyleFont::op_Equality)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c93330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFont>(), ::i2c::type_of<::UnityEngine::UIElements::StyleFont>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleFont.op_Implicit___UnityEngine__UIElements__StyleFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleFont (*)(::UnityEngine::UIElements::StyleKeyword)>(
    &::UnityEngine::UIElements::StyleFont::op_Implicit___UnityEngine__UIElements__StyleFont)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c90eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleFont.op_Implicit___UnityEngine__UIElements__StyleFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleFont (*)(::UnityEngine::Font*)>(
    &::UnityEngine::UIElements::StyleFont::op_Implicit___UnityEngine__UIElements__StyleFont)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c933cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleFont.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleFont::*)(::UnityEngine::UIElements::StyleFont)>(&::UnityEngine::UIElements::StyleFont::Equals)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c933d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFont>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleFont.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleFont::*)(::System::Object*)>(&::UnityEngine::UIElements::StyleFont::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c933e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleFont.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleFont::*)()>(&::UnityEngine::UIElements::StyleFont::GetHashCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c93468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleFont.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleFont::*)()>(&::UnityEngine::UIElements::StyleFont::ToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c93504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Font> UnityEngine::UIElements::StyleFont::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleFont::set_value(::UnityEngine::Font* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { "set_value", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleKeyword UnityEngine::UIElements::StyleFont::get_keyword() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { "get_keyword", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleKeyword>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleFont::set_keyword(::UnityEngine::UIElements::StyleKeyword value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { "set_keyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::StyleFont::_ctor(::UnityEngine::Font* v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void UnityEngine::UIElements::StyleFont::_ctor(::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keyword);
}
inline void UnityEngine::UIElements::StyleFont::_ctor(::UnityEngine::Font* v, ::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v, keyword);
}
inline bool UnityEngine::UIElements::StyleFont::op_Equality(::UnityEngine::UIElements::StyleFont lhs, ::UnityEngine::UIElements::StyleFont rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFont>(), ::i2c::type_of<::UnityEngine::UIElements::StyleFont>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::UIElements::StyleFont UnityEngine::UIElements::StyleFont::op_Implicit___UnityEngine__UIElements__StyleFont(::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFont>(nullptr, ___internal_method, keyword);
}
inline ::UnityEngine::UIElements::StyleFont UnityEngine::UIElements::StyleFont::op_Implicit___UnityEngine__UIElements__StyleFont(::UnityEngine::Font* v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFont>(nullptr, ___internal_method, v);
}
inline bool UnityEngine::UIElements::StyleFont::Equals(::UnityEngine::UIElements::StyleFont other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFont>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::StyleFont::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::StyleFont::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::StyleFont::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleFont>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityW<::UnityEngine::Font>>"
constexpr UnityEngine::UIElements::StyleFont::operator ::UnityEngine::UIElements::IStyleValue_1<::UnityW<::UnityEngine::Font>>*() {
  return static_cast<::UnityEngine::UIElements::IStyleValue_1<::UnityW<::UnityEngine::Font>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityW<::UnityEngine::Font>>"
constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityW<::UnityEngine::Font>>* UnityEngine::UIElements::StyleFont::i___UnityEngine__UIElements__IStyleValue_1___UnityW___UnityEngine__Font__() {
  return static_cast<::UnityEngine::UIElements::IStyleValue_1<::UnityW<::UnityEngine::Font>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleFont>"
constexpr UnityEngine::UIElements::StyleFont::operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleFont>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleFont>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleFont>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleFont>* UnityEngine::UIElements::StyleFont::i___System__IEquatable_1___UnityEngine__UIElements__StyleFont_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleFont>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Keyword", ty:
// "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleFont::StyleFont(::UnityW<::UnityEngine::Font> m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept {
  this->m_Value = m_Value;
  this->m_Keyword = m_Keyword;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleFont::StyleFont() {}
