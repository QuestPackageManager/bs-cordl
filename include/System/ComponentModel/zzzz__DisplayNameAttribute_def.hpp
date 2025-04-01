#pragma once
// IWYU pragma private; include "System/ComponentModel/DisplayNameAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DisplayNameAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DisplayNameAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DisplayNameAttribute);
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.DisplayNameAttribute
class CORDL_TYPE DisplayNameAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::System::ComponentModel::DisplayNameAttribute* Default;

  __declspec(property(get = get_DisplayName)) ::StringW DisplayName;

  __declspec(property(get = get_DisplayNameValue, put = set_DisplayNameValue)) ::StringW DisplayNameValue;

  /// @brief Field <DisplayNameValue>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__DisplayNameValue_k__BackingField, put = __cordl_internal_set__DisplayNameValue_k__BackingField)) ::StringW _DisplayNameValue_k__BackingField;

  /// @brief Method Equals, addr 0x4442c98, size 0xcc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x4442d64, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x4442d8c, size 0x68, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::DisplayNameAttribute* New_ctor();

  static inline ::System::ComponentModel::DisplayNameAttribute* New_ctor(::StringW displayName);

  constexpr ::StringW const& __cordl_internal_get__DisplayNameValue_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__DisplayNameValue_k__BackingField();

  constexpr void __cordl_internal_set__DisplayNameValue_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4442bfc, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4442c58, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName);

  static inline ::System::ComponentModel::DisplayNameAttribute* getStaticF_Default();

  /// @brief Method get_DisplayName, addr 0x4442c80, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Method get_DisplayNameValue, addr 0x4442c88, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DisplayNameValue();

  static inline void setStaticF_Default(::System::ComponentModel::DisplayNameAttribute* value);

  /// @brief Method set_DisplayNameValue, addr 0x4442c90, size 0x8, virtual false, abstract: false, final false
  inline void set_DisplayNameValue(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisplayNameAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisplayNameAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisplayNameAttribute(DisplayNameAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisplayNameAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisplayNameAttribute(DisplayNameAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9349 };

  /// @brief Field <DisplayNameValue>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____DisplayNameValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::DisplayNameAttribute, ____DisplayNameValue_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DisplayNameAttribute, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DisplayNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DisplayNameAttribute*, "System.ComponentModel", "DisplayNameAttribute");
