#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlAsyncCheckReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlAsyncCheckReaderWithNS)
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
class XmlAsyncCheckReaderWithNS;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlAsyncCheckReaderWithNS);
// Type: System.Xml::XmlAsyncCheckReaderWithNS
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlAsyncCheckReaderWithNS*
class CORDL_TYPE XmlAsyncCheckReaderWithNS : public ::System::Xml::XmlAsyncCheckReader {
public:
  // Declarations
  /// @brief Field readerAsIXmlNamespaceResolver, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_readerAsIXmlNamespaceResolver,
                      put = __cordl_internal_set_readerAsIXmlNamespaceResolver))::System::Xml::IXmlNamespaceResolver* readerAsIXmlNamespaceResolver;

  /// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
  constexpr operator ::System::Xml::IXmlNamespaceResolver*() noexcept;

  static inline ::System::Xml::XmlAsyncCheckReaderWithNS* New_ctor(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.IXmlNamespaceResolver.GetNamespacesInScope, addr 0x2d6a5a4, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace, addr 0x2d6a64c, size 0xac, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix, addr 0x2d6a6f8, size 0xac, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName);

  constexpr ::System::Xml::IXmlNamespaceResolver*& __cordl_internal_get_readerAsIXmlNamespaceResolver();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IXmlNamespaceResolver*> const& __cordl_internal_get_readerAsIXmlNamespaceResolver() const;

  constexpr void __cordl_internal_set_readerAsIXmlNamespaceResolver(::System::Xml::IXmlNamespaceResolver* value);

  /// @brief Method .ctor, addr 0x2d6998c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlReader* reader);

  /// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
  constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAsyncCheckReaderWithNS();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckReaderWithNS", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAsyncCheckReaderWithNS(XmlAsyncCheckReaderWithNS&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckReaderWithNS", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAsyncCheckReaderWithNS(XmlAsyncCheckReaderWithNS const&) = delete;

  /// @brief Field readerAsIXmlNamespaceResolver, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::IXmlNamespaceResolver* ___readerAsIXmlNamespaceResolver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlAsyncCheckReaderWithNS, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlAsyncCheckReaderWithNS, ___readerAsIXmlNamespaceResolver) == 0x20, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlAsyncCheckReaderWithNS);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAsyncCheckReaderWithNS*, "System.Xml", "XmlAsyncCheckReaderWithNS");
