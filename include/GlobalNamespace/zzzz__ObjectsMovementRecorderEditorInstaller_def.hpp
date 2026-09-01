#pragma once
// IWYU pragma private; include "GlobalNamespace\ObjectsMovementRecorderEditorInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(ObjectsMovementRecorderEditorInstaller)
// Forward declare root types
namespace GlobalNamespace {
class ObjectsMovementRecorderEditorInstaller;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ObjectsMovementRecorderEditorInstaller*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObjectsMovementRecorderEditorInstaller*, "", "ObjectsMovementRecorderEditorInstaller");
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObjectsMovementRecorderEditorInstaller
class CORDL_TYPE ObjectsMovementRecorderEditorInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x58e8548, size 0x4, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::ObjectsMovementRecorderEditorInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x58e854c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectsMovementRecorderEditorInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorderEditorInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectsMovementRecorderEditorInstaller(ObjectsMovementRecorderEditorInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorderEditorInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectsMovementRecorderEditorInstaller(ObjectsMovementRecorderEditorInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6568 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ObjectsMovementRecorderEditorInstaller) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
