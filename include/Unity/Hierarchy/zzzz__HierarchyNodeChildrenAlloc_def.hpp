#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeChildrenAlloc.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyNodeChildrenAlloc)
namespace Unity::Hierarchy {
struct HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchyNodeChildrenAlloc;
}
namespace Unity::Hierarchy {
struct HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchyNodeChildrenAlloc);
MARK_VAL_T(::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer);
// Dependencies
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyNodeChildrenAlloc/<Reserved>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer(int32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21734 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  int32_t FixedElementField;

  /// @brief Size padding 0xc - 0x4 = 0x8, packed as 0x8
  uint8_t _cordl_size_padding[0x8];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer, 0xc>, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies Unity.Hierarchy.HierarchyNodeChildrenAlloc::<Reserved>e__FixedBuffer
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyNodeChildrenAlloc
#pragma pack(push, 0)
struct CORDL_TYPE HierarchyNodeChildrenAlloc {
public:
  // Declarations
  using _Reserved_e__FixedBuffer = ::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer;

  /// @brief Field Capacity, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_Capacity, put = __cordl_internal_set_Capacity)) int32_t Capacity;

  /// @brief Field Ptr, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_Ptr, put = __cordl_internal_set_Ptr)) ::Unity::Hierarchy::HierarchyNode* Ptr;

  /// @brief Field RemovedCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_RemovedCount, put = __cordl_internal_set_RemovedCount)) int32_t RemovedCount;

  /// @brief Field Reserved, offset 0x14, size 0xc
  __declspec(property(get = __cordl_internal_get_Reserved, put = __cordl_internal_set_Reserved)) ::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer Reserved;

  /// @brief Field Size, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_Size, put = __cordl_internal_set_Size)) int32_t Size;

  constexpr int32_t const& __cordl_internal_get_Capacity() const;

  constexpr int32_t& __cordl_internal_get_Capacity();

  constexpr ::Unity::Hierarchy::HierarchyNode* const& __cordl_internal_get_Ptr() const;

  constexpr ::Unity::Hierarchy::HierarchyNode*& __cordl_internal_get_Ptr();

  constexpr int32_t const& __cordl_internal_get_RemovedCount() const;

  constexpr int32_t& __cordl_internal_get_RemovedCount();

  constexpr ::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer const& __cordl_internal_get_Reserved() const;

  constexpr ::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer& __cordl_internal_get_Reserved();

  constexpr int32_t const& __cordl_internal_get_Size() const;

  constexpr int32_t& __cordl_internal_get_Size();

  constexpr void __cordl_internal_set_Capacity(int32_t value);

  constexpr void __cordl_internal_set_Ptr(::Unity::Hierarchy::HierarchyNode* value);

  constexpr void __cordl_internal_set_RemovedCount(int32_t value);

  constexpr void __cordl_internal_set_Reserved(::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer value);

  constexpr void __cordl_internal_set_Size(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyNodeChildrenAlloc();

  // Ctor Parameters [CppParam { name: "Ptr", ty: "::Unity::Hierarchy::HierarchyNode*", modifiers: "", def_value: None }, CppParam { name: "Size", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "RemovedCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Reserved", ty:
  // "::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr HierarchyNodeChildrenAlloc(::Unity::Hierarchy::HierarchyNode* Ptr, int32_t Size, int32_t Capacity, int32_t RemovedCount,
                                       ::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer Reserved) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Ptr_padding[0x0];
      /// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
      ::Unity::Hierarchy::HierarchyNode* ___Ptr;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Ptr_padding_forAlignment[0x0];
      /// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
      ::Unity::Hierarchy::HierarchyNode* ___Ptr_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___Size_padding[0x8];
      /// @brief Field Size, offset: 0x8, size: 0x4, def value: None
      int32_t ___Size;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___Size_padding_forAlignment[0x8];
      /// @brief Field Size, offset: 0x8, size: 0x4, def value: None
      int32_t ___Size_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___Capacity_padding[0xc];
      /// @brief Field Capacity, offset: 0xc, size: 0x4, def value: None
      int32_t ___Capacity;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___Capacity_padding_forAlignment[0xc];
      /// @brief Field Capacity, offset: 0xc, size: 0x4, def value: None
      int32_t ___Capacity_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___RemovedCount_padding[0x10];
      /// @brief Field RemovedCount, offset: 0x10, size: 0x4, def value: None
      int32_t ___RemovedCount;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___RemovedCount_padding_forAlignment[0x10];
      /// @brief Field RemovedCount, offset: 0x10, size: 0x4, def value: None
      int32_t ___RemovedCount_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x14
      uint8_t ___Reserved_padding[0x14];
      /// @brief Field Reserved, offset: 0x14, size: 0xc, def value: None
      ::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer ___Reserved;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___Reserved_padding_forAlignment[0x14];
      /// @brief Field Reserved, offset: 0x14, size: 0xc, def value: None
      ::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer ___Reserved_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21735 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyNodeChildrenAlloc, 0x20>, "Size mismatch!");

} // namespace Unity::Hierarchy
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyNodeChildrenAlloc, "Unity.Hierarchy", "HierarchyNodeChildrenAlloc");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyNodeChildrenAlloc__Reserved_e__FixedBuffer, "Unity.Hierarchy", "HierarchyNodeChildrenAlloc/<Reserved>e__FixedBuffer");
