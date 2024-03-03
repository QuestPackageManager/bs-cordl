#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PromoInfoSO_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PromoInfoSO.get_bannerImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::PromoInfoSO::*)()>(
    &::GlobalNamespace::PromoInfoSO::get_bannerImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12d18b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoInfoSO*>::get(), "get_bannerImage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PromoInfoSO.get_bannerPromoText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PromoInfoSO::*)()>(&::GlobalNamespace::PromoInfoSO::get_bannerPromoText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12d18bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoInfoSO*>::get(), "get_bannerPromoText",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PromoInfoSO.get_bannerPromoTextPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PromoInfoSO::*)()>(&::GlobalNamespace::PromoInfoSO::get_bannerPromoTextPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12d18c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoInfoSO*>::get(),
                                                                               "get_bannerPromoTextPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PromoInfoSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PromoInfoSO::*)()>(&::GlobalNamespace::PromoInfoSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12d18cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoInfoSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::PromoInfoSO::__cordl_internal_get__bannerImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerImage;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::PromoInfoSO::__cordl_internal_get__bannerImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerImage;
}
constexpr void GlobalNamespace::PromoInfoSO::__cordl_internal_set__bannerImage(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bannerImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PromoInfoSO::__cordl_internal_get__bannerPromoText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerPromoText;
}
constexpr ::StringW const& GlobalNamespace::PromoInfoSO::__cordl_internal_get__bannerPromoText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerPromoText;
}
constexpr void GlobalNamespace::PromoInfoSO::__cordl_internal_set__bannerPromoText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bannerPromoText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::PromoInfoSO::__cordl_internal_get__bannerPromoTextPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerPromoTextPosition;
}
constexpr float_t const& GlobalNamespace::PromoInfoSO::__cordl_internal_get__bannerPromoTextPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerPromoTextPosition;
}
constexpr void GlobalNamespace::PromoInfoSO::__cordl_internal_set__bannerPromoTextPosition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bannerPromoTextPosition = value;
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::PromoInfoSO::get_bannerImage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoInfoSO*>::get(), "get_bannerImage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PromoInfoSO::get_bannerPromoText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoInfoSO*>::get(), "get_bannerPromoText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::PromoInfoSO::get_bannerPromoTextPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoInfoSO*>::get(),
                                                                             "get_bannerPromoTextPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PromoInfoSO* GlobalNamespace::PromoInfoSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PromoInfoSO*>());
}
inline void GlobalNamespace::PromoInfoSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoInfoSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PromoInfoSO::PromoInfoSO() {}
