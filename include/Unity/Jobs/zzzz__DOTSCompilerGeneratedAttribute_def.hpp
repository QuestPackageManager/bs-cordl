#pragma once
// IWYU pragma private; include "Unity/Jobs/DOTSCompilerGeneratedAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DOTSCompilerGeneratedAttribute)
// Forward declare root types
namespace Unity::Jobs {
class DOTSCompilerGeneratedAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Jobs::DOTSCompilerGeneratedAttribute);
// Dependencies System.Attribute
namespace Unity::Jobs {
// Is value type: false
// CS Name: Unity.Jobs.DOTSCompilerGeneratedAttribute
class CORDL_TYPE DOTSCompilerGeneratedAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Jobs::DOTSCompilerGeneratedAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6289928, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DOTSCompilerGeneratedAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DOTSCompilerGeneratedAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DOTSCompilerGeneratedAttribute(DOTSCompilerGeneratedAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DOTSCompilerGeneratedAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DOTSCompilerGeneratedAttribute(DOTSCompilerGeneratedAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15475 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::DOTSCompilerGeneratedAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Jobs
NEED_NO_BOX(::Unity::Jobs::DOTSCompilerGeneratedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::DOTSCompilerGeneratedAttribute*, "Unity.Jobs", "DOTSCompilerGeneratedAttribute");
