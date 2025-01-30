#pragma once
// IWYU pragma private; include "System/Xml/IDtdParserAdapterWithValidation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__IDtdParserAdapter_def.hpp"
CORDL_MODULE_EXPORT(IDtdParserAdapterWithValidation)
namespace System::Xml {
class IValidationEventHandling;
}
// Forward declare root types
namespace System::Xml {
class IDtdParserAdapterWithValidation;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IDtdParserAdapterWithValidation);
// Dependencies System.Xml.IDtdParserAdapter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.IDtdParserAdapterWithValidation
class CORDL_TYPE IDtdParserAdapterWithValidation {
public:
  // Declarations
  __declspec(property(get = get_DtdValidation)) bool DtdValidation;

  __declspec(property(get = get_ValidationEventHandling)) ::System::Xml::IValidationEventHandling* ValidationEventHandling;

  /// @brief Convert operator to "::System::Xml::IDtdParserAdapter"
  constexpr operator ::System::Xml::IDtdParserAdapter*() noexcept;

  /// @brief Method get_DtdValidation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_DtdValidation();

  /// @brief Method get_ValidationEventHandling, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Xml::IValidationEventHandling* get_ValidationEventHandling();

  /// @brief Convert to "::System::Xml::IDtdParserAdapter"
  constexpr ::System::Xml::IDtdParserAdapter* i___System__Xml__IDtdParserAdapter() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDtdParserAdapterWithValidation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDtdParserAdapterWithValidation(IDtdParserAdapterWithValidation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7189 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IDtdParserAdapterWithValidation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdParserAdapterWithValidation*, "System.Xml", "IDtdParserAdapterWithValidation");
