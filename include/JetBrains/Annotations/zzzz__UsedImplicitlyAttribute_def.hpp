#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JetBrains/Annotations/zzzz__ImplicitUseKindFlags_def.hpp"
#include "JetBrains/Annotations/zzzz__ImplicitUseTargetFlags_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(UsedImplicitlyAttribute)
namespace JetBrains::Annotations {
struct ImplicitUseTargetFlags;
}
namespace JetBrains::Annotations {
struct ImplicitUseKindFlags;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547)), TypeDefinitionIndex(TypeDefinitionIndex(15750)), TypeDefinitionIndex(TypeDefinitionIndex(15751))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15748))
// CS Name: ::JetBrains.Annotations::UsedImplicitlyAttribute*
class CORDL_TYPE UsedImplicitlyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <UseKindFlags>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__UseKindFlags_k__BackingField, put = __set__UseKindFlags_k__BackingField))::JetBrains::Annotations::ImplicitUseKindFlags _UseKindFlags_k__BackingField;

  /// @brief Field <TargetFlags>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__TargetFlags_k__BackingField, put = __set__TargetFlags_k__BackingField))::JetBrains::Annotations::ImplicitUseTargetFlags _TargetFlags_k__BackingField;

  __declspec(property(get = get_UseKindFlags, put = set_UseKindFlags))::JetBrains::Annotations::ImplicitUseKindFlags UseKindFlags;

  __declspec(property(get = get_TargetFlags, put = set_TargetFlags))::JetBrains::Annotations::ImplicitUseTargetFlags TargetFlags;

  constexpr ::JetBrains::Annotations::ImplicitUseKindFlags& __get__UseKindFlags_k__BackingField();

  constexpr ::JetBrains::Annotations::ImplicitUseKindFlags const& __get__UseKindFlags_k__BackingField() const;

  constexpr void __set__UseKindFlags_k__BackingField(::JetBrains::Annotations::ImplicitUseKindFlags value);

  constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags& __get__TargetFlags_k__BackingField();

  constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags const& __get__TargetFlags_k__BackingField() const;

  constexpr void __set__TargetFlags_k__BackingField(::JetBrains::Annotations::ImplicitUseTargetFlags value);

  static inline ::JetBrains::Annotations::UsedImplicitlyAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2eba14c size 0x24 virtual false final false
  inline void _ctor();

  static inline ::JetBrains::Annotations::UsedImplicitlyAttribute* New_ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags);

  /// @brief Method .ctor addr 0x2eba19c size 0x2c virtual false final false
  inline void _ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags);

  static inline ::JetBrains::Annotations::UsedImplicitlyAttribute* New_ctor(::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);

  /// @brief Method .ctor addr 0x2eba1c8 size 0x2c virtual false final false
  inline void _ctor(::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);

  static inline ::JetBrains::Annotations::UsedImplicitlyAttribute* New_ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, ::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);

  /// @brief Method .ctor addr 0x2eba170 size 0x2c virtual false final false
  inline void _ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, ::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);

  /// @brief Method get_UseKindFlags addr 0x2eba1f4 size 0x8 virtual false final false
  inline ::JetBrains::Annotations::ImplicitUseKindFlags get_UseKindFlags();

  /// @brief Method set_UseKindFlags addr 0x2eba1fc size 0x8 virtual false final false
  inline void set_UseKindFlags(::JetBrains::Annotations::ImplicitUseKindFlags value);

  /// @brief Method get_TargetFlags addr 0x2eba204 size 0x8 virtual false final false
  inline ::JetBrains::Annotations::ImplicitUseTargetFlags get_TargetFlags();

  /// @brief Method set_TargetFlags addr 0x2eba20c size 0x8 virtual false final false
  inline void set_TargetFlags(::JetBrains::Annotations::ImplicitUseTargetFlags value);

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

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::UsedImplicitlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::UsedImplicitlyAttribute*, "JetBrains.Annotations", "UsedImplicitlyAttribute");
