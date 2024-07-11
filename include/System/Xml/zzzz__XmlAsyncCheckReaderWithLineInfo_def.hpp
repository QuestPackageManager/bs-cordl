#pragma once
// IWYU pragma private; include "System/Xml/XmlAsyncCheckReaderWithLineInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlAsyncCheckReader_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAsyncCheckReaderWithLineInfo)
namespace System::Xml {
class IXmlLineInfo;
}
namespace System::Xml {
class XmlReader;
}
// Forward declare root types
namespace System::Xml {
class XmlAsyncCheckReaderWithLineInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlAsyncCheckReaderWithLineInfo);
// Type: System.Xml::XmlAsyncCheckReaderWithLineInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlAsyncCheckReaderWithLineInfo*
class CORDL_TYPE XmlAsyncCheckReaderWithLineInfo : public ::System::Xml::XmlAsyncCheckReader {
public:
  // Declarations
  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  /// @brief Field readerAsIXmlLineInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_readerAsIXmlLineInfo, put = __cordl_internal_set_readerAsIXmlLineInfo))::System::Xml::IXmlLineInfo* readerAsIXmlLineInfo;

  /// @brief Convert operator to "::System::Xml::IXmlLineInfo"
  constexpr operator ::System::Xml::IXmlLineInfo*() noexcept;

  /// @brief Method HasLineInfo, addr 0x2e971a8, size 0xa0, virtual true, abstract: false, final false
  inline bool HasLineInfo();

  static inline ::System::Xml::XmlAsyncCheckReaderWithLineInfo* New_ctor(::System::Xml::XmlReader* reader);

  constexpr ::System::Xml::IXmlLineInfo*& __cordl_internal_get_readerAsIXmlLineInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IXmlLineInfo*> const& __cordl_internal_get_readerAsIXmlLineInfo() const;

  constexpr void __cordl_internal_set_readerAsIXmlLineInfo(::System::Xml::IXmlLineInfo* value);

  /// @brief Method .ctor, addr 0x2e962ec, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlReader* reader);

  /// @brief Method get_LineNumber, addr 0x2e97248, size 0xa4, virtual true, abstract: false, final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x2e972ec, size 0xa4, virtual true, abstract: false, final false
  inline int32_t get_LinePosition();

  /// @brief Convert to "::System::Xml::IXmlLineInfo"
  constexpr ::System::Xml::IXmlLineInfo* i___System__Xml__IXmlLineInfo() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAsyncCheckReaderWithLineInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckReaderWithLineInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAsyncCheckReaderWithLineInfo(XmlAsyncCheckReaderWithLineInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckReaderWithLineInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAsyncCheckReaderWithLineInfo(XmlAsyncCheckReaderWithLineInfo const&) = delete;

  /// @brief Field readerAsIXmlLineInfo, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::IXmlLineInfo* ___readerAsIXmlLineInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlAsyncCheckReaderWithLineInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlAsyncCheckReaderWithLineInfo, ___readerAsIXmlLineInfo) == 0x20, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlAsyncCheckReaderWithLineInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAsyncCheckReaderWithLineInfo*, "System.Xml", "XmlAsyncCheckReaderWithLineInfo");
