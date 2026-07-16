#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleBackgroundSize.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleBackgroundSize_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleValue_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackgroundSize.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BackgroundSize (::UnityEngine::UIElements::StyleBackgroundSize::*)()>(
    &::UnityEngine::UIElements::StyleBackgroundSize::get_value)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6c8f320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackgroundSize.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleBackgroundSize::*)(::UnityEngine::UIElements::BackgroundSize)>(
    &::UnityEngine::UIElements::StyleBackgroundSize::set_value)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c8f360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { "set_value", {}, { ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackgroundSize.get_keyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleKeyword (::UnityEngine::UIElements::StyleBackgroundSize::*)()>(
    &::UnityEngine::UIElements::StyleBackgroundSize::get_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c8f374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { "get_keyword", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackgroundSize.set_keyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleBackgroundSize::*)(::UnityEngine::UIElements::StyleKeyword)>(
    &::UnityEngine::UIElements::StyleBackgroundSize::set_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c8f37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { "set_keyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackgroundSize._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleBackgroundSize::*)(::UnityEngine::UIElements::StyleKeyword)>(
    &::UnityEngine::UIElements::StyleBackgroundSize::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c8f384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackgroundSize._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleBackgroundSize::*)(::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::StyleKeyword)>(
    &::UnityEngine::UIElements::StyleBackgroundSize::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c8f390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackgroundSize.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::StyleBackgroundSize, ::UnityEngine::UIElements::StyleBackgroundSize)>(
    &::UnityEngine::UIElements::StyleBackgroundSize::op_Equality)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c8f3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(),
                            { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundSize>(), ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackgroundSize.op_Implicit___UnityEngine__UIElements__StyleBackgroundSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleBackgroundSize (*)(::UnityEngine::UIElements::StyleKeyword)>(
    &::UnityEngine::UIElements::StyleBackgroundSize::op_Implicit___UnityEngine__UIElements__StyleBackgroundSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c8f424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackgroundSize.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleBackgroundSize::*)(::UnityEngine::UIElements::StyleBackgroundSize)>(
    &::UnityEngine::UIElements::StyleBackgroundSize::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c8f430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackgroundSize.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleBackgroundSize::*)(::System::Object*)>(&::UnityEngine::UIElements::StyleBackgroundSize::Equals)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6c8f4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackgroundSize.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleBackgroundSize::*)()>(&::UnityEngine::UIElements::StyleBackgroundSize::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c8f584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleBackgroundSize.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleBackgroundSize::*)()>(&::UnityEngine::UIElements::StyleBackgroundSize::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6c8f5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::BackgroundSize UnityEngine::UIElements::StyleBackgroundSize::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundSize>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleBackgroundSize::set_value(::UnityEngine::UIElements::BackgroundSize value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { "set_value", {}, { ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleKeyword UnityEngine::UIElements::StyleBackgroundSize::get_keyword() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { "get_keyword", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleKeyword>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleBackgroundSize::set_keyword(::UnityEngine::UIElements::StyleKeyword value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { "set_keyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::StyleBackgroundSize::_ctor(::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keyword);
}
inline void UnityEngine::UIElements::StyleBackgroundSize::_ctor(::UnityEngine::UIElements::BackgroundSize v, ::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v, keyword);
}
inline bool UnityEngine::UIElements::StyleBackgroundSize::op_Equality(::UnityEngine::UIElements::StyleBackgroundSize lhs, ::UnityEngine::UIElements::StyleBackgroundSize rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundSize>(), ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundSize>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::UIElements::StyleBackgroundSize
UnityEngine::UIElements::StyleBackgroundSize::op_Implicit___UnityEngine__UIElements__StyleBackgroundSize(::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleBackgroundSize>(nullptr, ___internal_method, keyword);
}
inline bool UnityEngine::UIElements::StyleBackgroundSize::Equals(::UnityEngine::UIElements::StyleBackgroundSize other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundSize>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::StyleBackgroundSize::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::StyleBackgroundSize::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::StyleBackgroundSize::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleBackgroundSize>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>"
constexpr UnityEngine::UIElements::StyleBackgroundSize::operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>*() {
  return static_cast<::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>"
constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>*
UnityEngine::UIElements::StyleBackgroundSize::i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__BackgroundSize_() {
  return static_cast<::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>"
constexpr UnityEngine::UIElements::StyleBackgroundSize::operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>*
UnityEngine::UIElements::StyleBackgroundSize::i___System__IEquatable_1___UnityEngine__UIElements__StyleBackgroundSize_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::BackgroundSize", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Keyword", ty:
// "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleBackgroundSize::StyleBackgroundSize(::UnityEngine::UIElements::BackgroundSize m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept {
  this->m_Value = m_Value;
  this->m_Keyword = m_Keyword;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleBackgroundSize::StyleBackgroundSize() {}
