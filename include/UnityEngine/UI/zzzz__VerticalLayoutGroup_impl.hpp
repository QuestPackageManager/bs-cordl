#pragma once
// IWYU pragma private; include "UnityEngine\UI\VerticalLayoutGroup.hpp"
#include "UnityEngine/UI/zzzz__HorizontalOrVerticalLayoutGroup_impl.hpp"
#include "UnityEngine/UI/zzzz__VerticalLayoutGroup_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::VerticalLayoutGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::VerticalLayoutGroup::*)()>(&::UnityEngine::UI::VerticalLayoutGroup::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dff1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::VerticalLayoutGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::VerticalLayoutGroup.CalculateLayoutInputHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::VerticalLayoutGroup::*)()>(&::UnityEngine::UI::VerticalLayoutGroup::CalculateLayoutInputHorizontal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6dff1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::VerticalLayoutGroup*>(), { ::i2c::class_of<::UnityEngine::UI::VerticalLayoutGroup*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::VerticalLayoutGroup.CalculateLayoutInputVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::VerticalLayoutGroup::*)()>(&::UnityEngine::UI::VerticalLayoutGroup::CalculateLayoutInputVertical)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dff1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::VerticalLayoutGroup*>(), { ::i2c::class_of<::UnityEngine::UI::VerticalLayoutGroup*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::VerticalLayoutGroup.SetLayoutHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::VerticalLayoutGroup::*)()>(&::UnityEngine::UI::VerticalLayoutGroup::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dff1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::VerticalLayoutGroup*>(), { ::i2c::class_of<::UnityEngine::UI::VerticalLayoutGroup*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::VerticalLayoutGroup.SetLayoutVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::VerticalLayoutGroup::*)()>(&::UnityEngine::UI::VerticalLayoutGroup::SetLayoutVertical)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dff1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::VerticalLayoutGroup*>(), { ::i2c::class_of<::UnityEngine::UI::VerticalLayoutGroup*>(), 38 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::VerticalLayoutGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::VerticalLayoutGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::VerticalLayoutGroup::CalculateLayoutInputHorizontal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::VerticalLayoutGroup*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::VerticalLayoutGroup::CalculateLayoutInputVertical() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::VerticalLayoutGroup*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::VerticalLayoutGroup::SetLayoutHorizontal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::VerticalLayoutGroup*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::VerticalLayoutGroup::SetLayoutVertical() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::VerticalLayoutGroup*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::VerticalLayoutGroup* UnityEngine::UI::VerticalLayoutGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::VerticalLayoutGroup*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::VerticalLayoutGroup::VerticalLayoutGroup() {}
