#pragma once
// IWYU pragma private; include "GlobalNamespace\IReadOnlyTextStyle.hpp"
#include "GlobalNamespace/zzzz__IReadOnlyTextStyle_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IReadOnlyTextStyle.get_fontStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::FontStyles (::GlobalNamespace::IReadOnlyTextStyle::*)()>(&::GlobalNamespace::IReadOnlyTextStyle::get_fontStyle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), { ::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IReadOnlyTextStyle.get_fontSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IReadOnlyTextStyle::*)()>(&::GlobalNamespace::IReadOnlyTextStyle::get_fontSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), { ::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IReadOnlyTextStyle.get_autoSizing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IReadOnlyTextStyle::*)()>(&::GlobalNamespace::IReadOnlyTextStyle::get_autoSizing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), { ::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IReadOnlyTextStyle.get_fontSizeMin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IReadOnlyTextStyle::*)()>(&::GlobalNamespace::IReadOnlyTextStyle::get_fontSizeMin)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), { ::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IReadOnlyTextStyle.get_fontSizeMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IReadOnlyTextStyle::*)()>(&::GlobalNamespace::IReadOnlyTextStyle::get_fontSizeMax)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), { ::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IReadOnlyTextStyle.get_charWidthMaxAdj
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IReadOnlyTextStyle::*)()>(&::GlobalNamespace::IReadOnlyTextStyle::get_charWidthMaxAdj)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), { ::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IReadOnlyTextStyle.get_lineSpacingMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IReadOnlyTextStyle::*)()>(&::GlobalNamespace::IReadOnlyTextStyle::get_lineSpacingMax)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), { ::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), 6 }));
    return ___internal_method;
  }
};
inline ::TMPro::FontStyles GlobalNamespace::IReadOnlyTextStyle::get_fontStyle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::FontStyles>(this, ___internal_method);
}
inline float_t GlobalNamespace::IReadOnlyTextStyle::get_fontSize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::IReadOnlyTextStyle::get_autoSizing() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::IReadOnlyTextStyle::get_fontSizeMin() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::IReadOnlyTextStyle::get_fontSizeMax() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::IReadOnlyTextStyle::get_charWidthMaxAdj() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::IReadOnlyTextStyle::get_lineSpacingMax() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IReadOnlyTextStyle*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
