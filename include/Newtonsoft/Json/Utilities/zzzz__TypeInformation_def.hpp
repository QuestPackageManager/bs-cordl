#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/TypeInformation.hpp"
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
// Dependencies Newtonsoft.Json.Utilities.PrimitiveTypeCode, System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.TypeInformation
class CORDL_TYPE TypeInformation : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Type)) ::System::Type* Type;

  __declspec(property(get = get_TypeCode)) ::Newtonsoft::Json::Utilities::PrimitiveTypeCode TypeCode;

  /// @brief Field <TypeCode>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__TypeCode_k__BackingField,
                      put = __cordl_internal_set__TypeCode_k__BackingField)) ::Newtonsoft::Json::Utilities::PrimitiveTypeCode _TypeCode_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::System::Type* _Type_k__BackingField;

  static inline ::Newtonsoft::Json::Utilities::TypeInformation* New_ctor(::System::Type* type, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode typeCode);

  constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const& __cordl_internal_get__TypeCode_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode& __cordl_internal_get__TypeCode_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__TypeCode_k__BackingField(::Newtonsoft::Json::Utilities::PrimitiveTypeCode value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x3ebbb98, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode typeCode);

  /// @brief Method get_Type, addr 0x3ebbb88, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

  /// @brief Method get_TypeCode, addr 0x3ebbb90, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode get_TypeCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeInformation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeInformation(TypeInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeInformation(TypeInformation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10196 };

  /// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  /// @brief Field <TypeCode>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::Newtonsoft::Json::Utilities::PrimitiveTypeCode ____TypeCode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::TypeInformation, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::TypeInformation, ____TypeCode_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::TypeInformation, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::TypeInformation);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::TypeInformation*, "Newtonsoft.Json.Utilities", "TypeInformation");
