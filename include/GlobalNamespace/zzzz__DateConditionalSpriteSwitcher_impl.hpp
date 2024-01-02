#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DateConditionalSpriteSwitcher_def.hpp"
#include "GlobalNamespace/zzzz__ConditionalSpriteSwitcher_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DateConditionalSpriteSwitcher.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DateConditionalSpriteSwitcher::*)()>(
    &::GlobalNamespace::DateConditionalSpriteSwitcher::Awake)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x226c250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DateConditionalSpriteSwitcher*>::get(),
                                                                               "Awake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DateConditionalSpriteSwitcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DateConditionalSpriteSwitcher::*)()>(
    &::GlobalNamespace::DateConditionalSpriteSwitcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226c308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DateConditionalSpriteSwitcher*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::DateConditionalSpriteSwitcher::__get__day() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____day;
}
constexpr int32_t const& GlobalNamespace::DateConditionalSpriteSwitcher::__get__day() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____day;
}
constexpr void GlobalNamespace::DateConditionalSpriteSwitcher::__set__day(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____day = value;
}
constexpr int32_t& GlobalNamespace::DateConditionalSpriteSwitcher::__get__month() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____month;
}
constexpr int32_t const& GlobalNamespace::DateConditionalSpriteSwitcher::__get__month() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____month;
}
constexpr void GlobalNamespace::DateConditionalSpriteSwitcher::__set__month(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____month = value;
}
constexpr ::UnityEngine::Sprite*& GlobalNamespace::DateConditionalSpriteSwitcher::__get__falseSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____falseSprite;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& GlobalNamespace::DateConditionalSpriteSwitcher::__get__falseSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____falseSprite;
}
constexpr void GlobalNamespace::DateConditionalSpriteSwitcher::__set__falseSprite(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____falseSprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Sprite*& GlobalNamespace::DateConditionalSpriteSwitcher::__get__trueSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trueSprite;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& GlobalNamespace::DateConditionalSpriteSwitcher::__get__trueSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trueSprite;
}
constexpr void GlobalNamespace::DateConditionalSpriteSwitcher::__set__trueSprite(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trueSprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ConditionalSpriteSwitcher*& GlobalNamespace::DateConditionalSpriteSwitcher::__get__conditionalSpriteSwitcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____conditionalSpriteSwitcher;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConditionalSpriteSwitcher*> const& GlobalNamespace::DateConditionalSpriteSwitcher::__get__conditionalSpriteSwitcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____conditionalSpriteSwitcher;
}
constexpr void GlobalNamespace::DateConditionalSpriteSwitcher::__set__conditionalSpriteSwitcher(::GlobalNamespace::ConditionalSpriteSwitcher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____conditionalSpriteSwitcher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DateConditionalSpriteSwitcher::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DateConditionalSpriteSwitcher*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DateConditionalSpriteSwitcher* GlobalNamespace::DateConditionalSpriteSwitcher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DateConditionalSpriteSwitcher*>());
}
inline void GlobalNamespace::DateConditionalSpriteSwitcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DateConditionalSpriteSwitcher*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DateConditionalSpriteSwitcher::DateConditionalSpriteSwitcher() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
