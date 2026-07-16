#pragma once
// IWYU pragma private; include "GlobalNamespace/OVREnumExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVREnumExtensions_def.hpp"
#include "GlobalNamespace/zzzz__OVRHandSkeletonVersion_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "GlobalNamespace/zzzz__OVRMesh_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVREnumExtensions.IsHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSkeleton_SkeletonType)>(&::GlobalNamespace::OVREnumExtensions::IsHand)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ef8b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "IsHand", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREnumExtensions.IsOpenXRHandSkeleton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSkeleton_SkeletonType)>(&::GlobalNamespace::OVREnumExtensions::IsOpenXRHandSkeleton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ef8b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "IsOpenXRHandSkeleton", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREnumExtensions.IsOVRHandSkeleton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSkeleton_SkeletonType)>(&::GlobalNamespace::OVREnumExtensions::IsOVRHandSkeleton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ef8b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "IsOVRHandSkeleton", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREnumExtensions.IsLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSkeleton_SkeletonType)>(&::GlobalNamespace::OVREnumExtensions::IsLeft)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ef8b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "IsLeft", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREnumExtensions.AsHandType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRHand_Hand (*)(::GlobalNamespace::OVRSkeleton_SkeletonType)>(&::GlobalNamespace::OVREnumExtensions::AsHandType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ef8b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "AsHandType", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREnumExtensions.AsSkeletonType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonType (*)(::GlobalNamespace::OVRHand_Hand)>(&::GlobalNamespace::OVREnumExtensions::AsSkeletonType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ef8ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "AsSkeletonType", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_Hand>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREnumExtensions.AsSkeletonType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonType (*)(::GlobalNamespace::OVRHand_Hand, ::GlobalNamespace::OVRHandSkeletonVersion)>(
    &::GlobalNamespace::OVREnumExtensions::AsSkeletonType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ef8bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(),
                                                { "AsSkeletonType", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_Hand>(), ::i2c::type_of<::GlobalNamespace::OVRHandSkeletonVersion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREnumExtensions.AsMeshType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRMesh_MeshType (*)(::GlobalNamespace::OVRHand_Hand)>(&::GlobalNamespace::OVREnumExtensions::AsMeshType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ef8be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "AsMeshType", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_Hand>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREnumExtensions.IsOpenXRHandMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRMesh_MeshType)>(&::GlobalNamespace::OVREnumExtensions::IsOpenXRHandMesh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ef8bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "IsOpenXRHandMesh", {}, { ::i2c::type_of<::GlobalNamespace::OVRMesh_MeshType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREnumExtensions.IsOVRHandMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRMesh_MeshType)>(&::GlobalNamespace::OVREnumExtensions::IsOVRHandMesh)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ef8c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "IsOVRHandMesh", {}, { ::i2c::type_of<::GlobalNamespace::OVRMesh_MeshType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREnumExtensions.AsMeshType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRMesh_MeshType (*)(::GlobalNamespace::OVRHand_Hand, ::GlobalNamespace::OVRHandSkeletonVersion)>(
    &::GlobalNamespace::OVREnumExtensions::AsMeshType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ef8c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(),
                                                { "AsMeshType", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_Hand>(), ::i2c::type_of<::GlobalNamespace::OVRHandSkeletonVersion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREnumExtensions.IsLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRMesh_MeshType)>(&::GlobalNamespace::OVREnumExtensions::IsLeft)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ef8c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "IsLeft", {}, { ::i2c::type_of<::GlobalNamespace::OVRMesh_MeshType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREnumExtensions.IsHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRMesh_MeshType)>(&::GlobalNamespace::OVREnumExtensions::IsHand)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ef8c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "IsHand", {}, { ::i2c::type_of<::GlobalNamespace::OVRMesh_MeshType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREnumExtensions.AsHandType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRHand_Hand (*)(::GlobalNamespace::OVRMesh_MeshType)>(&::GlobalNamespace::OVREnumExtensions::AsHandType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ef8c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "AsHandType", {}, { ::i2c::type_of<::GlobalNamespace::OVRMesh_MeshType>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::OVREnumExtensions::IsHand(::GlobalNamespace::OVRSkeleton_SkeletonType skeletonType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "IsHand", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, skeletonType);
}
inline bool GlobalNamespace::OVREnumExtensions::IsOpenXRHandSkeleton(::GlobalNamespace::OVRSkeleton_SkeletonType skeletonType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "IsOpenXRHandSkeleton", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, skeletonType);
}
inline bool GlobalNamespace::OVREnumExtensions::IsOVRHandSkeleton(::GlobalNamespace::OVRSkeleton_SkeletonType skeletonType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "IsOVRHandSkeleton", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, skeletonType);
}
inline bool GlobalNamespace::OVREnumExtensions::IsLeft(::GlobalNamespace::OVRSkeleton_SkeletonType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "IsLeft", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::GlobalNamespace::OVRHand_Hand GlobalNamespace::OVREnumExtensions::AsHandType(::GlobalNamespace::OVRSkeleton_SkeletonType skeletonType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "AsHandType", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRHand_Hand>(nullptr, ___internal_method, skeletonType);
}
inline ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVREnumExtensions::AsSkeletonType(::GlobalNamespace::OVRHand_Hand hand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "AsSkeletonType", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_Hand>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonType>(nullptr, ___internal_method, hand);
}
inline ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVREnumExtensions::AsSkeletonType(::GlobalNamespace::OVRHand_Hand hand, ::GlobalNamespace::OVRHandSkeletonVersion version) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(),
                                              { "AsSkeletonType", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_Hand>(), ::i2c::type_of<::GlobalNamespace::OVRHandSkeletonVersion>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonType>(nullptr, ___internal_method, hand, version);
}
inline ::GlobalNamespace::OVRMesh_MeshType GlobalNamespace::OVREnumExtensions::AsMeshType(::GlobalNamespace::OVRHand_Hand hand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "AsMeshType", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_Hand>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMesh_MeshType>(nullptr, ___internal_method, hand);
}
inline bool GlobalNamespace::OVREnumExtensions::IsOpenXRHandMesh(::GlobalNamespace::OVRMesh_MeshType meshType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "IsOpenXRHandMesh", {}, { ::i2c::type_of<::GlobalNamespace::OVRMesh_MeshType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, meshType);
}
inline bool GlobalNamespace::OVREnumExtensions::IsOVRHandMesh(::GlobalNamespace::OVRMesh_MeshType meshType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "IsOVRHandMesh", {}, { ::i2c::type_of<::GlobalNamespace::OVRMesh_MeshType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, meshType);
}
inline ::GlobalNamespace::OVRMesh_MeshType GlobalNamespace::OVREnumExtensions::AsMeshType(::GlobalNamespace::OVRHand_Hand hand, ::GlobalNamespace::OVRHandSkeletonVersion version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(),
                                                           { "AsMeshType", {}, { ::i2c::type_of<::GlobalNamespace::OVRHand_Hand>(), ::i2c::type_of<::GlobalNamespace::OVRHandSkeletonVersion>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMesh_MeshType>(nullptr, ___internal_method, hand, version);
}
inline bool GlobalNamespace::OVREnumExtensions::IsLeft(::GlobalNamespace::OVRMesh_MeshType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "IsLeft", {}, { ::i2c::type_of<::GlobalNamespace::OVRMesh_MeshType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool GlobalNamespace::OVREnumExtensions::IsHand(::GlobalNamespace::OVRMesh_MeshType meshType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "IsHand", {}, { ::i2c::type_of<::GlobalNamespace::OVRMesh_MeshType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, meshType);
}
inline ::GlobalNamespace::OVRHand_Hand GlobalNamespace::OVREnumExtensions::AsHandType(::GlobalNamespace::OVRMesh_MeshType meshType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVREnumExtensions*>(), { "AsHandType", {}, { ::i2c::type_of<::GlobalNamespace::OVRMesh_MeshType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRHand_Hand>(nullptr, ___internal_method, meshType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVREnumExtensions::OVREnumExtensions() {}
