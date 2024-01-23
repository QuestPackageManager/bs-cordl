#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolInstallerSO)
namespace GlobalNamespace {
class RecordingToolResourceContainerSO;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolInstallerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolInstallerSO);
// Type: ::RecordingToolInstallerSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11147))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5961))
// CS Name: ::RecordingToolInstallerSO*
class CORDL_TYPE RecordingToolInstallerSO : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Field _recordingToolResourceContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolResourceContainer,
                      put = __cordl_internal_set__recordingToolResourceContainer))::UnityW<::GlobalNamespace::RecordingToolResourceContainerSO> _recordingToolResourceContainer;

  constexpr ::UnityW<::GlobalNamespace::RecordingToolResourceContainerSO>& __cordl_internal_get__recordingToolResourceContainer();

  constexpr ::UnityW<::GlobalNamespace::RecordingToolResourceContainerSO> const& __cordl_internal_get__recordingToolResourceContainer() const;

  constexpr void __cordl_internal_set__recordingToolResourceContainer(::UnityW<::GlobalNamespace::RecordingToolResourceContainerSO> value);

  /// @brief Method InstallBindings, addr 0x2307f30, size 0x1e4, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::RecordingToolInstallerSO* New_ctor();

  /// @brief Method .ctor, addr 0x2308114, size 0x8, virtual false, abstract: false, final false
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
  /// @brief Field _recordingToolResourceContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RecordingToolResourceContainerSO> ____recordingToolResourceContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolInstallerSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolInstallerSO, ____recordingToolResourceContainer) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolInstallerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolInstallerSO*, "", "RecordingToolInstallerSO");
