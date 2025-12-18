#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ISerializableDataMember.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ISerializableDataMember)
namespace System::Runtime::Serialization {
class IDataNode;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ISerializableDataMember;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ISerializableDataMember);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ISerializableDataMember
class CORDL_TYPE ISerializableDataMember : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  __declspec(property(get = get_Value, put = set_Value)) ::System::Runtime::Serialization::IDataNode* Value;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Runtime::Serialization::IDataNode* value;

  static inline ::System::Runtime::Serialization::ISerializableDataMember* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Runtime::Serialization::IDataNode* const& __cordl_internal_get_value() const;

  constexpr ::System::Runtime::Serialization::IDataNode*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_value(::System::Runtime::Serialization::IDataNode* value);

  /// @brief Method .ctor, addr 0x5f9c490, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x5f9c470, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Value, addr 0x5f9c480, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::IDataNode* get_Value();

  /// @brief Method set_Name, addr 0x5f9c478, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Value, addr 0x5f9c488, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::System::Runtime::Serialization::IDataNode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ISerializableDataMember();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ISerializableDataMember", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISerializableDataMember(ISerializableDataMember&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISerializableDataMember", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISerializableDataMember(ISerializableDataMember const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17009 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Serialization::IDataNode* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ISerializableDataMember, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ISerializableDataMember, ___value) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ISerializableDataMember, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ISerializableDataMember);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ISerializableDataMember*, "System.Runtime.Serialization", "ISerializableDataMember");
