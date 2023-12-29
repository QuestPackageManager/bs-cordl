#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultValueAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DefaultValueAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DefaultValueAttribute);
// Type: System.ComponentModel::DefaultValueAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8220))
// CS Name: ::System.ComponentModel::DefaultValueAttribute*
class CORDL_TYPE DefaultValueAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _value, offset 0x10, size 0x8
  __declspec(property(get = __get__value, put = __set__value))::System::Object* _value;

  __declspec(property(get = get_Value))::System::Object* Value;

  constexpr ::System::Object*& __get__value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__value() const;

  constexpr void __set__value(::System::Object* value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(bool value);

  /// @brief Method .ctor addr 0x2785714 size 0x6c virtual false final false
  inline void _ctor(bool value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(::StringW value);

  /// @brief Method .ctor addr 0x2785780 size 0x28 virtual false final false
  inline void _ctor(::StringW value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(::System::Object* value);

  /// @brief Method .ctor addr 0x27857a8 size 0x28 virtual false final false
  inline void _ctor(::System::Object* value);

  /// @brief Method get_Value addr 0x27857d0 size 0x8 virtual true final false
  inline ::System::Object* get_Value();

  /// @brief Method Equals addr 0x27857d8 size 0x10c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x27858e4 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultValueAttribute(DefaultValueAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultValueAttribute(DefaultValueAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultValueAttribute();

public:
  /// @brief Field _value, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DefaultValueAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::DefaultValueAttribute, ____value) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DefaultValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DefaultValueAttribute*, "System.ComponentModel", "DefaultValueAttribute");
