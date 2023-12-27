#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsRaycaster)
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::EventSystems {
class __PhysicsRaycaster__RaycastHitComparer;
}
namespace UnityEngine {
struct LayerMask;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class PhysicsRaycaster;
}
namespace UnityEngine::EventSystems {
class __PhysicsRaycaster__RaycastHitComparer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::PhysicsRaycaster);
MARK_REF_PTR_T(::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer);
// Type: ::RaycastHitComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13211))
// CS Name: ::PhysicsRaycaster::RaycastHitComparer*
class CORDL_TYPE __PhysicsRaycaster__RaycastHitComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer* instance;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*() noexcept;

  static inline void setStaticF_instance(::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer* value);

  static inline ::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer* getStaticF_instance();

  /// @brief Method Compare addr 0x2da1350 size 0x40 virtual true final true
  inline int32_t Compare(::UnityEngine::RaycastHit x, ::UnityEngine::RaycastHit y);

  static inline ::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer* New_ctor();

  /// @brief Method .ctor addr 0x2da1390 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PhysicsRaycaster__RaycastHitComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PhysicsRaycaster__RaycastHitComparer(__PhysicsRaycaster__RaycastHitComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PhysicsRaycaster__RaycastHitComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PhysicsRaycaster__RaycastHitComparer(__PhysicsRaycaster__RaycastHitComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhysicsRaycaster__RaycastHitComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::PhysicsRaycaster
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13209)), TypeDefinitionIndex(TypeDefinitionIndex(10204))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13212))
// CS Name: ::UnityEngine.EventSystems::PhysicsRaycaster*
class CORDL_TYPE PhysicsRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
  // Declarations
  using RaycastHitComparer = ::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer;

  /// @brief Field m_EventCamera, offset 0x20, size 0x8
  __declspec(property(get = __get_m_EventCamera, put = __set_m_EventCamera))::UnityEngine::Camera* m_EventCamera;

  /// @brief Field m_EventMask, offset 0x28, size 0x4
  __declspec(property(get = __get_m_EventMask, put = __set_m_EventMask))::UnityEngine::LayerMask m_EventMask;

  /// @brief Field m_MaxRayIntersections, offset 0x2c, size 0x4
  __declspec(property(get = __get_m_MaxRayIntersections, put = __set_m_MaxRayIntersections)) int32_t m_MaxRayIntersections;

  /// @brief Field m_LastMaxRayIntersections, offset 0x30, size 0x4
  __declspec(property(get = __get_m_LastMaxRayIntersections, put = __set_m_LastMaxRayIntersections)) int32_t m_LastMaxRayIntersections;

  /// @brief Field m_Hits, offset 0x38, size 0x8
  __declspec(property(get = __get_m_Hits, put = __set_m_Hits))::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> m_Hits;

  __declspec(property(get = get_eventCamera))::UnityEngine::Camera* eventCamera;

  __declspec(property(get = get_depth)) int32_t depth;

  __declspec(property(get = get_finalEventMask)) int32_t finalEventMask;

  __declspec(property(get = get_eventMask, put = set_eventMask))::UnityEngine::LayerMask eventMask;

  __declspec(property(get = get_maxRayIntersections, put = set_maxRayIntersections)) int32_t maxRayIntersections;

  constexpr ::UnityEngine::Camera*& __get_m_EventCamera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get_m_EventCamera() const;

  constexpr void __set_m_EventCamera(::UnityEngine::Camera* value);

  constexpr ::UnityEngine::LayerMask& __get_m_EventMask();

  constexpr ::UnityEngine::LayerMask const& __get_m_EventMask() const;

  constexpr void __set_m_EventMask(::UnityEngine::LayerMask value);

  constexpr int32_t& __get_m_MaxRayIntersections();

  constexpr int32_t const& __get_m_MaxRayIntersections() const;

  constexpr void __set_m_MaxRayIntersections(int32_t value);

  constexpr int32_t& __get_m_LastMaxRayIntersections();

  constexpr int32_t const& __get_m_LastMaxRayIntersections() const;

  constexpr void __set_m_LastMaxRayIntersections(int32_t value);

  constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>& __get_m_Hits();

  constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> const& __get_m_Hits() const;

  constexpr void __set_m_Hits(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> value);

  static inline ::UnityEngine::EventSystems::PhysicsRaycaster* New_ctor();

  /// @brief Method .ctor addr 0x2da0450 size 0x28 virtual false final false
  inline void _ctor();

  /// @brief Method get_eventCamera addr 0x2da0df4 size 0xa4 virtual true final false
  inline ::UnityEngine::Camera* get_eventCamera();

  /// @brief Method get_depth addr 0x2da0e98 size 0xc4 virtual true final false
  inline int32_t get_depth();

  /// @brief Method get_finalEventMask addr 0x2da0d30 size 0xc4 virtual false final false
  inline int32_t get_finalEventMask();

  /// @brief Method get_eventMask addr 0x2da0f5c size 0x8 virtual false final false
  inline ::UnityEngine::LayerMask get_eventMask();

  /// @brief Method set_eventMask addr 0x2da0f64 size 0x8 virtual false final false
  inline void set_eventMask(::UnityEngine::LayerMask value);

  /// @brief Method get_maxRayIntersections addr 0x2da0f6c size 0x8 virtual false final false
  inline int32_t get_maxRayIntersections();

  /// @brief Method set_maxRayIntersections addr 0x2da0f74 size 0x8 virtual false final false
  inline void set_maxRayIntersections(int32_t value);

  /// @brief Method ComputeRayAndDistance addr 0x2da0a38 size 0x2f8 virtual false final false
  inline bool ComputeRayAndDistance(::UnityEngine::EventSystems::PointerEventData* eventData, ByRef<::UnityEngine::Ray> ray, ByRef<int32_t> eventDisplayIndex, ByRef<float_t> distanceToClipPlane);

  /// @brief Method Raycast addr 0x2da0f7c size 0x3d4 virtual true final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicsRaycaster(PhysicsRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsRaycaster(PhysicsRaycaster const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsRaycaster();

public:
  /// @brief Field m_EventCamera, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Camera* ___m_EventCamera;

  /// @brief Field m_EventMask, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_EventMask;

  /// @brief Field m_MaxRayIntersections, offset: 0x2c, size: 0x4, def value: None
  int32_t ___m_MaxRayIntersections;

  /// @brief Field m_LastMaxRayIntersections, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_LastMaxRayIntersections;

  /// @brief Field m_Hits, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> ___m_Hits;

  /// @brief Field kNoEventMaskSet offset 0xffffffff size 0x4
  static constexpr int32_t kNoEventMaskSet{ static_cast<int32_t>(0xffffffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::PhysicsRaycaster, 0x40>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::PhysicsRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PhysicsRaycaster*, "UnityEngine.EventSystems", "PhysicsRaycaster");
NEED_NO_BOX(::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*, "UnityEngine.EventSystems", "PhysicsRaycaster/RaycastHitComparer");
