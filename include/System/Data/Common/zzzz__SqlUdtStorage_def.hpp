#pragma once
// IWYU pragma private; include "System/Data/Common/SqlUdtStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SqlUdtStorage)
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System::Collections {
class BitArray;
}
namespace System::Data::Common {
class SqlUdtStorage___c__DisplayClass6_0;
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
class SqlUdtStorage;
}
namespace System::Data::Common {
class SqlUdtStorage___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::SqlUdtStorage);
MARK_REF_PTR_T(::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0);
// Dependencies System.Object
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.SqlUdtStorage/<>c__DisplayClass6_0
class CORDL_TYPE SqlUdtStorage___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0* New_ctor();

  /// @brief Method <GetStaticNullForUdtType>b__0, addr 0x4209248, size 0x128, virtual false, abstract: false, final false
  inline ::System::Object* _GetStaticNullForUdtType_b__0(::System::Type* t);

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x4207e60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlUdtStorage___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SqlUdtStorage___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SqlUdtStorage___c__DisplayClass6_0(SqlUdtStorage___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SqlUdtStorage___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SqlUdtStorage___c__DisplayClass6_0(SqlUdtStorage___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11556 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0, ___type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace System::Data::Common
// Dependencies System.Data.Common.DataStorage
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.SqlUdtStorage
class CORDL_TYPE SqlUdtStorage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  using __c__DisplayClass6_0 = ::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0;

  /// @brief Field _implementsIComparable, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__implementsIComparable, put = __cordl_internal_set__implementsIComparable)) bool _implementsIComparable;

  /// @brief Field _implementsIXmlSerializable, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__implementsIXmlSerializable, put = __cordl_internal_set__implementsIXmlSerializable)) bool _implementsIXmlSerializable;

  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> _values;

  /// @brief Field s_typeToNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_typeToNull, put = setStaticF_s_typeToNull)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Object*>* s_typeToNull;

  /// @brief Method Aggregate, addr 0x4207f6c, size 0x30, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> records, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x4207f9c, size 0x38, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareValueTo, addr 0x4207fd4, size 0x28c, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo1, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x4208b20, size 0x32c, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x4208e4c, size 0x158, virtual true, abstract: false, final false
  inline void ConvertObjectToXml(::System::Object* value, ::System::Xml::XmlWriter* xmlWriter, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib);

  /// @brief Method ConvertXmlToObject, addr 0x4208538, size 0x34c, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method ConvertXmlToObject, addr 0x4208884, size 0x29c, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::System::Xml::XmlReader* xmlReader, ::System::Xml::Serialization::XmlRootAttribute* xmlAttrib);

  /// @brief Method Copy, addr 0x4208260, size 0x84, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x4208fec, size 0x138, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x42082e4, size 0x30, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t recordNo);

  /// @brief Method GetEmptyStorage, addr 0x4208fa4, size 0x48, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  /// @brief Method GetStaticNullForUdtType, addr 0x4207bd0, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Object* GetStaticNullForUdtType(::System::Type* type);

  /// @brief Method IsNull, addr 0x4207e68, size 0x104, virtual true, abstract: false, final false
  inline bool IsNull(int32_t record);

  static inline ::System::Data::Common::SqlUdtStorage* New_ctor(::System::Data::DataColumn* column, ::System::Type* type);

  static inline ::System::Data::Common::SqlUdtStorage* New_ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* nullValue);

  /// @brief Method Set, addr 0x4208314, size 0x160, virtual true, abstract: false, final false
  inline void Set(int32_t recordNo, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x4208474, size 0xc4, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x4209124, size 0x98, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr bool const& __cordl_internal_get__implementsIComparable() const;

  constexpr bool& __cordl_internal_get__implementsIComparable();

  constexpr bool const& __cordl_internal_get__implementsIXmlSerializable() const;

  constexpr bool& __cordl_internal_get__implementsIXmlSerializable();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__implementsIComparable(bool value);

  constexpr void __cordl_internal_set__implementsIXmlSerializable(bool value);

  constexpr void __cordl_internal_set__values(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x4207b58, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column, ::System::Type* type);

  /// @brief Method .ctor, addr 0x4207cd8, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column, ::System::Type* type, ::System::Object* nullValue);

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Object*>* getStaticF_s_typeToNull();

  static inline void setStaticF_s_typeToNull(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlUdtStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SqlUdtStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SqlUdtStorage(SqlUdtStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SqlUdtStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SqlUdtStorage(SqlUdtStorage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11557 };

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____values;

  /// @brief Field _implementsIXmlSerializable, offset: 0x58, size: 0x1, def value: None
  bool ____implementsIXmlSerializable;

  /// @brief Field _implementsIComparable, offset: 0x59, size: 0x1, def value: None
  bool ____implementsIComparable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::SqlUdtStorage, ____values) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::Common::SqlUdtStorage, ____implementsIXmlSerializable) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Data::Common::SqlUdtStorage, ____implementsIComparable) == 0x59, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Common::SqlUdtStorage, 0x60>, "Size mismatch!");

} // namespace System::Data::Common
NEED_NO_BOX(::System::Data::Common::SqlUdtStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::SqlUdtStorage*, "System.Data.Common", "SqlUdtStorage");
NEED_NO_BOX(::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::SqlUdtStorage___c__DisplayClass6_0*, "System.Data.Common", "SqlUdtStorage/<>c__DisplayClass6_0");
