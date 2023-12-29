#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalMemberTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalMemberValueE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalObjectTypeE_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectProgress)
namespace System {
class Type;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ParseRecord;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectProgress;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress);
// Type: System.Runtime.Serialization.Formatters.Binary::ObjectProgress
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3247)), TypeDefinitionIndex(TypeDefinitionIndex(3250)), TypeDefinitionIndex(TypeDefinitionIndex(3251)),
// TypeDefinitionIndex(TypeDefinitionIndex(3243)), TypeDefinitionIndex(TypeDefinitionIndex(2611))} Self: TypeDefinitionIndex(TypeDefinitionIndex(3275)) CS Name:
// ::System.Runtime.Serialization.Formatters.Binary::ObjectProgress*
class CORDL_TYPE ObjectProgress : public ::System::Object {
public:
  // Declarations
  /// @brief Field isInitial, offset 0x10, size 0x1
  __declspec(property(get = __get_isInitial, put = __set_isInitial)) bool isInitial;

  /// @brief Field count, offset 0x14, size 0x4
  __declspec(property(get = __get_count, put = __set_count)) int32_t count;

  /// @brief Field expectedType, offset 0x18, size 0x4
  __declspec(property(get = __get_expectedType, put = __set_expectedType))::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum expectedType;

  /// @brief Field expectedTypeInformation, offset 0x20, size 0x8
  __declspec(property(get = __get_expectedTypeInformation, put = __set_expectedTypeInformation))::System::Object* expectedTypeInformation;

  /// @brief Field name, offset 0x28, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field objectTypeEnum, offset 0x30, size 0x4
  __declspec(property(get = __get_objectTypeEnum, put = __set_objectTypeEnum))::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE objectTypeEnum;

  /// @brief Field memberTypeEnum, offset 0x34, size 0x4
  __declspec(property(get = __get_memberTypeEnum, put = __set_memberTypeEnum))::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE memberTypeEnum;

  /// @brief Field memberValueEnum, offset 0x38, size 0x4
  __declspec(property(get = __get_memberValueEnum, put = __set_memberValueEnum))::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE memberValueEnum;

  /// @brief Field dtType, offset 0x40, size 0x8
  __declspec(property(get = __get_dtType, put = __set_dtType))::System::Type* dtType;

  /// @brief Field numItems, offset 0x48, size 0x4
  __declspec(property(get = __get_numItems, put = __set_numItems)) int32_t numItems;

  /// @brief Field binaryTypeEnum, offset 0x4c, size 0x4
  __declspec(property(get = __get_binaryTypeEnum, put = __set_binaryTypeEnum))::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum;

  /// @brief Field typeInformation, offset 0x50, size 0x8
  __declspec(property(get = __get_typeInformation, put = __set_typeInformation))::System::Object* typeInformation;

  /// @brief Field nullCount, offset 0x58, size 0x4
  __declspec(property(get = __get_nullCount, put = __set_nullCount)) int32_t nullCount;

  /// @brief Field memberLength, offset 0x5c, size 0x4
  __declspec(property(get = __get_memberLength, put = __set_memberLength)) int32_t memberLength;

  /// @brief Field binaryTypeEnumA, offset 0x60, size 0x8
  __declspec(property(get = __get_binaryTypeEnumA, put = __set_binaryTypeEnumA))::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,
                                                                                         ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> binaryTypeEnumA;

  /// @brief Field typeInformationA, offset 0x68, size 0x8
  __declspec(property(get = __get_typeInformationA, put = __set_typeInformationA))::ArrayW<::System::Object*, ::Array<::System::Object*>*> typeInformationA;

  /// @brief Field memberNames, offset 0x70, size 0x8
  __declspec(property(get = __get_memberNames, put = __set_memberNames))::ArrayW<::StringW, ::Array<::StringW>*> memberNames;

  /// @brief Field memberTypes, offset 0x78, size 0x8
  __declspec(property(get = __get_memberTypes, put = __set_memberTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes;

  /// @brief Field pr, offset 0x80, size 0x8
  __declspec(property(get = __get_pr, put = __set_pr))::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr;

  /// @brief Field opRecordIdCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_opRecordIdCount, put = setStaticF_opRecordIdCount)) int32_t opRecordIdCount;

  constexpr bool& __get_isInitial();

  constexpr bool const& __get_isInitial() const;

  constexpr void __set_isInitial(bool value);

  constexpr int32_t& __get_count();

  constexpr int32_t const& __get_count() const;

  constexpr void __set_count(int32_t value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& __get_expectedType();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& __get_expectedType() const;

  constexpr void __set_expectedType(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value);

  constexpr ::System::Object*& __get_expectedTypeInformation();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_expectedTypeInformation() const;

  constexpr void __set_expectedTypeInformation(::System::Object* value);

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE& __get_objectTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE const& __get_objectTypeEnum() const;

  constexpr void __set_objectTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE& __get_memberTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const& __get_memberTypeEnum() const;

  constexpr void __set_memberTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE& __get_memberValueEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const& __get_memberValueEnum() const;

  constexpr void __set_memberValueEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE value);

  constexpr ::System::Type*& __get_dtType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_dtType() const;

  constexpr void __set_dtType(::System::Type* value);

  constexpr int32_t& __get_numItems();

  constexpr int32_t const& __get_numItems() const;

  constexpr void __set_numItems(int32_t value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& __get_binaryTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& __get_binaryTypeEnum() const;

  constexpr void __set_binaryTypeEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value);

  constexpr ::System::Object*& __get_typeInformation();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_typeInformation() const;

  constexpr void __set_typeInformation(::System::Object* value);

  constexpr int32_t& __get_nullCount();

  constexpr int32_t const& __get_nullCount() const;

  constexpr void __set_nullCount(int32_t value);

  constexpr int32_t& __get_memberLength();

  constexpr int32_t const& __get_memberLength() const;

  constexpr void __set_memberLength(int32_t value);

  constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>& __get_binaryTypeEnumA();

  constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> const&
  __get_binaryTypeEnumA() const;

  constexpr void
  __set_binaryTypeEnumA(::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get_typeInformationA();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get_typeInformationA() const;

  constexpr void __set_typeInformationA(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_memberNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_memberNames() const;

  constexpr void __set_memberNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __get_memberTypes();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __get_memberTypes() const;

  constexpr void __set_memberTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*& __get_pr();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*> const& __get_pr() const;

  constexpr void __set_pr(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* value);

  static inline void setStaticF_opRecordIdCount(int32_t value);

  static inline int32_t getStaticF_opRecordIdCount();

  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* New_ctor();

  /// @brief Method .ctor addr 0x236b644 size 0x70 virtual false final false
  inline void _ctor();

  /// @brief Method Init addr 0x236b6b4 size 0x50 virtual false final false
  inline void Init();

  /// @brief Method ArrayCountIncrement addr 0x236b704 size 0x10 virtual false final false
  inline void ArrayCountIncrement(int32_t value);

  /// @brief Method GetNext addr 0x236b714 size 0x114 virtual false final false
  inline bool GetNext(ByRef<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> outBinaryTypeEnum, ByRef<::System::Object*> outTypeInformation);

  // Ctor Parameters [CppParam { name: "", ty: "ObjectProgress", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectProgress(ObjectProgress&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectProgress", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectProgress(ObjectProgress const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectProgress();

public:
  /// @brief Field isInitial, offset: 0x10, size: 0x1, def value: None
  bool ___isInitial;

  /// @brief Field count, offset: 0x14, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field expectedType, offset: 0x18, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum ___expectedType;

  /// @brief Field expectedTypeInformation, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___expectedTypeInformation;

  /// @brief Field name, offset: 0x28, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field objectTypeEnum, offset: 0x30, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE ___objectTypeEnum;

  /// @brief Field memberTypeEnum, offset: 0x34, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE ___memberTypeEnum;

  /// @brief Field memberValueEnum, offset: 0x38, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE ___memberValueEnum;

  /// @brief Field dtType, offset: 0x40, size: 0x8, def value: None
  ::System::Type* ___dtType;

  /// @brief Field numItems, offset: 0x48, size: 0x4, def value: None
  int32_t ___numItems;

  /// @brief Field binaryTypeEnum, offset: 0x4c, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum ___binaryTypeEnum;

  /// @brief Field typeInformation, offset: 0x50, size: 0x8, def value: None
  ::System::Object* ___typeInformation;

  /// @brief Field nullCount, offset: 0x58, size: 0x4, def value: None
  int32_t ___nullCount;

  /// @brief Field memberLength, offset: 0x5c, size: 0x4, def value: None
  int32_t ___memberLength;

  /// @brief Field binaryTypeEnumA, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> ___binaryTypeEnumA;

  /// @brief Field typeInformationA, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___typeInformationA;

  /// @brief Field memberNames, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___memberNames;

  /// @brief Field memberTypes, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___memberTypes;

  /// @brief Field pr, offset: 0x80, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* ___pr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, 0x88>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___isInitial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___count) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___expectedType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___expectedTypeInformation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___objectTypeEnum) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___memberTypeEnum) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___memberValueEnum) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___dtType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___numItems) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___binaryTypeEnum) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___typeInformation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___nullCount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___memberLength) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___binaryTypeEnumA) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___typeInformationA) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___memberNames) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___memberTypes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, ___pr) == 0x80, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*, "System.Runtime.Serialization.Formatters.Binary", "ObjectProgress");
