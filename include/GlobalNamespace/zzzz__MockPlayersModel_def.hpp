#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockPlayersModel)
// Forward declare root types
namespace GlobalNamespace {
class MockPlayersModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayersModel);
// Type: ::MockPlayersModel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5186))
// CS Name: ::MockPlayersModel*
class CORDL_TYPE MockPlayersModel : public ::System::Object {
public:
  // Declarations
  static inline ::GlobalNamespace::MockPlayersModel* New_ctor();

  /// @brief Method .ctor addr 0x22444e8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayersModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayersModel(MockPlayersModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayersModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayersModel(MockPlayersModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayersModel();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayersModel, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayersModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayersModel*, "", "MockPlayersModel");
