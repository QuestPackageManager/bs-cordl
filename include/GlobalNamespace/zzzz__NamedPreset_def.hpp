#pragma once
// IWYU pragma private; include "GlobalNamespace/NamedPreset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NamedPreset)
// Forward declare root types
namespace GlobalNamespace {
class NamedPreset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NamedPreset);
// Type: ::NamedPreset
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NamedPreset*
class CORDL_TYPE NamedPreset : public ::System::Object {
public:
  // Declarations
  /// @brief Field _presetNameLocalizationKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__presetNameLocalizationKey, put = __cordl_internal_set__presetNameLocalizationKey))::StringW _presetNameLocalizationKey;

  __declspec(property(get = get_presetNameLocalizationKey))::StringW presetNameLocalizationKey;

  static inline ::GlobalNamespace::NamedPreset* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__presetNameLocalizationKey() const;

  constexpr ::StringW& __cordl_internal_get__presetNameLocalizationKey();

  constexpr void __cordl_internal_set__presetNameLocalizationKey(::StringW value);

  /// @brief Method .ctor, addr 0x14cfe3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_presetNameLocalizationKey, addr 0x14cfec0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_presetNameLocalizationKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamedPreset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamedPreset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamedPreset(NamedPreset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamedPreset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamedPreset(NamedPreset const&) = delete;

  /// @brief Field _presetNameLocalizationKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ____presetNameLocalizationKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NamedPreset, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NamedPreset, ____presetNameLocalizationKey) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NamedPreset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedPreset*, "", "NamedPreset");
