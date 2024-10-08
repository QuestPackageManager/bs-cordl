#pragma once
// IWYU pragma private; include "System/Xml/Linq/XDocumentType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XDocumentType)
namespace System::Xml::Linq {
class XNode;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml::Linq {
class XDocumentType;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XDocumentType);
// Type: System.Xml.Linq::XDocumentType
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// CS Name: ::System.Xml.Linq::XDocumentType*
class CORDL_TYPE XDocumentType : public ::System::Xml::Linq::XNode {
public:
  // Declarations
  __declspec(property(get = get_InternalSubset)) ::StringW InternalSubset;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_PublicId)) ::StringW PublicId;

  __declspec(property(get = get_SystemId)) ::StringW SystemId;

  /// @brief Field _internalSubset, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__internalSubset, put = __cordl_internal_set__internalSubset)) ::StringW _internalSubset;

  /// @brief Field _name, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Field _publicId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__publicId, put = __cordl_internal_set__publicId)) ::StringW _publicId;

  /// @brief Field _systemId, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__systemId, put = __cordl_internal_set__systemId)) ::StringW _systemId;

  /// @brief Method CloneNode, addr 0x41d3e70, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::Linq::XNode* CloneNode();

  static inline ::System::Xml::Linq::XDocumentType* New_ctor(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset);

  static inline ::System::Xml::Linq::XDocumentType* New_ctor(::System::Xml::Linq::XDocumentType* other);

  /// @brief Method WriteTo, addr 0x41d3e00, size 0x70, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* writer);

  constexpr ::StringW const& __cordl_internal_get__internalSubset() const;

  constexpr ::StringW& __cordl_internal_get__internalSubset();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::StringW const& __cordl_internal_get__publicId() const;

  constexpr ::StringW& __cordl_internal_get__publicId();

  constexpr ::StringW const& __cordl_internal_get__systemId() const;

  constexpr ::StringW& __cordl_internal_get__systemId();

  constexpr void __cordl_internal_set__internalSubset(::StringW value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__publicId(::StringW value);

  constexpr void __cordl_internal_set__systemId(::StringW value);

  /// @brief Method .ctor, addr 0x41d2f1c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset);

  /// @brief Method .ctor, addr 0x41d3d58, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XDocumentType* other);

  /// @brief Method get_InternalSubset, addr 0x41d3dd8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InternalSubset();

  /// @brief Method get_Name, addr 0x41d3de0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NodeType, addr 0x41d3de8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_PublicId, addr 0x41d3df0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PublicId();

  /// @brief Method get_SystemId, addr 0x41d3df8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SystemId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XDocumentType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XDocumentType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XDocumentType(XDocumentType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XDocumentType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XDocumentType(XDocumentType const&) = delete;

  /// @brief Field _name, offset: 0x28, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _publicId, offset: 0x30, size: 0x8, def value: None
  ::StringW ____publicId;

  /// @brief Field _systemId, offset: 0x38, size: 0x8, def value: None
  ::StringW ____systemId;

  /// @brief Field _internalSubset, offset: 0x40, size: 0x8, def value: None
  ::StringW ____internalSubset;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17898 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XDocumentType, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Linq::XDocumentType, ____name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XDocumentType, ____publicId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XDocumentType, ____systemId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XDocumentType, ____internalSubset) == 0x40, "Offset mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XDocumentType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XDocumentType*, "System.Xml.Linq", "XDocumentType");
