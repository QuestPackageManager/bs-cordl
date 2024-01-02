#pragma once
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14512))
// CS Name: ::LightGroupElementsSpawner*
class CORDL_TYPE LightGroupElementsSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lightPrefab, offset 0x18, size 0x8
  __declspec(property(get = __get__lightPrefab, put = __set__lightPrefab))::UnityEngine::GameObject* _lightPrefab;

  /// @brief Field _useAlternatePrefab, offset 0x20, size 0x1
  __declspec(property(get = __get__useAlternatePrefab, put = __set__useAlternatePrefab)) bool _useAlternatePrefab;

  /// @brief Field _alternateLightPrefab, offset 0x28, size 0x8
  __declspec(property(get = __get__alternateLightPrefab, put = __set__alternateLightPrefab))::UnityEngine::GameObject* _alternateLightPrefab;

  constexpr ::UnityEngine::GameObject*& __get__lightPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__lightPrefab() const;

  constexpr void __set__lightPrefab(::UnityEngine::GameObject* value);

  constexpr bool& __get__useAlternatePrefab();

  constexpr bool const& __get__useAlternatePrefab() const;

  constexpr void __set__useAlternatePrefab(bool value);

  constexpr ::UnityEngine::GameObject*& __get__alternateLightPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__alternateLightPrefab() const;

  constexpr void __set__alternateLightPrefab(::UnityEngine::GameObject* value);

  static inline ::GlobalNamespace::LightGroupElementsSpawner* New_ctor();

  /// @brief Method .ctor, addr 0x210e384, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupElementsSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupElementsSpawner(LightGroupElementsSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupElementsSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupElementsSpawner(LightGroupElementsSpawner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupElementsSpawner();

public:
  /// @brief Field _lightPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____lightPrefab;

  /// @brief Field _useAlternatePrefab, offset: 0x20, size: 0x1, def value: None
  bool ____useAlternatePrefab;

  /// @brief Field _alternateLightPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____alternateLightPrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupElementsSpawner, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupElementsSpawner, ____lightPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupElementsSpawner, ____useAlternatePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupElementsSpawner, ____alternateLightPrefab) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupElementsSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupElementsSpawner*, "", "LightGroupElementsSpawner");
