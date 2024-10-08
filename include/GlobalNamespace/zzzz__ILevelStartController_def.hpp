#pragma once
// IWYU pragma private; include "GlobalNamespace/ILevelStartController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILevelStartController)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class ILevelStartController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILevelStartController);
// Type: ::ILevelStartController
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ILevelStartController*
class CORDL_TYPE ILevelStartController {
public:
  // Declarations
  /// @brief Method add_levelDidStartEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_levelDidStartEvent(::System::Action* value);

  /// @brief Method add_levelWillStartIntroEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_levelWillStartIntroEvent(::System::Action* value);

  /// @brief Method remove_levelDidStartEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_levelDidStartEvent(::System::Action* value);

  /// @brief Method remove_levelWillStartIntroEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_levelWillStartIntroEvent(::System::Action* value);

  // Ctor Parameters [CppParam { name: "", ty: "ILevelStartController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILevelStartController(ILevelStartController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILevelStartController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILevelStartController(ILevelStartController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4375 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILevelStartController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILevelStartController*, "", "ILevelStartController");
