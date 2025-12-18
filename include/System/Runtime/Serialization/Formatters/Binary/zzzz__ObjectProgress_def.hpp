#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/ObjectProgress.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalMemberTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalMemberValueE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalObjectTypeE_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectProgress)
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ParseRecord;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectProgress;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress);
// Dependencies System.Object, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum, System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE,
// System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE, System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.ObjectProgress
class CORDL_TYPE ObjectProgress : public ::System::Object {
public:
  // Declarations
  /// @brief Field binaryTypeEnum, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_binaryTypeEnum, put = __cordl_internal_set_binaryTypeEnum)) ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum;

  /// @brief Field binaryTypeEnumA, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryTypeEnumA, put = __cordl_internal_set_binaryTypeEnumA)) ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,
                                                                                                                        ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>
      binaryTypeEnumA;

  /// @brief Field count, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field dtType, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_dtType, put = __cordl_internal_set_dtType)) ::System::Type* dtType;

  /// @brief Field expectedType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_expectedType, put = __cordl_internal_set_expectedType)) ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum expectedType;

  /// @brief Field expectedTypeInformation, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_expectedTypeInformation, put = __cordl_internal_set_expectedTypeInformation)) ::System::Object* expectedTypeInformation;

  /// @brief Field isInitial, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isInitial, put = __cordl_internal_set_isInitial)) bool isInitial;

  /// @brief Field memberLength, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_memberLength, put = __cordl_internal_set_memberLength)) int32_t memberLength;

  /// @brief Field memberNames, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_memberNames, put = __cordl_internal_set_memberNames)) ::ArrayW<::StringW, ::Array<::StringW>*> memberNames;

  /// @brief Field memberTypeEnum, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_memberTypeEnum, put = __cordl_internal_set_memberTypeEnum)) ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE memberTypeEnum;

  /// @brief Field memberTypes, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_memberTypes, put = __cordl_internal_set_memberTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes;

  /// @brief Field memberValueEnum, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_memberValueEnum,
                      put = __cordl_internal_set_memberValueEnum)) ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE memberValueEnum;

  /// @brief Field name, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field nullCount, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_nullCount, put = __cordl_internal_set_nullCount)) int32_t nullCount;

  /// @brief Field numItems, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_numItems, put = __cordl_internal_set_numItems)) int32_t numItems;

  /// @brief Field objectTypeEnum, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_objectTypeEnum, put = __cordl_internal_set_objectTypeEnum)) ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE objectTypeEnum;

  /// @brief Field opRecordIdCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_opRecordIdCount, put = setStaticF_opRecordIdCount)) int32_t opRecordIdCount;

  /// @brief Field pr, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_pr, put = __cordl_internal_set_pr)) ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr;

  /// @brief Field typeInformation, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_typeInformation, put = __cordl_internal_set_typeInformation)) ::System::Object* typeInformation;

  /// @brief Field typeInformationA, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_typeInformationA, put = __cordl_internal_set_typeInformationA)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> typeInformationA;

  /// @brief Method ArrayCountIncrement, addr 0x59aa468, size 0x10, virtual false, abstract: false, final false
  inline void ArrayCountIncrement(int32_t value);

  /// @brief Method GetNext, addr 0x59aa478, size 0x110, virtual false, abstract: false, final false
  inline bool GetNext(::ByRef<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> outBinaryTypeEnum, ::ByRef<::System::Object*> outTypeInformation);

  /// @brief Method Init, addr 0x59aa3d4, size 0x94, virtual false, abstract: false, final false
  inline void Init();

  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* New_ctor();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& __cordl_internal_get_binaryTypeEnum() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& __cordl_internal_get_binaryTypeEnum();

  constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> const&
  __cordl_internal_get_binaryTypeEnumA() const;

  constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>&
  __cordl_internal_get_binaryTypeEnumA();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::System::Type* const& __cordl_internal_get_dtType() const;

  constexpr ::System::Type*& __cordl_internal_get_dtType();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& __cordl_internal_get_expectedType() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& __cordl_internal_get_expectedType();

  constexpr ::System::Object* const& __cordl_internal_get_expectedTypeInformation() const;

  constexpr ::System::Object*& __cordl_internal_get_expectedTypeInformation();

  constexpr bool const& __cordl_internal_get_isInitial() const;

  constexpr bool& __cordl_internal_get_isInitial();

  constexpr int32_t const& __cordl_internal_get_memberLength() const;

  constexpr int32_t& __cordl_internal_get_memberLength();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_memberNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_memberNames();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const& __cordl_internal_get_memberTypeEnum() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE& __cordl_internal_get_memberTypeEnum();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get_memberTypes() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get_memberTypes();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const& __cordl_internal_get_memberValueEnum() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE& __cordl_internal_get_memberValueEnum();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr int32_t const& __cordl_internal_get_nullCount() const;

  constexpr int32_t& __cordl_internal_get_nullCount();

  constexpr int32_t const& __cordl_internal_get_numItems() const;

  constexpr int32_t& __cordl_internal_get_numItems();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE const& __cordl_internal_get_objectTypeEnum() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE& __cordl_internal_get_objectTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* const& __cordl_internal_get_pr() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*& __cordl_internal_get_pr();

  constexpr ::System::Object* const& __cordl_internal_get_typeInformation() const;

  constexpr ::System::Object*& __cordl_internal_get_typeInformation();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_typeInformationA() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_typeInformationA();

  constexpr void __cordl_internal_set_binaryTypeEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value);

  constexpr void __cordl_internal_set_binaryTypeEnumA(
      ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_dtType(::System::Type* value);

  constexpr void __cordl_internal_set_expectedType(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value);

  constexpr void __cordl_internal_set_expectedTypeInformation(::System::Object* value);

  constexpr void __cordl_internal_set_isInitial(bool value);

  constexpr void __cordl_internal_set_memberLength(int32_t value);

  constexpr void __cordl_internal_set_memberNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_memberTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE value);

  constexpr void __cordl_internal_set_memberTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set_memberValueEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_nullCount(int32_t value);

  constexpr void __cordl_internal_set_numItems(int32_t value);

  constexpr void __cordl_internal_set_objectTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE value);

  constexpr void __cordl_internal_set_pr(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* value);

  constexpr void __cordl_internal_set_typeInformation(::System::Object* value);

  constexpr void __cordl_internal_set_typeInformationA(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x59aa37c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_opRecordIdCount();

  static inline void setStaticF_opRecordIdCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectProgress();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectProgress", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectProgress(ObjectProgress&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectProgress", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectProgress(ObjectProgress const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3289 };

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

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, 0x88>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*, "System.Runtime.Serialization.Formatters.Binary", "ObjectProgress");
