#pragma once
// IWYU pragma private; include "Unity/Collections/ExcludeFromBurstCompatTestingAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExcludeFromBurstCompatTestingAttribute)
// Forward declare root types
namespace Unity::Collections {
class ExcludeFromBurstCompatTestingAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::ExcludeFromBurstCompatTestingAttribute);
// Dependencies System.Attribute
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.ExcludeFromBurstCompatTestingAttribute
class CORDL_TYPE ExcludeFromBurstCompatTestingAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Reason, put = set_Reason)) ::StringW Reason;

  /// @brief Field <Reason>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Reason_k__BackingField, put = __cordl_internal_set__Reason_k__BackingField)) ::StringW _Reason_k__BackingField;

  static inline ::Unity::Collections::ExcludeFromBurstCompatTestingAttribute* New_ctor(::StringW _reason);

  constexpr ::StringW const& __cordl_internal_get__Reason_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Reason_k__BackingField();

  constexpr void __cordl_internal_set__Reason_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x62a3e64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW _reason);

  /// @brief Method get_Reason, addr 0x62a3e54, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Reason();

  /// @brief Method set_Reason, addr 0x62a3e5c, size 0x8, virtual false, abstract: false, final false
  inline void set_Reason(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExcludeFromBurstCompatTestingAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExcludeFromBurstCompatTestingAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExcludeFromBurstCompatTestingAttribute(ExcludeFromBurstCompatTestingAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExcludeFromBurstCompatTestingAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExcludeFromBurstCompatTestingAttribute(ExcludeFromBurstCompatTestingAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15580 };

  /// @brief Field <Reason>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Reason_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::ExcludeFromBurstCompatTestingAttribute, ____Reason_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::ExcludeFromBurstCompatTestingAttribute, 0x18>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::ExcludeFromBurstCompatTestingAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::ExcludeFromBurstCompatTestingAttribute*, "Unity.Collections", "ExcludeFromBurstCompatTestingAttribute");
