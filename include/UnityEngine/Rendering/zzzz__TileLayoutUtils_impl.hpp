#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TileLayoutUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TileLayoutUtils_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::TileLayoutUtils.TryLayoutByTiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::RectInt, uint32_t, ::ByRef<::UnityEngine::RectInt>, ::ByRef<::UnityEngine::RectInt>, ::ByRef<::UnityEngine::RectInt>, ::ByRef<::UnityEngine::RectInt>)>(
        &::UnityEngine::Rendering::TileLayoutUtils::TryLayoutByTiles)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6612174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TileLayoutUtils*>::get(), "TryLayoutByTiles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TileLayoutUtils.TryLayoutByRow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::RectInt, uint32_t, ::ByRef<::UnityEngine::RectInt>, ::ByRef<::UnityEngine::RectInt>)>(
    &::UnityEngine::Rendering::TileLayoutUtils::TryLayoutByRow)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6612200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TileLayoutUtils*>::get(), "TryLayoutByRow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::TileLayoutUtils.TryLayoutByCol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::RectInt, uint32_t, ::ByRef<::UnityEngine::RectInt>, ::ByRef<::UnityEngine::RectInt>)>(
    &::UnityEngine::Rendering::TileLayoutUtils::TryLayoutByCol)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6612260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TileLayoutUtils*>::get(), "TryLayoutByCol", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::TileLayoutUtils::TryLayoutByTiles(::UnityEngine::RectInt src, uint32_t tileSize, ::ByRef<::UnityEngine::RectInt> main, ::ByRef<::UnityEngine::RectInt> topRow,
                                                                      ::ByRef<::UnityEngine::RectInt> rightCol, ::ByRef<::UnityEngine::RectInt> topRight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TileLayoutUtils*>::get(), "TryLayoutByTiles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, src, tileSize, main, topRow, rightCol, topRight);
}
inline bool UnityEngine::Rendering::TileLayoutUtils::TryLayoutByRow(::UnityEngine::RectInt src, uint32_t tileSize, ::ByRef<::UnityEngine::RectInt> main, ::ByRef<::UnityEngine::RectInt> other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TileLayoutUtils*>::get(), "TryLayoutByRow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, src, tileSize, main, other);
}
inline bool UnityEngine::Rendering::TileLayoutUtils::TryLayoutByCol(::UnityEngine::RectInt src, uint32_t tileSize, ::ByRef<::UnityEngine::RectInt> main, ::ByRef<::UnityEngine::RectInt> other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::TileLayoutUtils*>::get(), "TryLayoutByCol", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, src, tileSize, main, other);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::TileLayoutUtils::TileLayoutUtils() {}
