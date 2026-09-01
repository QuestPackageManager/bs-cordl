#pragma once
// IWYU pragma private; include "Unity\Properties\IProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IProperty)
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Properties {
class IProperty;
}
// Write type traits
MARK_REF_T(::Unity::Properties::IProperty*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::IProperty*, "Unity.Properties", "IProperty");
// Dependencies
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.IProperty
class CORDL_TYPE IProperty {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method DeclaredValueType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* DeclaredValueType();

  /// @brief Method get_Name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  // Ctor Parameters [CppParam { name: "", ty: "IProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IProperty(IProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19623 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
