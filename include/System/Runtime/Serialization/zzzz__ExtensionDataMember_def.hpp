#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ExtensionDataMember.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExtensionDataMember)
namespace System::Runtime::Serialization {
class IDataNode;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ExtensionDataMember;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ExtensionDataMember);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ExtensionDataMember
class CORDL_TYPE ExtensionDataMember : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_MemberIndex, put = set_MemberIndex)) int32_t MemberIndex;

  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  __declspec(property(get = get_Namespace, put = set_Namespace)) ::StringW Namespace;

  __declspec(property(get = get_Value, put = set_Value)) ::System::Runtime::Serialization::IDataNode* Value;

  /// @brief Field memberIndex, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_memberIndex, put = __cordl_internal_set_memberIndex)) int32_t memberIndex;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field ns, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::StringW ns;

  /// @brief Field value, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Runtime::Serialization::IDataNode* value;

  static inline ::System::Runtime::Serialization::ExtensionDataMember* New_ctor();

  constexpr int32_t const& __cordl_internal_get_memberIndex() const;

  constexpr int32_t& __cordl_internal_get_memberIndex();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr ::System::Runtime::Serialization::IDataNode* const& __cordl_internal_get_value() const;

  constexpr ::System::Runtime::Serialization::IDataNode*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_memberIndex(int32_t value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr void __cordl_internal_set_value(::System::Runtime::Serialization::IDataNode* value);

  /// @brief Method .ctor, addr 0x5f33e2c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_MemberIndex, addr 0x5f33e1c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MemberIndex();

  /// @brief Method get_Name, addr 0x5f33dec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Namespace, addr 0x5f33dfc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_Value, addr 0x5f33e0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::IDataNode* get_Value();

  /// @brief Method set_MemberIndex, addr 0x5f33e24, size 0x8, virtual false, abstract: false, final false
  inline void set_MemberIndex(int32_t value);

  /// @brief Method set_Name, addr 0x5f33df4, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Namespace, addr 0x5f33e04, size 0x8, virtual false, abstract: false, final false
  inline void set_Namespace(::StringW value);

  /// @brief Method set_Value, addr 0x5f33e14, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::System::Runtime::Serialization::IDataNode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtensionDataMember();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtensionDataMember", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtensionDataMember(ExtensionDataMember&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtensionDataMember", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtensionDataMember(ExtensionDataMember const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16988 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field ns, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field value, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Serialization::IDataNode* ___value;

  /// @brief Field memberIndex, offset: 0x28, size: 0x4, def value: None
  int32_t ___memberIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataMember, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataMember, ___ns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataMember, ___value) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ExtensionDataMember, ___memberIndex) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ExtensionDataMember, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ExtensionDataMember);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ExtensionDataMember*, "System.Runtime.Serialization", "ExtensionDataMember");
