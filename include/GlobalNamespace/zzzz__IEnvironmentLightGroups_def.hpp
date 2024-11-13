#pragma once
// IWYU pragma private; include "GlobalNamespace/IEnvironmentLightGroups.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IEnvironmentLightGroups)
namespace GlobalNamespace {
class ILightGroup;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IEnvironmentLightGroups;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IEnvironmentLightGroups);
// Type: ::IEnvironmentLightGroups
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IEnvironmentLightGroups*
class CORDL_TYPE IEnvironmentLightGroups {
public:
  // Declarations
  __declspec(property(get = get_lightGroups)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>* lightGroups;

  /// @brief Method GetDataForGroup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::ILightGroup* GetDataForGroup(int32_t groupId);

  /// @brief Method get_lightGroups, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>* get_lightGroups();

  // Ctor Parameters [CppParam { name: "", ty: "IEnvironmentLightGroups", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEnvironmentLightGroups(IEnvironmentLightGroups&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEnvironmentLightGroups", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEnvironmentLightGroups(IEnvironmentLightGroups const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12809 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IEnvironmentLightGroups);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IEnvironmentLightGroups*, "", "IEnvironmentLightGroups");
