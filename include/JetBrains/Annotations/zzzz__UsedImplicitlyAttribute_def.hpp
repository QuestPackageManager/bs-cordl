#pragma once
// IWYU pragma private; include "JetBrains/Annotations/UsedImplicitlyAttribute.hpp"
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
// Dependencies JetBrains.Annotations.ImplicitUseKindFlags, JetBrains.Annotations.ImplicitUseTargetFlags, System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.UsedImplicitlyAttribute
class CORDL_TYPE UsedImplicitlyAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_TargetFlags, put = set_TargetFlags)) ::JetBrains::Annotations::ImplicitUseTargetFlags TargetFlags;

  __declspec(property(get = get_UseKindFlags, put = set_UseKindFlags)) ::JetBrains::Annotations::ImplicitUseKindFlags UseKindFlags;

  /// @brief Field <TargetFlags>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__TargetFlags_k__BackingField,
                      put = __cordl_internal_set__TargetFlags_k__BackingField)) ::JetBrains::Annotations::ImplicitUseTargetFlags _TargetFlags_k__BackingField;

  /// @brief Field <UseKindFlags>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__UseKindFlags_k__BackingField,
                      put = __cordl_internal_set__UseKindFlags_k__BackingField)) ::JetBrains::Annotations::ImplicitUseKindFlags _UseKindFlags_k__BackingField;

  static inline ::JetBrains::Annotations::UsedImplicitlyAttribute* New_ctor();

  static inline ::JetBrains::Annotations::UsedImplicitlyAttribute* New_ctor(::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);

  static inline ::JetBrains::Annotations::UsedImplicitlyAttribute* New_ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags);

  static inline ::JetBrains::Annotations::UsedImplicitlyAttribute* New_ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, ::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);

  constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags const& __cordl_internal_get__TargetFlags_k__BackingField() const;

  constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags& __cordl_internal_get__TargetFlags_k__BackingField();

  constexpr ::JetBrains::Annotations::ImplicitUseKindFlags const& __cordl_internal_get__UseKindFlags_k__BackingField() const;

  constexpr ::JetBrains::Annotations::ImplicitUseKindFlags& __cordl_internal_get__UseKindFlags_k__BackingField();

  constexpr void __cordl_internal_set__TargetFlags_k__BackingField(::JetBrains::Annotations::ImplicitUseTargetFlags value);

  constexpr void __cordl_internal_set__UseKindFlags_k__BackingField(::JetBrains::Annotations::ImplicitUseKindFlags value);

  /// @brief Method .ctor, addr 0x4af09e0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4af0a5c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);

  /// @brief Method .ctor, addr 0x4af0a30, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags);

  /// @brief Method .ctor, addr 0x4af0a04, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, ::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);

  /// @brief Method get_TargetFlags, addr 0x4af0a98, size 0x8, virtual false, abstract: false, final false
  inline ::JetBrains::Annotations::ImplicitUseTargetFlags get_TargetFlags();

  /// @brief Method get_UseKindFlags, addr 0x4af0a88, size 0x8, virtual false, abstract: false, final false
  inline ::JetBrains::Annotations::ImplicitUseKindFlags get_UseKindFlags();

  /// @brief Method set_TargetFlags, addr 0x4af0aa0, size 0x8, virtual false, abstract: false, final false
  inline void set_TargetFlags(::JetBrains::Annotations::ImplicitUseTargetFlags value);

  /// @brief Method set_UseKindFlags, addr 0x4af0a90, size 0x8, virtual false, abstract: false, final false
  inline void set_UseKindFlags(::JetBrains::Annotations::ImplicitUseKindFlags value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UsedImplicitlyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UsedImplicitlyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UsedImplicitlyAttribute(UsedImplicitlyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UsedImplicitlyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UsedImplicitlyAttribute(UsedImplicitlyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18453 };

  /// @brief Field <UseKindFlags>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::JetBrains::Annotations::ImplicitUseKindFlags ____UseKindFlags_k__BackingField;

  /// @brief Field <TargetFlags>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::JetBrains::Annotations::ImplicitUseTargetFlags ____TargetFlags_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::UsedImplicitlyAttribute, ____UseKindFlags_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JetBrains::Annotations::UsedImplicitlyAttribute, ____TargetFlags_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::UsedImplicitlyAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::UsedImplicitlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::UsedImplicitlyAttribute*, "JetBrains.Annotations", "UsedImplicitlyAttribute");
