#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StandardLevelLoader)
namespace GlobalNamespace {
class StandardLevelInfoSaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelLoader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelLoader);
// Type: ::StandardLevelLoader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4683))
// CS Name: ::StandardLevelLoader*
class CORDL_TYPE StandardLevelLoader : public ::System::Object {
public:
  // Declarations
  /// @brief Method LoadStandardLevelSaveData addr 0x2376238 size 0x18 virtual false final false
  static inline ::GlobalNamespace::StandardLevelInfoSaveData* LoadStandardLevelSaveData(::StringW levelInfoFilenamePath);

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelLoader(StandardLevelLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelLoader(StandardLevelLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelLoader();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelLoader, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelLoader*, "", "StandardLevelLoader");
