#pragma once
// IWYU pragma private; include "JetBrains/Annotations/LocalizationRequiredAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(LocalizationRequiredAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class LocalizationRequiredAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::LocalizationRequiredAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.LocalizationRequiredAttribute
class CORDL_TYPE LocalizationRequiredAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Required, put = set_Required)) bool Required;

  /// @brief Field <Required>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Required_k__BackingField, put = __cordl_internal_set__Required_k__BackingField)) bool _Required_k__BackingField;

  static inline ::JetBrains::Annotations::LocalizationRequiredAttribute* New_ctor();

  static inline ::JetBrains::Annotations::LocalizationRequiredAttribute* New_ctor(bool required);

  constexpr bool const& __cordl_internal_get__Required_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Required_k__BackingField();

  constexpr void __cordl_internal_set__Required_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x4af0940, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4af0960, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool required);

  /// @brief Method get_Required, addr 0x4af098c, size 0x8, virtual false, abstract: false, final false
  inline bool get_Required();

  /// @brief Method set_Required, addr 0x4af0994, size 0xc, virtual false, abstract: false, final false
  inline void set_Required(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizationRequiredAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizationRequiredAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizationRequiredAttribute(LocalizationRequiredAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationRequiredAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizationRequiredAttribute(LocalizationRequiredAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18450 };

  /// @brief Field <Required>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Required_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::LocalizationRequiredAttribute, ____Required_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::LocalizationRequiredAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::LocalizationRequiredAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::LocalizationRequiredAttribute*, "JetBrains.Annotations", "LocalizationRequiredAttribute");
