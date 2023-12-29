#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentSingleton_1_def.hpp"
CORDL_MODULE_EXPORT(SharedCoroutineStarter)
// Forward declare root types
namespace GlobalNamespace {
class SharedCoroutineStarter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SharedCoroutineStarter);
// Type: ::SharedCoroutineStarter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13880), inst: 4722 }), TypeDefinitionIndex(TypeDefinitionIndex(13880))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13893))
// CS Name: ::SharedCoroutineStarter*
class CORDL_TYPE SharedCoroutineStarter : public ::GlobalNamespace::PersistentSingleton_1<::GlobalNamespace::SharedCoroutineStarter*> {
public:
  // Declarations
  static inline ::GlobalNamespace::SharedCoroutineStarter* New_ctor();

  /// @brief Method .ctor addr 0x1f99410 size 0x6c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SharedCoroutineStarter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedCoroutineStarter(SharedCoroutineStarter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedCoroutineStarter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedCoroutineStarter(SharedCoroutineStarter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedCoroutineStarter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SharedCoroutineStarter, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SharedCoroutineStarter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SharedCoroutineStarter*, "", "SharedCoroutineStarter");
