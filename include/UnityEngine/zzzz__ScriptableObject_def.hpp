#pragma once
// IWYU pragma private; include "UnityEngine/ScriptableObject.hpp"
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
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ScriptableObject*
class CORDL_TYPE ScriptableObject : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Method CreateInstance, addr 0x484b580, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ScriptableObject> CreateInstance(::System::Type* type);

  /// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T CreateInstance();

  /// @brief Method CreateScriptableObject, addr 0x484b544, size 0x3c, virtual false, abstract: false, final false
  static inline void CreateScriptableObject(::UnityEngine::ScriptableObject* self);

  /// @brief Method CreateScriptableObjectInstanceFromType, addr 0x484b5c0, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ScriptableObject> CreateScriptableObjectInstanceFromType(::System::Type* type, bool applyDefaultsAndReset);

  static inline ::UnityEngine::ScriptableObject* New_ctor();

  /// @brief Method .ctor, addr 0x484b4c4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableObject(ScriptableObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableObject(ScriptableObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10865 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ScriptableObject, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ScriptableObject);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScriptableObject*, "UnityEngine", "ScriptableObject");
