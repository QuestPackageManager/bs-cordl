#pragma once
// IWYU pragma private; include "Unity/Burst/BurstDiscardAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(BurstDiscardAttribute)
// Forward declare root types
namespace Unity::Burst {
class BurstDiscardAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Burst::BurstDiscardAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstDiscardAttribute*, "Unity.Burst", "BurstDiscardAttribute");
// Dependencies System.Attribute
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstDiscardAttribute
class CORDL_TYPE BurstDiscardAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Burst::BurstDiscardAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6a5add4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstDiscardAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstDiscardAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstDiscardAttribute(BurstDiscardAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstDiscardAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstDiscardAttribute(BurstDiscardAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9999 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstDiscardAttribute) == 0x10, "Size mismatch!");

} // namespace Unity::Burst
