#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeConverter)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class __TypeConverter__SimplePropertyDescriptor;
}
namespace System::ComponentModel {
class __TypeConverter__StandardValuesCollection;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Array;
}
namespace System {
class Attribute;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::ComponentModel {
class __TypeConverter__SimplePropertyDescriptor;
}
namespace System::ComponentModel {
class __TypeConverter__StandardValuesCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::TypeConverter);
MARK_REF_PTR_T(::System::ComponentModel::__TypeConverter__SimplePropertyDescriptor);
MARK_REF_PTR_T(::System::ComponentModel::__TypeConverter__StandardValuesCollection);
// Type: ::SimplePropertyDescriptor
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeConverter::SimplePropertyDescriptor*
class CORDL_TYPE __TypeConverter__SimplePropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
  // Declarations
  __declspec(property(get = get_ComponentType))::System::Type* ComponentType;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_PropertyType))::System::Type* PropertyType;

  /// @brief Field componentType, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_componentType, put = __cordl_internal_set_componentType))::System::Type* componentType;

  /// @brief Field propertyType, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_propertyType, put = __cordl_internal_set_propertyType))::System::Type* propertyType;

  /// @brief Method CanResetValue, addr 0x2e5e360, size 0x144, virtual true, abstract: false, final false
  inline bool CanResetValue(::System::Object* component);

  static inline ::System::ComponentModel::__TypeConverter__SimplePropertyDescriptor* New_ctor(::System::Type* componentType, ::StringW name, ::System::Type* propertyType);

  static inline ::System::ComponentModel::__TypeConverter__SimplePropertyDescriptor* New_ctor(::System::Type* componentType, ::StringW name, ::System::Type* propertyType,
                                                                                              ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method ResetValue, addr 0x2e5e4a4, size 0x12c, virtual true, abstract: false, final false
  inline void ResetValue(::System::Object* component);

  /// @brief Method ShouldSerializeValue, addr 0x2e5e5d0, size 0x8, virtual true, abstract: false, final false
  inline bool ShouldSerializeValue(::System::Object* component);

  constexpr ::System::Type*& __cordl_internal_get_componentType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_componentType() const;

  constexpr ::System::Type*& __cordl_internal_get_propertyType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_propertyType() const;

  constexpr void __cordl_internal_set_componentType(::System::Type* value);

  constexpr void __cordl_internal_set_propertyType(::System::Type* value);

  /// @brief Method .ctor, addr 0x2e5e218, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* componentType, ::StringW name, ::System::Type* propertyType);

  /// @brief Method .ctor, addr 0x2e5e298, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* componentType, ::StringW name, ::System::Type* propertyType, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method get_ComponentType, addr 0x2e5e2cc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_IsReadOnly, addr 0x2e5e2d4, size 0x84, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_PropertyType, addr 0x2e5e358, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeConverter__SimplePropertyDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeConverter__SimplePropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeConverter__SimplePropertyDescriptor(__TypeConverter__SimplePropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeConverter__SimplePropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeConverter__SimplePropertyDescriptor(__TypeConverter__SimplePropertyDescriptor const&) = delete;

  /// @brief Field componentType, offset: 0x88, size: 0x8, def value: None
  ::System::Type* ___componentType;

  /// @brief Field propertyType, offset: 0x90, size: 0x8, def value: None
  ::System::Type* ___propertyType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeConverter__SimplePropertyDescriptor, 0x98>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeConverter__SimplePropertyDescriptor, ___componentType) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeConverter__SimplePropertyDescriptor, ___propertyType) == 0x90, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::StandardValuesCollection
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeConverter::StandardValuesCollection*
class CORDL_TYPE __TypeConverter__StandardValuesCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item))::System::Object* Item[];

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field valueArray, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_valueArray, put = __cordl_internal_set_valueArray))::System::Array* valueArray;

  /// @brief Field values, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values))::System::Collections::ICollection* values;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method CopyTo, addr 0x2e5e884, size 0xb8, virtual false, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x2e5e93c, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* New_ctor(::System::Collections::ICollection* values);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x2e5e9f0, size 0x4, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_Count, addr 0x2e5e9dc, size 0x4, virtual true, abstract: false, final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x2e5e9e0, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x2e5e9e8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2e5e9f4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Array*& __cordl_internal_get_valueArray();

  constexpr ::cordl_internals::to_const_pointer<::System::Array*> const& __cordl_internal_get_valueArray() const;

  constexpr ::System::Collections::ICollection*& __cordl_internal_get_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& __cordl_internal_get_values() const;

  constexpr void __cordl_internal_set_valueArray(::System::Array* value);

  constexpr void __cordl_internal_set_values(::System::Collections::ICollection* value);

  /// @brief Method .ctor, addr 0x2e47c68, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ICollection* values);

  /// @brief Method get_Count, addr 0x2e5e5d8, size 0xbc, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x2e5e694, size 0x1f0, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeConverter__StandardValuesCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeConverter__StandardValuesCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeConverter__StandardValuesCollection(__TypeConverter__StandardValuesCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeConverter__StandardValuesCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeConverter__StandardValuesCollection(__TypeConverter__StandardValuesCollection const&) = delete;

  /// @brief Field values, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ICollection* ___values;

  /// @brief Field valueArray, offset: 0x18, size: 0x8, def value: None
  ::System::Array* ___valueArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeConverter__StandardValuesCollection, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeConverter__StandardValuesCollection, ___values) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeConverter__StandardValuesCollection, ___valueArray) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::TypeConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::TypeConverter*
class CORDL_TYPE TypeConverter : public ::System::Object {
public:
  // Declarations
  using SimplePropertyDescriptor = ::System::ComponentModel::__TypeConverter__SimplePropertyDescriptor;

  using StandardValuesCollection = ::System::ComponentModel::__TypeConverter__StandardValuesCollection;

  /// @brief Field useCompatibleTypeConversion, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_useCompatibleTypeConversion, put = setStaticF_useCompatibleTypeConversion)) bool useCompatibleTypeConversion;

  /// @brief Method CanConvertFrom, addr 0x2e469a0, size 0x88, virtual true, abstract: false, final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method CanConvertFrom, addr 0x2e5d780, size 0x14, virtual false, abstract: false, final false
  inline bool CanConvertFrom(::System::Type* sourceType);

  /// @brief Method CanConvertTo, addr 0x2e49b68, size 0x88, virtual true, abstract: false, final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method CanConvertTo, addr 0x2e5d794, size 0x14, virtual false, abstract: false, final false
  inline bool CanConvertTo(::System::Type* destinationType);

  /// @brief Method ConvertFrom, addr 0x2e46d60, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertFrom, addr 0x2e5d7a8, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::Object* value);

  /// @brief Method ConvertFromInvariantString, addr 0x2e5d9e0, size 0x80, virtual false, abstract: false, final false
  inline ::System::Object* ConvertFromInvariantString(::System::ComponentModel::ITypeDescriptorContext* context, ::StringW text);

  /// @brief Method ConvertFromInvariantString, addr 0x2e5d958, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Object* ConvertFromInvariantString(::StringW text);

  /// @brief Method ConvertFromString, addr 0x2e5d9d4, size 0xc, virtual false, abstract: false, final false
  inline ::System::Object* ConvertFromString(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::StringW text);

  /// @brief Method ConvertFromString, addr 0x2e5da78, size 0x80, virtual false, abstract: false, final false
  inline ::System::Object* ConvertFromString(::System::ComponentModel::ITypeDescriptorContext* context, ::StringW text);

  /// @brief Method ConvertFromString, addr 0x2e5da60, size 0x18, virtual false, abstract: false, final false
  inline ::System::Object* ConvertFromString(::StringW text);

  /// @brief Method ConvertTo, addr 0x2e47218, size 0x238, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method ConvertTo, addr 0x2e5daf8, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::Object* value, ::System::Type* destinationType);

  /// @brief Method ConvertToInvariantString, addr 0x2e4e4bc, size 0x78, virtual false, abstract: false, final false
  inline ::StringW ConvertToInvariantString(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value);

  /// @brief Method ConvertToInvariantString, addr 0x2e5dc94, size 0x74, virtual false, abstract: false, final false
  inline ::StringW ConvertToInvariantString(::System::Object* value);

  /// @brief Method ConvertToString, addr 0x2e5dd08, size 0xdc, virtual false, abstract: false, final false
  inline ::StringW ConvertToString(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertToString, addr 0x2e5dde4, size 0x104, virtual false, abstract: false, final false
  inline ::StringW ConvertToString(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value);

  /// @brief Method ConvertToString, addr 0x2e47e40, size 0x100, virtual false, abstract: false, final false
  inline ::StringW ConvertToString(::System::Object* value);

  /// @brief Method CreateInstance, addr 0x2e5defc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* CreateInstance(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Collections::IDictionary* propertyValues);

  /// @brief Method CreateInstance, addr 0x2e5dee8, size 0x14, virtual false, abstract: false, final false
  inline ::System::Object* CreateInstance(::System::Collections::IDictionary* propertyValues);

  /// @brief Method GetConvertFromException, addr 0x2e5d824, size 0x134, virtual false, abstract: false, final false
  inline ::System::Exception* GetConvertFromException(::System::Object* value);

  /// @brief Method GetConvertToException, addr 0x2e5db14, size 0x180, virtual false, abstract: false, final false
  inline ::System::Exception* GetConvertToException(::System::Object* value, ::System::Type* destinationType);

  /// @brief Method GetCreateInstanceSupported, addr 0x2e5df04, size 0x10, virtual false, abstract: false, final false
  inline bool GetCreateInstanceSupported();

  /// @brief Method GetCreateInstanceSupported, addr 0x2e5df14, size 0x8, virtual true, abstract: false, final false
  inline bool GetCreateInstanceSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetProperties, addr 0x2e5df28, size 0xf0, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value);

  /// @brief Method GetProperties, addr 0x2e5e018, size 0x8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value,
                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetProperties, addr 0x2e5df1c, size 0xc, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* value);

  /// @brief Method GetPropertiesSupported, addr 0x2e5e020, size 0x10, virtual false, abstract: false, final false
  inline bool GetPropertiesSupported();

  /// @brief Method GetPropertiesSupported, addr 0x2e5e030, size 0x8, virtual true, abstract: false, final false
  inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValues, addr 0x2e5e038, size 0x10, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* GetStandardValues();

  /// @brief Method GetStandardValues, addr 0x2e5e048, size 0x8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesExclusive, addr 0x2e5e050, size 0x14, virtual false, abstract: false, final false
  inline bool GetStandardValuesExclusive();

  /// @brief Method GetStandardValuesExclusive, addr 0x2e5e064, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesSupported, addr 0x2e5e06c, size 0x14, virtual false, abstract: false, final false
  inline bool GetStandardValuesSupported();

  /// @brief Method GetStandardValuesSupported, addr 0x2e5e080, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method IsValid, addr 0x2e5e0a0, size 0x140, virtual true, abstract: false, final false
  inline bool IsValid(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value);

  /// @brief Method IsValid, addr 0x2e5e088, size 0x18, virtual false, abstract: false, final false
  inline bool IsValid(::System::Object* value);

  static inline ::System::ComponentModel::TypeConverter* New_ctor();

  /// @brief Method SortProperties, addr 0x2e5e1e0, size 0x38, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* SortProperties(::System::ComponentModel::PropertyDescriptorCollection* props, ::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method .ctor, addr 0x2e468e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF_useCompatibleTypeConversion();

  /// @brief Method get_UseCompatibleTypeConversion, addr 0x2e5d730, size 0x50, virtual false, abstract: false, final false
  static inline bool get_UseCompatibleTypeConversion();

  static inline void setStaticF_useCompatibleTypeConversion(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeConverter(TypeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeConverter(TypeConverter const&) = delete;

  /// @brief Field s_UseCompatibleTypeConverterBehavior offset 0xffffffff size 0x8
  static constexpr ::ConstString s_UseCompatibleTypeConverterBehavior{ u"UseCompatibleTypeConverterBehavior" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::TypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeConverter*, "System.ComponentModel", "TypeConverter");
NEED_NO_BOX(::System::ComponentModel::__TypeConverter__SimplePropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeConverter__SimplePropertyDescriptor*, "System.ComponentModel", "TypeConverter/SimplePropertyDescriptor");
NEED_NO_BOX(::System::ComponentModel::__TypeConverter__StandardValuesCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeConverter__StandardValuesCollection*, "System.ComponentModel", "TypeConverter/StandardValuesCollection");
