#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomLevelPathHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CustomLevelPathHelper)
// Forward declare root types
namespace GlobalNamespace {
class CustomLevelPathHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomLevelPathHelper);
// Type: ::CustomLevelPathHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CustomLevelPathHelper*
class CORDL_TYPE CustomLevelPathHelper : public ::System::Object {
public:
  // Declarations
  static inline ::GlobalNamespace::CustomLevelPathHelper* New_ctor();

  /// @brief Method .ctor, addr 0x149cda0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomLevelPathHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomLevelPathHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomLevelPathHelper(CustomLevelPathHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomLevelPathHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomLevelPathHelper(CustomLevelPathHelper const&) = delete;

  /// @brief Field kStandardLevelInfoFilename offset 0xffffffff size 0x8
  static constexpr ::ConstString kStandardLevelInfoFilename{ u"Info.dat" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomLevelPathHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomLevelPathHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomLevelPathHelper*, "", "CustomLevelPathHelper");
