#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadingRateInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateInfo_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateFragmentSize_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ShadingRateInfo.get_supportsPerImageTile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::ShadingRateInfo::get_supportsPerImageTile)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f7a30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "get_supportsPerImageTile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadingRateInfo.get_supportsPerDrawCall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::ShadingRateInfo::get_supportsPerDrawCall)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f7a35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "get_supportsPerDrawCall", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadingRateInfo.get_imageTileSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)()>(&::UnityEngine::Rendering::ShadingRateInfo::get_imageTileSize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f7a3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "get_imageTileSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadingRateInfo.get_availableFragmentSizes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::ShadingRateFragmentSize> (*)()>(&::UnityEngine::Rendering::ShadingRateInfo::get_availableFragmentSizes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f7a434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "get_availableFragmentSizes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadingRateInfo.QueryNativeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::UnityEngine::Rendering::ShadingRateFragmentSize)>(&::UnityEngine::Rendering::ShadingRateInfo::QueryNativeValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f7a54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(),
                                                                                           { "QueryNativeValue", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateFragmentSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadingRateInfo.SupportsPerImageTile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::ShadingRateInfo::SupportsPerImageTile)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f7a334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "SupportsPerImageTile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadingRateInfo.SupportsPerDrawCall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::ShadingRateInfo::SupportsPerDrawCall)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f7a384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "SupportsPerDrawCall", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadingRateInfo.GetImageTileSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)()>(&::UnityEngine::Rendering::ShadingRateInfo::GetImageTileSize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f7a3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "GetImageTileSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadingRateInfo.GetAvailableFragmentSizes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::ShadingRateFragmentSize> (*)()>(&::UnityEngine::Rendering::ShadingRateInfo::GetAvailableFragmentSizes)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6f7a438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "GetAvailableFragmentSizes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadingRateInfo.GetImageTileSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector2Int>)>(&::UnityEngine::Rendering::ShadingRateInfo::GetImageTileSize_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f7a588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(),
                                                                                           { "GetImageTileSize_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2Int>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadingRateInfo.GetAvailableFragmentSizes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::Rendering::ShadingRateInfo::GetAvailableFragmentSizes_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f7a5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(),
                                                             { "GetAvailableFragmentSizes_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::ShadingRateInfo::get_supportsPerImageTile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "get_supportsPerImageTile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::ShadingRateInfo::get_supportsPerDrawCall() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "get_supportsPerDrawCall", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::ShadingRateInfo::get_imageTileSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "get_imageTileSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::ShadingRateFragmentSize> UnityEngine::Rendering::ShadingRateInfo::get_availableFragmentSizes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "get_availableFragmentSizes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::ShadingRateFragmentSize>>(nullptr, ___internal_method);
}
inline uint8_t UnityEngine::Rendering::ShadingRateInfo::QueryNativeValue(::UnityEngine::Rendering::ShadingRateFragmentSize fragmentSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(),
                                                                                         { "QueryNativeValue", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateFragmentSize>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, fragmentSize);
}
inline bool UnityEngine::Rendering::ShadingRateInfo::SupportsPerImageTile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "SupportsPerImageTile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::ShadingRateInfo::SupportsPerDrawCall() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "SupportsPerDrawCall", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::ShadingRateInfo::GetImageTileSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "GetImageTileSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::ShadingRateFragmentSize> UnityEngine::Rendering::ShadingRateInfo::GetAvailableFragmentSizes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "GetAvailableFragmentSizes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::ShadingRateFragmentSize>>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::ShadingRateInfo::GetImageTileSize_Injected(::by_ref<::UnityEngine::Vector2Int> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(), { "GetImageTileSize_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2Int>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Rendering::ShadingRateInfo::GetAvailableFragmentSizes_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadingRateInfo*>(),
                                                           { "GetAvailableFragmentSizes_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShadingRateInfo::ShadingRateInfo() {}
