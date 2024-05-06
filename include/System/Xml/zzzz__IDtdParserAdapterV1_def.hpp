#pragma once
// IWYU pragma private; include "System/Xml/IDtdParserAdapterV1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDtdParserAdapterV1)
namespace System::Xml {
class IDtdParserAdapterWithValidation;
}
namespace System::Xml {
class IDtdParserAdapter;
}
// Forward declare root types
namespace System::Xml {
class IDtdParserAdapterV1;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IDtdParserAdapterV1);
// Type: System.Xml::IDtdParserAdapterV1
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::IDtdParserAdapterV1*
class CORDL_TYPE IDtdParserAdapterV1 {
public:
  // Declarations
  __declspec(property(get = get_Namespaces)) bool Namespaces;

  __declspec(property(get = get_Normalization)) bool Normalization;

  __declspec(property(get = get_V1CompatibilityMode)) bool V1CompatibilityMode;

  /// @brief Convert operator to "::System::Xml::IDtdParserAdapter"
  constexpr operator ::System::Xml::IDtdParserAdapter*() noexcept;

  /// @brief Convert operator to "::System::Xml::IDtdParserAdapterWithValidation"
  constexpr operator ::System::Xml::IDtdParserAdapterWithValidation*() noexcept;

  /// @brief Method get_Namespaces, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_Namespaces();

  /// @brief Method get_Normalization, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_Normalization();

  /// @brief Method get_V1CompatibilityMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_V1CompatibilityMode();

  /// @brief Convert to "::System::Xml::IDtdParserAdapter"
  constexpr ::System::Xml::IDtdParserAdapter* i___System__Xml__IDtdParserAdapter() noexcept;

  /// @brief Convert to "::System::Xml::IDtdParserAdapterWithValidation"
  constexpr ::System::Xml::IDtdParserAdapterWithValidation* i___System__Xml__IDtdParserAdapterWithValidation() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDtdParserAdapterV1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDtdParserAdapterV1(IDtdParserAdapterV1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDtdParserAdapterV1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDtdParserAdapterV1(IDtdParserAdapterV1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IDtdParserAdapterV1);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdParserAdapterV1*, "System.Xml", "IDtdParserAdapterV1");
