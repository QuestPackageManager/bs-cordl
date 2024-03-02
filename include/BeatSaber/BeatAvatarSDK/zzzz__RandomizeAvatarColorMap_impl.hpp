#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__RandomizeAvatarColorMap_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap.get_totalIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::*)()>(
    &::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::get_totalIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe6d168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>::get(),
                                                                               "get_totalIndices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap.get_colorIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::*)()>(
    &::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::get_colorIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe6d170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>::get(),
                                                                               "get_colorIndices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::*)(
    int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xe6cbe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::__cordl_internal_get__totalIndices_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalIndices_k__BackingField;
}
constexpr int32_t const& BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::__cordl_internal_get__totalIndices_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalIndices_k__BackingField;
}
constexpr void BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::__cordl_internal_set__totalIndices_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalIndices_k__BackingField = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::__cordl_internal_get__colorIndices_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorIndices_k__BackingField;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::__cordl_internal_get__colorIndices_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorIndices_k__BackingField;
}
constexpr void BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::__cordl_internal_set__colorIndices_k__BackingField(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorIndices_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::get_totalIndices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>::get(),
                                                                             "get_totalIndices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::get_colorIndices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>::get(),
                                                                             "get_colorIndices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap* BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::New_ctor(int32_t headTopPrimaryColorIndex, int32_t headTopSecondaryColorIndex,
                                                                                                                        int32_t glassesColorIndex, int32_t facialHairColorIndex,
                                                                                                                        int32_t handsColorIndex, int32_t clothesPrimaryColorIndex,
                                                                                                                        int32_t clothesSecondaryColorIndex, int32_t clothesDetailColorIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>(
      headTopPrimaryColorIndex, headTopSecondaryColorIndex, glassesColorIndex, facialHairColorIndex, handsColorIndex, clothesPrimaryColorIndex, clothesSecondaryColorIndex, clothesDetailColorIndex));
}
inline void BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::_ctor(int32_t headTopPrimaryColorIndex, int32_t headTopSecondaryColorIndex, int32_t glassesColorIndex, int32_t facialHairColorIndex,
                                                                     int32_t handsColorIndex, int32_t clothesPrimaryColorIndex, int32_t clothesSecondaryColorIndex, int32_t clothesDetailColorIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headTopPrimaryColorIndex, headTopSecondaryColorIndex, glassesColorIndex, facialHairColorIndex, handsColorIndex,
                                                          clothesPrimaryColorIndex, clothesSecondaryColorIndex, clothesDetailColorIndex);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::RandomizeAvatarColorMap() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
