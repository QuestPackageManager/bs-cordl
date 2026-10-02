#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeChildrenAlloc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyNodeChildrenAlloc)
namespace Unity::Hierarchy {
struct HierarchyNode;
}
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchyNodeChildrenAlloc;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchyNodeChildrenAlloc);
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyNodeChildrenAlloc, "Unity.Hierarchy", "HierarchyNodeChildrenAlloc");
// Dependencies
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyNodeChildrenAlloc
#pragma pack(push, 0)
struct CORDL_TYPE HierarchyNodeChildrenAlloc {
public:
  // Declarations
  /// @brief Field Capacity, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_Capacity, put = __cordl_internal_set_Capacity)) int32_t Capacity;

  /// @brief Field ControlBit, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_ControlBit, put = __cordl_internal_set_ControlBit)) int32_t ControlBit;

  /// @brief Field NullCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_NullCount, put = __cordl_internal_set_NullCount)) int32_t NullCount;

  /// @brief Field Ptr, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_Ptr, put = __cordl_internal_set_Ptr)) ::Unity::Hierarchy::HierarchyNode* Ptr;

  /// @brief Field Reserved0, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Reserved0, put = __cordl_internal_set_Reserved0)) int32_t Reserved0;

  /// @brief Field Reserved1, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_Reserved1, put = __cordl_internal_set_Reserved1)) int32_t Reserved1;

  /// @brief Field Size, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_Size, put = __cordl_internal_set_Size)) int32_t Size;

  constexpr int32_t const& __cordl_internal_get_Capacity() const;

  constexpr int32_t& __cordl_internal_get_Capacity();

  constexpr int32_t const& __cordl_internal_get_ControlBit() const;

  constexpr int32_t& __cordl_internal_get_ControlBit();

  constexpr int32_t const& __cordl_internal_get_NullCount() const;

  constexpr int32_t& __cordl_internal_get_NullCount();

  constexpr ::Unity::Hierarchy::HierarchyNode* const& __cordl_internal_get_Ptr() const;

  constexpr ::Unity::Hierarchy::HierarchyNode*& __cordl_internal_get_Ptr();

  constexpr int32_t const& __cordl_internal_get_Reserved0() const;

  constexpr int32_t& __cordl_internal_get_Reserved0();

  constexpr int32_t const& __cordl_internal_get_Reserved1() const;

  constexpr int32_t& __cordl_internal_get_Reserved1();

  constexpr int32_t const& __cordl_internal_get_Size() const;

  constexpr int32_t& __cordl_internal_get_Size();

  constexpr void __cordl_internal_set_Capacity(int32_t value);

  constexpr void __cordl_internal_set_ControlBit(int32_t value);

  constexpr void __cordl_internal_set_NullCount(int32_t value);

  constexpr void __cordl_internal_set_Ptr(::Unity::Hierarchy::HierarchyNode* value);

  constexpr void __cordl_internal_set_Reserved0(int32_t value);

  constexpr void __cordl_internal_set_Reserved1(int32_t value);

  constexpr void __cordl_internal_set_Size(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyNodeChildrenAlloc();

  // Ctor Parameters [CppParam { name: "Ptr", ty: "::Unity::Hierarchy::HierarchyNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Size", ty: "int32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ControlBit", ty: "int32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "NullCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved0", ty: "int32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "Reserved1", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr HierarchyNodeChildrenAlloc(::Unity::Hierarchy::HierarchyNode* Ptr, int32_t Size, int32_t Capacity, int32_t ControlBit, int32_t NullCount, int32_t Reserved0, int32_t Reserved1) noexcept;

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
      uint8_t ___ControlBit_padding[0x10];
      /// @brief Field ControlBit, offset: 0x10, size: 0x4, def value: None
      int32_t ___ControlBit;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___ControlBit_padding_forAlignment[0x10];
      /// @brief Field ControlBit, offset: 0x10, size: 0x4, def value: None
      int32_t ___ControlBit_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x14
      uint8_t ___NullCount_padding[0x14];
      /// @brief Field NullCount, offset: 0x14, size: 0x4, def value: None
      int32_t ___NullCount;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___NullCount_padding_forAlignment[0x14];
      /// @brief Field NullCount, offset: 0x14, size: 0x4, def value: None
      int32_t ___NullCount_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___Reserved0_padding[0x18];
      /// @brief Field Reserved0, offset: 0x18, size: 0x4, def value: None
      int32_t ___Reserved0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___Reserved0_padding_forAlignment[0x18];
      /// @brief Field Reserved0, offset: 0x18, size: 0x4, def value: None
      int32_t ___Reserved0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1c
      uint8_t ___Reserved1_padding[0x1c];
      /// @brief Field Reserved1, offset: 0x1c, size: 0x4, def value: None
      int32_t ___Reserved1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1c for alignment
      uint8_t ___Reserved1_padding_forAlignment[0x1c];
      /// @brief Field Reserved1, offset: 0x1c, size: 0x4, def value: None
      int32_t ___Reserved1_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22580 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Unity::Hierarchy::HierarchyNodeChildrenAlloc) == 0x20, "Size mismatch!");

} // namespace Unity::Hierarchy
