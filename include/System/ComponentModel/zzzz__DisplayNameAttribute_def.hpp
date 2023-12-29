#pragma once
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
// Type: System.ComponentModel::DisplayNameAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8230))
// CS Name: ::System.ComponentModel::DisplayNameAttribute*
class CORDL_TYPE DisplayNameAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <DisplayNameValue>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__DisplayNameValue_k__BackingField, put = __set__DisplayNameValue_k__BackingField))::StringW _DisplayNameValue_k__BackingField;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::DisplayNameAttribute* Default;

  __declspec(property(get = get_DisplayName))::StringW DisplayName;

  __declspec(property(get = get_DisplayNameValue, put = set_DisplayNameValue))::StringW DisplayNameValue;

  constexpr ::StringW& __get__DisplayNameValue_k__BackingField();

  constexpr ::StringW const& __get__DisplayNameValue_k__BackingField() const;

  constexpr void __set__DisplayNameValue_k__BackingField(::StringW value);

  static inline void setStaticF_Default(::System::ComponentModel::DisplayNameAttribute* value);

  static inline ::System::ComponentModel::DisplayNameAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::DisplayNameAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2786b3c size 0x5c virtual false final false
  inline void _ctor();

  static inline ::System::ComponentModel::DisplayNameAttribute* New_ctor(::StringW displayName);

  /// @brief Method .ctor addr 0x2786b98 size 0x28 virtual false final false
  inline void _ctor(::StringW displayName);

  /// @brief Method get_DisplayName addr 0x2786bc0 size 0x8 virtual true final false
  inline ::StringW get_DisplayName();

  /// @brief Method get_DisplayNameValue addr 0x2786bc8 size 0x8 virtual false final false
  inline ::StringW get_DisplayNameValue();

  /// @brief Method set_DisplayNameValue addr 0x2786bd0 size 0x8 virtual false final false
  inline void set_DisplayNameValue(::StringW value);

  /// @brief Method Equals addr 0x2786bd8 size 0xcc virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2786ca4 size 0x28 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute addr 0x2786ccc size 0x68 virtual true final false
  inline bool IsDefaultAttribute();

  // Ctor Parameters [CppParam { name: "", ty: "DisplayNameAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisplayNameAttribute(DisplayNameAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisplayNameAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisplayNameAttribute(DisplayNameAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisplayNameAttribute();

public:
  /// @brief Field <DisplayNameValue>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____DisplayNameValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DisplayNameAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::DisplayNameAttribute, ____DisplayNameValue_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DisplayNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DisplayNameAttribute*, "System.ComponentModel", "DisplayNameAttribute");
