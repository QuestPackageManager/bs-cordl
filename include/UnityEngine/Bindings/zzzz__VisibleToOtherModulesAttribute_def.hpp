#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/VisibleToOtherModulesAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VisibleToOtherModulesAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class VisibleToOtherModulesAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Bindings::VisibleToOtherModulesAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Bindings::VisibleToOtherModulesAttribute*, "UnityEngine.Bindings", "VisibleToOtherModulesAttribute");
// Dependencies System.Attribute
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.VisibleToOtherModulesAttribute
class CORDL_TYPE VisibleToOtherModulesAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Bindings::VisibleToOtherModulesAttribute* New_ctor();

  static inline ::UnityEngine::Bindings::VisibleToOtherModulesAttribute* New_ctor(::ArrayW<::StringW> modules);

  /// @brief Method .ctor, addr 0x6bb29e4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6bb29e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW> modules);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisibleToOtherModulesAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisibleToOtherModulesAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisibleToOtherModulesAttribute(VisibleToOtherModulesAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisibleToOtherModulesAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisibleToOtherModulesAttribute(VisibleToOtherModulesAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23026 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Bindings::VisibleToOtherModulesAttribute) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Bindings
