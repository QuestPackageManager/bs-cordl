#pragma once
// IWYU pragma private; include "System/ComponentModel/NullableConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
CORDL_MODULE_EXPORT(NullableConverter)
namespace System::Collections {
class IDictionary;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class TypeConverter_StandardValuesCollection;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class NullableConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::NullableConverter);
// Dependencies System.ComponentModel.TypeConverter
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.NullableConverter
class CORDL_TYPE NullableConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  __declspec(property(get = get_NullableType)) ::System::Type* NullableType;

  __declspec(property(get = get_UnderlyingType)) ::System::Type* UnderlyingType;

  __declspec(property(get = get_UnderlyingTypeConverter)) ::System::ComponentModel::TypeConverter* UnderlyingTypeConverter;

  /// @brief Field <NullableType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__NullableType_k__BackingField, put = __cordl_internal_set__NullableType_k__BackingField)) ::System::Type* _NullableType_k__BackingField;

  /// @brief Field <UnderlyingTypeConverter>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__UnderlyingTypeConverter_k__BackingField,
                      put = __cordl_internal_set__UnderlyingTypeConverter_k__BackingField)) ::System::ComponentModel::TypeConverter* _UnderlyingTypeConverter_k__BackingField;

  /// @brief Field <UnderlyingType>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__UnderlyingType_k__BackingField, put = __cordl_internal_set__UnderlyingType_k__BackingField)) ::System::Type* _UnderlyingType_k__BackingField;

  /// @brief Method CanConvertFrom, addr 0x61a614c, size 0x94, virtual true, abstract: false, final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method CanConvertTo, addr 0x61a62c8, size 0x94, virtual true, abstract: false, final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertFrom, addr 0x61a61e0, size 0xe8, virtual true, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo, addr 0x61a635c, size 0x194, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method CreateInstance, addr 0x61a64f0, size 0x18, virtual true, abstract: false, final false
  inline ::System::Object* CreateInstance(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Collections::IDictionary* propertyValues);

  /// @brief Method GetCreateInstanceSupported, addr 0x61a6508, size 0x18, virtual true, abstract: false, final false
  inline bool GetCreateInstanceSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetProperties, addr 0x61a6520, size 0x18, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value,
                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetPropertiesSupported, addr 0x61a6538, size 0x18, virtual true, abstract: false, final false
  inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValues, addr 0x61a6550, size 0x398, virtual true, abstract: false, final false
  inline ::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesExclusive, addr 0x61a68e8, size 0x1c, virtual true, abstract: false, final false
  inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesSupported, addr 0x61a6904, size 0x1c, virtual true, abstract: false, final false
  inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method IsValid, addr 0x61a6920, size 0x34, virtual true, abstract: false, final false
  inline bool IsValid(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value);

  static inline ::System::ComponentModel::NullableConverter* New_ctor(::System::Type* type);

  constexpr ::System::Type* const& __cordl_internal_get__NullableType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__NullableType_k__BackingField();

  constexpr ::System::ComponentModel::TypeConverter* const& __cordl_internal_get__UnderlyingTypeConverter_k__BackingField() const;

  constexpr ::System::ComponentModel::TypeConverter*& __cordl_internal_get__UnderlyingTypeConverter_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__UnderlyingType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__UnderlyingType_k__BackingField();

  constexpr void __cordl_internal_set__NullableType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__UnderlyingTypeConverter_k__BackingField(::System::ComponentModel::TypeConverter* value);

  constexpr void __cordl_internal_set__UnderlyingType_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x61a6048, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_NullableType, addr 0x61a6954, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_NullableType();

  /// @brief Method get_UnderlyingType, addr 0x61a695c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_UnderlyingType();

  /// @brief Method get_UnderlyingTypeConverter, addr 0x61a6964, size 0x8, virtual false, abstract: false, final false
  inline ::System::ComponentModel::TypeConverter* get_UnderlyingTypeConverter();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullableConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullableConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullableConverter(NullableConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullableConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullableConverter(NullableConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11256 };

  /// @brief Field <NullableType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____NullableType_k__BackingField;

  /// @brief Field <UnderlyingType>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____UnderlyingType_k__BackingField;

  /// @brief Field <UnderlyingTypeConverter>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::TypeConverter* ____UnderlyingTypeConverter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::NullableConverter, ____NullableType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::NullableConverter, ____UnderlyingType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::NullableConverter, ____UnderlyingTypeConverter_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::NullableConverter, 0x28>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::NullableConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::NullableConverter*, "System.ComponentModel", "NullableConverter");
