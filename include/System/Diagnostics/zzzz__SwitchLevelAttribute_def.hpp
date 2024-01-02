#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SwitchLevelAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Diagnostics {
class SwitchLevelAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::SwitchLevelAttribute);
// Type: System.Diagnostics::SwitchLevelAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8936))
// CS Name: ::System.Diagnostics::SwitchLevelAttribute*
class CORDL_TYPE SwitchLevelAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __get_type, put = __set_type))::System::Type* type;

  __declspec(property(put = set_SwitchLevelType))::System::Type* SwitchLevelType;

  constexpr ::System::Type*& __get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_type() const;

  constexpr void __set_type(::System::Type* value);

  static inline ::System::Diagnostics::SwitchLevelAttribute* New_ctor(::System::Type* switchLevelType);

  /// @brief Method .ctor, addr 0x296c51c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* switchLevelType);

  /// @brief Method set_SwitchLevelType, addr 0x296c548, size 0xc0, virtual false, abstract: false, final false
  inline void set_SwitchLevelType(::System::Type* value);

  // Ctor Parameters [CppParam { name: "", ty: "SwitchLevelAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SwitchLevelAttribute(SwitchLevelAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SwitchLevelAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SwitchLevelAttribute(SwitchLevelAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SwitchLevelAttribute();

public:
  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::SwitchLevelAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::SwitchLevelAttribute, ___type) == 0x10, "Offset mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::SwitchLevelAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::SwitchLevelAttribute*, "System.Diagnostics", "SwitchLevelAttribute");
