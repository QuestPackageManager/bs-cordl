#pragma once
// IWYU pragma private; include "GlobalNamespace/IOVRSceneComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IOVRSceneComponent)
// Forward declare root types
namespace GlobalNamespace {
class IOVRSceneComponent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IOVRSceneComponent);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IOVRSceneComponent
class CORDL_TYPE IOVRSceneComponent {
public:
  // Declarations
  /// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Initialize();

  // Ctor Parameters [CppParam { name: "", ty: "IOVRSceneComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOVRSceneComponent(IOVRSceneComponent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8270 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IOVRSceneComponent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IOVRSceneComponent*, "", "IOVRSceneComponent");
