#pragma once
// IWYU pragma private; include "GlobalNamespace/CompatibilityVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompatibilityVersion)
// Forward declare root types
namespace GlobalNamespace {
class CompatibilityVersion;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CompatibilityVersion);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompatibilityVersion
class CORDL_TYPE CompatibilityVersion : public ::System::Object {
public:
  // Declarations
  /// @brief Method Get, addr 0x31d3348, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW Get();

  /// @brief Method Length, addr 0x31d338c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t Length();

  static inline ::GlobalNamespace::CompatibilityVersion* New_ctor();

  /// @brief Method .ctor, addr 0x31d3394, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompatibilityVersion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompatibilityVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompatibilityVersion(CompatibilityVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompatibilityVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompatibilityVersion(CompatibilityVersion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18814 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CompatibilityVersion, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CompatibilityVersion);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CompatibilityVersion*, "", "CompatibilityVersion");
