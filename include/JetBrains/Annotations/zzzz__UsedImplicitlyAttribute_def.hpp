#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JetBrains/Annotations/zzzz__ImplicitUseKindFlags_def.hpp"
#include "JetBrains/Annotations/zzzz__ImplicitUseTargetFlags_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(UsedImplicitlyAttribute)
namespace JetBrains::Annotations {
struct ImplicitUseKindFlags;
}
namespace JetBrains::Annotations {
struct ImplicitUseTargetFlags;
}
// Forward declare root types
namespace JetBrains::Annotations {
class UsedImplicitlyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::UsedImplicitlyAttribute);
// Type: JetBrains.Annotations::UsedImplicitlyAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10028)), TypeDefinitionIndex(TypeDefinitionIndex(2547)), TypeDefinitionIndex(TypeDefinitionIndex(10029))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10027))
// CS Name: ::JetBrains.Annotations::UsedImplicitlyAttribute*
class CORDL_TYPE UsedImplicitlyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <UseKindFlags>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__UseKindFlags_k__BackingField, put = __set__UseKindFlags_k__BackingField))::JetBrains::Annotations::ImplicitUseKindFlags _UseKindFlags_k__BackingField;

  /// @brief Field <TargetFlags>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__TargetFlags_k__BackingField, put = __set__TargetFlags_k__BackingField))::JetBrains::Annotations::ImplicitUseTargetFlags _TargetFlags_k__BackingField;

  constexpr ::JetBrains::Annotations::ImplicitUseKindFlags& __get__UseKindFlags_k__BackingField();

  constexpr ::JetBrains::Annotations::ImplicitUseKindFlags const& __get__UseKindFlags_k__BackingField() const;

  constexpr void __set__UseKindFlags_k__BackingField(::JetBrains::Annotations::ImplicitUseKindFlags value);

  constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags& __get__TargetFlags_k__BackingField();

  constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags const& __get__TargetFlags_k__BackingField() const;

  constexpr void __set__TargetFlags_k__BackingField(::JetBrains::Annotations::ImplicitUseTargetFlags value);

  static inline ::JetBrains::Annotations::UsedImplicitlyAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2c9e630, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::JetBrains::Annotations::UsedImplicitlyAttribute* New_ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, ::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);

  /// @brief Method .ctor, addr 0x2c9e654, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, ::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);

  // Ctor Parameters [CppParam { name: "", ty: "UsedImplicitlyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UsedImplicitlyAttribute(UsedImplicitlyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UsedImplicitlyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UsedImplicitlyAttribute(UsedImplicitlyAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UsedImplicitlyAttribute();

public:
  /// @brief Field <UseKindFlags>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::JetBrains::Annotations::ImplicitUseKindFlags ____UseKindFlags_k__BackingField;

  /// @brief Field <TargetFlags>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::JetBrains::Annotations::ImplicitUseTargetFlags ____TargetFlags_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::UsedImplicitlyAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::UsedImplicitlyAttribute, ____UseKindFlags_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JetBrains::Annotations::UsedImplicitlyAttribute, ____TargetFlags_k__BackingField) == 0x14, "Offset mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::UsedImplicitlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::UsedImplicitlyAttribute*, "JetBrains.Annotations", "UsedImplicitlyAttribute");
