#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumePositioning.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ProbeVolumePositioning)
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_Volume;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeVolumePositioning;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolumePositioning);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumePositioning
class CORDL_TYPE ProbeVolumePositioning : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_AABBCorners, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_AABBCorners, put = setStaticF_m_AABBCorners)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_AABBCorners;

  /// @brief Field m_Axes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_Axes, put = setStaticF_m_Axes)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_Axes;

  /// @brief Method OBBAABBIntersect, addr 0x6578af0, size 0x544, virtual false, abstract: false, final false
  static inline bool OBBAABBIntersect(::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_Volume> a, ::ByRef<::UnityEngine::Bounds> b, ::ByRef<::UnityEngine::Bounds> aAABB);

  /// @brief Method OBBContains, addr 0x6578a18, size 0xd8, virtual false, abstract: false, final false
  static inline bool OBBContains(::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_Volume> obb, ::UnityEngine::Vector3 point);

  /// @brief Method OBBIntersect, addr 0x6578254, size 0x6dc, virtual false, abstract: false, final false
  static inline bool OBBIntersect(::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_Volume> a, ::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_Volume> b);

  /// @brief Method ProjectAABB, addr 0x6579034, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ProjectAABB(::ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> corners, ::UnityEngine::Vector3 axis);

  /// @brief Method ProjectOBB, addr 0x6578930, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ProjectOBB(::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_Volume> a, ::UnityEngine::Vector3 axis);

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_m_AABBCorners();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_m_Axes();

  static inline void setStaticF_m_AABBCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline void setStaticF_m_Axes(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumePositioning();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumePositioning", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumePositioning(ProbeVolumePositioning&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumePositioning", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumePositioning(ProbeVolumePositioning const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12119 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumePositioning, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolumePositioning);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumePositioning*, "UnityEngine.Rendering", "ProbeVolumePositioning");
