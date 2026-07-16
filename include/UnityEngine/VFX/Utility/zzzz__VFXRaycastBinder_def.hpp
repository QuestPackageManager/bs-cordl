#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXRaycastBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXRaycastBinder)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX::Utility {
struct VFXRaycastBinder_Space;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
struct VFXRaycastBinder_Space;
}
namespace UnityEngine::VFX::Utility {
class VFXRaycastBinder;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::Utility::VFXRaycastBinder_Space);
MARK_REF_T(::UnityEngine::VFX::Utility::VFXRaycastBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXRaycastBinder_Space, "UnityEngine.VFX.Utility", "VFXRaycastBinder/Space");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXRaycastBinder*, "UnityEngine.VFX.Utility", "VFXRaycastBinder");
// Dependencies
namespace UnityEngine::VFX::Utility {
// Is value type: true
// CS Name: UnityEngine.VFX.Utility.VFXRaycastBinder/Space
struct CORDL_TYPE VFXRaycastBinder_Space {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VFXRaycastBinder_Space_Unwrapped
  enum struct __VFXRaycastBinder_Space_Unwrapped : int32_t {
    __E_Local = static_cast<int32_t>(0x0),
    __E_World = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VFXRaycastBinder_Space_Unwrapped() const noexcept {
    return static_cast<__VFXRaycastBinder_Space_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXRaycastBinder_Space();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VFXRaycastBinder_Space(int32_t value__) noexcept;

  /// @brief Field Local value: I32(0)
  static ::UnityEngine::VFX::Utility::VFXRaycastBinder_Space const Local;

  /// @brief Field World value: I32(1)
  static ::UnityEngine::VFX::Utility::VFXRaycastBinder_Space const World;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19970 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder_Space, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXRaycastBinder_Space) == 0x4, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
// Dependencies UnityEngine.LayerMask, UnityEngine.RaycastHit, UnityEngine.VFX.Utility.VFXBinderBase, UnityEngine.VFX.Utility.VFXRaycastBinder::Space, UnityEngine.Vector3
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXRaycastBinder
class CORDL_TYPE VFXRaycastBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
  // Declarations
  using Space = ::UnityEngine::VFX::Utility::VFXRaycastBinder_Space;

  /// @brief Field Layers, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_Layers, put = __cordl_internal_set_Layers)) ::UnityEngine::LayerMask Layers;

  /// @brief Field MaxDistance, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_MaxDistance, put = __cordl_internal_set_MaxDistance)) float_t MaxDistance;

  /// @brief Field RaycastDirection, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get_RaycastDirection, put = __cordl_internal_set_RaycastDirection)) ::UnityEngine::Vector3 RaycastDirection;

  /// @brief Field RaycastDirectionSpace, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_RaycastDirectionSpace, put = __cordl_internal_set_RaycastDirectionSpace)) ::UnityEngine::VFX::Utility::VFXRaycastBinder_Space RaycastDirectionSpace;

  /// @brief Field RaycastSource, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_RaycastSource, put = __cordl_internal_set_RaycastSource)) ::UnityW<::UnityEngine::GameObject> RaycastSource;

  __declspec(property(get = get_TargetHit, put = set_TargetHit)) ::StringW TargetHit;

  __declspec(property(get = get_TargetNormal, put = set_TargetNormal)) ::StringW TargetNormal;

  __declspec(property(get = get_TargetPosition, put = set_TargetPosition)) ::StringW TargetPosition;

  /// @brief Field m_HitInfo, offset 0x70, size 0x2c
  __declspec(property(get = __cordl_internal_get_m_HitInfo, put = __cordl_internal_set_m_HitInfo)) ::UnityEngine::RaycastHit m_HitInfo;

  /// @brief Field m_TargetHit, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetHit, put = __cordl_internal_set_m_TargetHit)) ::UnityEngine::VFX::Utility::ExposedProperty* m_TargetHit;

  /// @brief Field m_TargetNormal, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetNormal, put = __cordl_internal_set_m_TargetNormal)) ::UnityEngine::VFX::Utility::ExposedProperty* m_TargetNormal;

  /// @brief Field m_TargetNormal_direction, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetNormal_direction, put = __cordl_internal_set_m_TargetNormal_direction)) ::UnityEngine::VFX::Utility::ExposedProperty* m_TargetNormal_direction;

  /// @brief Field m_TargetPosition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetPosition, put = __cordl_internal_set_m_TargetPosition)) ::UnityEngine::VFX::Utility::ExposedProperty* m_TargetPosition;

  /// @brief Field m_TargetPosition_position, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetPosition_position,
                      put = __cordl_internal_set_m_TargetPosition_position)) ::UnityEngine::VFX::Utility::ExposedProperty* m_TargetPosition_position;

  /// @brief Method IsValid, addr 0x69e15a8, size 0xec, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXRaycastBinder* New_ctor();

  /// @brief Method OnEnable, addr 0x69e158c, size 0x18, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x69e15a4, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method ToString, addr 0x69e18dc, size 0x1e8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69e1694, size 0x248, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  /// @brief Method UpdateSubProperties, addr 0x69e146c, size 0xa8, virtual false, abstract: false, final false
  inline void UpdateSubProperties();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_Layers() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_Layers();

  constexpr float_t const& __cordl_internal_get_MaxDistance() const;

  constexpr float_t& __cordl_internal_get_MaxDistance();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_RaycastDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_RaycastDirection();

  constexpr ::UnityEngine::VFX::Utility::VFXRaycastBinder_Space const& __cordl_internal_get_RaycastDirectionSpace() const;

  constexpr ::UnityEngine::VFX::Utility::VFXRaycastBinder_Space& __cordl_internal_get_RaycastDirectionSpace();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_RaycastSource() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_RaycastSource();

  constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_m_HitInfo() const;

  constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_m_HitInfo();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_TargetHit() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_TargetHit();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_TargetNormal() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_TargetNormal();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_TargetNormal_direction() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_TargetNormal_direction();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_TargetPosition() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_TargetPosition();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_TargetPosition_position() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_TargetPosition_position();

  constexpr void __cordl_internal_set_Layers(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_MaxDistance(float_t value);

  constexpr void __cordl_internal_set_RaycastDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_RaycastDirectionSpace(::UnityEngine::VFX::Utility::VFXRaycastBinder_Space value);

  constexpr void __cordl_internal_set_RaycastSource(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_HitInfo(::UnityEngine::RaycastHit value);

  constexpr void __cordl_internal_set_m_TargetHit(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_TargetNormal(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_TargetNormal_direction(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_TargetPosition(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_TargetPosition_position(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69e1ac4, size 0x100, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TargetHit, addr 0x69e1554, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_TargetHit();

  /// @brief Method get_TargetNormal, addr 0x69e1514, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_TargetNormal();

  /// @brief Method get_TargetPosition, addr 0x69e142c, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_TargetPosition();

  /// @brief Method set_TargetHit, addr 0x69e156c, size 0x20, virtual false, abstract: false, final false
  inline void set_TargetHit(::StringW value);

  /// @brief Method set_TargetNormal, addr 0x69e152c, size 0x28, virtual false, abstract: false, final false
  inline void set_TargetNormal(::StringW value);

  /// @brief Method set_TargetPosition, addr 0x69e1444, size 0x28, virtual false, abstract: false, final false
  inline void set_TargetPosition(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXRaycastBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXRaycastBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXRaycastBinder(VFXRaycastBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXRaycastBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXRaycastBinder(VFXRaycastBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19971 };

  /// @brief Field m_TargetPosition, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_TargetPosition;

  /// @brief Field m_TargetNormal, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_TargetNormal;

  /// @brief Field m_TargetHit, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_TargetHit;

  /// @brief Field m_TargetPosition_position, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_TargetPosition_position;

  /// @brief Field m_TargetNormal_direction, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_TargetNormal_direction;

  /// @brief Field RaycastSource, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___RaycastSource;

  /// @brief Field RaycastDirection, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___RaycastDirection;

  /// @brief Field RaycastDirectionSpace, offset: 0x64, size: 0x4, def value: None
  ::UnityEngine::VFX::Utility::VFXRaycastBinder_Space ___RaycastDirectionSpace;

  /// @brief Field Layers, offset: 0x68, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___Layers;

  /// @brief Field MaxDistance, offset: 0x6c, size: 0x4, def value: None
  float_t ___MaxDistance;

  /// @brief Field m_HitInfo, offset: 0x70, size: 0x2c, def value: None
  ::UnityEngine::RaycastHit ___m_HitInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___m_TargetPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___m_TargetNormal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___m_TargetHit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___m_TargetPosition_position) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___m_TargetNormal_direction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___RaycastSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___RaycastDirection) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___RaycastDirectionSpace) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___Layers) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___MaxDistance) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXRaycastBinder, ___m_HitInfo) == 0x70, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXRaycastBinder) == 0xa0, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
