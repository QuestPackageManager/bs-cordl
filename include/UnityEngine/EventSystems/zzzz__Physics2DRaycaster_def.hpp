#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__PhysicsRaycaster_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Physics2DRaycaster)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
struct RaycastHit2D;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class Physics2DRaycaster;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::Physics2DRaycaster);
// Type: UnityEngine.EventSystems::Physics2DRaycaster
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13212))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13210))
// CS Name: ::UnityEngine.EventSystems::Physics2DRaycaster*
class CORDL_TYPE Physics2DRaycaster : public ::UnityEngine::EventSystems::PhysicsRaycaster {
public:
  // Declarations
  /// @brief Field m_Hits, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Hits, put = __cordl_internal_set_m_Hits))::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> m_Hits;

  constexpr ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*>& __cordl_internal_get_m_Hits();

  constexpr ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> const& __cordl_internal_get_m_Hits() const;

  constexpr void __cordl_internal_set_m_Hits(::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> value);

  static inline ::UnityEngine::EventSystems::Physics2DRaycaster* New_ctor();

  /// @brief Method .ctor, addr 0x2da0428, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Raycast, addr 0x2da0478, size 0x5c0, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  // Ctor Parameters [CppParam { name: "", ty: "Physics2DRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Physics2DRaycaster(Physics2DRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Physics2DRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Physics2DRaycaster(Physics2DRaycaster const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Physics2DRaycaster();

public:
  /// @brief Field m_Hits, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> ___m_Hits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::Physics2DRaycaster, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::Physics2DRaycaster, ___m_Hits) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::Physics2DRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::Physics2DRaycaster*, "UnityEngine.EventSystems", "Physics2DRaycaster");
