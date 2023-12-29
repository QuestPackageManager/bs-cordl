#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InstantiatePrefab)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class InstantiatePrefab;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InstantiatePrefab);
// Type: ::InstantiatePrefab
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13872))
// CS Name: ::InstantiatePrefab*
class CORDL_TYPE InstantiatePrefab : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _prefab, offset 0x18, size 0x8
  __declspec(property(get = __get__prefab, put = __set__prefab))::UnityEngine::GameObject* _prefab;

  constexpr ::UnityEngine::GameObject*& __get__prefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__prefab() const;

  constexpr void __set__prefab(::UnityEngine::GameObject* value);

  /// @brief Method Awake addr 0x1f971e4 size 0xfc virtual false final false
  inline void Awake();

  static inline ::GlobalNamespace::InstantiatePrefab* New_ctor();

  /// @brief Method .ctor addr 0x1f972e0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InstantiatePrefab", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstantiatePrefab(InstantiatePrefab&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstantiatePrefab", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstantiatePrefab(InstantiatePrefab const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstantiatePrefab();

public:
  /// @brief Field _prefab, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____prefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InstantiatePrefab, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::InstantiatePrefab, ____prefab) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InstantiatePrefab);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InstantiatePrefab*, "", "InstantiatePrefab");
