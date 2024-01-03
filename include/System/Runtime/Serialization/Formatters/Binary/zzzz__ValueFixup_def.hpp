#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ValueFixupEnum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValueFixup)
namespace System {
class Array;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ReadObjectInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ParseRecord;
}
namespace System {
class Object;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ValueFixup;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ValueFixup);
// Type: System.Runtime.Serialization.Formatters.Binary::ValueFixup
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3254)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3296))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::ValueFixup*
class CORDL_TYPE ValueFixup : public ::System::Object {
public:
  // Declarations
  /// @brief Field valueFixupEnum, offset 0x10, size 0x4
  __declspec(property(get = __get_valueFixupEnum, put = __set_valueFixupEnum))::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum valueFixupEnum;

  /// @brief Field arrayObj, offset 0x18, size 0x8
  __declspec(property(get = __get_arrayObj, put = __set_arrayObj))::System::Array* arrayObj;

  /// @brief Field indexMap, offset 0x20, size 0x8
  __declspec(property(get = __get_indexMap, put = __set_indexMap))::ArrayW<int32_t, ::Array<int32_t>*> indexMap;

  /// @brief Field header, offset 0x28, size 0x8
  __declspec(property(get = __get_header, put = __set_header))::System::Object* header;

  /// @brief Field memberObject, offset 0x30, size 0x8
  __declspec(property(get = __get_memberObject, put = __set_memberObject))::System::Object* memberObject;

  /// @brief Field objectInfo, offset 0x38, size 0x8
  __declspec(property(get = __get_objectInfo, put = __set_objectInfo))::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo;

  /// @brief Field memberName, offset 0x40, size 0x8
  __declspec(property(get = __get_memberName, put = __set_memberName))::StringW memberName;

  /// @brief Field valueInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_valueInfo, put = setStaticF_valueInfo))::System::Reflection::MemberInfo* valueInfo;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum& __get_valueFixupEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum const& __get_valueFixupEnum() const;

  constexpr void __set_valueFixupEnum(::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum value);

  constexpr ::System::Array*& __get_arrayObj();

  constexpr ::cordl_internals::to_const_pointer<::System::Array*> const& __get_arrayObj() const;

  constexpr void __set_arrayObj(::System::Array* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_indexMap();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_indexMap() const;

  constexpr void __set_indexMap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::System::Object*& __get_header();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_header() const;

  constexpr void __set_header(::System::Object* value);

  constexpr ::System::Object*& __get_memberObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_memberObject() const;

  constexpr void __set_memberObject(::System::Object* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*& __get_objectInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*> const& __get_objectInfo() const;

  constexpr void __set_objectInfo(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* value);

  constexpr ::StringW& __get_memberName();

  constexpr ::StringW const& __get_memberName() const;

  constexpr void __set_memberName(::StringW value);

  static inline void setStaticF_valueInfo(::System::Reflection::MemberInfo* value);

  static inline ::System::Reflection::MemberInfo* getStaticF_valueInfo();

  static inline ::System::Runtime::Serialization::Formatters::Binary::ValueFixup* New_ctor(::System::Array* arrayObj, ::ArrayW<int32_t, ::Array<int32_t>*> indexMap);

  /// @brief Method .ctor, addr 0x24ce520, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Array* arrayObj, ::ArrayW<int32_t, ::Array<int32_t>*> indexMap);

  static inline ::System::Runtime::Serialization::Formatters::Binary::ValueFixup* New_ctor(::System::Object* memberObject, ::StringW memberName,
                                                                                           ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo);

  /// @brief Method .ctor, addr 0x24ce978, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* memberObject, ::StringW memberName, ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo);

  /// @brief Method Fixup, addr 0x24cd978, size 0x314, virtual false, abstract: false, final false
  inline void Fixup(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* record, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* parent);

  // Ctor Parameters [CppParam { name: "", ty: "ValueFixup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValueFixup(ValueFixup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValueFixup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValueFixup(ValueFixup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueFixup();

public:
  /// @brief Field valueFixupEnum, offset: 0x10, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum ___valueFixupEnum;

  /// @brief Field arrayObj, offset: 0x18, size: 0x8, def value: None
  ::System::Array* ___arrayObj;

  /// @brief Field indexMap, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___indexMap;

  /// @brief Field header, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___header;

  /// @brief Field memberObject, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ___memberObject;

  /// @brief Field objectInfo, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* ___objectInfo;

  /// @brief Field memberName, offset: 0x40, size: 0x8, def value: None
  ::StringW ___memberName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ValueFixup, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ValueFixup, ___valueFixupEnum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ValueFixup, ___arrayObj) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ValueFixup, ___indexMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ValueFixup, ___header) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ValueFixup, ___memberObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ValueFixup, ___objectInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ValueFixup, ___memberName) == 0x40, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ValueFixup);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ValueFixup*, "System.Runtime.Serialization.Formatters.Binary", "ValueFixup");
