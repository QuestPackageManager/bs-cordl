#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MipMapBiasSpriteSetter_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MipMapBiasSpriteSetter.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MipMapBiasSpriteSetter::*)()>(&::GlobalNamespace::MipMapBiasSpriteSetter::Start)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1f92004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MipMapBiasSpriteSetter*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MipMapBiasSpriteSetter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MipMapBiasSpriteSetter::*)()>(&::GlobalNamespace::MipMapBiasSpriteSetter::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1f92078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MipMapBiasSpriteSetter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Sprite*, ::Array<::UnityEngine::Sprite*>*>& GlobalNamespace::MipMapBiasSpriteSetter::__get__sprites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sprites;
}
constexpr ::ArrayW<::UnityEngine::Sprite*, ::Array<::UnityEngine::Sprite*>*> const& GlobalNamespace::MipMapBiasSpriteSetter::__get__sprites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sprites;
}
constexpr void GlobalNamespace::MipMapBiasSpriteSetter::__set__sprites(::ArrayW<::UnityEngine::Sprite*, ::Array<::UnityEngine::Sprite*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sprites)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MipMapBiasSpriteSetter::__get__mipMapBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipMapBias;
}
constexpr float_t const& GlobalNamespace::MipMapBiasSpriteSetter::__get__mipMapBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipMapBias;
}
constexpr void GlobalNamespace::MipMapBiasSpriteSetter::__set__mipMapBias(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mipMapBias = value;
}
inline void GlobalNamespace::MipMapBiasSpriteSetter::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MipMapBiasSpriteSetter*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MipMapBiasSpriteSetter* GlobalNamespace::MipMapBiasSpriteSetter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MipMapBiasSpriteSetter*>());
}
inline void GlobalNamespace::MipMapBiasSpriteSetter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MipMapBiasSpriteSetter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MipMapBiasSpriteSetter::MipMapBiasSpriteSetter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
