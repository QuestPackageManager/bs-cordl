#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerScoreRingItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerScoreItem_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerScoreRingItem)
namespace GlobalNamespace {
class MultiplayerScoreRingItem_Pool;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerScoreRingItem;
}
namespace GlobalNamespace {
class MultiplayerScoreRingItem_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerScoreRingItem);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerScoreRingItem_Pool);
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerScoreRingItem/Pool
class CORDL_TYPE MultiplayerScoreRingItem_Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MultiplayerScoreRingItem*> {
public:
  // Declarations
  static inline ::GlobalNamespace::MultiplayerScoreRingItem_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3bdde6c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerScoreRingItem_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreRingItem_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerScoreRingItem_Pool(MultiplayerScoreRingItem_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreRingItem_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerScoreRingItem_Pool(MultiplayerScoreRingItem_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4612 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerScoreRingItem_Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MultiplayerScoreItem
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerScoreRingItem
class CORDL_TYPE MultiplayerScoreRingItem : public ::GlobalNamespace::MultiplayerScoreItem {
public:
  // Declarations
  using Pool = ::GlobalNamespace::MultiplayerScoreRingItem_Pool;

  static inline ::GlobalNamespace::MultiplayerScoreRingItem* New_ctor();

  /// @brief Method .ctor, addr 0x3bdde64, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4613 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerScoreRingItem, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreRingItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreRingItem*, "", "MultiplayerScoreRingItem");
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreRingItem_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreRingItem_Pool*, "", "MultiplayerScoreRingItem/Pool");
