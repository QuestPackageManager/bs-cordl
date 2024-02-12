#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(OVRRuntimeSettings)
// Forward declare root types
namespace GlobalNamespace {
class OVRRuntimeSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRRuntimeSettings);
// Type: ::OVRRuntimeSettings
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7703)), TypeDefinitionIndex(TypeDefinitionIndex(8954))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7973))
// CS Name: ::OVRRuntimeSettings*
class CORDL_TYPE OVRRuntimeSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field colorSpace, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_colorSpace, put = __cordl_internal_set_colorSpace))::GlobalNamespace::__OVRManager__ColorSpace colorSpace;

  constexpr ::GlobalNamespace::__OVRManager__ColorSpace& __cordl_internal_get_colorSpace();

  constexpr ::GlobalNamespace::__OVRManager__ColorSpace const& __cordl_internal_get_colorSpace() const;

  constexpr void __cordl_internal_set_colorSpace(::GlobalNamespace::__OVRManager__ColorSpace value);

  /// @brief Method GetRuntimeSettings, addr 0x279d7f4, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> GetRuntimeSettings();

  static inline ::GlobalNamespace::OVRRuntimeSettings* New_ctor();

  /// @brief Method .ctor, addr 0x279d908, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRRuntimeSettings(OVRRuntimeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRRuntimeSettings(OVRRuntimeSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRRuntimeSettings();

public:
  /// @brief Field colorSpace, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__ColorSpace ___colorSpace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRRuntimeSettings, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___colorSpace) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRRuntimeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRuntimeSettings*, "", "OVRRuntimeSettings");
