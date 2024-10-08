#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupElementsSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LightGroupElementsSpawner)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupElementsSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroupElementsSpawner);
// Type: ::LightGroupElementsSpawner
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightGroupElementsSpawner*
class CORDL_TYPE LightGroupElementsSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _alternateLightPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__alternateLightPrefab, put = __cordl_internal_set__alternateLightPrefab)) ::UnityW<::UnityEngine::GameObject> _alternateLightPrefab;

  /// @brief Field _lightPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightPrefab, put = __cordl_internal_set__lightPrefab)) ::UnityW<::UnityEngine::GameObject> _lightPrefab;

  /// @brief Field _useAlternatePrefab, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__useAlternatePrefab, put = __cordl_internal_set__useAlternatePrefab)) bool _useAlternatePrefab;

  static inline ::GlobalNamespace::LightGroupElementsSpawner* New_ctor();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__alternateLightPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__alternateLightPrefab();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__lightPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__lightPrefab();

  constexpr bool const& __cordl_internal_get__useAlternatePrefab() const;

  constexpr bool& __cordl_internal_get__useAlternatePrefab();

  constexpr void __cordl_internal_set__alternateLightPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__lightPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__useAlternatePrefab(bool value);

  /// @brief Method .ctor, addr 0x3977004, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupElementsSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightGroupElementsSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupElementsSpawner(LightGroupElementsSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupElementsSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupElementsSpawner(LightGroupElementsSpawner const&) = delete;

  /// @brief Field _lightPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____lightPrefab;

  /// @brief Field _useAlternatePrefab, offset: 0x28, size: 0x1, def value: None
  bool ____useAlternatePrefab;

  /// @brief Field _alternateLightPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____alternateLightPrefab;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16248 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupElementsSpawner, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupElementsSpawner, ____lightPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupElementsSpawner, ____useAlternatePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupElementsSpawner, ____alternateLightPrefab) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupElementsSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupElementsSpawner*, "", "LightGroupElementsSpawner");
