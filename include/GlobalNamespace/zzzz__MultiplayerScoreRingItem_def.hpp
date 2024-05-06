#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerScoreItem_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerScoreRingItem)
namespace GlobalNamespace {
class __MultiplayerScoreRingItem__Pool;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerScoreRingItem;
}
namespace GlobalNamespace {
class __MultiplayerScoreRingItem__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerScoreRingItem);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerScoreRingItem__Pool);
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerScoreRingItem::Pool*
class CORDL_TYPE __MultiplayerScoreRingItem__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::MultiplayerScoreRingItem>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MultiplayerScoreRingItem__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x271b760, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerScoreRingItem__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerScoreRingItem__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerScoreRingItem__Pool(__MultiplayerScoreRingItem__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerScoreRingItem__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerScoreRingItem__Pool(__MultiplayerScoreRingItem__Pool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerScoreRingItem__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerScoreRingItem
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerScoreRingItem*
class CORDL_TYPE MultiplayerScoreRingItem : public ::GlobalNamespace::MultiplayerScoreItem {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__MultiplayerScoreRingItem__Pool;

  static inline ::GlobalNamespace::MultiplayerScoreRingItem* New_ctor();

  /// @brief Method .ctor, addr 0x271b758, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerScoreRingItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreRingItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerScoreRingItem(MultiplayerScoreRingItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreRingItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerScoreRingItem(MultiplayerScoreRingItem const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerScoreRingItem, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreRingItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreRingItem*, "", "MultiplayerScoreRingItem");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerScoreRingItem__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerScoreRingItem__Pool*, "", "MultiplayerScoreRingItem/Pool");
