#pragma once
// IWYU pragma private; include "UnityEngine/HideInCallstackAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(HideInCallstackAttribute)
// Forward declare root types
namespace UnityEngine {
class HideInCallstackAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::HideInCallstackAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::HideInCallstackAttribute*, "UnityEngine", "HideInCallstackAttribute");
// [AttributeUsage((System.AttributeTargets)64)]
// [UsedByNativeCode]
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.HideInCallstackAttribute
class CORDL_TYPE HideInCallstackAttribute : public ::System::Attribute {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HideInCallstackAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HideInCallstackAttribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HideInCallstackAttribute(HideInCallstackAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HideInCallstackAttribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HideInCallstackAttribute(HideInCallstackAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9896 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::HideInCallstackAttribute) == 0x10, "Size mismatch!");

} // namespace UnityEngine
