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
namespace System::ComponentModel {
class __TypeConverter__SimplePropertyDescriptor;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Object;
}
namespace System::ComponentModel {
class __TypeConverter__StandardValuesCollection;
}
namespace System {
class Attribute;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Type;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Exception;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9444))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9478))
// CS Name: ::TypeConverter::SimplePropertyDescriptor*
class CORDL_TYPE __TypeConverter__SimplePropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
  // Declarations
  /// @brief Field componentType, offset 0x88, size 0x8
  __declspec(property(get = __get_componentType, put = __set_componentType))::System::Type* componentType;

  /// @brief Field propertyType, offset 0x90, size 0x8
  __declspec(property(get = __get_propertyType, put = __set_propertyType))::System::Type* propertyType;

  __declspec(property(get = get_ComponentType))::System::Type* ComponentType;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_PropertyType))::System::Type* PropertyType;

  constexpr ::System::Type*& __get_componentType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_componentType() const;

  constexpr void __set_componentType(::System::Type* value);

  constexpr ::System::Type*& __get_propertyType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_propertyType() const;

  constexpr void __set_propertyType(::System::Type* value);

  static inline ::System::ComponentModel::__TypeConverter__SimplePropertyDescriptor* New_ctor(::System::Type* componentType, ::StringW name, ::System::Type* propertyType,
                                                                                              ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method .ctor addr 0x292c590 size 0x34 virtual false final false
  inline void _ctor(::System::Type* componentType, ::StringW name, ::System::Type* propertyType, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method get_ComponentType addr 0x292c5c4 size 0x8 virtual true final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_IsReadOnly addr 0x292c5cc size 0x84 virtual true final false
  inline bool get_IsReadOnly();

  /// @brief Method get_PropertyType addr 0x292c650 size 0x8 virtual true final false
  inline ::System::Type* get_PropertyType();

  /// @brief Method CanResetValue addr 0x292c658 size 0x144 virtual true final false
  inline bool CanResetValue(::System::Object* component);

  /// @brief Method ResetValue addr 0x292c79c size 0x12c virtual true final false
  inline void ResetValue(::System::Object* component);

  /// @brief Method ShouldSerializeValue addr 0x292c8c8 size 0x8 virtual true final false
  inline bool ShouldSerializeValue(::System::Object* component);

  // Ctor Parameters [CppParam { name: "", ty: "__TypeConverter__SimplePropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeConverter__SimplePropertyDescriptor(__TypeConverter__SimplePropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeConverter__SimplePropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeConverter__SimplePropertyDescriptor(__TypeConverter__SimplePropertyDescriptor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeConverter__SimplePropertyDescriptor();

public:
  /// @brief Field componentType, offset: 0x88, size: 0x8, def value: None
  ::System::Type* ___componentType;

  /// @brief Field propertyType, offset: 0x90, size: 0x8, def value: None
  ::System::Type* ___propertyType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeConverter__SimplePropertyDescriptor, 0x98>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: ::StandardValuesCollection
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9479))
// CS Name: ::TypeConverter::StandardValuesCollection*
class CORDL_TYPE __TypeConverter__StandardValuesCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field values, offset 0x10, size 0x8
  __declspec(property(get = __get_values, put = __set_values))::System::Collections::ICollection* values;

  /// @brief Field valueArray, offset 0x18, size 0x8
  __declspec(property(get = __get_valueArray, put = __set_valueArray))::System::Array* valueArray;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::ICollection*& __get_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& __get_values() const;

  constexpr void __set_values(::System::Collections::ICollection* value);

  constexpr ::System::Array*& __get_valueArray();

  constexpr ::cordl_internals::to_const_pointer<::System::Array*> const& __get_valueArray() const;

  constexpr void __set_valueArray(::System::Array* value);

  static inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* New_ctor(::System::Collections::ICollection* values);

  /// @brief Method .ctor addr 0x291695c size 0xb0 virtual false final false
  inline void _ctor(::System::Collections::ICollection* values);

  /// @brief Method get_Count addr 0x292c8d0 size 0xbc virtual false final false
  inline int32_t get_Count();

  /// @brief Method CopyTo addr 0x292c98c size 0xb8 virtual false final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator addr 0x292ca44 size 0xa0 virtual false final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method System.Collections.ICollection.get_Count addr 0x292cae4 size 0x4 virtual true final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x292cae8 size 0x8 virtual true final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x292caf0 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.ICollection.CopyTo addr 0x292caf8 size 0x4 virtual true final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x292cafc size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__TypeConverter__StandardValuesCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeConverter__StandardValuesCollection(__TypeConverter__StandardValuesCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeConverter__StandardValuesCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeConverter__StandardValuesCollection(__TypeConverter__StandardValuesCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeConverter__StandardValuesCollection();

public:
  /// @brief Field values, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ICollection* ___values;

  /// @brief Field valueArray, offset: 0x18, size: 0x8, def value: None
  ::System::Array* ___valueArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeConverter__StandardValuesCollection, 0x20>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::TypeConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9480))
// CS Name: ::System.ComponentModel::TypeConverter*
class CORDL_TYPE TypeConverter : public ::System::Object {
public:
  // Declarations
  using StandardValuesCollection = ::System::ComponentModel::__TypeConverter__StandardValuesCollection;

  using SimplePropertyDescriptor = ::System::ComponentModel::__TypeConverter__SimplePropertyDescriptor;

  /// @brief Field useCompatibleTypeConversion, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_useCompatibleTypeConversion, put = setStaticF_useCompatibleTypeConversion)) bool useCompatibleTypeConversion;

  static inline void setStaticF_useCompatibleTypeConversion(bool value);

  static inline bool getStaticF_useCompatibleTypeConversion();

  /// @brief Method get_UseCompatibleTypeConversion addr 0x292baa8 size 0x50 virtual false final false
  static inline bool get_UseCompatibleTypeConversion();

  /// @brief Method CanConvertFrom addr 0x292baf8 size 0x14 virtual false final false
  inline bool CanConvertFrom(::System::Type* sourceType);

  /// @brief Method CanConvertFrom addr 0x2915694 size 0x88 virtual true final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method CanConvertTo addr 0x292bb0c size 0x14 virtual false final false
  inline bool CanConvertTo(::System::Type* destinationType);

  /// @brief Method CanConvertTo addr 0x291885c size 0x88 virtual true final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertFrom addr 0x292bb20 size 0x7c virtual false final false
  inline ::System::Object* ConvertFrom(::System::Object* value);

  /// @brief Method ConvertFrom addr 0x2915a54 size 0x6c virtual true final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertFromInvariantString addr 0x292bcd0 size 0x7c virtual false final false
  inline ::System::Object* ConvertFromInvariantString(::StringW text);

  /// @brief Method ConvertFromInvariantString addr 0x292bd58 size 0x80 virtual false final false
  inline ::System::Object* ConvertFromInvariantString(::System::ComponentModel::ITypeDescriptorContext* context, ::StringW text);

  /// @brief Method ConvertFromString addr 0x292bdd8 size 0x18 virtual false final false
  inline ::System::Object* ConvertFromString(::StringW text);

  /// @brief Method ConvertFromString addr 0x292bdf0 size 0x80 virtual false final false
  inline ::System::Object* ConvertFromString(::System::ComponentModel::ITypeDescriptorContext* context, ::StringW text);

  /// @brief Method ConvertFromString addr 0x292bd4c size 0xc virtual false final false
  inline ::System::Object* ConvertFromString(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::StringW text);

  /// @brief Method ConvertTo addr 0x292be70 size 0x1c virtual false final false
  inline ::System::Object* ConvertTo(::System::Object* value, ::System::Type* destinationType);

  /// @brief Method ConvertTo addr 0x2915f0c size 0x238 virtual true final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method ConvertToInvariantString addr 0x292c00c size 0x74 virtual false final false
  inline ::StringW ConvertToInvariantString(::System::Object* value);

  /// @brief Method ConvertToInvariantString addr 0x291c9f4 size 0x78 virtual false final false
  inline ::StringW ConvertToInvariantString(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value);

  /// @brief Method ConvertToString addr 0x2916b34 size 0x100 virtual false final false
  inline ::StringW ConvertToString(::System::Object* value);

  /// @brief Method ConvertToString addr 0x292c15c size 0x104 virtual false final false
  inline ::StringW ConvertToString(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value);

  /// @brief Method ConvertToString addr 0x292c080 size 0xdc virtual false final false
  inline ::StringW ConvertToString(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method CreateInstance addr 0x292c260 size 0x14 virtual false final false
  inline ::System::Object* CreateInstance(::System::Collections::IDictionary* propertyValues);

  /// @brief Method CreateInstance addr 0x292c274 size 0x8 virtual true final false
  inline ::System::Object* CreateInstance(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Collections::IDictionary* propertyValues);

  /// @brief Method GetConvertFromException addr 0x292bb9c size 0x134 virtual false final false
  inline ::System::Exception* GetConvertFromException(::System::Object* value);

  /// @brief Method GetConvertToException addr 0x292be8c size 0x180 virtual false final false
  inline ::System::Exception* GetConvertToException(::System::Object* value, ::System::Type* destinationType);

  /// @brief Method GetCreateInstanceSupported addr 0x292c27c size 0x10 virtual false final false
  inline bool GetCreateInstanceSupported();

  /// @brief Method GetCreateInstanceSupported addr 0x292c28c size 0x8 virtual true final false
  inline bool GetCreateInstanceSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetProperties addr 0x292c294 size 0xc virtual false final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* value);

  /// @brief Method GetProperties addr 0x292c2a0 size 0xf0 virtual false final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value);

  /// @brief Method GetProperties addr 0x292c390 size 0x8 virtual true final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value,
                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetPropertiesSupported addr 0x292c398 size 0x10 virtual false final false
  inline bool GetPropertiesSupported();

  /// @brief Method GetPropertiesSupported addr 0x292c3a8 size 0x8 virtual true final false
  inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValues addr 0x292c3b0 size 0x10 virtual false final false
  inline ::System::Collections::ICollection* GetStandardValues();

  /// @brief Method GetStandardValues addr 0x292c3c0 size 0x8 virtual true final false
  inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesExclusive addr 0x292c3c8 size 0x14 virtual false final false
  inline bool GetStandardValuesExclusive();

  /// @brief Method GetStandardValuesExclusive addr 0x292c3dc size 0x8 virtual true final false
  inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesSupported addr 0x292c3e4 size 0x14 virtual false final false
  inline bool GetStandardValuesSupported();

  /// @brief Method GetStandardValuesSupported addr 0x292c3f8 size 0x8 virtual true final false
  inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method IsValid addr 0x292c400 size 0x18 virtual false final false
  inline bool IsValid(::System::Object* value);

  /// @brief Method IsValid addr 0x292c418 size 0x140 virtual true final false
  inline bool IsValid(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value);

  /// @brief Method SortProperties addr 0x292c558 size 0x38 virtual false final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* SortProperties(::System::ComponentModel::PropertyDescriptorCollection* props, ::ArrayW<::StringW, ::Array<::StringW>*> names);

  static inline ::System::ComponentModel::TypeConverter* New_ctor();

  /// @brief Method .ctor addr 0x29155dc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TypeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeConverter(TypeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeConverter(TypeConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeConverter();

public:
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
