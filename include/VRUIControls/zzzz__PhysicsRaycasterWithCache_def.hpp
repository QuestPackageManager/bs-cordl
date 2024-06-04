#pragma once
// IWYU pragma private; include "VRUIControls/PhysicsRaycasterWithCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsRaycasterWithCache)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace VRUIControls {
struct __PhysicsRaycasterWithCache__CachedRaycast;
}
// Forward declare root types
namespace VRUIControls {
class PhysicsRaycasterWithCache;
}
namespace VRUIControls {
struct __PhysicsRaycasterWithCache__CachedRaycast;
}
// Write type traits
MARK_REF_PTR_T(::VRUIControls::PhysicsRaycasterWithCache);
MARK_VAL_T(::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast);
// Type: ::CachedRaycast
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace VRUIControls {
// Is value type: true
// CS Name: ::PhysicsRaycasterWithCache::CachedRaycast
struct CORDL_TYPE __PhysicsRaycasterWithCache__CachedRaycast {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3634c40, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(bool wasHit, ::UnityEngine::Ray ray, ::UnityEngine::RaycastHit hitInfo, float_t maxDistance, int32_t layerMask);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhysicsRaycasterWithCache__CachedRaycast();

  // Ctor Parameters [CppParam { name: "wasHit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ray", ty: "::UnityEngine::Ray", modifiers: "", def_value: None }, CppParam { name:
  // "hitInfo", ty: "::UnityEngine::RaycastHit", modifiers: "", def_value: None }, CppParam { name: "maxDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "layerMask", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr __PhysicsRaycasterWithCache__CachedRaycast(bool wasHit, ::UnityEngine::Ray ray, ::UnityEngine::RaycastHit hitInfo, float_t maxDistance, int32_t layerMask) noexcept;

  /// @brief Field wasHit, offset: 0x0, size: 0x1, def value: None
  bool wasHit;

  /// @brief Field ray, offset: 0x4, size: 0x18, def value: None
  ::UnityEngine::Ray ray;

  /// @brief Field hitInfo, offset: 0x1c, size: 0x2c, def value: None
  ::UnityEngine::RaycastHit hitInfo;

  /// @brief Field maxDistance, offset: 0x48, size: 0x4, def value: None
  float_t maxDistance;

  /// @brief Field layerMask, offset: 0x4c, size: 0x4, def value: None
  int32_t layerMask;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast, 0x50>, "Size mismatch!");

static_assert(offsetof(::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast, wasHit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast, ray) == 0x4, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast, hitInfo) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast, maxDistance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast, layerMask) == 0x4c, "Offset mismatch!");

} // namespace VRUIControls
// Type: VRUIControls::PhysicsRaycasterWithCache
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace VRUIControls {
// Is value type: false
// CS Name: ::VRUIControls::PhysicsRaycasterWithCache*
class CORDL_TYPE PhysicsRaycasterWithCache : public ::System::Object {
public:
  // Declarations
  using CachedRaycast = ::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast;

  /// @brief Field _cachedRaycasts, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cachedRaycasts,
                      put = __cordl_internal_set__cachedRaycasts))::System::Collections::Generic::List_1<::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast>* _cachedRaycasts;

  /// @brief Field _lastFrameCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFrameCount, put = __cordl_internal_set__lastFrameCount)) int32_t _lastFrameCount;

  static inline ::VRUIControls::PhysicsRaycasterWithCache* New_ctor();

  /// @brief Method Raycast, addr 0x36346d4, size 0x56c, virtual false, abstract: false, final false
  inline bool Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  constexpr ::System::Collections::Generic::List_1<::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast>*& __cordl_internal_get__cachedRaycasts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast>*> const&
  __cordl_internal_get__cachedRaycasts() const;

  constexpr int32_t const& __cordl_internal_get__lastFrameCount() const;

  constexpr int32_t& __cordl_internal_get__lastFrameCount();

  constexpr void __cordl_internal_set__cachedRaycasts(::System::Collections::Generic::List_1<::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast>* value);

  constexpr void __cordl_internal_set__lastFrameCount(int32_t value);

  /// @brief Method .ctor, addr 0x3634c80, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsRaycasterWithCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicsRaycasterWithCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicsRaycasterWithCache(PhysicsRaycasterWithCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsRaycasterWithCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsRaycasterWithCache(PhysicsRaycasterWithCache const&) = delete;

  /// @brief Field _cachedRaycasts, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast>* ____cachedRaycasts;

  /// @brief Field _lastFrameCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____lastFrameCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::PhysicsRaycasterWithCache, 0x20>, "Size mismatch!");

static_assert(offsetof(::VRUIControls::PhysicsRaycasterWithCache, ____cachedRaycasts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::PhysicsRaycasterWithCache, ____lastFrameCount) == 0x18, "Offset mismatch!");

} // namespace VRUIControls
NEED_NO_BOX(::VRUIControls::PhysicsRaycasterWithCache);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::PhysicsRaycasterWithCache*, "VRUIControls", "PhysicsRaycasterWithCache");
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast, "VRUIControls", "PhysicsRaycasterWithCache/CachedRaycast");
