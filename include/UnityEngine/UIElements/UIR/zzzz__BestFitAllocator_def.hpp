#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/BestFitAllocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BestFitAllocator)
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
namespace UnityEngine::UIElements::UIR {
class BestFitAllocator_BlockPool;
}
namespace UnityEngine::UIElements::UIR {
class BestFitAllocator_Block;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class BestFitAllocator;
}
namespace UnityEngine::UIElements::UIR {
class BestFitAllocator_Block;
}
namespace UnityEngine::UIElements::UIR {
class BestFitAllocator_BlockPool;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::BestFitAllocator);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::BestFitAllocator_Block);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool);
// Dependencies UnityEngine.UIElements.UIR.LinkedPool`1<T>
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.BestFitAllocator/BlockPool
class CORDL_TYPE BestFitAllocator_BlockPool : public ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::BestFitAllocator_Block*> {
public:
  // Declarations
  /// @brief Method CreateBlock, addr 0x49bbc18, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* CreateBlock();

  static inline ::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool* New_ctor();

  /// @brief Method ResetBlock, addr 0x49bbcb0, size 0x4, virtual false, abstract: false, final false
  static inline void ResetBlock(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* block);

  /// @brief Method .ctor, addr 0x49bb4e4, size 0xec, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BestFitAllocator_BlockPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BestFitAllocator_BlockPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BestFitAllocator_BlockPool(BestFitAllocator_BlockPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BestFitAllocator_BlockPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BestFitAllocator_BlockPool(BestFitAllocator_BlockPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6425 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies UnityEngine.UIElements.UIR.LinkedPoolItem`1<T>
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.BestFitAllocator/Block
class CORDL_TYPE BestFitAllocator_Block : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::BestFitAllocator_Block*> {
public:
  // Declarations
  /// @brief Field allocated, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_allocated, put = __cordl_internal_set_allocated)) bool allocated;

  /// @brief Field end, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_end, put = __cordl_internal_set_end)) uint32_t end;

  /// @brief Field next, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* next;

  /// @brief Field nextAvailable, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_nextAvailable, put = __cordl_internal_set_nextAvailable)) ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* nextAvailable;

  /// @brief Field prev, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_prev, put = __cordl_internal_set_prev)) ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* prev;

  /// @brief Field prevAvailable, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_prevAvailable, put = __cordl_internal_set_prevAvailable)) ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* prevAvailable;

  __declspec(property(get = get_size)) uint32_t size;

  /// @brief Field start, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_start, put = __cordl_internal_set_start)) uint32_t start;

  static inline ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* New_ctor();

  constexpr bool const& __cordl_internal_get_allocated() const;

  constexpr bool& __cordl_internal_get_allocated();

  constexpr uint32_t const& __cordl_internal_get_end() const;

  constexpr uint32_t& __cordl_internal_get_end();

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* const& __cordl_internal_get_next() const;

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block*& __cordl_internal_get_next();

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* const& __cordl_internal_get_nextAvailable() const;

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block*& __cordl_internal_get_nextAvailable();

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* const& __cordl_internal_get_prev() const;

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block*& __cordl_internal_get_prev();

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* const& __cordl_internal_get_prevAvailable() const;

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block*& __cordl_internal_get_prevAvailable();

  constexpr uint32_t const& __cordl_internal_get_start() const;

  constexpr uint32_t& __cordl_internal_get_start();

  constexpr void __cordl_internal_set_allocated(bool value);

  constexpr void __cordl_internal_set_end(uint32_t value);

  constexpr void __cordl_internal_set_next(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* value);

  constexpr void __cordl_internal_set_nextAvailable(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* value);

  constexpr void __cordl_internal_set_prev(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* value);

  constexpr void __cordl_internal_set_prevAvailable(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* value);

  constexpr void __cordl_internal_set_start(uint32_t value);

  /// @brief Method .ctor, addr 0x49bbc68, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_size, addr 0x49bb7bc, size 0xc, virtual false, abstract: false, final false
  inline uint32_t get_size();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BestFitAllocator_Block();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BestFitAllocator_Block", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BestFitAllocator_Block(BestFitAllocator_Block&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BestFitAllocator_Block", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BestFitAllocator_Block(BestFitAllocator_Block const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6426 };

  /// @brief Field start, offset: 0x18, size: 0x4, def value: None
  uint32_t ___start;

  /// @brief Field end, offset: 0x1c, size: 0x4, def value: None
  uint32_t ___end;

  /// @brief Field prev, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* ___prev;

  /// @brief Field next, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* ___next;

  /// @brief Field prevAvailable, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* ___prevAvailable;

  /// @brief Field nextAvailable, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* ___nextAvailable;

  /// @brief Field allocated, offset: 0x40, size: 0x1, def value: None
  bool ___allocated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::BestFitAllocator_Block, ___start) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BestFitAllocator_Block, ___end) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BestFitAllocator_Block, ___prev) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BestFitAllocator_Block, ___next) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BestFitAllocator_Block, ___prevAvailable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BestFitAllocator_Block, ___nextAvailable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BestFitAllocator_Block, ___allocated) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::BestFitAllocator_Block, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.BestFitAllocator
class CORDL_TYPE BestFitAllocator : public ::System::Object {
public:
  // Declarations
  using Block = ::UnityEngine::UIElements::UIR::BestFitAllocator_Block;

  using BlockPool = ::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool;

  /// @brief Field <totalSize>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__totalSize_k__BackingField, put = __cordl_internal_set__totalSize_k__BackingField)) uint32_t _totalSize_k__BackingField;

  __declspec(property(get = get_highWatermark)) uint32_t highWatermark;

  /// @brief Field m_BlockPool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlockPool, put = __cordl_internal_set_m_BlockPool)) ::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool* m_BlockPool;

  /// @brief Field m_FirstAvailableBlock, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FirstAvailableBlock,
                      put = __cordl_internal_set_m_FirstAvailableBlock)) ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* m_FirstAvailableBlock;

  /// @brief Field m_FirstBlock, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FirstBlock, put = __cordl_internal_set_m_FirstBlock)) ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* m_FirstBlock;

  /// @brief Field m_HighWatermark, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HighWatermark, put = __cordl_internal_set_m_HighWatermark)) uint32_t m_HighWatermark;

  __declspec(property(get = get_totalSize)) uint32_t totalSize;

  /// @brief Method Allocate, addr 0x49bb5e0, size 0x198, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::Alloc Allocate(uint32_t size);

  /// @brief Method BestFitFindAvailableBlock, addr 0x49bb778, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* BestFitFindAvailableBlock(uint32_t size);

  /// @brief Method CoalesceBlockWithPrevious, addr 0x49bbb10, size 0x108, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* CoalesceBlockWithPrevious(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* block);

  /// @brief Method Free, addr 0x49bb8b4, size 0x25c, virtual false, abstract: false, final false
  inline void Free(::UnityEngine::UIElements::UIR::Alloc alloc);

  static inline ::UnityEngine::UIElements::UIR::BestFitAllocator* New_ctor(uint32_t size);

  /// @brief Method SplitBlock, addr 0x49bb7c8, size 0xec, virtual false, abstract: false, final false
  inline void SplitBlock(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* block, uint32_t size);

  constexpr uint32_t const& __cordl_internal_get__totalSize_k__BackingField() const;

  constexpr uint32_t& __cordl_internal_get__totalSize_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool* const& __cordl_internal_get_m_BlockPool() const;

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool*& __cordl_internal_get_m_BlockPool();

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* const& __cordl_internal_get_m_FirstAvailableBlock() const;

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block*& __cordl_internal_get_m_FirstAvailableBlock();

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* const& __cordl_internal_get_m_FirstBlock() const;

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator_Block*& __cordl_internal_get_m_FirstBlock();

  constexpr uint32_t const& __cordl_internal_get_m_HighWatermark() const;

  constexpr uint32_t& __cordl_internal_get_m_HighWatermark();

  constexpr void __cordl_internal_set__totalSize_k__BackingField(uint32_t value);

  constexpr void __cordl_internal_set_m_BlockPool(::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool* value);

  constexpr void __cordl_internal_set_m_FirstAvailableBlock(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* value);

  constexpr void __cordl_internal_set_m_FirstBlock(::UnityEngine::UIElements::UIR::BestFitAllocator_Block* value);

  constexpr void __cordl_internal_set_m_HighWatermark(uint32_t value);

  /// @brief Method .ctor, addr 0x49bb440, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(uint32_t size);

  /// @brief Method get_highWatermark, addr 0x49bb5d8, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_highWatermark();

  /// @brief Method get_totalSize, addr 0x49bb5d0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_totalSize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BestFitAllocator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BestFitAllocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BestFitAllocator(BestFitAllocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BestFitAllocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BestFitAllocator(BestFitAllocator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6427 };

  /// @brief Field <totalSize>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t ____totalSize_k__BackingField;

  /// @brief Field m_FirstBlock, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* ___m_FirstBlock;

  /// @brief Field m_FirstAvailableBlock, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BestFitAllocator_Block* ___m_FirstAvailableBlock;

  /// @brief Field m_BlockPool, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool* ___m_BlockPool;

  /// @brief Field m_HighWatermark, offset: 0x30, size: 0x4, def value: None
  uint32_t ___m_HighWatermark;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::BestFitAllocator, ____totalSize_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BestFitAllocator, ___m_FirstBlock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BestFitAllocator, ___m_FirstAvailableBlock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BestFitAllocator, ___m_BlockPool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BestFitAllocator, ___m_HighWatermark) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::BestFitAllocator, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::BestFitAllocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::BestFitAllocator*, "UnityEngine.UIElements.UIR", "BestFitAllocator");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::BestFitAllocator_Block);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::BestFitAllocator_Block*, "UnityEngine.UIElements.UIR", "BestFitAllocator/Block");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::BestFitAllocator_BlockPool*, "UnityEngine.UIElements.UIR", "BestFitAllocator/BlockPool");
