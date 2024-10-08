#pragma once
// IWYU pragma private; include "System/ComponentModel/DefaultValueAttribute.hpp"
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::DefaultValueAttribute*
class CORDL_TYPE DefaultValueAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Field _value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) ::System::Object* _value;

  /// @brief Method Equals, addr 0x43cf378, size 0x10c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x43cf484, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(::StringW value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(::System::Object* value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(bool value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(int32_t value);

  static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(int64_t value);

  constexpr ::System::Object*& __cordl_internal_get__value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__value() const;

  constexpr void __cordl_internal_set__value(::System::Object* value);

  /// @brief Method .ctor, addr 0x43cf320, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method .ctor, addr 0x43cf348, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value);

  /// @brief Method .ctor, addr 0x43cf2b0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(bool value);

  /// @brief Method .ctor, addr 0x43cf1d8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method .ctor, addr 0x43cf244, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  /// @brief Method get_Value, addr 0x43cf370, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultValueAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultValueAttribute(DefaultValueAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultValueAttribute(DefaultValueAttribute const&) = delete;

  /// @brief Field _value, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9304 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DefaultValueAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::DefaultValueAttribute, ____value) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DefaultValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DefaultValueAttribute*, "System.ComponentModel", "DefaultValueAttribute");
