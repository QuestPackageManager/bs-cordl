#pragma once
// IWYU pragma private; include "System/Data/XmlIgnoreNamespaceReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNodeReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlIgnoreNamespaceReader)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Xml {
class XmlDocument;
}
// Forward declare root types
namespace System::Data {
class XmlIgnoreNamespaceReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::XmlIgnoreNamespaceReader);
// Dependencies System.Xml.XmlNodeReader
namespace System::Data {
// Is value type: false
// CS Name: System.Data.XmlIgnoreNamespaceReader
class CORDL_TYPE XmlIgnoreNamespaceReader : public ::System::Xml::XmlNodeReader {
public:
  // Declarations
  /// @brief Field _namespacesToIgnore, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__namespacesToIgnore, put = __cordl_internal_set__namespacesToIgnore)) ::System::Collections::Generic::List_1<::StringW>* _namespacesToIgnore;

  /// @brief Method MoveToFirstAttribute, addr 0x41afbec, size 0x110, virtual true, abstract: false, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToNextAttribute, addr 0x41afcfc, size 0x10c, virtual true, abstract: false, final false
  inline bool MoveToNextAttribute();

  static inline ::System::Data::XmlIgnoreNamespaceReader* New_ctor(::System::Xml::XmlDocument* xdoc, ::ArrayW<::StringW, ::Array<::StringW>*> namespacesToIgnore);

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__namespacesToIgnore() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__namespacesToIgnore();

  constexpr void __cordl_internal_set__namespacesToIgnore(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x41afb54, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlDocument* xdoc, ::ArrayW<::StringW, ::Array<::StringW>*> namespacesToIgnore);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlIgnoreNamespaceReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlIgnoreNamespaceReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlIgnoreNamespaceReader(XmlIgnoreNamespaceReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlIgnoreNamespaceReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlIgnoreNamespaceReader(XmlIgnoreNamespaceReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11481 };

  /// @brief Field _namespacesToIgnore, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____namespacesToIgnore;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::XmlIgnoreNamespaceReader, ____namespacesToIgnore) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::XmlIgnoreNamespaceReader, 0x38>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::XmlIgnoreNamespaceReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XmlIgnoreNamespaceReader*, "System.Data", "XmlIgnoreNamespaceReader");
