#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DescriptionAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DescriptionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DescriptionAttribute);
// Type: System.ComponentModel::DescriptionAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::DescriptionAttribute*
class CORDL_TYPE DescriptionAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::DescriptionAttribute* Default;

  __declspec(property(get = get_Description))::StringW Description;

  __declspec(property(get = get_DescriptionValue, put = set_DescriptionValue))::StringW DescriptionValue;

  /// @brief Field <DescriptionValue>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__DescriptionValue_k__BackingField, put = __cordl_internal_set__DescriptionValue_k__BackingField))::StringW _DescriptionValue_k__BackingField;

  /// @brief Method Equals, addr 0x2e31d64, size 0xcc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2e31e30, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x2e31e58, size 0x68, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::DescriptionAttribute* New_ctor();

  static inline ::System::ComponentModel::DescriptionAttribute* New_ctor(::StringW description);

  constexpr ::StringW const& __cordl_internal_get__DescriptionValue_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__DescriptionValue_k__BackingField();

  constexpr void __cordl_internal_set__DescriptionValue_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2e31cc8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2e31d24, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW description);

  static inline ::System::ComponentModel::DescriptionAttribute* getStaticF_Default();

  /// @brief Method get_Description, addr 0x2e31d4c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method get_DescriptionValue, addr 0x2e31d54, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DescriptionValue();

  static inline void setStaticF_Default(::System::ComponentModel::DescriptionAttribute* value);

  /// @brief Method set_DescriptionValue, addr 0x2e31d5c, size 0x8, virtual false, abstract: false, final false
  inline void set_DescriptionValue(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescriptionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescriptionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescriptionAttribute(DescriptionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescriptionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescriptionAttribute(DescriptionAttribute const&) = delete;

  /// @brief Field <DescriptionValue>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____DescriptionValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DescriptionAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::DescriptionAttribute, ____DescriptionValue_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DescriptionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DescriptionAttribute*, "System.ComponentModel", "DescriptionAttribute");
