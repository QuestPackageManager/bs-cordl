#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalArrayTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NameInfo)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class NameInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::NameInfo);
// Type: System.Runtime.Serialization.Formatters.Binary::NameInfo
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 69, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3249)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(3252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3297))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::NameInfo*
class CORDL_TYPE NameInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field NIFullName, offset 0x10, size 0x8
  __declspec(property(get = __get_NIFullName, put = __set_NIFullName))::StringW NIFullName;

  /// @brief Field NIobjectId, offset 0x18, size 0x8
  __declspec(property(get = __get_NIobjectId, put = __set_NIobjectId)) int64_t NIobjectId;

  /// @brief Field NIassemId, offset 0x20, size 0x8
  __declspec(property(get = __get_NIassemId, put = __set_NIassemId)) int64_t NIassemId;

  /// @brief Field NIprimitiveTypeEnum, offset 0x28, size 0x4
  __declspec(property(get = __get_NIprimitiveTypeEnum, put = __set_NIprimitiveTypeEnum))::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE NIprimitiveTypeEnum;

  /// @brief Field NItype, offset 0x30, size 0x8
  __declspec(property(get = __get_NItype, put = __set_NItype))::System::Type* NItype;

  /// @brief Field NIisSealed, offset 0x38, size 0x1
  __declspec(property(get = __get_NIisSealed, put = __set_NIisSealed)) bool NIisSealed;

  /// @brief Field NIisArray, offset 0x39, size 0x1
  __declspec(property(get = __get_NIisArray, put = __set_NIisArray)) bool NIisArray;

  /// @brief Field NIisArrayItem, offset 0x3a, size 0x1
  __declspec(property(get = __get_NIisArrayItem, put = __set_NIisArrayItem)) bool NIisArrayItem;

  /// @brief Field NItransmitTypeOnObject, offset 0x3b, size 0x1
  __declspec(property(get = __get_NItransmitTypeOnObject, put = __set_NItransmitTypeOnObject)) bool NItransmitTypeOnObject;

  /// @brief Field NItransmitTypeOnMember, offset 0x3c, size 0x1
  __declspec(property(get = __get_NItransmitTypeOnMember, put = __set_NItransmitTypeOnMember)) bool NItransmitTypeOnMember;

  /// @brief Field NIisParentTypeOnObject, offset 0x3d, size 0x1
  __declspec(property(get = __get_NIisParentTypeOnObject, put = __set_NIisParentTypeOnObject)) bool NIisParentTypeOnObject;

  /// @brief Field NIarrayEnum, offset 0x40, size 0x4
  __declspec(property(get = __get_NIarrayEnum, put = __set_NIarrayEnum))::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE NIarrayEnum;

  /// @brief Field NIsealedStatusChecked, offset 0x44, size 0x1
  __declspec(property(get = __get_NIsealedStatusChecked, put = __set_NIsealedStatusChecked)) bool NIsealedStatusChecked;

  __declspec(property(get = get_IsSealed)) bool IsSealed;

  __declspec(property(get = get_NIname, put = set_NIname))::StringW NIname;

  constexpr ::StringW& __get_NIFullName();

  constexpr ::StringW const& __get_NIFullName() const;

  constexpr void __set_NIFullName(::StringW value);

  constexpr int64_t& __get_NIobjectId();

  constexpr int64_t const& __get_NIobjectId() const;

  constexpr void __set_NIobjectId(int64_t value);

  constexpr int64_t& __get_NIassemId();

  constexpr int64_t const& __get_NIassemId() const;

  constexpr void __set_NIassemId(int64_t value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& __get_NIprimitiveTypeEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& __get_NIprimitiveTypeEnum() const;

  constexpr void __set_NIprimitiveTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);

  constexpr ::System::Type*& __get_NItype();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_NItype() const;

  constexpr void __set_NItype(::System::Type* value);

  constexpr bool& __get_NIisSealed();

  constexpr bool const& __get_NIisSealed() const;

  constexpr void __set_NIisSealed(bool value);

  constexpr bool& __get_NIisArray();

  constexpr bool const& __get_NIisArray() const;

  constexpr void __set_NIisArray(bool value);

  constexpr bool& __get_NIisArrayItem();

  constexpr bool const& __get_NIisArrayItem() const;

  constexpr void __set_NIisArrayItem(bool value);

  constexpr bool& __get_NItransmitTypeOnObject();

  constexpr bool const& __get_NItransmitTypeOnObject() const;

  constexpr void __set_NItransmitTypeOnObject(bool value);

  constexpr bool& __get_NItransmitTypeOnMember();

  constexpr bool const& __get_NItransmitTypeOnMember() const;

  constexpr void __set_NItransmitTypeOnMember(bool value);

  constexpr bool& __get_NIisParentTypeOnObject();

  constexpr bool const& __get_NIisParentTypeOnObject() const;

  constexpr void __set_NIisParentTypeOnObject(bool value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE& __get_NIarrayEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const& __get_NIarrayEnum() const;

  constexpr void __set_NIarrayEnum(::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value);

  constexpr bool& __get_NIsealedStatusChecked();

  constexpr bool const& __get_NIsealedStatusChecked() const;

  constexpr void __set_NIsealedStatusChecked(bool value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* New_ctor();

  /// @brief Method .ctor addr 0x2379344 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Init addr 0x2379314 size 0x20 virtual false final false
  inline void Init();

  /// @brief Method get_IsSealed addr 0x2379070 size 0x4c virtual false final false
  inline bool get_IsSealed();

  /// @brief Method get_NIname addr 0x237d684 size 0x38 virtual false final false
  inline ::StringW get_NIname();

  /// @brief Method set_NIname addr 0x237d6bc size 0x8 virtual false final false
  inline void set_NIname(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "NameInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameInfo(NameInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameInfo(NameInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameInfo();

public:
  /// @brief Field NIFullName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___NIFullName;

  /// @brief Field NIobjectId, offset: 0x18, size: 0x8, def value: None
  int64_t ___NIobjectId;

  /// @brief Field NIassemId, offset: 0x20, size: 0x8, def value: None
  int64_t ___NIassemId;

  /// @brief Field NIprimitiveTypeEnum, offset: 0x28, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ___NIprimitiveTypeEnum;

  /// @brief Field NItype, offset: 0x30, size: 0x8, def value: None
  ::System::Type* ___NItype;

  /// @brief Field NIisSealed, offset: 0x38, size: 0x1, def value: None
  bool ___NIisSealed;

  /// @brief Field NIisArray, offset: 0x39, size: 0x1, def value: None
  bool ___NIisArray;

  /// @brief Field NIisArrayItem, offset: 0x3a, size: 0x1, def value: None
  bool ___NIisArrayItem;

  /// @brief Field NItransmitTypeOnObject, offset: 0x3b, size: 0x1, def value: None
  bool ___NItransmitTypeOnObject;

  /// @brief Field NItransmitTypeOnMember, offset: 0x3c, size: 0x1, def value: None
  bool ___NItransmitTypeOnMember;

  /// @brief Field NIisParentTypeOnObject, offset: 0x3d, size: 0x1, def value: None
  bool ___NIisParentTypeOnObject;

  /// @brief Field NIarrayEnum, offset: 0x40, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE ___NIarrayEnum;

  /// @brief Field NIsealedStatusChecked, offset: 0x44, size: 0x1, def value: None
  bool ___NIsealedStatusChecked;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::NameInfo, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::NameInfo, ___NIFullName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::NameInfo, ___NIobjectId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::NameInfo, ___NIassemId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::NameInfo, ___NIprimitiveTypeEnum) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::NameInfo, ___NItype) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::NameInfo, ___NIisSealed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::NameInfo, ___NIisArray) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::NameInfo, ___NIisArrayItem) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::NameInfo, ___NItransmitTypeOnObject) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::NameInfo, ___NItransmitTypeOnMember) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::NameInfo, ___NIisParentTypeOnObject) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::NameInfo, ___NIarrayEnum) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::NameInfo, ___NIsealedStatusChecked) == 0x44, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::NameInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::NameInfo*, "System.Runtime.Serialization.Formatters.Binary", "NameInfo");
