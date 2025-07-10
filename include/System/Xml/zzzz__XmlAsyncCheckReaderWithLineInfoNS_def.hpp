#pragma once
// IWYU pragma private; include "System/Xml/XmlAsyncCheckReaderWithLineInfoNS.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlAsyncCheckReaderWithLineInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlAsyncCheckReaderWithLineInfoNS)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
struct XmlNamespaceScope;
}
namespace System::Xml {
class XmlReader;
}
// Forward declare root types
namespace System::Xml {
class XmlAsyncCheckReaderWithLineInfoNS;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlAsyncCheckReaderWithLineInfoNS);
// Dependencies System.Xml.IXmlNamespaceResolver, System.Xml.XmlAsyncCheckReaderWithLineInfo
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlAsyncCheckReaderWithLineInfoNS
class CORDL_TYPE XmlAsyncCheckReaderWithLineInfoNS : public ::System::Xml::XmlAsyncCheckReaderWithLineInfo {
public:
  // Declarations
  /// @brief Field readerAsIXmlNamespaceResolver, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_readerAsIXmlNamespaceResolver,
                      put = __cordl_internal_set_readerAsIXmlNamespaceResolver)) ::System::Xml::IXmlNamespaceResolver* readerAsIXmlNamespaceResolver;

  /// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
  constexpr operator ::System::Xml::IXmlNamespaceResolver*() noexcept;

  static inline ::System::Xml::XmlAsyncCheckReaderWithLineInfoNS* New_ctor(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.IXmlNamespaceResolver.GetNamespacesInScope, addr 0x430e54c, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace, addr 0x430e5f4, size 0xac, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix, addr 0x430e6a0, size 0xac, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName);

  constexpr ::System::Xml::IXmlNamespaceResolver* const& __cordl_internal_get_readerAsIXmlNamespaceResolver() const;

  constexpr ::System::Xml::IXmlNamespaceResolver*& __cordl_internal_get_readerAsIXmlNamespaceResolver();

  constexpr void __cordl_internal_set_readerAsIXmlNamespaceResolver(::System::Xml::IXmlNamespaceResolver* value);

  /// @brief Method .ctor, addr 0x430d410, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlReader* reader);

  /// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
  constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAsyncCheckReaderWithLineInfoNS();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckReaderWithLineInfoNS", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAsyncCheckReaderWithLineInfoNS(XmlAsyncCheckReaderWithLineInfoNS&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckReaderWithLineInfoNS", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAsyncCheckReaderWithLineInfoNS(XmlAsyncCheckReaderWithLineInfoNS const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7216 };

  /// @brief Field readerAsIXmlNamespaceResolver, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::IXmlNamespaceResolver* ___readerAsIXmlNamespaceResolver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlAsyncCheckReaderWithLineInfoNS, ___readerAsIXmlNamespaceResolver) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlAsyncCheckReaderWithLineInfoNS, 0x30>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlAsyncCheckReaderWithLineInfoNS);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAsyncCheckReaderWithLineInfoNS*, "System.Xml", "XmlAsyncCheckReaderWithLineInfoNS");
