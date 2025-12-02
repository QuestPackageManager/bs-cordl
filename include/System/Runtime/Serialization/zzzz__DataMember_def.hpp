#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DataMember.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataMember)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Runtime::Serialization {
class DataContractPairKey;
}
namespace System::Runtime::Serialization {
class DataContract;
}
namespace System::Runtime::Serialization {
class DataMember_CriticalHelper;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class DataMember;
}
namespace System::Runtime::Serialization {
class DataMember_CriticalHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::DataMember);
MARK_REF_PTR_T(::System::Runtime::Serialization::DataMember_CriticalHelper);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.DataMember/CriticalHelper
class CORDL_TYPE DataMember_CriticalHelper : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ConflictingMember, put = set_ConflictingMember)) ::System::Runtime::Serialization::DataMember* ConflictingMember;

  __declspec(property(get = get_EmitDefaultValue, put = set_EmitDefaultValue)) bool EmitDefaultValue;

  __declspec(property(get = get_HasConflictingNameAndType, put = set_HasConflictingNameAndType)) bool HasConflictingNameAndType;

  __declspec(property(get = get_IsGetOnlyCollection, put = set_IsGetOnlyCollection)) bool IsGetOnlyCollection;

  __declspec(property(get = get_IsNullable, put = set_IsNullable)) bool IsNullable;

  __declspec(property(get = get_IsRequired, put = set_IsRequired)) bool IsRequired;

  __declspec(property(get = get_MemberInfo)) ::System::Reflection::MemberInfo* MemberInfo;

  __declspec(property(get = get_MemberType)) ::System::Type* MemberType;

  __declspec(property(get = get_MemberTypeContract)) ::System::Runtime::Serialization::DataContract* MemberTypeContract;

  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  __declspec(property(get = get_Order, put = set_Order)) int32_t Order;

  /// @brief Field conflictingMember, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_conflictingMember, put = __cordl_internal_set_conflictingMember)) ::System::Runtime::Serialization::DataMember* conflictingMember;

  /// @brief Field emitDefaultValue, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_emitDefaultValue, put = __cordl_internal_set_emitDefaultValue)) bool emitDefaultValue;

  /// @brief Field hasConflictingNameAndType, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_hasConflictingNameAndType, put = __cordl_internal_set_hasConflictingNameAndType)) bool hasConflictingNameAndType;

  /// @brief Field isGetOnlyCollection, offset 0x27, size 0x1
  __declspec(property(get = __cordl_internal_get_isGetOnlyCollection, put = __cordl_internal_set_isGetOnlyCollection)) bool isGetOnlyCollection;

  /// @brief Field isNullable, offset 0x26, size 0x1
  __declspec(property(get = __cordl_internal_get_isNullable, put = __cordl_internal_set_isNullable)) bool isNullable;

  /// @brief Field isRequired, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_isRequired, put = __cordl_internal_set_isRequired)) bool isRequired;

  /// @brief Field memberInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_memberInfo, put = __cordl_internal_set_memberInfo)) ::System::Reflection::MemberInfo* memberInfo;

  /// @brief Field memberTypeContract, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_memberTypeContract, put = __cordl_internal_set_memberTypeContract)) ::System::Runtime::Serialization::DataContract* memberTypeContract;

  /// @brief Field name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field order, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_order, put = __cordl_internal_set_order)) int32_t order;

  static inline ::System::Runtime::Serialization::DataMember_CriticalHelper* New_ctor(::System::Reflection::MemberInfo* memberInfo);

  constexpr ::System::Runtime::Serialization::DataMember* const& __cordl_internal_get_conflictingMember() const;

  constexpr ::System::Runtime::Serialization::DataMember*& __cordl_internal_get_conflictingMember();

  constexpr bool const& __cordl_internal_get_emitDefaultValue() const;

  constexpr bool& __cordl_internal_get_emitDefaultValue();

  constexpr bool const& __cordl_internal_get_hasConflictingNameAndType() const;

  constexpr bool& __cordl_internal_get_hasConflictingNameAndType();

  constexpr bool const& __cordl_internal_get_isGetOnlyCollection() const;

  constexpr bool& __cordl_internal_get_isGetOnlyCollection();

  constexpr bool const& __cordl_internal_get_isNullable() const;

  constexpr bool& __cordl_internal_get_isNullable();

  constexpr bool const& __cordl_internal_get_isRequired() const;

  constexpr bool& __cordl_internal_get_isRequired();

  constexpr ::System::Reflection::MemberInfo* const& __cordl_internal_get_memberInfo() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get_memberInfo();

  constexpr ::System::Runtime::Serialization::DataContract* const& __cordl_internal_get_memberTypeContract() const;

  constexpr ::System::Runtime::Serialization::DataContract*& __cordl_internal_get_memberTypeContract();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr int32_t const& __cordl_internal_get_order() const;

  constexpr int32_t& __cordl_internal_get_order();

  constexpr void __cordl_internal_set_conflictingMember(::System::Runtime::Serialization::DataMember* value);

  constexpr void __cordl_internal_set_emitDefaultValue(bool value);

  constexpr void __cordl_internal_set_hasConflictingNameAndType(bool value);

  constexpr void __cordl_internal_set_isGetOnlyCollection(bool value);

  constexpr void __cordl_internal_set_isNullable(bool value);

  constexpr void __cordl_internal_set_isRequired(bool value);

  constexpr void __cordl_internal_set_memberInfo(::System::Reflection::MemberInfo* value);

  constexpr void __cordl_internal_set_memberTypeContract(::System::Runtime::Serialization::DataContract* value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_order(int32_t value);

  /// @brief Method .ctor, addr 0x5f302c4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method get_ConflictingMember, addr 0x5f30890, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataMember* get_ConflictingMember();

  /// @brief Method get_EmitDefaultValue, addr 0x5f30850, size 0x8, virtual false, abstract: false, final false
  inline bool get_EmitDefaultValue();

  /// @brief Method get_HasConflictingNameAndType, addr 0x5f30880, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasConflictingNameAndType();

  /// @brief Method get_IsGetOnlyCollection, addr 0x5f30870, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsGetOnlyCollection();

  /// @brief Method get_IsNullable, addr 0x5f30860, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNullable();

  /// @brief Method get_IsRequired, addr 0x5f30840, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsRequired();

  /// @brief Method get_MemberInfo, addr 0x5f30818, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MemberInfo* get_MemberInfo();

  /// @brief Method get_MemberType, addr 0x5f30430, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Type* get_MemberType();

  /// @brief Method get_MemberTypeContract, addr 0x5f3051c, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* get_MemberTypeContract();

  /// @brief Method get_Name, addr 0x5f30820, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Order, addr 0x5f30830, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Order();

  /// @brief Method set_ConflictingMember, addr 0x5f30898, size 0x8, virtual false, abstract: false, final false
  inline void set_ConflictingMember(::System::Runtime::Serialization::DataMember* value);

  /// @brief Method set_EmitDefaultValue, addr 0x5f30858, size 0x8, virtual false, abstract: false, final false
  inline void set_EmitDefaultValue(bool value);

  /// @brief Method set_HasConflictingNameAndType, addr 0x5f30888, size 0x8, virtual false, abstract: false, final false
  inline void set_HasConflictingNameAndType(bool value);

  /// @brief Method set_IsGetOnlyCollection, addr 0x5f30878, size 0x8, virtual false, abstract: false, final false
  inline void set_IsGetOnlyCollection(bool value);

  /// @brief Method set_IsNullable, addr 0x5f30868, size 0x8, virtual false, abstract: false, final false
  inline void set_IsNullable(bool value);

  /// @brief Method set_IsRequired, addr 0x5f30848, size 0x8, virtual false, abstract: false, final false
  inline void set_IsRequired(bool value);

  /// @brief Method set_Name, addr 0x5f30828, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Order, addr 0x5f30838, size 0x8, virtual false, abstract: false, final false
  inline void set_Order(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataMember_CriticalHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataMember_CriticalHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataMember_CriticalHelper(DataMember_CriticalHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataMember_CriticalHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataMember_CriticalHelper(DataMember_CriticalHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16979 };

  /// @brief Field memberTypeContract, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::DataContract* ___memberTypeContract;

  /// @brief Field name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field order, offset: 0x20, size: 0x4, def value: None
  int32_t ___order;

  /// @brief Field isRequired, offset: 0x24, size: 0x1, def value: None
  bool ___isRequired;

  /// @brief Field emitDefaultValue, offset: 0x25, size: 0x1, def value: None
  bool ___emitDefaultValue;

  /// @brief Field isNullable, offset: 0x26, size: 0x1, def value: None
  bool ___isNullable;

  /// @brief Field isGetOnlyCollection, offset: 0x27, size: 0x1, def value: None
  bool ___isGetOnlyCollection;

  /// @brief Field memberInfo, offset: 0x28, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ___memberInfo;

  /// @brief Field hasConflictingNameAndType, offset: 0x30, size: 0x1, def value: None
  bool ___hasConflictingNameAndType;

  /// @brief Field conflictingMember, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::Serialization::DataMember* ___conflictingMember;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::DataMember_CriticalHelper, ___memberTypeContract) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataMember_CriticalHelper, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataMember_CriticalHelper, ___order) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataMember_CriticalHelper, ___isRequired) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataMember_CriticalHelper, ___emitDefaultValue) == 0x25, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataMember_CriticalHelper, ___isNullable) == 0x26, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataMember_CriticalHelper, ___isGetOnlyCollection) == 0x27, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataMember_CriticalHelper, ___memberInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataMember_CriticalHelper, ___hasConflictingNameAndType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataMember_CriticalHelper, ___conflictingMember) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DataMember_CriticalHelper, 0x40>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.DataMember
class CORDL_TYPE DataMember : public ::System::Object {
public:
  // Declarations
  using CriticalHelper = ::System::Runtime::Serialization::DataMember_CriticalHelper;

  __declspec(property(get = get_ConflictingMember, put = set_ConflictingMember)) ::System::Runtime::Serialization::DataMember* ConflictingMember;

  __declspec(property(get = get_EmitDefaultValue, put = set_EmitDefaultValue)) bool EmitDefaultValue;

  __declspec(property(get = get_HasConflictingNameAndType, put = set_HasConflictingNameAndType)) bool HasConflictingNameAndType;

  __declspec(property(get = get_IsGetOnlyCollection, put = set_IsGetOnlyCollection)) bool IsGetOnlyCollection;

  __declspec(property(get = get_IsNullable, put = set_IsNullable)) bool IsNullable;

  __declspec(property(get = get_IsRequired, put = set_IsRequired)) bool IsRequired;

  __declspec(property(get = get_MemberInfo)) ::System::Reflection::MemberInfo* MemberInfo;

  __declspec(property(get = get_MemberType)) ::System::Type* MemberType;

  __declspec(property(get = get_MemberTypeContract)) ::System::Runtime::Serialization::DataContract* MemberTypeContract;

  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  __declspec(property(get = get_Order, put = set_Order)) int32_t Order;

  /// @brief Field helper, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_helper, put = __cordl_internal_set_helper)) ::System::Runtime::Serialization::DataMember_CriticalHelper* helper;

  /// @brief Method Equals, addr 0x5f30630, size 0x1d4, virtual false, abstract: false, final false
  inline bool Equals(::System::Object* other, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts);

  /// @brief Method GetHashCode, addr 0x5f30804, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Runtime::Serialization::DataMember* New_ctor(::System::Reflection::MemberInfo* memberInfo);

  constexpr ::System::Runtime::Serialization::DataMember_CriticalHelper* const& __cordl_internal_get_helper() const;

  constexpr ::System::Runtime::Serialization::DataMember_CriticalHelper*& __cordl_internal_get_helper();

  constexpr void __cordl_internal_set_helper(::System::Runtime::Serialization::DataMember_CriticalHelper* value);

  /// @brief Method .ctor, addr 0x5f3025c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method get_ConflictingMember, addr 0x5f30600, size 0x18, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataMember* get_ConflictingMember();

  /// @brief Method get_EmitDefaultValue, addr 0x5f30380, size 0x18, virtual false, abstract: false, final false
  inline bool get_EmitDefaultValue();

  /// @brief Method get_HasConflictingNameAndType, addr 0x5f305cc, size 0x18, virtual false, abstract: false, final false
  inline bool get_HasConflictingNameAndType();

  /// @brief Method get_IsGetOnlyCollection, addr 0x5f303e8, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsGetOnlyCollection();

  /// @brief Method get_IsNullable, addr 0x5f303b4, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsNullable();

  /// @brief Method get_IsRequired, addr 0x5f3034c, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsRequired();

  /// @brief Method get_MemberInfo, addr 0x5f302d4, size 0x18, virtual false, abstract: false, final false
  inline ::System::Reflection::MemberInfo* get_MemberInfo();

  /// @brief Method get_MemberType, addr 0x5f3041c, size 0x14, virtual false, abstract: false, final false
  inline ::System::Type* get_MemberType();

  /// @brief Method get_MemberTypeContract, addr 0x5f30508, size 0x14, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* get_MemberTypeContract();

  /// @brief Method get_Name, addr 0x5f302ec, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Order, addr 0x5f3031c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Order();

  /// @brief Method set_ConflictingMember, addr 0x5f30618, size 0x18, virtual false, abstract: false, final false
  inline void set_ConflictingMember(::System::Runtime::Serialization::DataMember* value);

  /// @brief Method set_EmitDefaultValue, addr 0x5f30398, size 0x1c, virtual false, abstract: false, final false
  inline void set_EmitDefaultValue(bool value);

  /// @brief Method set_HasConflictingNameAndType, addr 0x5f305e4, size 0x1c, virtual false, abstract: false, final false
  inline void set_HasConflictingNameAndType(bool value);

  /// @brief Method set_IsGetOnlyCollection, addr 0x5f30400, size 0x1c, virtual false, abstract: false, final false
  inline void set_IsGetOnlyCollection(bool value);

  /// @brief Method set_IsNullable, addr 0x5f303cc, size 0x1c, virtual false, abstract: false, final false
  inline void set_IsNullable(bool value);

  /// @brief Method set_IsRequired, addr 0x5f30364, size 0x1c, virtual false, abstract: false, final false
  inline void set_IsRequired(bool value);

  /// @brief Method set_Name, addr 0x5f30304, size 0x18, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Order, addr 0x5f30334, size 0x18, virtual false, abstract: false, final false
  inline void set_Order(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataMember();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataMember", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataMember(DataMember&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataMember", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataMember(DataMember const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16980 };

  /// @brief Field helper, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::DataMember_CriticalHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::DataMember, ___helper) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DataMember, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::DataMember);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DataMember*, "System.Runtime.Serialization", "DataMember");
NEED_NO_BOX(::System::Runtime::Serialization::DataMember_CriticalHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DataMember_CriticalHelper*, "System.Runtime.Serialization", "DataMember/CriticalHelper");
