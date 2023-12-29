#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ScriptableObject)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class ScriptableObject;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ScriptableObject);
// Type: UnityEngine::ScriptableObject
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10137))
// CS Name: ::UnityEngine::ScriptableObject*
class CORDL_TYPE ScriptableObject : public ::UnityEngine::Object {
public:
  // Declarations
  static inline ::UnityEngine::ScriptableObject* New_ctor();

  /// @brief Method .ctor addr 0x2b6b0f4 size 0x80 virtual false final false
  inline void _ctor();

  /// @brief Method CreateInstance addr 0x2b6b1b0 size 0x40 virtual false final false
  static inline ::UnityEngine::ScriptableObject* CreateInstance(::System::Type* type);

  /// @brief Method CreateInstance addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T CreateInstance();

  /// @brief Method CreateScriptableObject addr 0x2b6b174 size 0x3c virtual false final false
  static inline void CreateScriptableObject(::UnityEngine::ScriptableObject* self);

  /// @brief Method CreateScriptableObjectInstanceFromType addr 0x2b6b1f0 size 0x44 virtual false final false
  static inline ::UnityEngine::ScriptableObject* CreateScriptableObjectInstanceFromType(::System::Type* type, bool applyDefaultsAndReset);

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableObject(ScriptableObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableObject(ScriptableObject const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableObject();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ScriptableObject, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ScriptableObject);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScriptableObject*, "UnityEngine", "ScriptableObject");
