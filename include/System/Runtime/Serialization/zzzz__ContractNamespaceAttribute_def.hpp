#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ContractNamespaceAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ContractNamespaceAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class ContractNamespaceAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ContractNamespaceAttribute);
// Dependencies System.Attribute
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ContractNamespaceAttribute
class CORDL_TYPE ContractNamespaceAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_ClrNamespace)) ::StringW ClrNamespace;

  __declspec(property(get = get_ContractNamespace)) ::StringW ContractNamespace;

  /// @brief Field clrNamespace, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_clrNamespace, put = __cordl_internal_set_clrNamespace)) ::StringW clrNamespace;

  /// @brief Field contractNamespace, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_contractNamespace, put = __cordl_internal_set_contractNamespace)) ::StringW contractNamespace;

  constexpr ::StringW const& __cordl_internal_get_clrNamespace() const;

  constexpr ::StringW& __cordl_internal_get_clrNamespace();

  constexpr ::StringW const& __cordl_internal_get_contractNamespace() const;

  constexpr ::StringW& __cordl_internal_get_contractNamespace();

  constexpr void __cordl_internal_set_clrNamespace(::StringW value);

  constexpr void __cordl_internal_set_contractNamespace(::StringW value);

  /// @brief Method get_ClrNamespace, addr 0x5f22b38, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ClrNamespace();

  /// @brief Method get_ContractNamespace, addr 0x5f22b40, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ContractNamespace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContractNamespaceAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContractNamespaceAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContractNamespaceAttribute(ContractNamespaceAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContractNamespaceAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContractNamespaceAttribute(ContractNamespaceAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16967 };

  /// @brief Field clrNamespace, offset: 0x10, size: 0x8, def value: None
  ::StringW ___clrNamespace;

  /// @brief Field contractNamespace, offset: 0x18, size: 0x8, def value: None
  ::StringW ___contractNamespace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ContractNamespaceAttribute, ___clrNamespace) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ContractNamespaceAttribute, ___contractNamespace) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ContractNamespaceAttribute, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ContractNamespaceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ContractNamespaceAttribute*, "System.Runtime.Serialization", "ContractNamespaceAttribute");
