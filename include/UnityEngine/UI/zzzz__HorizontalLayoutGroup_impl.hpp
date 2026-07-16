#pragma once
// IWYU pragma private; include "UnityEngine/UI/HorizontalLayoutGroup.hpp"
#include "UnityEngine/UI/zzzz__HorizontalOrVerticalLayoutGroup_impl.hpp"
#include "UnityEngine/UI/zzzz__HorizontalLayoutGroup_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::HorizontalLayoutGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::HorizontalLayoutGroup::*)()>(&::UnityEngine::UI::HorizontalLayoutGroup::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6df7720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::HorizontalLayoutGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::HorizontalLayoutGroup.CalculateLayoutInputHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::HorizontalLayoutGroup::*)()>(&::UnityEngine::UI::HorizontalLayoutGroup::CalculateLayoutInputHorizontal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6df7738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::HorizontalLayoutGroup*>(), { ::i2c::class_of<::UnityEngine::UI::HorizontalLayoutGroup*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::HorizontalLayoutGroup.CalculateLayoutInputVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::HorizontalLayoutGroup::*)()>(&::UnityEngine::UI::HorizontalLayoutGroup::CalculateLayoutInputVertical)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6df7a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::HorizontalLayoutGroup*>(), { ::i2c::class_of<::UnityEngine::UI::HorizontalLayoutGroup*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::HorizontalLayoutGroup.SetLayoutHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::HorizontalLayoutGroup::*)()>(&::UnityEngine::UI::HorizontalLayoutGroup::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6df7a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::HorizontalLayoutGroup*>(), { ::i2c::class_of<::UnityEngine::UI::HorizontalLayoutGroup*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::HorizontalLayoutGroup.SetLayoutVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::HorizontalLayoutGroup::*)()>(&::UnityEngine::UI::HorizontalLayoutGroup::SetLayoutVertical)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6df8064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::HorizontalLayoutGroup*>(), { ::i2c::class_of<::UnityEngine::UI::HorizontalLayoutGroup*>(), 38 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::HorizontalLayoutGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::HorizontalLayoutGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::HorizontalLayoutGroup::CalculateLayoutInputHorizontal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::HorizontalLayoutGroup*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::HorizontalLayoutGroup::CalculateLayoutInputVertical() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::HorizontalLayoutGroup*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::HorizontalLayoutGroup::SetLayoutHorizontal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::HorizontalLayoutGroup*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::HorizontalLayoutGroup::SetLayoutVertical() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::HorizontalLayoutGroup*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::HorizontalLayoutGroup* UnityEngine::UI::HorizontalLayoutGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::HorizontalLayoutGroup*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::HorizontalLayoutGroup::HorizontalLayoutGroup() {}
