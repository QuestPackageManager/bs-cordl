#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TestCategories)
// Forward declare root types
namespace GlobalNamespace {
class TestCategories;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TestCategories);
// Type: ::TestCategories
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16106))
// CS Name: ::TestCategories*
class CORDL_TYPE TestCategories : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "TestCategories", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TestCategories(TestCategories&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TestCategories", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TestCategories(TestCategories const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestCategories();

public:
  /// @brief Field kLongRunning offset 0xffffffff size 0x8
  static constexpr ::ConstString kLongRunning{ u"LongRunning" };

  /// @brief Field kSingleplayer offset 0xffffffff size 0x8
  static constexpr ::ConstString kSingleplayer{ u"Singleplayer" };

  /// @brief Field kMultiplayer offset 0xffffffff size 0x8
  static constexpr ::ConstString kMultiplayer{ u"Multiplayer" };

  /// @brief Field kOnlyMustPassBeforeRelease offset 0xffffffff size 0x8
  static constexpr ::ConstString kOnlyMustPassBeforeRelease{ u"OnlyMustPassBeforeRelease" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TestCategories, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TestCategories);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestCategories*, "", "TestCategories");
