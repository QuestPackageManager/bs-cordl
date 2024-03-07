#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ImageWithHint_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::HMUI::ImageWithHint.set_sprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ImageWithHint::*)(::UnityEngine::Sprite*)>(&::HMUI::ImageWithHint::set_sprite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x230260c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ImageWithHint*>::get(), "set_sprite", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageWithHint.get_sprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Sprite> (::HMUI::ImageWithHint::*)()>(&::HMUI::ImageWithHint::get_sprite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2302628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ImageWithHint*>::get(), "get_sprite",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageWithHint.set_hintText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ImageWithHint::*)(::StringW)>(&::HMUI::ImageWithHint::set_hintText)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2302644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ImageWithHint*>::get(), "set_hintText", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageWithHint._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ImageWithHint::*)()>(&::HMUI::ImageWithHint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2302660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ImageWithHint*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Image>& HMUI::ImageWithHint::__cordl_internal_get__image() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____image;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& HMUI::ImageWithHint::__cordl_internal_get__image() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____image;
}
constexpr void HMUI::ImageWithHint::__cordl_internal_set__image(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____image)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::HoverHint>& HMUI::ImageWithHint::__cordl_internal_get__hoverHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverHint;
}
constexpr ::UnityW<::HMUI::HoverHint> const& HMUI::ImageWithHint::__cordl_internal_get__hoverHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverHint;
}
constexpr void HMUI::ImageWithHint::__cordl_internal_set__hoverHint(::UnityW<::HMUI::HoverHint> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoverHint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::ImageWithHint::set_sprite(::UnityEngine::Sprite* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ImageWithHint*>::get(), "set_sprite", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Sprite> HMUI::ImageWithHint::get_sprite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ImageWithHint*>::get(), "get_sprite",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>, false>(this, ___internal_method);
}
inline void HMUI::ImageWithHint::set_hintText(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ImageWithHint*>::get(), "set_hintText", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HMUI::ImageWithHint* HMUI::ImageWithHint::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ImageWithHint*>());
}
inline void HMUI::ImageWithHint::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ImageWithHint*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::ImageWithHint::ImageWithHint() {}
