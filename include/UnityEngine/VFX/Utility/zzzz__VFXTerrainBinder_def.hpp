#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXTerrainBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VFXTerrainBinder)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXTerrainBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXTerrainBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXTerrainBinder*, "UnityEngine.VFX.Utility", "VFXTerrainBinder");
// Dependencies UnityEngine.VFX.Utility.VFXBinderBase
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXTerrainBinder
class CORDL_TYPE VFXTerrainBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
  // Declarations
  __declspec(property(get = get_Property, put = set_Property)) ::StringW Property;

  /// @brief Field Terrain, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Terrain, put = __cordl_internal_set_Terrain)) ::UnityW<::UnityEngine::Terrain> Terrain;

  /// @brief Field Terrain_Bounds_center, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Terrain_Bounds_center, put = __cordl_internal_set_Terrain_Bounds_center)) ::UnityEngine::VFX::Utility::ExposedProperty* Terrain_Bounds_center;

  /// @brief Field Terrain_Bounds_size, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Terrain_Bounds_size, put = __cordl_internal_set_Terrain_Bounds_size)) ::UnityEngine::VFX::Utility::ExposedProperty* Terrain_Bounds_size;

  /// @brief Field Terrain_Height, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_Terrain_Height, put = __cordl_internal_set_Terrain_Height)) ::UnityEngine::VFX::Utility::ExposedProperty* Terrain_Height;

  /// @brief Field Terrain_HeightMap, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Terrain_HeightMap, put = __cordl_internal_set_Terrain_HeightMap)) ::UnityEngine::VFX::Utility::ExposedProperty* Terrain_HeightMap;

  /// @brief Field m_Property, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Property, put = __cordl_internal_set_m_Property)) ::UnityEngine::VFX::Utility::ExposedProperty* m_Property;

  /// @brief Method IsValid, addr 0x69e7cf8, size 0x10c, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXTerrainBinder* New_ctor();

  /// @brief Method OnEnable, addr 0x69e7cdc, size 0x18, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x69e7cf4, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method ToString, addr 0x69e7f4c, size 0xfc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69e7e04, size 0x148, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  /// @brief Method UpdateSubProperties, addr 0x69e7bb4, size 0x128, virtual false, abstract: false, final false
  inline void UpdateSubProperties();

  constexpr ::UnityW<::UnityEngine::Terrain> const& __cordl_internal_get_Terrain() const;

  constexpr ::UnityW<::UnityEngine::Terrain>& __cordl_internal_get_Terrain();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_Terrain_Bounds_center() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_Terrain_Bounds_center();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_Terrain_Bounds_size() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_Terrain_Bounds_size();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_Terrain_Height() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_Terrain_Height();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_Terrain_HeightMap() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_Terrain_HeightMap();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_Property() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_Property();

  constexpr void __cordl_internal_set_Terrain(::UnityW<::UnityEngine::Terrain> value);

  constexpr void __cordl_internal_set_Terrain_Bounds_center(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_Terrain_Bounds_size(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_Terrain_Height(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_Terrain_HeightMap(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_Property(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69e8048, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Property, addr 0x69e7b74, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_Property();

  /// @brief Method set_Property, addr 0x69e7b8c, size 0x28, virtual false, abstract: false, final false
  inline void set_Property(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXTerrainBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXTerrainBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXTerrainBinder(VFXTerrainBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXTerrainBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXTerrainBinder(VFXTerrainBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20008 };

  /// @brief Field m_Property, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_Property;

  /// @brief Field Terrain, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Terrain> ___Terrain;

  /// @brief Field Terrain_Bounds_center, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___Terrain_Bounds_center;

  /// @brief Field Terrain_Bounds_size, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___Terrain_Bounds_size;

  /// @brief Field Terrain_HeightMap, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___Terrain_HeightMap;

  /// @brief Field Terrain_Height, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___Terrain_Height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTerrainBinder, ___m_Property) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTerrainBinder, ___Terrain) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTerrainBinder, ___Terrain_Bounds_center) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTerrainBinder, ___Terrain_Bounds_size) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTerrainBinder, ___Terrain_HeightMap) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTerrainBinder, ___Terrain_Height) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXTerrainBinder) == 0x58, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
