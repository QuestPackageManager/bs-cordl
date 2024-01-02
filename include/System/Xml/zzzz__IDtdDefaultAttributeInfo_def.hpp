#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IDtdDefaultAttributeInfo)
namespace System {
class Object;
}
namespace System::Xml {
class IDtdAttributeInfo;
}
// Forward declare root types
namespace System::Xml {
class IDtdDefaultAttributeInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IDtdDefaultAttributeInfo);
// Type: System.Xml::IDtdDefaultAttributeInfo
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11424))
// CS Name: ::System.Xml::IDtdDefaultAttributeInfo*
class CORDL_TYPE IDtdDefaultAttributeInfo {
public:
  // Declarations
  __declspec(property(get = get_DefaultValueExpanded))::StringW DefaultValueExpanded;

  __declspec(property(get = get_DefaultValueTyped))::System::Object* DefaultValueTyped;

  __declspec(property(get = get_ValueLineNumber)) int32_t ValueLineNumber;

  __declspec(property(get = get_ValueLinePosition)) int32_t ValueLinePosition;

  /// @brief Convert operator to "::System::Xml::IDtdAttributeInfo"
  constexpr operator ::System::Xml::IDtdAttributeInfo*() noexcept;

  /// @brief Method get_DefaultValueExpanded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_DefaultValueExpanded();

  /// @brief Method get_DefaultValueTyped, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_DefaultValueTyped();

  /// @brief Method get_ValueLineNumber, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_ValueLineNumber();

  /// @brief Method get_ValueLinePosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_ValueLinePosition();

  // Ctor Parameters [CppParam { name: "", ty: "IDtdDefaultAttributeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDtdDefaultAttributeInfo(IDtdDefaultAttributeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDtdDefaultAttributeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDtdDefaultAttributeInfo(IDtdDefaultAttributeInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IDtdDefaultAttributeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdDefaultAttributeInfo*, "System.Xml", "IDtdDefaultAttributeInfo");
