#pragma once
// IWYU pragma private; include "VRUIControls/PhysicsRaycasterWithCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
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
struct PhysicsRaycasterWithCache_CachedRaycast;
}
// Forward declare root types
namespace VRUIControls {
class PhysicsRaycasterWithCache;
}
namespace VRUIControls {
struct PhysicsRaycasterWithCache_CachedRaycast;
}
// Write type traits
MARK_REF_PTR_T(::VRUIControls::PhysicsRaycasterWithCache);
MARK_VAL_T(::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast);
// Dependencies UnityEngine.Ray, UnityEngine.RaycastHit
namespace VRUIControls {
// Is value type: true
// CS Name: VRUIControls.PhysicsRaycasterWithCache/CachedRaycast
struct CORDL_TYPE PhysicsRaycasterWithCache_CachedRaycast {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x4aed900, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(bool wasHit, ::UnityEngine::Ray ray, ::UnityEngine::RaycastHit hitInfo, float_t maxDistance, int32_t layerMask);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsRaycasterWithCache_CachedRaycast();

  // Ctor Parameters [CppParam { name: "wasHit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ray", ty: "::UnityEngine::Ray", modifiers: "", def_value: None }, CppParam { name:
  // "hitInfo", ty: "::UnityEngine::RaycastHit", modifiers: "", def_value: None }, CppParam { name: "maxDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "layerMask", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr PhysicsRaycasterWithCache_CachedRaycast(bool wasHit, ::UnityEngine::Ray ray, ::UnityEngine::RaycastHit hitInfo, float_t maxDistance, int32_t layerMask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18259 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast, wasHit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast, ray) == 0x4, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast, hitInfo) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast, maxDistance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast, layerMask) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast, 0x50>, "Size mismatch!");

} // namespace VRUIControls
// Dependencies System.Object
namespace VRUIControls {
// Is value type: false
// CS Name: VRUIControls.PhysicsRaycasterWithCache
class CORDL_TYPE PhysicsRaycasterWithCache : public ::System::Object {
public:
  // Declarations
  using CachedRaycast = ::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast;

  /// @brief Field _cachedRaycasts, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cachedRaycasts,
                      put = __cordl_internal_set__cachedRaycasts)) ::System::Collections::Generic::List_1<::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast>* _cachedRaycasts;

  /// @brief Field _lastFrameCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFrameCount, put = __cordl_internal_set__lastFrameCount)) int32_t _lastFrameCount;

  static inline ::VRUIControls::PhysicsRaycasterWithCache* New_ctor();

  /// @brief Method Raycast, addr 0x4aed42c, size 0x4d4, virtual false, abstract: false, final false
  inline bool Raycast(::UnityEngine::Ray ray, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  constexpr ::System::Collections::Generic::List_1<::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast>* const& __cordl_internal_get__cachedRaycasts() const;

  constexpr ::System::Collections::Generic::List_1<::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast>*& __cordl_internal_get__cachedRaycasts();

  constexpr int32_t const& __cordl_internal_get__lastFrameCount() const;

  constexpr int32_t& __cordl_internal_get__lastFrameCount();

  constexpr void __cordl_internal_set__cachedRaycasts(::System::Collections::Generic::List_1<::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast>* value);

  constexpr void __cordl_internal_set__lastFrameCount(int32_t value);

  /// @brief Method .ctor, addr 0x4aed940, size 0x84, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18260 };

  /// @brief Field _cachedRaycasts, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast>* ____cachedRaycasts;

  /// @brief Field _lastFrameCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____lastFrameCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VRUIControls::PhysicsRaycasterWithCache, ____cachedRaycasts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::PhysicsRaycasterWithCache, ____lastFrameCount) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VRUIControls::PhysicsRaycasterWithCache, 0x20>, "Size mismatch!");

} // namespace VRUIControls
NEED_NO_BOX(::VRUIControls::PhysicsRaycasterWithCache);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::PhysicsRaycasterWithCache*, "VRUIControls", "PhysicsRaycasterWithCache");
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast, "VRUIControls", "PhysicsRaycasterWithCache/CachedRaycast");
