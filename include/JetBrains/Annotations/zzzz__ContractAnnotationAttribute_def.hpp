#pragma once
// IWYU pragma private; include "JetBrains/Annotations/ContractAnnotationAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ContractAnnotationAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class ContractAnnotationAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::ContractAnnotationAttribute);
// Type: JetBrains.Annotations::ContractAnnotationAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::ContractAnnotationAttribute*
class CORDL_TYPE ContractAnnotationAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Contract, put = set_Contract)) ::StringW Contract;

  __declspec(property(get = get_ForceFullStates, put = set_ForceFullStates)) bool ForceFullStates;

  /// @brief Field <Contract>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Contract_k__BackingField, put = __cordl_internal_set__Contract_k__BackingField)) ::StringW _Contract_k__BackingField;

  /// @brief Field <ForceFullStates>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__ForceFullStates_k__BackingField, put = __cordl_internal_set__ForceFullStates_k__BackingField)) bool _ForceFullStates_k__BackingField;

  static inline ::JetBrains::Annotations::ContractAnnotationAttribute* New_ctor(::StringW contract);

  static inline ::JetBrains::Annotations::ContractAnnotationAttribute* New_ctor(::StringW contract, bool forceFullStates);

  constexpr ::StringW const& __cordl_internal_get__Contract_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Contract_k__BackingField();

  constexpr bool const& __cordl_internal_get__ForceFullStates_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ForceFullStates_k__BackingField();

  constexpr void __cordl_internal_set__Contract_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ForceFullStates_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x4a8bfac, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW contract);

  /// @brief Method .ctor, addr 0x4a8bfd8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW contract, bool forceFullStates);

  /// @brief Method get_Contract, addr 0x4a8c00c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Contract();

  /// @brief Method get_ForceFullStates, addr 0x4a8c01c, size 0x8, virtual false, abstract: false, final false
  inline bool get_ForceFullStates();

  /// @brief Method set_Contract, addr 0x4a8c014, size 0x8, virtual false, abstract: false, final false
  inline void set_Contract(::StringW value);

  /// @brief Method set_ForceFullStates, addr 0x4a8c024, size 0xc, virtual false, abstract: false, final false
  inline void set_ForceFullStates(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContractAnnotationAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContractAnnotationAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContractAnnotationAttribute(ContractAnnotationAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContractAnnotationAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContractAnnotationAttribute(ContractAnnotationAttribute const&) = delete;

  /// @brief Field <Contract>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Contract_k__BackingField;

  /// @brief Field <ForceFullStates>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____ForceFullStates_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18368 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::ContractAnnotationAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::ContractAnnotationAttribute, ____Contract_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JetBrains::Annotations::ContractAnnotationAttribute, ____ForceFullStates_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::ContractAnnotationAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::ContractAnnotationAttribute*, "JetBrains.Annotations", "ContractAnnotationAttribute");
