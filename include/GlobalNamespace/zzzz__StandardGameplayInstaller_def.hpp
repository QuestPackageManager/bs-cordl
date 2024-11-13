#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardGameplayInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(StandardGameplayInstaller)
namespace GlobalNamespace {
class StandardGameplaySceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardGameplayInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardGameplayInstaller);
// Type: ::StandardGameplayInstaller
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StandardGameplayInstaller*
class CORDL_TYPE StandardGameplayInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _standardSceneSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__standardSceneSetupData,
                      put = __cordl_internal_set__standardSceneSetupData)) ::GlobalNamespace::StandardGameplaySceneSetupData* _standardSceneSetupData;

  /// @brief Method InstallBindings, addr 0x3b91344, size 0x34c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::StandardGameplayInstaller* New_ctor();

  constexpr ::GlobalNamespace::StandardGameplaySceneSetupData*& __cordl_internal_get__standardSceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardGameplaySceneSetupData*> const& __cordl_internal_get__standardSceneSetupData() const;

  constexpr void __cordl_internal_set__standardSceneSetupData(::GlobalNamespace::StandardGameplaySceneSetupData* value);

  /// @brief Method .ctor, addr 0x3b91690, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardGameplayInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardGameplayInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardGameplayInstaller(StandardGameplayInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardGameplayInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardGameplayInstaller(StandardGameplayInstaller const&) = delete;

  /// @brief Field _standardSceneSetupData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::StandardGameplaySceneSetupData* ____standardSceneSetupData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4714 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardGameplayInstaller, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardGameplayInstaller, ____standardSceneSetupData) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardGameplayInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardGameplayInstaller*, "", "StandardGameplayInstaller");
