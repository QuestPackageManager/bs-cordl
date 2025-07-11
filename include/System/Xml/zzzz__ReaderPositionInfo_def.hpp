#pragma once
// IWYU pragma private; include "System/Xml/ReaderPositionInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__PositionInfo_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReaderPositionInfo)
namespace System::Xml {
class IXmlLineInfo;
}
// Forward declare root types
namespace System::Xml {
class ReaderPositionInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::ReaderPositionInfo);
// Dependencies System.Xml.PositionInfo
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.ReaderPositionInfo
class CORDL_TYPE ReaderPositionInfo : public ::System::Xml::PositionInfo {
public:
  // Declarations
  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  /// @brief Field lineInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lineInfo, put = __cordl_internal_set_lineInfo)) ::System::Xml::IXmlLineInfo* lineInfo;

  /// @brief Method HasLineInfo, addr 0x434aadc, size 0xa0, virtual true, abstract: false, final false
  inline bool HasLineInfo();

  static inline ::System::Xml::ReaderPositionInfo* New_ctor(::System::Xml::IXmlLineInfo* lineInfo);

  constexpr ::System::Xml::IXmlLineInfo* const& __cordl_internal_get_lineInfo() const;

  constexpr ::System::Xml::IXmlLineInfo*& __cordl_internal_get_lineInfo();

  constexpr void __cordl_internal_set_lineInfo(::System::Xml::IXmlLineInfo* value);

  /// @brief Method .ctor, addr 0x434aaac, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::IXmlLineInfo* lineInfo);

  /// @brief Method get_LineNumber, addr 0x434ab7c, size 0xa4, virtual true, abstract: false, final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x434ac20, size 0xa4, virtual true, abstract: false, final false
  inline int32_t get_LinePosition();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReaderPositionInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReaderPositionInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReaderPositionInfo(ReaderPositionInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReaderPositionInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReaderPositionInfo(ReaderPositionInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7327 };

  /// @brief Field lineInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::IXmlLineInfo* ___lineInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::ReaderPositionInfo, ___lineInfo) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::ReaderPositionInfo, 0x18>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::ReaderPositionInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ReaderPositionInfo*, "System.Xml", "ReaderPositionInfo");
