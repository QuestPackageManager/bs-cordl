#pragma once
// IWYU pragma private; include "UnityEngine/GUILayout.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GUILayout_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUILayout.Label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::Label)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6fa1638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "Label", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.DoLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::DoLabel)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6fa16e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::GUILayout*>(),
            { "DoLabel", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.Space
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::GUILayout::Space)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6fa182c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "Space", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::BeginHorizontal)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6fa1bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "BeginHorizontal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(
    &::UnityEngine::GUILayout::BeginHorizontal)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6fa1c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::GUILayout*>(),
            { "BeginHorizontal", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::GUILayoutOption*>)>(&::UnityEngine::GUILayout::BeginVertical)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6fa2130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "BeginVertical", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(
    &::UnityEngine::GUILayout::BeginVertical)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6fa21cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::GUILayout*>(),
            { "BeginVertical", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.EndVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUILayout::EndVertical)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6fa2370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "EndVertical", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect)>(&::UnityEngine::GUILayout::BeginArea)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6fa2670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "BeginArea", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.BeginArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUILayout::BeginArea)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6fa2734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(),
                                         { "BeginArea", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.EndArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUILayout::EndArea)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6fa2c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "EndArea", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.Width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUILayoutOption* (*)(float_t)>(&::UnityEngine::GUILayout::Width)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fa06ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "Width", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.Height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUILayoutOption* (*)(float_t)>(&::UnityEngine::GUILayout::Height)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6fa076c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "Height", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::GUILayout::Label(::StringW text, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*> options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "Label", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, options);
}
inline void UnityEngine::GUILayout::DoLabel(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::GUILayout*>(),
                       { "DoLabel", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, content, style, options);
}
inline void UnityEngine::GUILayout::Space(float_t pixels) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "Space", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pixels);
}
inline void UnityEngine::GUILayout::BeginHorizontal(/* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*> options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "BeginHorizontal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, options);
}
inline void UnityEngine::GUILayout::BeginHorizontal(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*> options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::GUILayout*>(),
          { "BeginHorizontal", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, content, style, options);
}
inline void UnityEngine::GUILayout::BeginVertical(/* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*> options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "BeginVertical", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, options);
}
inline void UnityEngine::GUILayout::BeginVertical(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, /* [ParamArray] */ ::ArrayW<::UnityEngine::GUILayoutOption*> options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::GUILayout*>(),
          { "BeginVertical", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::ArrayW<::UnityEngine::GUILayoutOption*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, content, style, options);
}
inline void UnityEngine::GUILayout::EndVertical() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "EndVertical", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::GUILayout::BeginArea(::UnityEngine::Rect screenRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "BeginArea", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, screenRect);
}
inline void UnityEngine::GUILayout::BeginArea(::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(),
                                       { "BeginArea", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, screenRect, content, style);
}
inline void UnityEngine::GUILayout::EndArea() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "EndArea", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::GUILayoutOption* UnityEngine::GUILayout::Width(float_t width) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "Width", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutOption*>(nullptr, ___internal_method, width);
}
inline ::UnityEngine::GUILayoutOption* UnityEngine::GUILayout::Height(float_t height) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUILayout*>(), { "Height", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutOption*>(nullptr, ___internal_method, height);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUILayout::GUILayout() {}
