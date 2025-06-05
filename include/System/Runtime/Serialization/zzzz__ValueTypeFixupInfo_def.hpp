#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ValueTypeFixupInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTypeFixupInfo)
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ValueTypeFixupInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ValueTypeFixupInfo);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ValueTypeFixupInfo
class CORDL_TYPE ValueTypeFixupInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ContainerID)) int64_t ContainerID;

  __declspec(property(get = get_ParentField)) ::System::Reflection::FieldInfo* ParentField;

  __declspec(property(get = get_ParentIndex)) ::ArrayW<int32_t, ::Array<int32_t>*> ParentIndex;

  /// @brief Field _containerID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__containerID, put = __cordl_internal_set__containerID)) int64_t _containerID;

  /// @brief Field _parentField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__parentField, put = __cordl_internal_set__parentField)) ::System::Reflection::FieldInfo* _parentField;

  /// @brief Field _parentIndex, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__parentIndex, put = __cordl_internal_set__parentIndex)) ::ArrayW<int32_t, ::Array<int32_t>*> _parentIndex;

  static inline ::System::Runtime::Serialization::ValueTypeFixupInfo* New_ctor(int64_t containerID, ::System::Reflection::FieldInfo* member, ::ArrayW<int32_t, ::Array<int32_t>*> parentIndex);

  constexpr int64_t const& __cordl_internal_get__containerID() const;

  constexpr int64_t& __cordl_internal_get__containerID();

  constexpr ::System::Reflection::FieldInfo* const& __cordl_internal_get__parentField() const;

  constexpr ::System::Reflection::FieldInfo*& __cordl_internal_get__parentField();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__parentIndex() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__parentIndex();

  constexpr void __cordl_internal_set__containerID(int64_t value);

  constexpr void __cordl_internal_set__parentField(::System::Reflection::FieldInfo* value);

  constexpr void __cordl_internal_set__parentIndex(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x3cf4ebc, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(int64_t containerID, ::System::Reflection::FieldInfo* member, ::ArrayW<int32_t, ::Array<int32_t>*> parentIndex);

  /// @brief Method get_ContainerID, addr 0x3cf5000, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_ContainerID();

  /// @brief Method get_ParentField, addr 0x3cf5008, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::FieldInfo* get_ParentField();

  /// @brief Method get_ParentIndex, addr 0x3cf5010, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_ParentIndex();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTypeFixupInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValueTypeFixupInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValueTypeFixupInfo(ValueTypeFixupInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValueTypeFixupInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValueTypeFixupInfo(ValueTypeFixupInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3211 };

  /// @brief Field _containerID, offset: 0x10, size: 0x8, def value: None
  int64_t ____containerID;

  /// @brief Field _parentField, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::FieldInfo* ____parentField;

  /// @brief Field _parentIndex, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____parentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ValueTypeFixupInfo, ____containerID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ValueTypeFixupInfo, ____parentField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ValueTypeFixupInfo, ____parentIndex) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ValueTypeFixupInfo, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ValueTypeFixupInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ValueTypeFixupInfo*, "System.Runtime.Serialization", "ValueTypeFixupInfo");
