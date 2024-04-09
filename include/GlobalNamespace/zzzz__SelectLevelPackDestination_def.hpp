#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
CORDL_MODULE_EXPORT(SelectLevelPackDestination)
namespace GlobalNamespace {
class BeatmapLevelPack;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectLevelPackDestination;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelectLevelPackDestination);
// Type: ::SelectLevelPackDestination
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SelectLevelPackDestination*
class CORDL_TYPE SelectLevelPackDestination : public ::GlobalNamespace::MenuDestination {
public:
  // Declarations
  /// @brief Field beatmapLevelPack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevelPack, put = __cordl_internal_set_beatmapLevelPack))::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack;

  static inline ::GlobalNamespace::SelectLevelPackDestination* New_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack);

  constexpr ::GlobalNamespace::BeatmapLevelPack*& __cordl_internal_get_beatmapLevelPack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPack*> const& __cordl_internal_get_beatmapLevelPack() const;

  constexpr void __cordl_internal_set_beatmapLevelPack(::GlobalNamespace::BeatmapLevelPack* value);

  /// @brief Method .ctor, addr 0x13a7704, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectLevelPackDestination();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectLevelPackDestination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectLevelPackDestination(SelectLevelPackDestination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectLevelPackDestination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectLevelPackDestination(SelectLevelPackDestination const&) = delete;

  /// @brief Field beatmapLevelPack, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPack* ___beatmapLevelPack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectLevelPackDestination, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelPackDestination, ___beatmapLevelPack) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectLevelPackDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectLevelPackDestination*, "", "SelectLevelPackDestination");
