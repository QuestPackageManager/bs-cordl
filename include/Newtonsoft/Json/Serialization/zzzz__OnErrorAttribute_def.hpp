#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/OnErrorAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnErrorAttribute)
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class OnErrorAttribute;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Serialization::OnErrorAttribute*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Serialization::OnErrorAttribute*, "Newtonsoft.Json.Serialization", "OnErrorAttribute");
// Dependencies System.Attribute
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.OnErrorAttribute
class CORDL_TYPE OnErrorAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Newtonsoft::Json::Serialization::OnErrorAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x5d57d94, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnErrorAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnErrorAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnErrorAttribute(OnErrorAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnErrorAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnErrorAttribute(OnErrorAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13505 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Serialization::OnErrorAttribute) == 0x10, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
