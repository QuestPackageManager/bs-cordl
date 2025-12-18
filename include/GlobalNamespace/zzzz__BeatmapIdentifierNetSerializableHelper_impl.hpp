#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapIdentifierNetSerializableHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapIdentifierNetSerializableHelper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKeyNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapIdentifierNetSerializableHelper.ToBeatmapKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapKey (*)(
    ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::BeatmapCharacteristicCollection*)>(&::GlobalNamespace::BeatmapIdentifierNetSerializableHelper::ToBeatmapKey)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3621d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*>::get(), "ToBeatmapKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKeyNetSerializable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapIdentifierNetSerializableHelper.ToIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapKeyNetSerializable* (*)(::GlobalNamespace::BeatmapKey)>(
    &::GlobalNamespace::BeatmapIdentifierNetSerializableHelper::ToIdentifier)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3621da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*>::get(), "ToIdentifier", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::BeatmapIdentifierNetSerializableHelper::ToBeatmapKey(::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable,
                                                                                                           ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*>::get(), "ToBeatmapKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKeyNetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey, false>(nullptr, ___internal_method, beatmapKeySerializable, beatmapCharacteristicCollection);
}
inline ::GlobalNamespace::BeatmapKeyNetSerializable* GlobalNamespace::BeatmapIdentifierNetSerializableHelper::ToIdentifier(::GlobalNamespace::BeatmapKey beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*>::get(), "ToIdentifier", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKeyNetSerializable*, false>(nullptr, ___internal_method, beatmapKey);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapIdentifierNetSerializableHelper::BeatmapIdentifierNetSerializableHelper() {}
