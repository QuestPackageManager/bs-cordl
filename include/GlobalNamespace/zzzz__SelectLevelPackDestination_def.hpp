#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
CORDL_MODULE_EXPORT(SelectLevelPackDestination)
namespace GlobalNamespace {
class IBeatmapLevelPack;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4187))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4190))
// CS Name: ::SelectLevelPackDestination*
class CORDL_TYPE SelectLevelPackDestination : public ::GlobalNamespace::MenuDestination {
public:
  // Declarations
  /// @brief Field beatmapLevelPack, offset 0x10, size 0x8
  __declspec(property(get = __get_beatmapLevelPack, put = __set_beatmapLevelPack))::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack;

  constexpr ::GlobalNamespace::IBeatmapLevelPack*& __get_beatmapLevelPack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& __get_beatmapLevelPack() const;

  constexpr void __set_beatmapLevelPack(::GlobalNamespace::IBeatmapLevelPack* value);

  static inline ::GlobalNamespace::SelectLevelPackDestination* New_ctor(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack);

  /// @brief Method .ctor addr 0x21cebdc size 0x28 virtual false final false
  inline void _ctor(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack);

  // Ctor Parameters [CppParam { name: "", ty: "SelectLevelPackDestination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectLevelPackDestination(SelectLevelPackDestination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectLevelPackDestination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectLevelPackDestination(SelectLevelPackDestination const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectLevelPackDestination();

public:
  /// @brief Field beatmapLevelPack, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelPack* ___beatmapLevelPack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectLevelPackDestination, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelPackDestination, ___beatmapLevelPack) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectLevelPackDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectLevelPackDestination*, "", "SelectLevelPackDestination");
