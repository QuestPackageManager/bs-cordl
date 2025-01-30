#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonExtensionDataAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(JsonExtensionDataAttribute)
// Forward declare root types
namespace Newtonsoft::Json {
class JsonExtensionDataAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonExtensionDataAttribute);
// Dependencies System.Attribute
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonExtensionDataAttribute
class CORDL_TYPE JsonExtensionDataAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_ReadData, put = set_ReadData)) bool ReadData;

  __declspec(property(get = get_WriteData, put = set_WriteData)) bool WriteData;

  /// @brief Field <ReadData>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__ReadData_k__BackingField, put = __cordl_internal_set__ReadData_k__BackingField)) bool _ReadData_k__BackingField;

  /// @brief Field <WriteData>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__WriteData_k__BackingField, put = __cordl_internal_set__WriteData_k__BackingField)) bool _WriteData_k__BackingField;

  static inline ::Newtonsoft::Json::JsonExtensionDataAttribute* New_ctor();

  constexpr bool const& __cordl_internal_get__ReadData_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ReadData_k__BackingField();

  constexpr bool const& __cordl_internal_get__WriteData_k__BackingField() const;

  constexpr bool& __cordl_internal_get__WriteData_k__BackingField();

  constexpr void __cordl_internal_set__ReadData_k__BackingField(bool value);

  constexpr void __cordl_internal_set__WriteData_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x3e7dc9c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ReadData, addr 0x3e7dc88, size 0x8, virtual false, abstract: false, final false
  inline bool get_ReadData();

  /// @brief Method get_WriteData, addr 0x3e7dc74, size 0x8, virtual false, abstract: false, final false
  inline bool get_WriteData();

  /// @brief Method set_ReadData, addr 0x3e7dc90, size 0xc, virtual false, abstract: false, final false
  inline void set_ReadData(bool value);

  /// @brief Method set_WriteData, addr 0x3e7dc7c, size 0xc, virtual false, abstract: false, final false
  inline void set_WriteData(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonExtensionDataAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonExtensionDataAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonExtensionDataAttribute(JsonExtensionDataAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonExtensionDataAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonExtensionDataAttribute(JsonExtensionDataAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10068 };

  /// @brief Field <WriteData>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____WriteData_k__BackingField;

  /// @brief Field <ReadData>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____ReadData_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonExtensionDataAttribute, ____WriteData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonExtensionDataAttribute, ____ReadData_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonExtensionDataAttribute, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonExtensionDataAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonExtensionDataAttribute*, "Newtonsoft.Json", "JsonExtensionDataAttribute");
