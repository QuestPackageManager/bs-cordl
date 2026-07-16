#pragma once
// IWYU pragma private; include "Unity/IL2CPP/CompilerServices/Il2CppEagerStaticClassConstructionAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(Il2CppEagerStaticClassConstructionAttribute)
// Forward declare root types
namespace Unity::IL2CPP::CompilerServices {
class Il2CppEagerStaticClassConstructionAttribute;
}
// Write type traits
MARK_REF_T(::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute*, "Unity.IL2CPP.CompilerServices", "Il2CppEagerStaticClassConstructionAttribute");
// Dependencies System.Attribute
namespace Unity::IL2CPP::CompilerServices {
// Is value type: false
// CS Name: Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstructionAttribute
class CORDL_TYPE Il2CppEagerStaticClassConstructionAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x65f9c54, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Il2CppEagerStaticClassConstructionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Il2CppEagerStaticClassConstructionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Il2CppEagerStaticClassConstructionAttribute(Il2CppEagerStaticClassConstructionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Il2CppEagerStaticClassConstructionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Il2CppEagerStaticClassConstructionAttribute(Il2CppEagerStaticClassConstructionAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13095 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute) == 0x10, "Size mismatch!");

} // namespace Unity::IL2CPP::CompilerServices
