#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics/PhysXGeometryHolderExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/LowLevelPhysics/zzzz__PhysXGeometryHolderExtension_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/LowLevelPhysics/zzzz__GeometryHolder_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics::PhysXGeometryHolderExtension.GetGeometryHolder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics::GeometryHolder (*)(::UnityEngine::Collider*)>(
    &::UnityEngine::LowLevelPhysics::PhysXGeometryHolderExtension::GetGeometryHolder)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x7009ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics::PhysXGeometryHolderExtension*>(),
                                                                                           { "GetGeometryHolder", {}, { ::i2c::type_of<::UnityEngine::Collider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics::PhysXGeometryHolderExtension.GetGeometryHolder_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::LowLevelPhysics::GeometryHolder>)>(
    &::UnityEngine::LowLevelPhysics::PhysXGeometryHolderExtension::GetGeometryHolder_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7009b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics::PhysXGeometryHolderExtension*>(),
                                         { "GetGeometryHolder_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics::GeometryHolder>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics::GeometryHolder UnityEngine::LowLevelPhysics::PhysXGeometryHolderExtension::GetGeometryHolder(::UnityEngine::Collider* col) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics::PhysXGeometryHolderExtension*>(), { "GetGeometryHolder", {}, { ::i2c::type_of<::UnityEngine::Collider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics::GeometryHolder>(nullptr, ___internal_method, col);
}
inline void UnityEngine::LowLevelPhysics::PhysXGeometryHolderExtension::GetGeometryHolder_Injected(::System::IntPtr col, ::by_ref<::UnityEngine::LowLevelPhysics::GeometryHolder> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics::PhysXGeometryHolderExtension*>(),
                                       { "GetGeometryHolder_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics::GeometryHolder>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, col, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics::PhysXGeometryHolderExtension::PhysXGeometryHolderExtension() {}
