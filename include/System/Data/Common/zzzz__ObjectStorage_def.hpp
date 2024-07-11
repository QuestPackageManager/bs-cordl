#pragma once
// IWYU pragma private; include "System/Data/Common/ObjectStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectStorage)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections {
class BitArray;
}
namespace System::Data::Common {
struct __ObjectStorage__Families;
}
namespace System::Data::Common {
class __ObjectStorage__TempAssemblyComparer;
}
namespace System::Data {
struct AggregateType;
}
namespace System::Data {
class DataColumn;
}
namespace System::Xml::Serialization {
class XmlRootAttribute;
}
namespace System::Xml::Serialization {
class XmlSerializerFactory;
}
namespace System::Xml::Serialization {
class XmlSerializer;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data::Common {
struct __ObjectStorage__Families;
}
namespace System::Data::Common {
class ObjectStorage;
}
namespace System::Data::Common {
class __ObjectStorage__TempAssemblyComparer;
}
// Write type traits
MARK_VAL_T(::System::Data::Common::__ObjectStorage__Families);
MARK_REF_PTR_T(::System::Data::Common::ObjectStorage);
MARK_REF_PTR_T(::System::Data::Common::__ObjectStorage__TempAssemblyComparer);
// Type: ::Families
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: true
// CS Name: ::ObjectStorage::Families
struct CORDL_TYPE __ObjectStorage__Families {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ObjectStorage__Families_Unwrapped
  enum struct ____ObjectStorage__Families_Unwrapped : int32_t {
    __E_DATETIME = static_cast<int32_t>(0x0),
    __E_NUMBER = static_cast<int32_t>(0x1),
    __E_STRING = static_cast<int32_t>(0x2),
    __E_BOOLEAN = static_cast<int32_t>(0x3),
    __E_ARRAY = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ObjectStorage__Families_Unwrapped() const noexcept {
    return static_cast<____ObjectStorage__Families_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObjectStorage__Families();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ObjectStorage__Families(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ARRAY value: static_cast<int32_t>(0x4)
  static ::System::Data::Common::__ObjectStorage__Families const ARRAY;

  /// @brief Field BOOLEAN value: static_cast<int32_t>(0x3)
  static ::System::Data::Common::__ObjectStorage__Families const BOOLEAN;

  /// @brief Field DATETIME value: static_cast<int32_t>(0x0)
  static ::System::Data::Common::__ObjectStorage__Families const DATETIME;

  /// @brief Field NUMBER value: static_cast<int32_t>(0x1)
  static ::System::Data::Common::__ObjectStorage__Families const NUMBER;

  /// @brief Field STRING value: static_cast<int32_t>(0x2)
  static ::System::Data::Common::__ObjectStorage__Families const STRING;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::__ObjectStorage__Families, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Data::Common::__ObjectStorage__Families, value__) == 0x0, "Offset mismatch!");

} // namespace System::Data::Common
// Type: ::TempAssemblyComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::ObjectStorage::TempAssemblyComparer*
class CORDL_TYPE __ObjectStorage__TempAssemblyComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_default, put = setStaticF_s_default))::System::Collections::Generic::IEqualityComparer_1<
      ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>* s_default;

  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*() noexcept;

  /// @brief Method Equals, addr 0x2d74654, size 0x148, virtual true, abstract: false, final true
  inline bool Equals(::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*> x,
                     ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*> y);

  /// @brief Method GetHashCode, addr 0x2d7479c, size 0x88, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*> obj);

  static inline ::System::Data::Common::__ObjectStorage__TempAssemblyComparer* New_ctor();

  /// @brief Method .ctor, addr 0x2d7464c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*
  getStaticF_s_default();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::System::Xml::Serialization::XmlRootAttribute*>>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*
  i___System__Collections__Generic__IEqualityComparer_1___System__Collections__Generic__KeyValuePair_2___System__Type____System__Xml__Serialization__XmlRootAttribute___() noexcept;

  static inline void
  setStaticF_s_default(::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObjectStorage__TempAssemblyComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ObjectStorage__TempAssemblyComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ObjectStorage__TempAssemblyComparer(__ObjectStorage__TempAssemblyComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ObjectStorage__TempAssemblyComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ObjectStorage__TempAssemblyComparer(__ObjectStorage__TempAssemblyComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::__ObjectStorage__TempAssemblyComparer, 0x10>, "Size mismatch!");

} // namespace System::Data::Common
// Type: System.Data.Common::ObjectStorage
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::System.Data.Common::ObjectStorage*
class CORDL_TYPE ObjectStorage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  using Families = ::System::Data::Common::__ObjectStorage__Families;

  using TempAssemblyComparer = ::System::Data::Common::__ObjectStorage__TempAssemblyComparer;

  /// @brief Field _implementsIXmlSerializable, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__implementsIXmlSerializable, put = __cordl_internal_set__implementsIXmlSerializable)) bool _implementsIXmlSerializable;

  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _values;

  /// @brief Field s_defaultValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_defaultValue, put = setStaticF_s_defaultValue))::System::Object* s_defaultValue;

  /// @brief Field s_serializerFactory, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_serializerFactory, put = setStaticF_s_serializerFactory))::System::Xml::Serialization::XmlSerializerFactory* s_serializerFactory;

  /// @brief Field s_tempAssemblyCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_tempAssemblyCache, put = setStaticF_s_tempAssemblyCache))::System::Collections::Generic::Dictionary_2<
      ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>, ::System::Xml::Serialization::XmlSerializer*>* s_tempAssemblyCache;

  /// @brief Field s_tempAssemblyCacheLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_tempAssemblyCacheLock, put = setStaticF_s_tempAssemblyCacheLock))::System::Object* s_tempAssemblyCacheLock;

  /// @brief Method Aggregate, addr 0x2d6f4dc, size 0x30, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> records, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x2d6f50c, size 0x1b4, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareTo, addr 0x2d6fd5c, size 0x1d8, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Object* valueNo1, ::System::Object* valueNo2);

  /// @brief Method CompareValueTo, addr 0x2d6fb78, size 0x1e4, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo1, ::System::Object* value);

  /// @brief Method CompareWithFamilies, addr 0x2d6f6c0, size 0x4b8, virtual false, abstract: false, final false
  inline int32_t CompareWithFamilies(::System::Object* valueNo1, ::System::Object* valueNo2);

  /// @brief Method ConvertObjectToXml, addr 0x2d739e4, size 0x654, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x2d74038, size 0x164, virtual true, abstract: false, final false
  inline void ConvertObjectToXml(::System::Object* value, ::System::Xml::XmlWriter* xmlWriter, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib);

  /// @brief Method ConvertXmlToObject, addr 0x2d70b18, size 0x550, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method ConvertXmlToObject, addr 0x2d710dc, size 0x6d0, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::System::Xml::XmlReader* xmlReader, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib);

  /// @brief Method Copy, addr 0x2d70028, size 0x74, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x2d741e4, size 0x1f8, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x2d7009c, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t recordNo);

  /// @brief Method GetEmptyStorage, addr 0x2d7419c, size 0x48, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  /// @brief Method GetFamily, addr 0x2d6ff34, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Data::Common::__ObjectStorage__Families GetFamily(::System::Type* dataType);

  /// @brief Method GetXmlSerializer, addr 0x2d71068, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Xml::Serialization::XmlSerializer* GetXmlSerializer(::System::Type* type);

  /// @brief Method GetXmlSerializer, addr 0x2d73414, size 0x5d0, virtual false, abstract: false, final false
  static inline ::System::Xml::Serialization::XmlSerializer* GetXmlSerializer(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* attribute);

  /// @brief Method IsNull, addr 0x2d700d8, size 0x38, virtual true, abstract: false, final false
  inline bool IsNull(int32_t record);

  static inline ::System::Data::Common::ObjectStorage* New_ctor(::System::Data::DataColumn* column, ::System::Type* type);

  /// @brief Method Set, addr 0x2d70110, size 0x950, virtual true, abstract: false, final false
  inline void Set(int32_t recordNo, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x2d70a60, size 0xb8, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x2d743dc, size 0x1b4, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  /// @brief Method VerifyIDynamicMetaObjectProvider, addr 0x2d66c2c, size 0x12c, virtual false, abstract: false, final false
  static inline void VerifyIDynamicMetaObjectProvider(::System::Type* type);

  constexpr bool const& __cordl_internal_get__implementsIXmlSerializable() const;

  constexpr bool& __cordl_internal_get__implementsIXmlSerializable();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__implementsIXmlSerializable(bool value);

  constexpr void __cordl_internal_set__values(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x2d652fc, size 0x1a0, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column, ::System::Type* type);

  static inline ::System::Object* getStaticF_s_defaultValue();

  static inline ::System::Xml::Serialization::XmlSerializerFactory* getStaticF_s_serializerFactory();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>,
                                                             ::System::Xml::Serialization::XmlSerializer*>*
  getStaticF_s_tempAssemblyCache();

  static inline ::System::Object* getStaticF_s_tempAssemblyCacheLock();

  static inline void setStaticF_s_defaultValue(::System::Object* value);

  static inline void setStaticF_s_serializerFactory(::System::Xml::Serialization::XmlSerializerFactory* value);

  static inline void
  setStaticF_s_tempAssemblyCache(::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>,
                                                                              ::System::Xml::Serialization::XmlSerializer*>* value);

  static inline void setStaticF_s_tempAssemblyCacheLock(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectStorage(ObjectStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectStorage(ObjectStorage const&) = delete;

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____values;

  /// @brief Field _implementsIXmlSerializable, offset: 0x58, size: 0x1, def value: None
  bool ____implementsIXmlSerializable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::ObjectStorage, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Data::Common::ObjectStorage, ____values) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::Common::ObjectStorage, ____implementsIXmlSerializable) == 0x58, "Offset mismatch!");

} // namespace System::Data::Common
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::__ObjectStorage__Families, "System.Data.Common", "ObjectStorage/Families");
NEED_NO_BOX(::System::Data::Common::ObjectStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::ObjectStorage*, "System.Data.Common", "ObjectStorage");
NEED_NO_BOX(::System::Data::Common::__ObjectStorage__TempAssemblyComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::__ObjectStorage__TempAssemblyComparer*, "System.Data.Common", "ObjectStorage/TempAssemblyComparer");
