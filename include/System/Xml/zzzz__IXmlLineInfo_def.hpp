#pragma once
// IWYU pragma private; include "System/Xml/IXmlLineInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IXmlLineInfo)
// Forward declare root types
namespace System::Xml {
class IXmlLineInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IXmlLineInfo);
// Dependencies
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.IXmlLineInfo
class CORDL_TYPE IXmlLineInfo {
public:
  // Declarations
  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  /// @brief Method HasLineInfo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool HasLineInfo();

  /// @brief Method get_LineNumber, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_LinePosition();

  // Ctor Parameters [CppParam { name: "", ty: "IXmlLineInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXmlLineInfo(IXmlLineInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7320 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IXmlLineInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IXmlLineInfo*, "System.Xml", "IXmlLineInfo");
