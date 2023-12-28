#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__SkinColorSetSO_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__SkinColorSO_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::SkinColorSetSO.get_colors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> (
    ::BeatSaber::BeatAvatarSDK::SkinColorSetSO::*)()>(&::BeatSaber::BeatAvatarSDK::SkinColorSetSO::get_colors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe1c550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*>::get(), "get_colors",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::SkinColorSetSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarSDK::SkinColorSetSO::*)()>(&::BeatSaber::BeatAvatarSDK::SkinColorSetSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe1c558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*>& BeatSaber::BeatAvatarSDK::SkinColorSetSO::__get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> const& BeatSaber::BeatAvatarSDK::SkinColorSetSO::__get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void BeatSaber::BeatAvatarSDK::SkinColorSetSO::__set__colors(::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*> BeatSaber::BeatAvatarSDK::SkinColorSetSO::get_colors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*>::get(), "get_colors",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::BeatSaber::BeatAvatarSDK::SkinColorSO*, ::Array<::BeatSaber::BeatAvatarSDK::SkinColorSO*>*>, false>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::SkinColorSetSO* BeatSaber::BeatAvatarSDK::SkinColorSetSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*>());
}
inline void BeatSaber::BeatAvatarSDK::SkinColorSetSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::SkinColorSetSO::SkinColorSetSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
