#pragma once
// IWYU pragma private; include "GlobalNamespace/ILightGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ILightGroup)
// Forward declare root types
namespace GlobalNamespace {
class ILightGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILightGroup);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ILightGroup
class CORDL_TYPE ILightGroup {
public:
  // Declarations
  __declspec(property(get = get_groupId)) int32_t groupId;

  __declspec(property(get = get_numberOfElements)) int32_t numberOfElements;

  /// @brief Method get_groupId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_groupId();

  /// @brief Method get_numberOfElements, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_numberOfElements();

  // Ctor Parameters [CppParam { name: "", ty: "ILightGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILightGroup(ILightGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16291 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILightGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILightGroup*, "", "ILightGroup");
