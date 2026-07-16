#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValueExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleValue_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleLength_def.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueExtensions.ToLayoutValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutValue (*)(::UnityEngine::UIElements::Length)>(
    &::UnityEngine::UIElements::StyleValueExtensions::ToLayoutValue)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6c91768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueExtensions*>(), { "ToLayoutValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::Length>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueExtensions.ToLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (*)(::UnityEngine::UIElements::StyleKeyword)>(&::UnityEngine::UIElements::StyleValueExtensions::ToLength)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6c918cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueExtensions*>(), { "ToLength", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueExtensions.ToRotate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Rotate (*)(::UnityEngine::UIElements::StyleKeyword)>(&::UnityEngine::UIElements::StyleValueExtensions::ToRotate)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6c919dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueExtensions*>(), { "ToRotate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueExtensions.ToScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Scale (*)(::UnityEngine::UIElements::StyleKeyword)>(&::UnityEngine::UIElements::StyleValueExtensions::ToScale)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6c91b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueExtensions*>(), { "ToScale", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueExtensions.ToTranslate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Translate (*)(::UnityEngine::UIElements::StyleKeyword)>(
    &::UnityEngine::UIElements::StyleValueExtensions::ToTranslate)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6c91c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueExtensions*>(), { "ToTranslate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueExtensions.ToLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (*)(::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::StyleValueExtensions::ToLength)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6c91d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueExtensions*>(), { "ToLength", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
template <typename T> inline ::StringW UnityEngine::UIElements::StyleValueExtensions::DebugString(::UnityEngine::UIElements::IStyleValue_1<T>* styleValue) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueExtensions*>(),
                                                           { "DebugString", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::UIElements::IStyleValue_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, styleValue);
}
inline ::UnityEngine::UIElements::Layout::LayoutValue UnityEngine::UIElements::StyleValueExtensions::ToLayoutValue(::UnityEngine::UIElements::Length length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueExtensions*>(), { "ToLayoutValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::Length>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutValue>(nullptr, ___internal_method, length);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::StyleValueExtensions::ToLength(::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueExtensions*>(), { "ToLength", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(nullptr, ___internal_method, keyword);
}
inline ::UnityEngine::UIElements::Rotate UnityEngine::UIElements::StyleValueExtensions::ToRotate(::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueExtensions*>(), { "ToRotate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Rotate>(nullptr, ___internal_method, keyword);
}
inline ::UnityEngine::UIElements::Scale UnityEngine::UIElements::StyleValueExtensions::ToScale(::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueExtensions*>(), { "ToScale", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Scale>(nullptr, ___internal_method, keyword);
}
inline ::UnityEngine::UIElements::Translate UnityEngine::UIElements::StyleValueExtensions::ToTranslate(::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueExtensions*>(), { "ToTranslate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Translate>(nullptr, ___internal_method, keyword);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::StyleValueExtensions::ToLength(::UnityEngine::UIElements::StyleLength styleLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueExtensions*>(), { "ToLength", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(nullptr, ___internal_method, styleLength);
}
template <typename T> inline void UnityEngine::UIElements::StyleValueExtensions::CopyFrom(::System::Collections::Generic::List_1<T>* list, ::System::Collections::Generic::List_1<T>* other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueExtensions*>(),
                          { "CopyFrom", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, other);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleValueExtensions::StyleValueExtensions() {}
