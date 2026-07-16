#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/PreserveAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PreserveAttribute)
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class PreserveAttribute;
}
// Write type traits
MARK_REF_T(::OculusStudios::GraphQL::Client::PreserveAttribute*);
DEFINE_IL2CPP_CLASS(::OculusStudios::GraphQL::Client::PreserveAttribute*, "OculusStudios.GraphQL.Client", "PreserveAttribute");
// Dependencies System.Attribute
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.PreserveAttribute
class CORDL_TYPE PreserveAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::OculusStudios::GraphQL::Client::PreserveAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x5f20a64, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreserveAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreserveAttribute(PreserveAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreserveAttribute(PreserveAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20373 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OculusStudios::GraphQL::Client::PreserveAttribute) == 0x10, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
