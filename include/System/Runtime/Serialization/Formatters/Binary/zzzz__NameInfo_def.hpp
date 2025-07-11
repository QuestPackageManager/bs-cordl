#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/NameInfo.hpp"
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
// Dependencies System.Object, System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE, System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.NameInfo
class CORDL_TYPE NameInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsSealed)) bool IsSealed;

  /// @brief Field NIFullName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_NIFullName, put = __cordl_internal_set_NIFullName)) ::StringW NIFullName;

  /// @brief Field NIarrayEnum, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_NIarrayEnum, put = __cordl_internal_set_NIarrayEnum)) ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE NIarrayEnum;

  /// @brief Field NIassemId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_NIassemId, put = __cordl_internal_set_NIassemId)) int64_t NIassemId;

  /// @brief Field NIisArray, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_NIisArray, put = __cordl_internal_set_NIisArray)) bool NIisArray;

  /// @brief Field NIisArrayItem, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_NIisArrayItem, put = __cordl_internal_set_NIisArrayItem)) bool NIisArrayItem;

  /// @brief Field NIisParentTypeOnObject, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get_NIisParentTypeOnObject, put = __cordl_internal_set_NIisParentTypeOnObject)) bool NIisParentTypeOnObject;

  /// @brief Field NIisSealed, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_NIisSealed, put = __cordl_internal_set_NIisSealed)) bool NIisSealed;

  __declspec(property(get = get_NIname, put = set_NIname)) ::StringW NIname;

  /// @brief Field NIobjectId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_NIobjectId, put = __cordl_internal_set_NIobjectId)) int64_t NIobjectId;

  /// @brief Field NIprimitiveTypeEnum, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_NIprimitiveTypeEnum,
                      put = __cordl_internal_set_NIprimitiveTypeEnum)) ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE NIprimitiveTypeEnum;

  /// @brief Field NIsealedStatusChecked, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_NIsealedStatusChecked, put = __cordl_internal_set_NIsealedStatusChecked)) bool NIsealedStatusChecked;

  /// @brief Field NItransmitTypeOnMember, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_NItransmitTypeOnMember, put = __cordl_internal_set_NItransmitTypeOnMember)) bool NItransmitTypeOnMember;

  /// @brief Field NItransmitTypeOnObject, offset 0x3b, size 0x1
  __declspec(property(get = __cordl_internal_get_NItransmitTypeOnObject, put = __cordl_internal_set_NItransmitTypeOnObject)) bool NItransmitTypeOnObject;

  /// @brief Field NItype, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_NItype, put = __cordl_internal_set_NItype)) ::System::Type* NItype;

  /// @brief Method Init, addr 0x3d0f620, size 0x20, virtual false, abstract: false, final false
  inline void Init();

  static inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_NIFullName() const;

  constexpr ::StringW& __cordl_internal_get_NIFullName();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const& __cordl_internal_get_NIarrayEnum() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE& __cordl_internal_get_NIarrayEnum();

  constexpr int64_t const& __cordl_internal_get_NIassemId() const;

  constexpr int64_t& __cordl_internal_get_NIassemId();

  constexpr bool const& __cordl_internal_get_NIisArray() const;

  constexpr bool& __cordl_internal_get_NIisArray();

  constexpr bool const& __cordl_internal_get_NIisArrayItem() const;

  constexpr bool& __cordl_internal_get_NIisArrayItem();

  constexpr bool const& __cordl_internal_get_NIisParentTypeOnObject() const;

  constexpr bool& __cordl_internal_get_NIisParentTypeOnObject();

  constexpr bool const& __cordl_internal_get_NIisSealed() const;

  constexpr bool& __cordl_internal_get_NIisSealed();

  constexpr int64_t const& __cordl_internal_get_NIobjectId() const;

  constexpr int64_t& __cordl_internal_get_NIobjectId();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& __cordl_internal_get_NIprimitiveTypeEnum() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& __cordl_internal_get_NIprimitiveTypeEnum();

  constexpr bool const& __cordl_internal_get_NIsealedStatusChecked() const;

  constexpr bool& __cordl_internal_get_NIsealedStatusChecked();

  constexpr bool const& __cordl_internal_get_NItransmitTypeOnMember() const;

  constexpr bool& __cordl_internal_get_NItransmitTypeOnMember();

  constexpr bool const& __cordl_internal_get_NItransmitTypeOnObject() const;

  constexpr bool& __cordl_internal_get_NItransmitTypeOnObject();

  constexpr ::System::Type* const& __cordl_internal_get_NItype() const;

  constexpr ::System::Type*& __cordl_internal_get_NItype();

  constexpr void __cordl_internal_set_NIFullName(::StringW value);

  constexpr void __cordl_internal_set_NIarrayEnum(::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value);

  constexpr void __cordl_internal_set_NIassemId(int64_t value);

  constexpr void __cordl_internal_set_NIisArray(bool value);

  constexpr void __cordl_internal_set_NIisArrayItem(bool value);

  constexpr void __cordl_internal_set_NIisParentTypeOnObject(bool value);

  constexpr void __cordl_internal_set_NIisSealed(bool value);

  constexpr void __cordl_internal_set_NIobjectId(int64_t value);

  constexpr void __cordl_internal_set_NIprimitiveTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);

  constexpr void __cordl_internal_set_NIsealedStatusChecked(bool value);

  constexpr void __cordl_internal_set_NItransmitTypeOnMember(bool value);

  constexpr void __cordl_internal_set_NItransmitTypeOnObject(bool value);

  constexpr void __cordl_internal_set_NItype(::System::Type* value);

  /// @brief Method .ctor, addr 0x3d0f640, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsSealed, addr 0x3d0f384, size 0x4c, virtual false, abstract: false, final false
  inline bool get_IsSealed();

  /// @brief Method get_NIname, addr 0x3d137f4, size 0x38, virtual false, abstract: false, final false
  inline ::StringW get_NIname();

  /// @brief Method set_NIname, addr 0x3d1382c, size 0x8, virtual false, abstract: false, final false
  inline void set_NIname(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameInfo(NameInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameInfo(NameInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3298 };

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

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::NameInfo, 0x48>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::NameInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::NameInfo*, "System.Runtime.Serialization.Formatters.Binary", "NameInfo");
