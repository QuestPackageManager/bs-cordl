#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDtdParserAdapterWithValidation)
namespace System::Xml {
class IDtdParserAdapter;
}
namespace System::Xml {
class IValidationEventHandling;
}
// Forward declare root types
namespace System::Xml {
class IDtdParserAdapterWithValidation;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IDtdParserAdapterWithValidation);
// Type: System.Xml::IDtdParserAdapterWithValidation
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11428))
// CS Name: ::System.Xml::IDtdParserAdapterWithValidation*
class CORDL_TYPE IDtdParserAdapterWithValidation {
public:
  // Declarations
  __declspec(property(get = get_DtdValidation)) bool DtdValidation;

  __declspec(property(get = get_ValidationEventHandling))::System::Xml::IValidationEventHandling* ValidationEventHandling;

  /// @brief Convert operator to "::System::Xml::IDtdParserAdapter"
  constexpr operator ::System::Xml::IDtdParserAdapter*() noexcept;

  /// @brief Convert to "::System::Xml::IDtdParserAdapter"
  constexpr ::System::Xml::IDtdParserAdapter* i___System__Xml__IDtdParserAdapter() noexcept;

  /// @brief Method get_DtdValidation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_DtdValidation();

  /// @brief Method get_ValidationEventHandling, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::IValidationEventHandling* get_ValidationEventHandling();

  // Ctor Parameters [CppParam { name: "", ty: "IDtdParserAdapterWithValidation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDtdParserAdapterWithValidation(IDtdParserAdapterWithValidation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDtdParserAdapterWithValidation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDtdParserAdapterWithValidation(IDtdParserAdapterWithValidation const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IDtdParserAdapterWithValidation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdParserAdapterWithValidation*, "System.Xml", "IDtdParserAdapterWithValidation");
