#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ILightGroup)
// Forward declare root types
namespace GlobalNamespace {
class ILightGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILightGroup);
// Type: ::ILightGroup
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14508))
// CS Name: ::ILightGroup*
class CORDL_TYPE ILightGroup {
public:
  // Declarations
  __declspec(property(get = get_groupName))::StringW groupName;

  __declspec(property(get = get_groupId)) int32_t groupId;

  __declspec(property(get = get_startLightId)) int32_t startLightId;

  __declspec(property(get = get_numberOfElements)) int32_t numberOfElements;

  __declspec(property(get = get_sameIdElements)) int32_t sameIdElements;

  __declspec(property(get = get_ignoreLightGroupEffectManager)) bool ignoreLightGroupEffectManager;

  /// @brief Method get_groupName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_groupName();

  /// @brief Method get_groupId addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_groupId();

  /// @brief Method get_startLightId addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_startLightId();

  /// @brief Method get_numberOfElements addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_numberOfElements();

  /// @brief Method get_sameIdElements addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_sameIdElements();

  /// @brief Method get_ignoreLightGroupEffectManager addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_ignoreLightGroupEffectManager();

  // Ctor Parameters [CppParam { name: "", ty: "ILightGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILightGroup(ILightGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILightGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILightGroup(ILightGroup const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILightGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILightGroup*, "", "ILightGroup");
