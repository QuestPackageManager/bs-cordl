#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(PerformanceCountersElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class PerformanceCountersElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::PerformanceCountersElement);
// Type: System.Net.Configuration::PerformanceCountersElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::PerformanceCountersElement*
class CORDL_TYPE PerformanceCountersElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  static inline ::System::Net::Configuration::PerformanceCountersElement* New_ctor();

  /// @brief Method .ctor, addr 0x2a2eb6c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Properties, addr 0x2a2eba4, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceCountersElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceCountersElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceCountersElement(PerformanceCountersElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceCountersElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceCountersElement(PerformanceCountersElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::PerformanceCountersElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::PerformanceCountersElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::PerformanceCountersElement*, "System.Net.Configuration", "PerformanceCountersElement");
