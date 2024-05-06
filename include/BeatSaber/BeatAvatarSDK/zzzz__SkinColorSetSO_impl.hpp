#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/SkinColorSetSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__SkinColorSetSO_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__SkinColorSO_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::SkinColorSetSO.get_colors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>>*> (::BeatSaber::BeatAvatarSDK::SkinColorSetSO::*)()>(
        &::BeatSaber::BeatAvatarSDK::SkinColorSetSO::get_colors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1050b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*>::get(), "get_colors",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::SkinColorSetSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarSDK::SkinColorSetSO::*)()>(&::BeatSaber::BeatAvatarSDK::SkinColorSetSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1050b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>>*>&
BeatSaber::BeatAvatarSDK::SkinColorSetSO::__cordl_internal_get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>>*> const&
BeatSaber::BeatAvatarSDK::SkinColorSetSO::__cordl_internal_get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void
BeatSaber::BeatAvatarSDK::SkinColorSetSO::__cordl_internal_set__colors(::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>>*> BeatSaber::BeatAvatarSDK::SkinColorSetSO::get_colors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*>::get(), "get_colors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>, ::Array<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>>*>, false>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::SkinColorSetSO* BeatSaber::BeatAvatarSDK::SkinColorSetSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*>());
}
inline void BeatSaber::BeatAvatarSDK::SkinColorSetSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::SkinColorSetSO::SkinColorSetSO() {}
