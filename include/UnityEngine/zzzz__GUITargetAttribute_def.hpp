#pragma once
// IWYU pragma private; include "UnityEngine/GUITargetAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GUITargetAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class GUITargetAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUITargetAttribute);
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUITargetAttribute
class CORDL_TYPE GUITargetAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field displayMask, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_displayMask, put = __cordl_internal_set_displayMask)) int32_t displayMask;

  /// @brief Method GetGUITargetAttrValue, addr 0x48e0898, size 0x19c, virtual false, abstract: false, final false
  static inline int32_t GetGUITargetAttrValue(::System::Type* klass, ::StringW methodName);

  constexpr int32_t const& __cordl_internal_get_displayMask() const;

  constexpr int32_t& __cordl_internal_get_displayMask();

  constexpr void __cordl_internal_set_displayMask(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUITargetAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUITargetAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUITargetAttribute(GUITargetAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUITargetAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUITargetAttribute(GUITargetAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16658 };

  /// @brief Field displayMask, offset: 0x10, size: 0x4, def value: None
  int32_t ___displayMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GUITargetAttribute, ___displayMask) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::GUITargetAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUITargetAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUITargetAttribute*, "UnityEngine", "GUITargetAttribute");
