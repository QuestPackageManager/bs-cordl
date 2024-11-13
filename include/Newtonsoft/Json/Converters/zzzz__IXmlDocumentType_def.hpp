#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/IXmlDocumentType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IXmlDocumentType)
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class IXmlDocumentType;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::IXmlDocumentType);
// Type: Newtonsoft.Json.Converters::IXmlDocumentType
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::IXmlDocumentType*
class CORDL_TYPE IXmlDocumentType {
public:
  // Declarations
  __declspec(property(get = get_InternalSubset)) ::StringW InternalSubset;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Public)) ::StringW Public;

  __declspec(property(get = get_System)) ::StringW System;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  /// @brief Method get_InternalSubset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_InternalSubset();

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Name();

  /// @brief Method get_Public, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Public();

  /// @brief Method get_System, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_System();

  /// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr ::Newtonsoft::Json::Converters::IXmlNode* i___Newtonsoft__Json__Converters__IXmlNode() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IXmlDocumentType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXmlDocumentType(IXmlDocumentType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXmlDocumentType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXmlDocumentType(IXmlDocumentType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10461 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::IXmlDocumentType);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::IXmlDocumentType*, "Newtonsoft.Json.Converters", "IXmlDocumentType");
