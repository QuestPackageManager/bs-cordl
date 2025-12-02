#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/PartyInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PartyInfo)
// Forward declare root types
namespace OculusStudios::Platform::Core {
struct PartyInfo;
}
// Write type traits
MARK_VAL_T(::OculusStudios::Platform::Core::PartyInfo);
// Dependencies
namespace OculusStudios::Platform::Core {
// Is value type: true
// CS Name: OculusStudios.Platform.Core.PartyInfo
struct CORDL_TYPE PartyInfo {
public:
  // Declarations
  __declspec(property(get = get_currentUsers)) uint32_t currentUsers;

  __declspec(property(get = get_groupId)) ::StringW groupId;

  __declspec(property(get = get_joinKey)) ::StringW joinKey;

  __declspec(property(get = get_maxUsers)) uint32_t maxUsers;

  /// @brief Method .ctor, addr 0x5d19470, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t currentUsers, uint32_t maxUsers, ::StringW groupId, ::StringW joinKey);

  /// @brief Method get_currentUsers, addr 0x5d19450, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_currentUsers();

  /// @brief Method get_groupId, addr 0x5d19460, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_groupId();

  /// @brief Method get_joinKey, addr 0x5d19468, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_joinKey();

  /// @brief Method get_maxUsers, addr 0x5d19458, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_maxUsers();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PartyInfo();

  // Ctor Parameters [CppParam { name: "_currentUsers_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_maxUsers_k__BackingField", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "_groupId_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_joinKey_k__BackingField", ty: "::StringW", modifiers: "",
  // def_value: None }]
  constexpr PartyInfo(uint32_t _currentUsers_k__BackingField, uint32_t _maxUsers_k__BackingField, ::StringW _groupId_k__BackingField, ::StringW _joinKey_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22148 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <currentUsers>k__BackingField, offset: 0x0, size: 0x4, def value: None
  uint32_t _currentUsers_k__BackingField;

  /// @brief Field <maxUsers>k__BackingField, offset: 0x4, size: 0x4, def value: None
  uint32_t _maxUsers_k__BackingField;

  /// @brief Field <groupId>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::StringW _groupId_k__BackingField;

  /// @brief Field <joinKey>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW _joinKey_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Core::PartyInfo, _currentUsers_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::PartyInfo, _maxUsers_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::PartyInfo, _groupId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::PartyInfo, _joinKey_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::PartyInfo, 0x18>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::PartyInfo, "OculusStudios.Platform.Core", "PartyInfo");
