#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class TypeConverter;
}
namespace System::ComponentModel {
class __TypeConverter__StandardValuesCollection;
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
// Type: System.ComponentModel::NullableConverter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::NullableConverter*
class CORDL_TYPE NullableConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  __declspec(property(get = get_NullableType))::System::Type* NullableType;

  __declspec(property(get = get_UnderlyingType))::System::Type* UnderlyingType;

  __declspec(property(get = get_UnderlyingTypeConverter))::System::ComponentModel::TypeConverter* UnderlyingTypeConverter;

  /// @brief Field <NullableType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__NullableType_k__BackingField, put = __cordl_internal_set__NullableType_k__BackingField))::System::Type* _NullableType_k__BackingField;

  /// @brief Field <UnderlyingTypeConverter>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__UnderlyingTypeConverter_k__BackingField,
                      put = __cordl_internal_set__UnderlyingTypeConverter_k__BackingField))::System::ComponentModel::TypeConverter* _UnderlyingTypeConverter_k__BackingField;

  /// @brief Field <UnderlyingType>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__UnderlyingType_k__BackingField, put = __cordl_internal_set__UnderlyingType_k__BackingField))::System::Type* _UnderlyingType_k__BackingField;

  /// @brief Method CanConvertFrom, addr 0x2e40480, size 0xc4, virtual true, abstract: false, final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method CanConvertTo, addr 0x2e40680, size 0xc4, virtual true, abstract: false, final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertFrom, addr 0x2e40544, size 0x13c, virtual true, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo, addr 0x2e40744, size 0x1f0, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method CreateInstance, addr 0x2e40934, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* CreateInstance(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Collections::IDictionary* propertyValues);

  /// @brief Method GetCreateInstanceSupported, addr 0x2e40958, size 0x24, virtual true, abstract: false, final false
  inline bool GetCreateInstanceSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetProperties, addr 0x2e4097c, size 0x24, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value,
                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetPropertiesSupported, addr 0x2e409a0, size 0x24, virtual true, abstract: false, final false
  inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValues, addr 0x2e409c4, size 0x3b0, virtual true, abstract: false, final false
  inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesExclusive, addr 0x2e40d74, size 0x28, virtual true, abstract: false, final false
  inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesSupported, addr 0x2e40d9c, size 0x28, virtual true, abstract: false, final false
  inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method IsValid, addr 0x2e40dc4, size 0x34, virtual true, abstract: false, final false
  inline bool IsValid(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value);

  static inline ::System::ComponentModel::NullableConverter* New_ctor(::System::Type* type);

  constexpr ::System::Type*& __cordl_internal_get__NullableType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__NullableType_k__BackingField() const;

  constexpr ::System::ComponentModel::TypeConverter*& __cordl_internal_get__UnderlyingTypeConverter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::TypeConverter*> const& __cordl_internal_get__UnderlyingTypeConverter_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__UnderlyingType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__UnderlyingType_k__BackingField() const;

  constexpr void __cordl_internal_set__NullableType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__UnderlyingTypeConverter_k__BackingField(::System::ComponentModel::TypeConverter* value);

  constexpr void __cordl_internal_set__UnderlyingType_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x2e40354, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_NullableType, addr 0x2e40df8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_NullableType();

  /// @brief Method get_UnderlyingType, addr 0x2e40e00, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_UnderlyingType();

  /// @brief Method get_UnderlyingTypeConverter, addr 0x2e40e08, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field <NullableType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____NullableType_k__BackingField;

  /// @brief Field <UnderlyingType>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____UnderlyingType_k__BackingField;

  /// @brief Field <UnderlyingTypeConverter>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::TypeConverter* ____UnderlyingTypeConverter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::NullableConverter, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::NullableConverter, ____NullableType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::NullableConverter, ____UnderlyingType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::NullableConverter, ____UnderlyingTypeConverter_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::NullableConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::NullableConverter*, "System.ComponentModel", "NullableConverter");
