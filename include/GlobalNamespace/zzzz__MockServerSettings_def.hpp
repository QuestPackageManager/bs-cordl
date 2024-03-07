#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MockPlayerSettings_def.hpp"
CORDL_MODULE_EXPORT(MockServerSettings)
// Forward declare root types
namespace GlobalNamespace {
class MockServerSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockServerSettings);
// Type: ::MockServerSettings
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MockServerSettings*
class CORDL_TYPE MockServerSettings : public ::GlobalNamespace::MockPlayerSettings {
public:
  // Declarations
  static inline ::GlobalNamespace::MockServerSettings* New_ctor();

  /// @brief Method .ctor, addr 0x24d9dd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockServerSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockServerSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockServerSettings(MockServerSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockServerSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockServerSettings(MockServerSettings const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockServerSettings, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockServerSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockServerSettings*, "", "MockServerSettings");
