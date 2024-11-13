#pragma once
// IWYU pragma private; include "System/Data/Common/DataStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__StorageType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataStorage)
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System::Collections {
class BitArray;
}
namespace System::Data::Common {
struct StorageType;
}
namespace System::Data {
struct AggregateType;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
struct DataSetDateTime;
}
namespace System::Data {
class DataTable;
}
namespace System::Xml::Serialization {
class XmlRootAttribute;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Tuple_4;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data::Common {
class DataStorage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::DataStorage);
// Type: System.Data.Common::DataStorage
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::System.Data.Common::DataStorage*
class CORDL_TYPE DataStorage : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DateTimeMode)) ::System::Data::DataSetDateTime DateTimeMode;

  __declspec(property(get = get_FormatProvider)) ::System::IFormatProvider* FormatProvider;

  /// @brief Field _column, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__column, put = __cordl_internal_set__column)) ::System::Data::DataColumn* _column;

  /// @brief Field _dataType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__dataType, put = __cordl_internal_set__dataType)) ::System::Type* _dataType;

  /// @brief Field _dbNullBits, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__dbNullBits, put = __cordl_internal_set__dbNullBits)) ::System::Collections::BitArray* _dbNullBits;

  /// @brief Field _defaultValue, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultValue, put = __cordl_internal_set__defaultValue)) ::System::Object* _defaultValue;

  /// @brief Field _isCloneable, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__isCloneable, put = __cordl_internal_set__isCloneable)) bool _isCloneable;

  /// @brief Field _isCustomDefinedType, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get__isCustomDefinedType, put = __cordl_internal_set__isCustomDefinedType)) bool _isCustomDefinedType;

  /// @brief Field _isStringType, offset 0x4a, size 0x1
  __declspec(property(get = __cordl_internal_get__isStringType, put = __cordl_internal_set__isStringType)) bool _isStringType;

  /// @brief Field _isValueType, offset 0x4b, size 0x1
  __declspec(property(get = __cordl_internal_get__isValueType, put = __cordl_internal_set__isValueType)) bool _isValueType;

  /// @brief Field _nullValue, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__nullValue, put = __cordl_internal_set__nullValue)) ::System::Object* _nullValue;

  /// @brief Field _storageTypeCode, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__storageTypeCode, put = __cordl_internal_set__storageTypeCode)) ::System::Data::Common::StorageType _storageTypeCode;

  /// @brief Field _table, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table)) ::System::Data::DataTable* _table;

  /// @brief Field s_inspectTypeForInterfaces, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_inspectTypeForInterfaces,
                             put = setStaticF_s_inspectTypeForInterfaces)) ::System::Func_2<::System::Type*, ::System::Tuple_4<bool, bool, bool, bool>*>* s_inspectTypeForInterfaces;

  /// @brief Field s_storageClassType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_storageClassType, put = setStaticF_s_storageClassType)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> s_storageClassType;

  /// @brief Field s_typeImplementsInterface, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_s_typeImplementsInterface,
      put = setStaticF_s_typeImplementsInterface)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Tuple_4<bool, bool, bool, bool>*>* s_typeImplementsInterface;

  /// @brief Method Aggregate, addr 0x417adc0, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> recordNos, ::System::Data::AggregateType kind);

  /// @brief Method AggregateCount, addr 0x417d8d0, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Object* AggregateCount(::ArrayW<int32_t, ::Array<int32_t>*> recordNos);

  /// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareBits, addr 0x4178fbc, size 0x70, virtual false, abstract: false, final false
  inline int32_t CompareBits(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareValueTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t CompareValueTo(int32_t recordNo1, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x417da08, size 0x3c, virtual true, abstract: false, final false
  inline void ConvertObjectToXml(::System::Object* value, ::System::Xml::XmlWriter* xmlWriter, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib);

  /// @brief Method ConvertValue, addr 0x417d99c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* ConvertValue(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method ConvertXmlToObject, addr 0x417d9c8, size 0x40, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::System::Xml::XmlReader* xmlReader, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib);

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyBits, addr 0x417a1f4, size 0x40, virtual false, abstract: false, final false
  inline void CopyBits(int32_t srcRecordNo, int32_t dstRecordNo);

  /// @brief Method CopyValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method CopyValueInternal, addr 0x417f93c, size 0x10, virtual false, abstract: false, final false
  inline void CopyValueInternal(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method CreateStorage, addr 0x417da44, size 0x76c, virtual false, abstract: false, final false
  static inline ::System::Data::Common::DataStorage* CreateStorage(::System::Data::DataColumn* column, ::System::Type* dataType, ::System::Data::Common::StorageType typeCode);

  /// @brief Method DetermineIfValueType, addr 0x417d878, size 0x3c, virtual false, abstract: false, final false
  static inline bool DetermineIfValueType(::System::Data::Common::StorageType typeCode, ::System::Type* dataType);

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* Get(int32_t recordNo);

  /// @brief Method GetBits, addr 0x417a2f0, size 0x38, virtual false, abstract: false, final false
  inline ::System::Object* GetBits(int32_t recordNo);

  /// @brief Method GetEmptyStorage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  /// @brief Method GetEmptyStorageInternal, addr 0x417f92c, size 0x10, virtual false, abstract: false, final false
  inline ::System::Object* GetEmptyStorageInternal(int32_t recordCount);

  /// @brief Method GetQualifiedName, addr 0x417faa0, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW GetQualifiedName(::System::Type* type);

  /// @brief Method GetStorageType, addr 0x417f0e0, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Data::Common::StorageType GetStorageType(::System::Type* dataType);

  /// @brief Method GetStringLength, addr 0x417d9a4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetStringLength(int32_t record);

  /// @brief Method GetType, addr 0x417f964, size 0x13c, virtual false, abstract: false, final false
  static inline ::System::Type* GetType(::StringW value);

  /// @brief Method GetTypeStorage, addr 0x417f1fc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Type* GetTypeStorage(::System::Data::Common::StorageType storageType);

  /// @brief Method HasValue, addr 0x4179154, size 0x28, virtual false, abstract: false, final false
  inline bool HasValue(int32_t recordNo);

  /// @brief Method ImplementsINullableValue, addr 0x417f704, size 0xd4, virtual false, abstract: false, final false
  static inline bool ImplementsINullableValue(::System::Data::Common::StorageType typeCode, ::System::Type* dataType);

  /// @brief Method ImplementsInterfaces, addr 0x417f3f8, size 0x154, virtual false, abstract: false, final false
  static inline void ImplementsInterfaces(::System::Data::Common::StorageType typeCode, ::System::Type* dataType, ByRef<bool> sqlType, ByRef<bool> nullable, ByRef<bool> xmlSerializable,
                                          ByRef<bool> changeTracking, ByRef<bool> revertibleChangeTracking);

  /// @brief Method InspectTypeForInterfaces, addr 0x417f54c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Tuple_4<bool, bool, bool, bool>* InspectTypeForInterfaces(::System::Type* dataType);

  /// @brief Method IsNull, addr 0x417d9ac, size 0x1c, virtual true, abstract: false, final false
  inline bool IsNull(int32_t recordNo);

  /// @brief Method IsObjectNull, addr 0x417f7d8, size 0xa0, virtual false, abstract: false, final false
  static inline bool IsObjectNull(::System::Object* value);

  /// @brief Method IsObjectSqlNull, addr 0x417f878, size 0xb4, virtual false, abstract: false, final false
  static inline bool IsObjectSqlNull(::System::Object* value);

  /// @brief Method IsSqlType, addr 0x417f2fc, size 0xfc, virtual false, abstract: false, final false
  static inline bool IsSqlType(::System::Type* dataType);

  /// @brief Method IsSqlType, addr 0x417f2f0, size 0xc, virtual false, abstract: false, final false
  static inline bool IsSqlType(::System::Data::Common::StorageType storageType);

  /// @brief Method IsTypeCustomType, addr 0x417f278, size 0x78, virtual false, abstract: false, final false
  static inline bool IsTypeCustomType(::System::Type* type);

  /// @brief Method IsTypeCustomType, addr 0x417d854, size 0x24, virtual false, abstract: false, final false
  static inline bool IsTypeCustomType(::System::Data::Common::StorageType typeCode);

  static inline ::System::Data::Common::DataStorage* New_ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* defaultValue, ::System::Object* nullValue, bool isICloneable,
                                                              ::System::Data::Common::StorageType storageType);

  static inline ::System::Data::Common::DataStorage* New_ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* defaultValue, ::System::Object* nullValue,
                                                              ::System::Data::Common::StorageType storageType);

  static inline ::System::Data::Common::DataStorage* New_ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* defaultValue,
                                                              ::System::Data::Common::StorageType storageType);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Set(int32_t recordNo, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x417a534, size 0x7c, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetNullBit, addr 0x417a454, size 0x20, virtual false, abstract: false, final false
  inline void SetNullBit(int32_t recordNo, bool flag);

  /// @brief Method SetNullStorage, addr 0x417f95c, size 0x8, virtual false, abstract: false, final false
  inline void SetNullStorage(::System::Collections::BitArray* nullbits);

  /// @brief Method SetStorage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  /// @brief Method SetStorageInternal, addr 0x417f94c, size 0x10, virtual false, abstract: false, final false
  inline void SetStorageInternal(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr ::System::Data::DataColumn*& __cordl_internal_get__column();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataColumn*> const& __cordl_internal_get__column() const;

  constexpr ::System::Type*& __cordl_internal_get__dataType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__dataType() const;

  constexpr ::System::Collections::BitArray*& __cordl_internal_get__dbNullBits();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::BitArray*> const& __cordl_internal_get__dbNullBits() const;

  constexpr ::System::Object*& __cordl_internal_get__defaultValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__defaultValue() const;

  constexpr bool const& __cordl_internal_get__isCloneable() const;

  constexpr bool& __cordl_internal_get__isCloneable();

  constexpr bool const& __cordl_internal_get__isCustomDefinedType() const;

  constexpr bool& __cordl_internal_get__isCustomDefinedType();

  constexpr bool const& __cordl_internal_get__isStringType() const;

  constexpr bool& __cordl_internal_get__isStringType();

  constexpr bool const& __cordl_internal_get__isValueType() const;

  constexpr bool& __cordl_internal_get__isValueType();

  constexpr ::System::Object*& __cordl_internal_get__nullValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__nullValue() const;

  constexpr ::System::Data::Common::StorageType const& __cordl_internal_get__storageTypeCode() const;

  constexpr ::System::Data::Common::StorageType& __cordl_internal_get__storageTypeCode();

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& __cordl_internal_get__table() const;

  constexpr void __cordl_internal_set__column(::System::Data::DataColumn* value);

  constexpr void __cordl_internal_set__dataType(::System::Type* value);

  constexpr void __cordl_internal_set__dbNullBits(::System::Collections::BitArray* value);

  constexpr void __cordl_internal_set__defaultValue(::System::Object* value);

  constexpr void __cordl_internal_set__isCloneable(bool value);

  constexpr void __cordl_internal_set__isCustomDefinedType(bool value);

  constexpr void __cordl_internal_set__isStringType(bool value);

  constexpr void __cordl_internal_set__isValueType(bool value);

  constexpr void __cordl_internal_set__nullValue(::System::Object* value);

  constexpr void __cordl_internal_set__storageTypeCode(::System::Data::Common::StorageType value);

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x417d73c, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* defaultValue, ::System::Object* nullValue, bool isICloneable,
                    ::System::Data::Common::StorageType storageType);

  /// @brief Method .ctor, addr 0x417d848, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* defaultValue, ::System::Object* nullValue, ::System::Data::Common::StorageType storageType);

  /// @brief Method .ctor, addr 0x4178de0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* defaultValue, ::System::Data::Common::StorageType storageType);

  static inline ::System::Func_2<::System::Type*, ::System::Tuple_4<bool, bool, bool, bool>*>* getStaticF_s_inspectTypeForInterfaces();

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_s_storageClassType();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Tuple_4<bool, bool, bool, bool>*>* getStaticF_s_typeImplementsInterface();

  /// @brief Method get_DateTimeMode, addr 0x417d8b4, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Data::DataSetDateTime get_DateTimeMode();

  /// @brief Method get_FormatProvider, addr 0x417a184, size 0x1c, virtual false, abstract: false, final false
  inline ::System::IFormatProvider* get_FormatProvider();

  static inline void setStaticF_s_inspectTypeForInterfaces(::System::Func_2<::System::Type*, ::System::Tuple_4<bool, bool, bool, bool>*>* value);

  static inline void setStaticF_s_storageClassType(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline void setStaticF_s_typeImplementsInterface(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Tuple_4<bool, bool, bool, bool>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataStorage(DataStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataStorage(DataStorage const&) = delete;

  /// @brief Field _column, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataColumn* ____column;

  /// @brief Field _table, offset: 0x18, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  /// @brief Field _dataType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ____dataType;

  /// @brief Field _storageTypeCode, offset: 0x28, size: 0x4, def value: None
  ::System::Data::Common::StorageType ____storageTypeCode;

  /// @brief Field _dbNullBits, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::BitArray* ____dbNullBits;

  /// @brief Field _defaultValue, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ____defaultValue;

  /// @brief Field _nullValue, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ____nullValue;

  /// @brief Field _isCloneable, offset: 0x48, size: 0x1, def value: None
  bool ____isCloneable;

  /// @brief Field _isCustomDefinedType, offset: 0x49, size: 0x1, def value: None
  bool ____isCustomDefinedType;

  /// @brief Field _isStringType, offset: 0x4a, size: 0x1, def value: None
  bool ____isStringType;

  /// @brief Field _isValueType, offset: 0x4b, size: 0x1, def value: None
  bool ____isValueType;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11492 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::DataStorage, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Data::Common::DataStorage, ____column) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::Common::DataStorage, ____table) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::Common::DataStorage, ____dataType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::Common::DataStorage, ____storageTypeCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::Common::DataStorage, ____dbNullBits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::Common::DataStorage, ____defaultValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::Common::DataStorage, ____nullValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::Common::DataStorage, ____isCloneable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::Common::DataStorage, ____isCustomDefinedType) == 0x49, "Offset mismatch!");

static_assert(offsetof(::System::Data::Common::DataStorage, ____isStringType) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::System::Data::Common::DataStorage, ____isValueType) == 0x4b, "Offset mismatch!");

} // namespace System::Data::Common
NEED_NO_BOX(::System::Data::Common::DataStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::DataStorage*, "System.Data.Common", "DataStorage");
