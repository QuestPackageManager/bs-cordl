#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Utilities/zzzz__PrimitiveTypeCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TypeInformation)
namespace Newtonsoft::Json::Utilities {
struct PrimitiveTypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class TypeInformation;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::TypeInformation);
// Type: Newtonsoft.Json.Utilities::TypeInformation
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11870))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11871))
// CS Name: ::Newtonsoft.Json.Utilities::TypeInformation*
class CORDL_TYPE TypeInformation : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Type>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Type_k__BackingField, put = __set__Type_k__BackingField))::System::Type* _Type_k__BackingField;

  /// @brief Field <TypeCode>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__TypeCode_k__BackingField, put = __set__TypeCode_k__BackingField))::Newtonsoft::Json::Utilities::PrimitiveTypeCode _TypeCode_k__BackingField;

  __declspec(property(get = get_Type, put = set_Type))::System::Type* Type;

  __declspec(property(get = get_TypeCode, put = set_TypeCode))::Newtonsoft::Json::Utilities::PrimitiveTypeCode TypeCode;

  constexpr ::System::Type*& __get__Type_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__Type_k__BackingField() const;

  constexpr void __set__Type_k__BackingField(::System::Type* value);

  constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode& __get__TypeCode_k__BackingField();

  constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const& __get__TypeCode_k__BackingField() const;

  constexpr void __set__TypeCode_k__BackingField(::Newtonsoft::Json::Utilities::PrimitiveTypeCode value);

  /// @brief Method get_Type, addr 0x265bc70, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

  /// @brief Method set_Type, addr 0x265bc78, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::System::Type* value);

  /// @brief Method get_TypeCode, addr 0x265bc80, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode get_TypeCode();

  /// @brief Method set_TypeCode, addr 0x265bc88, size 0x8, virtual false, abstract: false, final false
  inline void set_TypeCode(::Newtonsoft::Json::Utilities::PrimitiveTypeCode value);

  static inline ::Newtonsoft::Json::Utilities::TypeInformation* New_ctor();

  /// @brief Method .ctor, addr 0x265bc90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TypeInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeInformation(TypeInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeInformation(TypeInformation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeInformation();

public:
  /// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  /// @brief Field <TypeCode>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::Newtonsoft::Json::Utilities::PrimitiveTypeCode ____TypeCode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::TypeInformation, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::TypeInformation, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::TypeInformation, ____TypeCode_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::TypeInformation);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::TypeInformation*, "Newtonsoft.Json.Utilities", "TypeInformation");
