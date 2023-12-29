#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolInstallerSO)
namespace GlobalNamespace {
class RecordingToolResourceContainerSO;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class ProgramArguments;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolInstallerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolInstallerSO);
// Type: ::RecordingToolInstallerSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6042))
// CS Name: ::RecordingToolInstallerSO*
class CORDL_TYPE RecordingToolInstallerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _recordingToolResourceContainer, offset 0x18, size 0x8
  __declspec(property(get = __get__recordingToolResourceContainer, put = __set__recordingToolResourceContainer))::GlobalNamespace::RecordingToolResourceContainerSO* _recordingToolResourceContainer;

  constexpr ::GlobalNamespace::RecordingToolResourceContainerSO*& __get__recordingToolResourceContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolResourceContainerSO*> const& __get__recordingToolResourceContainer() const;

  constexpr void __set__recordingToolResourceContainer(::GlobalNamespace::RecordingToolResourceContainerSO* value);

  /// @brief Method InstallDependencies addr 0x21bd610 size 0x354 virtual false final false
  inline void InstallDependencies(::Zenject::DiContainer* container, ::GlobalNamespace::ProgramArguments* programArguments);

  static inline ::GlobalNamespace::RecordingToolInstallerSO* New_ctor();

  /// @brief Method .ctor addr 0x21bdc14 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolInstallerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolInstallerSO(RecordingToolInstallerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolInstallerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolInstallerSO(RecordingToolInstallerSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolInstallerSO();

public:
  /// @brief Field _recordingToolResourceContainer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolResourceContainerSO* ____recordingToolResourceContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolInstallerSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolInstallerSO, ____recordingToolResourceContainer) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolInstallerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolInstallerSO*, "", "RecordingToolInstallerSO");
