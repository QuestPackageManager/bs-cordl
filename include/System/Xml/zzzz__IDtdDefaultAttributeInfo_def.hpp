#pragma once
// IWYU pragma private; include "System/Xml/IDtdDefaultAttributeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__IDtdAttributeInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IDtdDefaultAttributeInfo)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class IDtdDefaultAttributeInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IDtdDefaultAttributeInfo);
// Dependencies System.Xml.IDtdAttributeInfo
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.IDtdDefaultAttributeInfo
class CORDL_TYPE IDtdDefaultAttributeInfo {
public:
  // Declarations
  __declspec(property(get = get_DefaultValueExpanded)) ::StringW DefaultValueExpanded;

  __declspec(property(get = get_DefaultValueTyped)) ::System::Object* DefaultValueTyped;

  __declspec(property(get = get_ValueLineNumber)) int32_t ValueLineNumber;

  __declspec(property(get = get_ValueLinePosition)) int32_t ValueLinePosition;

  /// @brief Convert operator to "::System::Xml::IDtdAttributeInfo"
  constexpr operator ::System::Xml::IDtdAttributeInfo*() noexcept;

  /// @brief Method get_DefaultValueExpanded, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_DefaultValueExpanded();

  /// @brief Method get_DefaultValueTyped, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_DefaultValueTyped();

  /// @brief Method get_ValueLineNumber, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_ValueLineNumber();

  /// @brief Method get_ValueLinePosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_ValueLinePosition();

  /// @brief Convert to "::System::Xml::IDtdAttributeInfo"
  constexpr ::System::Xml::IDtdAttributeInfo* i___System__Xml__IDtdAttributeInfo() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDtdDefaultAttributeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDtdDefaultAttributeInfo(IDtdDefaultAttributeInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7186 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IDtdDefaultAttributeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdDefaultAttributeInfo*, "System.Xml", "IDtdDefaultAttributeInfo");
