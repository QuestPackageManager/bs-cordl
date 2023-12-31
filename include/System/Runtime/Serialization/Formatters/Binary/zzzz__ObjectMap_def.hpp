#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectMap)
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryAssemblyInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectReader;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ReadObjectInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SizedArray;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectMap;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ObjectMap);
// Type: System.Runtime.Serialization.Formatters.Binary::ObjectMap
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3275))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::ObjectMap*
class CORDL_TYPE ObjectMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field objectName, offset 0x10, size 0x8
  __declspec(property(get = __get_objectName, put = __set_objectName))::StringW objectName;

  /// @brief Field objectType, offset 0x18, size 0x8
  __declspec(property(get = __get_objectType, put = __set_objectType))::System::Type* objectType;

  /// @brief Field binaryTypeEnumA, offset 0x20, size 0x8
  __declspec(property(get = __get_binaryTypeEnumA, put = __set_binaryTypeEnumA))::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,
                                                                                         ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> binaryTypeEnumA;

  /// @brief Field typeInformationA, offset 0x28, size 0x8
  __declspec(property(get = __get_typeInformationA, put = __set_typeInformationA))::ArrayW<::System::Object*, ::Array<::System::Object*>*> typeInformationA;

  /// @brief Field memberTypes, offset 0x30, size 0x8
  __declspec(property(get = __get_memberTypes, put = __set_memberTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes;

  /// @brief Field memberNames, offset 0x38, size 0x8
  __declspec(property(get = __get_memberNames, put = __set_memberNames))::ArrayW<::StringW, ::Array<::StringW>*> memberNames;

  /// @brief Field objectInfo, offset 0x40, size 0x8
  __declspec(property(get = __get_objectInfo, put = __set_objectInfo))::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo;

  /// @brief Field isInitObjectInfo, offset 0x48, size 0x1
  __declspec(property(get = __get_isInitObjectInfo, put = __set_isInitObjectInfo)) bool isInitObjectInfo;

  /// @brief Field objectReader, offset 0x50, size 0x8
  __declspec(property(get = __get_objectReader, put = __set_objectReader))::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader;

  /// @brief Field objectId, offset 0x58, size 0x4
  __declspec(property(get = __get_objectId, put = __set_objectId)) int32_t objectId;

  /// @brief Field assemblyInfo, offset 0x60, size 0x8
  __declspec(property(get = __get_assemblyInfo, put = __set_assemblyInfo))::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo;

  constexpr ::StringW& __get_objectName();

  constexpr ::StringW const& __get_objectName() const;

  constexpr void __set_objectName(::StringW value);

  constexpr ::System::Type*& __get_objectType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_objectType() const;

  constexpr void __set_objectType(::System::Type* value);

  constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>& __get_binaryTypeEnumA();

  constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> const&
  __get_binaryTypeEnumA() const;

  constexpr void
  __set_binaryTypeEnumA(::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get_typeInformationA();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get_typeInformationA() const;

  constexpr void __set_typeInformationA(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __get_memberTypes();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __get_memberTypes() const;

  constexpr void __set_memberTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_memberNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_memberNames() const;

  constexpr void __set_memberNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*& __get_objectInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*> const& __get_objectInfo() const;

  constexpr void __set_objectInfo(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* value);

  constexpr bool& __get_isInitObjectInfo();

  constexpr bool const& __get_isInitObjectInfo() const;

  constexpr void __set_isInitObjectInfo(bool value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*& __get_objectReader();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*> const& __get_objectReader() const;

  constexpr void __set_objectReader(::System::Runtime::Serialization::Formatters::Binary::ObjectReader* value);

  constexpr int32_t& __get_objectId();

  constexpr int32_t const& __get_objectId() const;

  constexpr void __set_objectId(int32_t value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*& __get_assemblyInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*> const& __get_assemblyInfo() const;

  constexpr void __set_assemblyInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMap* New_ctor(::StringW objectName, ::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                                                                                          ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
                                                                                          ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo);

  /// @brief Method .ctor, addr 0x24c3558, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(::StringW objectName, ::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                    ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
                    ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo);

  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMap*
  New_ctor(::StringW objectName, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
           ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> binaryTypeEnumA,
           ::ArrayW<::System::Object*, ::Array<::System::Object*>*> typeInformationA, ::ArrayW<int32_t, ::Array<int32_t>*> memberAssemIds,
           ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo,
           ::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable);

  /// @brief Method .ctor, addr 0x24c3bd8, size 0x2e4, virtual false, abstract: false, final false
  inline void _ctor(::StringW objectName, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> binaryTypeEnumA,
                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> typeInformationA, ::ArrayW<int32_t, ::Array<int32_t>*> memberAssemIds,
                    ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
                    ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, ::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable);

  /// @brief Method CreateObjectInfo, addr 0x24c3ebc, size 0x40, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateObjectInfo(ByRef<::System::Runtime::Serialization::SerializationInfo*> si,
                                                                                                ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> memberData);

  /// @brief Method Create, addr 0x24c3fd4, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMap* Create(::StringW name, ::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                                                                                        ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
                                                                                        ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo);

  /// @brief Method Create, addr 0x24c4074, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMap*
  Create(::StringW name, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
         ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> binaryTypeEnumA,
         ::ArrayW<::System::Object*, ::Array<::System::Object*>*> typeInformationA, ::ArrayW<int32_t, ::Array<int32_t>*> memberAssemIds,
         ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo,
         ::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable);

  // Ctor Parameters [CppParam { name: "", ty: "ObjectMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectMap(ObjectMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectMap(ObjectMap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectMap();

public:
  /// @brief Field objectName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___objectName;

  /// @brief Field objectType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___objectType;

  /// @brief Field binaryTypeEnumA, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> ___binaryTypeEnumA;

  /// @brief Field typeInformationA, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___typeInformationA;

  /// @brief Field memberTypes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___memberTypes;

  /// @brief Field memberNames, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___memberNames;

  /// @brief Field objectInfo, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* ___objectInfo;

  /// @brief Field isInitObjectInfo, offset: 0x48, size: 0x1, def value: None
  bool ___isInitObjectInfo;

  /// @brief Field objectReader, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* ___objectReader;

  /// @brief Field objectId, offset: 0x58, size: 0x4, def value: None
  int32_t ___objectId;

  /// @brief Field assemblyInfo, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* ___assemblyInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectMap, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectMap, ___objectName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectMap, ___objectType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectMap, ___binaryTypeEnumA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectMap, ___typeInformationA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectMap, ___memberTypes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectMap, ___memberNames) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectMap, ___objectInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectMap, ___isInitObjectInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectMap, ___objectReader) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectMap, ___objectId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectMap, ___assemblyInfo) == 0x60, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectMap*, "System.Runtime.Serialization.Formatters.Binary", "ObjectMap");
