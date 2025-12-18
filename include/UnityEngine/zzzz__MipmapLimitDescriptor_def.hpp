#pragma once
// IWYU pragma private; include "UnityEngine/MipmapLimitDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MipmapLimitDescriptor)
// Forward declare root types
namespace UnityEngine {
struct MipmapLimitDescriptor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::MipmapLimitDescriptor);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.MipmapLimitDescriptor
struct CORDL_TYPE MipmapLimitDescriptor {
public:
  // Declarations
  __declspec(property(get = get_groupName)) ::StringW groupName;

  __declspec(property(get = get_useMipmapLimit)) bool useMipmapLimit;

  /// @brief Method .ctor, addr 0x68fce0c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool useMipmapLimit, ::StringW groupName);

  /// @brief Method get_groupName, addr 0x68fce04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_groupName();

  /// @brief Method get_useMipmapLimit, addr 0x68fcdfc, size 0x8, virtual false, abstract: false, final false
  inline bool get_useMipmapLimit();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MipmapLimitDescriptor();

  // Ctor Parameters [CppParam { name: "_useMipmapLimit_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_groupName_k__BackingField", ty: "::StringW", modifiers: "",
  // def_value: None }]
  constexpr MipmapLimitDescriptor(bool _useMipmapLimit_k__BackingField, ::StringW _groupName_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10212 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field <useMipmapLimit>k__BackingField, offset: 0x0, size: 0x1, def value: None
  bool _useMipmapLimit_k__BackingField;

  /// @brief Field <groupName>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::StringW _groupName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::MipmapLimitDescriptor, _useMipmapLimit_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::MipmapLimitDescriptor, _groupName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::MipmapLimitDescriptor, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MipmapLimitDescriptor, "UnityEngine", "MipmapLimitDescriptor");
