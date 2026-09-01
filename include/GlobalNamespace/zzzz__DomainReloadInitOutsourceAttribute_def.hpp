#pragma once
// IWYU pragma private; include "GlobalNamespace\DomainReloadInitOutsourceAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DomainReloadInitOutsourceAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class DomainReloadInitOutsourceAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DomainReloadInitOutsourceAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DomainReloadInitOutsourceAttribute*, "", "DomainReloadInitOutsourceAttribute");
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: DomainReloadInitOutsourceAttribute
class CORDL_TYPE DomainReloadInitOutsourceAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_OutsourceType)) ::System::Type* OutsourceType;

  /// @brief Field <OutsourceType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__OutsourceType_k__BackingField, put = __cordl_internal_set__OutsourceType_k__BackingField)) ::System::Type* _OutsourceType_k__BackingField;

  static inline ::GlobalNamespace::DomainReloadInitOutsourceAttribute* New_ctor(::System::Type* outsourceType);

  constexpr ::System::Type* const& __cordl_internal_get__OutsourceType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__OutsourceType_k__BackingField();

  constexpr void __cordl_internal_set__OutsourceType_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x330b424, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* outsourceType);

  /// @brief Method get_OutsourceType, addr 0x330b42c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_OutsourceType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DomainReloadInitOutsourceAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DomainReloadInitOutsourceAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DomainReloadInitOutsourceAttribute(DomainReloadInitOutsourceAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DomainReloadInitOutsourceAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DomainReloadInitOutsourceAttribute(DomainReloadInitOutsourceAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23505 };

  /// @brief Field <OutsourceType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____OutsourceType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DomainReloadInitOutsourceAttribute, ____OutsourceType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DomainReloadInitOutsourceAttribute) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
