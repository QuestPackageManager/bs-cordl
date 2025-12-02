#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/PhysicsRaycaster.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsRaycaster)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class PhysicsRaycaster_RaycastHitComparer;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class PhysicsRaycaster;
}
namespace UnityEngine::EventSystems {
class PhysicsRaycaster_RaycastHitComparer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::PhysicsRaycaster);
MARK_REF_PTR_T(::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer);
// Dependencies System.Object
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer
class CORDL_TYPE PhysicsRaycaster_RaycastHitComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_instance, put = setStaticF_instance)) ::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer* instance;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*() noexcept;

  /// @brief Method Compare, addr 0x6befd64, size 0x64, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::RaycastHit x, ::UnityEngine::RaycastHit y);

  static inline ::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer* New_ctor();

  /// @brief Method .ctor, addr 0x6befdc8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer* getStaticF_instance();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>* i___System__Collections__Generic__IComparer_1___UnityEngine__RaycastHit_() noexcept;

  static inline void setStaticF_instance(::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsRaycaster_RaycastHitComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicsRaycaster_RaycastHitComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicsRaycaster_RaycastHitComparer(PhysicsRaycaster_RaycastHitComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsRaycaster_RaycastHitComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsRaycaster_RaycastHitComparer(PhysicsRaycaster_RaycastHitComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17534 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Dependencies UnityEngine.EventSystems.BaseRaycaster, UnityEngine.LayerMask
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.PhysicsRaycaster
class CORDL_TYPE PhysicsRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
  // Declarations
  using RaycastHitComparer = ::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer;

  __declspec(property(get = get_depth)) int32_t depth;

  __declspec(property(get = get_eventCamera)) ::UnityW<::UnityEngine::Camera> eventCamera;

  __declspec(property(get = get_eventMask, put = set_eventMask)) ::UnityEngine::LayerMask eventMask;

  __declspec(property(get = get_finalEventMask)) int32_t finalEventMask;

  /// @brief Field m_EventCamera, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventCamera, put = __cordl_internal_set_m_EventCamera)) ::UnityW<::UnityEngine::Camera> m_EventCamera;

  /// @brief Field m_EventMask, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EventMask, put = __cordl_internal_set_m_EventMask)) ::UnityEngine::LayerMask m_EventMask;

  /// @brief Field m_Hits, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Hits, put = __cordl_internal_set_m_Hits)) ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> m_Hits;

  /// @brief Field m_LastMaxRayIntersections, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastMaxRayIntersections, put = __cordl_internal_set_m_LastMaxRayIntersections)) int32_t m_LastMaxRayIntersections;

  /// @brief Field m_MaxRayIntersections, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxRayIntersections, put = __cordl_internal_set_m_MaxRayIntersections)) int32_t m_MaxRayIntersections;

  __declspec(property(get = get_maxRayIntersections, put = set_maxRayIntersections)) int32_t maxRayIntersections;

  /// @brief Method ComputeRayAndDistance, addr 0x6bef480, size 0x2f8, virtual false, abstract: false, final false
  inline bool ComputeRayAndDistance(::UnityEngine::EventSystems::PointerEventData* eventData, ::ByRef<::UnityEngine::Ray> ray, ::ByRef<int32_t> eventDisplayIndex,
                                    ::ByRef<float_t> distanceToClipPlane);

  static inline ::UnityEngine::EventSystems::PhysicsRaycaster* New_ctor();

  /// @brief Method Raycast, addr 0x6bef9f0, size 0x374, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_EventCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_EventCamera();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_EventMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_EventMask();

  constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> const& __cordl_internal_get_m_Hits() const;

  constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>& __cordl_internal_get_m_Hits();

  constexpr int32_t const& __cordl_internal_get_m_LastMaxRayIntersections() const;

  constexpr int32_t& __cordl_internal_get_m_LastMaxRayIntersections();

  constexpr int32_t const& __cordl_internal_get_m_MaxRayIntersections() const;

  constexpr int32_t& __cordl_internal_get_m_MaxRayIntersections();

  constexpr void __cordl_internal_set_m_EventCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_m_EventMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_Hits(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> value);

  constexpr void __cordl_internal_set_m_LastMaxRayIntersections(int32_t value);

  constexpr void __cordl_internal_set_m_MaxRayIntersections(int32_t value);

  /// @brief Method .ctor, addr 0x6beee1c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_depth, addr 0x6bef908, size 0xc8, virtual true, abstract: false, final false
  inline int32_t get_depth();

  /// @brief Method get_eventCamera, addr 0x6bef830, size 0xd8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_eventCamera();

  /// @brief Method get_eventMask, addr 0x6bef9d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_eventMask();

  /// @brief Method get_finalEventMask, addr 0x6bef778, size 0xb8, virtual false, abstract: false, final false
  inline int32_t get_finalEventMask();

  /// @brief Method get_maxRayIntersections, addr 0x6bef9e0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxRayIntersections();

  /// @brief Method set_eventMask, addr 0x6bef9d8, size 0x8, virtual false, abstract: false, final false
  inline void set_eventMask(::UnityEngine::LayerMask value);

  /// @brief Method set_maxRayIntersections, addr 0x6bef9e8, size 0x8, virtual false, abstract: false, final false
  inline void set_maxRayIntersections(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsRaycaster();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicsRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicsRaycaster(PhysicsRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsRaycaster(PhysicsRaycaster const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17535 };

  /// @brief Field kNoEventMaskSet offset 0xffffffff size 0x4
  static constexpr int32_t kNoEventMaskSet{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field m_EventCamera, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___m_EventCamera;

  /// @brief Field m_EventMask, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_EventMask;

  /// @brief Field m_MaxRayIntersections, offset: 0x34, size: 0x4, def value: None
  int32_t ___m_MaxRayIntersections;

  /// @brief Field m_LastMaxRayIntersections, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_LastMaxRayIntersections;

  /// @brief Field m_Hits, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> ___m_Hits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::PhysicsRaycaster, ___m_EventCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PhysicsRaycaster, ___m_EventMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PhysicsRaycaster, ___m_MaxRayIntersections) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PhysicsRaycaster, ___m_LastMaxRayIntersections) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PhysicsRaycaster, ___m_Hits) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::PhysicsRaycaster, 0x48>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::PhysicsRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PhysicsRaycaster*, "UnityEngine.EventSystems", "PhysicsRaycaster");
NEED_NO_BOX(::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer*, "UnityEngine.EventSystems", "PhysicsRaycaster/RaycastHitComparer");
