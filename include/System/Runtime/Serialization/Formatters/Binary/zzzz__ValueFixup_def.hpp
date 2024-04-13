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
namespace System::Reflection {
class MemberInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ParseRecord;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ReadObjectInfo;
}
namespace System {
class Array;
}
namespace System {
class Object;
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
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::ValueFixup*
class CORDL_TYPE ValueFixup : public ::System::Object {
public:
  // Declarations
  /// @brief Field arrayObj, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_arrayObj, put = __cordl_internal_set_arrayObj))::System::Array* arrayObj;

  /// @brief Field header, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_header, put = __cordl_internal_set_header))::System::Object* header;

  /// @brief Field indexMap, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_indexMap, put = __cordl_internal_set_indexMap))::ArrayW<int32_t, ::Array<int32_t>*> indexMap;

  /// @brief Field memberName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_memberName, put = __cordl_internal_set_memberName))::StringW memberName;

  /// @brief Field memberObject, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_memberObject, put = __cordl_internal_set_memberObject))::System::Object* memberObject;

  /// @brief Field objectInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_objectInfo, put = __cordl_internal_set_objectInfo))::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo;

  /// @brief Field valueFixupEnum, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_valueFixupEnum, put = __cordl_internal_set_valueFixupEnum))::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum valueFixupEnum;

  /// @brief Field valueInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_valueInfo, put = setStaticF_valueInfo))::System::Reflection::MemberInfo* valueInfo;

  /// @brief Method Fixup, addr 0x274f0e8, size 0x310, virtual false, abstract: false, final false
  inline void Fixup(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* record, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* parent);

  static inline ::System::Runtime::Serialization::Formatters::Binary::ValueFixup* New_ctor(::System::Array* arrayObj, ::ArrayW<int32_t, ::Array<int32_t>*> indexMap);

  static inline ::System::Runtime::Serialization::Formatters::Binary::ValueFixup* New_ctor(::System::Object* memberObject, ::StringW memberName,
                                                                                           ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo);

  constexpr ::System::Array*& __cordl_internal_get_arrayObj();

  constexpr ::cordl_internals::to_const_pointer<::System::Array*> const& __cordl_internal_get_arrayObj() const;

  constexpr ::System::Object*& __cordl_internal_get_header();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_header() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_indexMap() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_indexMap();

  constexpr ::StringW const& __cordl_internal_get_memberName() const;

  constexpr ::StringW& __cordl_internal_get_memberName();

  constexpr ::System::Object*& __cordl_internal_get_memberObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_memberObject() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*& __cordl_internal_get_objectInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*> const& __cordl_internal_get_objectInfo() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum const& __cordl_internal_get_valueFixupEnum() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum& __cordl_internal_get_valueFixupEnum();

  constexpr void __cordl_internal_set_arrayObj(::System::Array* value);

  constexpr void __cordl_internal_set_header(::System::Object* value);

  constexpr void __cordl_internal_set_indexMap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_memberName(::StringW value);

  constexpr void __cordl_internal_set_memberObject(::System::Object* value);

  constexpr void __cordl_internal_set_objectInfo(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* value);

  constexpr void __cordl_internal_set_valueFixupEnum(::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum value);

  /// @brief Method .ctor, addr 0x274fc8c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Array* arrayObj, ::ArrayW<int32_t, ::Array<int32_t>*> indexMap);

  /// @brief Method .ctor, addr 0x27500e4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* memberObject, ::StringW memberName, ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo);

  static inline ::System::Reflection::MemberInfo* getStaticF_valueInfo();

  static inline void setStaticF_valueInfo(::System::Reflection::MemberInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueFixup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValueFixup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValueFixup(ValueFixup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValueFixup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValueFixup(ValueFixup const&) = delete;

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
