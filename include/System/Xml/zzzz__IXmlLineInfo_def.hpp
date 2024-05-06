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
// Type: System.Xml::IXmlLineInfo
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::IXmlLineInfo*
class CORDL_TYPE IXmlLineInfo {
public:
  // Declarations
  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  /// @brief Method HasLineInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool HasLineInfo();

  /// @brief Method get_LineNumber, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_LinePosition();

  // Ctor Parameters [CppParam { name: "", ty: "IXmlLineInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXmlLineInfo(IXmlLineInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXmlLineInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXmlLineInfo(IXmlLineInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IXmlLineInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IXmlLineInfo*, "System.Xml", "IXmlLineInfo");
