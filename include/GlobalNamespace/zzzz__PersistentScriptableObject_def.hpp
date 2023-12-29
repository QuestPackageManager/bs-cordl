#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(PersistentScriptableObject)
// Forward declare root types
namespace GlobalNamespace {
class PersistentScriptableObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PersistentScriptableObject);
// Type: ::PersistentScriptableObject
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13879))
// CS Name: ::PersistentScriptableObject*
class CORDL_TYPE PersistentScriptableObject : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Method OnEnable addr 0x1f97fe4 size 0x24 virtual true final false
  inline void OnEnable();

  static inline ::GlobalNamespace::PersistentScriptableObject* New_ctor();

  /// @brief Method .ctor addr 0x1f98008 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PersistentScriptableObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PersistentScriptableObject(PersistentScriptableObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PersistentScriptableObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PersistentScriptableObject(PersistentScriptableObject const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PersistentScriptableObject();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PersistentScriptableObject, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PersistentScriptableObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PersistentScriptableObject*, "", "PersistentScriptableObject");
