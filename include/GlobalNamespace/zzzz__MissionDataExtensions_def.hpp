#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissionDataExtensions)
namespace GlobalNamespace {
struct __MissionObjective__ReferenceValueComparisonType;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionDataExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionDataExtensions);
// Type: ::MissionDataExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionDataExtensions*
class CORDL_TYPE MissionDataExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Name, addr 0x14ca7a0, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW Name(::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType comparisonType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionDataExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionDataExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionDataExtensions(MissionDataExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionDataExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionDataExtensions(MissionDataExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionDataExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionDataExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionDataExtensions*, "", "MissionDataExtensions");
