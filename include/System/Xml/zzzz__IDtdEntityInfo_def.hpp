#pragma once
// IWYU pragma private; include "System/Xml/IDtdEntityInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IDtdEntityInfo)
// Forward declare root types
namespace System::Xml {
class IDtdEntityInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IDtdEntityInfo);
// Dependencies
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.IDtdEntityInfo
class CORDL_TYPE IDtdEntityInfo {
public:
  // Declarations
  __declspec(property(get = get_BaseUriString)) ::StringW BaseUriString;

  __declspec(property(get = get_DeclaredUriString)) ::StringW DeclaredUriString;

  __declspec(property(get = get_IsDeclaredInExternal)) bool IsDeclaredInExternal;

  __declspec(property(get = get_IsExternal)) bool IsExternal;

  __declspec(property(get = get_IsParameterEntity)) bool IsParameterEntity;

  __declspec(property(get = get_IsUnparsedEntity)) bool IsUnparsedEntity;

  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_PublicId)) ::StringW PublicId;

  __declspec(property(get = get_SystemId)) ::StringW SystemId;

  __declspec(property(get = get_Text)) ::StringW Text;

  /// @brief Method get_BaseUriString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_BaseUriString();

  /// @brief Method get_DeclaredUriString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_DeclaredUriString();

  /// @brief Method get_IsDeclaredInExternal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsDeclaredInExternal();

  /// @brief Method get_IsExternal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsExternal();

  /// @brief Method get_IsParameterEntity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsParameterEntity();

  /// @brief Method get_IsUnparsedEntity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsUnparsedEntity();

  /// @brief Method get_LineNumber, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_LinePosition();

  /// @brief Method get_Name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_PublicId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_PublicId();

  /// @brief Method get_SystemId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_SystemId();

  /// @brief Method get_Text, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Text();

  // Ctor Parameters [CppParam { name: "", ty: "IDtdEntityInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDtdEntityInfo(IDtdEntityInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7188 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IDtdEntityInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdEntityInfo*, "System.Xml", "IDtdEntityInfo");
