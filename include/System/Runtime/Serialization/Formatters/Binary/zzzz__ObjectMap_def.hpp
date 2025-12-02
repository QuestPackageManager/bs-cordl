#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/ObjectMap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.ObjectMap
class CORDL_TYPE ObjectMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field assemblyInfo, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_assemblyInfo, put = __cordl_internal_set_assemblyInfo)) ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo;

  /// @brief Field binaryTypeEnumA, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryTypeEnumA, put = __cordl_internal_set_binaryTypeEnumA)) ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,
                                                                                                                        ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>
      binaryTypeEnumA;

  /// @brief Field isInitObjectInfo, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_isInitObjectInfo, put = __cordl_internal_set_isInitObjectInfo)) bool isInitObjectInfo;

  /// @brief Field memberNames, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_memberNames, put = __cordl_internal_set_memberNames)) ::ArrayW<::StringW, ::Array<::StringW>*> memberNames;

  /// @brief Field memberTypes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_memberTypes, put = __cordl_internal_set_memberTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes;

  /// @brief Field objectId, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_objectId, put = __cordl_internal_set_objectId)) int32_t objectId;

  /// @brief Field objectInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_objectInfo, put = __cordl_internal_set_objectInfo)) ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo;

  /// @brief Field objectName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_objectName, put = __cordl_internal_set_objectName)) ::StringW objectName;

  /// @brief Field objectReader, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_objectReader, put = __cordl_internal_set_objectReader)) ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader;

  /// @brief Field objectType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_objectType, put = __cordl_internal_set_objectType)) ::System::Type* objectType;

  /// @brief Field typeInformationA, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_typeInformationA, put = __cordl_internal_set_typeInformationA)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> typeInformationA;

  /// @brief Method Create, addr 0x5943970, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMap*
  Create(::StringW name, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
         ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> binaryTypeEnumA,
         ::ArrayW<::System::Object*, ::Array<::System::Object*>*> typeInformationA, ::ArrayW<int32_t, ::Array<int32_t>*> memberAssemIds,
         ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo,
         ::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable);

  /// @brief Method Create, addr 0x59438d4, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMap* Create(::StringW name, ::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                                                                                        ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
                                                                                        ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo);

  /// @brief Method CreateObjectInfo, addr 0x5943890, size 0x44, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateObjectInfo(::ByRef<::System::Runtime::Serialization::SerializationInfo*> si,
                                                                                                ::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> memberData);

  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMap*
  New_ctor(::StringW objectName, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
           ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> binaryTypeEnumA,
           ::ArrayW<::System::Object*, ::Array<::System::Object*>*> typeInformationA, ::ArrayW<int32_t, ::Array<int32_t>*> memberAssemIds,
           ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo,
           ::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable);

  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMap* New_ctor(::StringW objectName, ::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                                                                                          ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
                                                                                          ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* const& __cordl_internal_get_assemblyInfo() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*& __cordl_internal_get_assemblyInfo();

  constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> const&
  __cordl_internal_get_binaryTypeEnumA() const;

  constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>&
  __cordl_internal_get_binaryTypeEnumA();

  constexpr bool const& __cordl_internal_get_isInitObjectInfo() const;

  constexpr bool& __cordl_internal_get_isInitObjectInfo();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_memberNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_memberNames();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get_memberTypes() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get_memberTypes();

  constexpr int32_t const& __cordl_internal_get_objectId() const;

  constexpr int32_t& __cordl_internal_get_objectId();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* const& __cordl_internal_get_objectInfo() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*& __cordl_internal_get_objectInfo();

  constexpr ::StringW const& __cordl_internal_get_objectName() const;

  constexpr ::StringW& __cordl_internal_get_objectName();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* const& __cordl_internal_get_objectReader() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*& __cordl_internal_get_objectReader();

  constexpr ::System::Type* const& __cordl_internal_get_objectType() const;

  constexpr ::System::Type*& __cordl_internal_get_objectType();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_typeInformationA() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_typeInformationA();

  constexpr void __cordl_internal_set_assemblyInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* value);

  constexpr void __cordl_internal_set_binaryTypeEnumA(
      ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> value);

  constexpr void __cordl_internal_set_isInitObjectInfo(bool value);

  constexpr void __cordl_internal_set_memberNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_memberTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set_objectId(int32_t value);

  constexpr void __cordl_internal_set_objectInfo(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* value);

  constexpr void __cordl_internal_set_objectName(::StringW value);

  constexpr void __cordl_internal_set_objectReader(::System::Runtime::Serialization::Formatters::Binary::ObjectReader* value);

  constexpr void __cordl_internal_set_objectType(::System::Type* value);

  constexpr void __cordl_internal_set_typeInformationA(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x594359c, size 0x2f4, virtual false, abstract: false, final false
  inline void _ctor(::StringW objectName, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> binaryTypeEnumA,
                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> typeInformationA, ::ArrayW<int32_t, ::Array<int32_t>*> memberAssemIds,
                    ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
                    ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, ::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable);

  /// @brief Method .ctor, addr 0x59433e4, size 0x1b8, virtual false, abstract: false, final false
  inline void _ctor(::StringW objectName, ::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                    ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
                    ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectMap(ObjectMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectMap(ObjectMap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3288 };

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

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectMap, 0x68>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectMap*, "System.Runtime.Serialization.Formatters.Binary", "ObjectMap");
