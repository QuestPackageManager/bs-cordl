#pragma once
// IWYU pragma private; include "GlobalNamespace/ICubeNoteControllerInitializable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICubeNoteControllerInitializable_1)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class ICubeNoteControllerInitializable_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::ICubeNoteControllerInitializable_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::ICubeNoteControllerInitializable_1, "", "ICubeNoteControllerInitializable`1");
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ICubeNoteControllerInitializable`1<T>
class CORDL_TYPE ICubeNoteControllerInitializable_1 {
public:
  // Declarations
  /// [CompilerGenerated]
  /// @brief Method add_cubeNoteControllerDidInitEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_cubeNoteControllerDidInitEvent(::System::Action_1<T>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_cubeNoteControllerDidInitEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_cubeNoteControllerDidInitEvent(::System::Action_1<T>* value);

  // Ctor Parameters [CppParam { name: "", ty: "ICubeNoteControllerInitializable_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICubeNoteControllerInitializable_1(ICubeNoteControllerInitializable_1const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5657 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
