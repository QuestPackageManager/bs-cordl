#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataItem)
namespace GlobalNamespace {
struct __BeatmapDataItem__BeatmapDataItemType;
}
namespace System {
template <typename T> class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __BeatmapDataItem__BeatmapDataItemType;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataItem);
// Type: ::BeatmapDataItemType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapDataItem::BeatmapDataItemType
struct CORDL_TYPE __BeatmapDataItem__BeatmapDataItemType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapDataItem__BeatmapDataItemType_Unwrapped
  enum struct ____BeatmapDataItem__BeatmapDataItemType_Unwrapped : int32_t {
    __E_BeatmapObject = static_cast<int32_t>(0x0),
    __E_BeatmapEvent = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapDataItem__BeatmapDataItemType_Unwrapped() const noexcept {
    return static_cast<____BeatmapDataItem__BeatmapDataItemType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataItem__BeatmapDataItemType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapDataItem__BeatmapDataItemType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BeatmapEvent value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType const BeatmapEvent;

  /// @brief Field BeatmapObject value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType const BeatmapObject;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapDataItem
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDataItem*
class CORDL_TYPE BeatmapDataItem : public ::System::Object {
public:
  // Declarations
  using BeatmapDataItemType = ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType;

  /// @brief Field <executionOrder>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__executionOrder_k__BackingField, put = __cordl_internal_set__executionOrder_k__BackingField)) int32_t _executionOrder_k__BackingField;

  /// @brief Field <time>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__time_k__BackingField, put = __cordl_internal_set__time_k__BackingField)) float_t _time_k__BackingField;

  __declspec(property(get = get_executionOrder)) int32_t executionOrder;

  __declspec(property(get = get_subtypeGroupIdentifier)) int32_t subtypeGroupIdentifier;

  /// @brief Field subtypeIdentifier, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_subtypeIdentifier, put = __cordl_internal_set_subtypeIdentifier)) int32_t subtypeIdentifier;

  __declspec(property(get = get_time)) float_t time;

  /// @brief Field type, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType type;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>*() noexcept;

  /// @brief Method CompareTo, addr 0xe534f4, size 0x4c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::BeatmapDataItem* b);

  /// @brief Method GetCopy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  static inline ::GlobalNamespace::BeatmapDataItem* New_ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier, ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType type);

  constexpr int32_t const& __cordl_internal_get__executionOrder_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__executionOrder_k__BackingField();

  constexpr float_t const& __cordl_internal_get__time_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__time_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_subtypeIdentifier() const;

  constexpr int32_t& __cordl_internal_get_subtypeIdentifier();

  constexpr ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType const& __cordl_internal_get_type() const;

  constexpr ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set__executionOrder_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__time_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_subtypeIdentifier(int32_t value);

  constexpr void __cordl_internal_set_type(::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType value);

  /// @brief Method .ctor, addr 0xe534a8, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier, ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType type);

  /// @brief Method get_executionOrder, addr 0xe53498, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_executionOrder();

  /// @brief Method get_subtypeGroupIdentifier, addr 0xe534a0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_subtypeGroupIdentifier();

  /// @brief Method get_time, addr 0xe53490, size 0x8, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Convert to "::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>"
  constexpr ::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>* i___System__IComparable_1___GlobalNamespace__BeatmapDataItem__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataItem(BeatmapDataItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataItem(BeatmapDataItem const&) = delete;

  /// @brief Field <time>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t ____time_k__BackingField;

  /// @brief Field <executionOrder>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____executionOrder_k__BackingField;

  /// @brief Field subtypeIdentifier, offset: 0x18, size: 0x4, def value: None
  int32_t ___subtypeIdentifier;

  /// @brief Field type, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataItem, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataItem, ____time_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataItem, ____executionOrder_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataItem, ___subtypeIdentifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataItem, ___type) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType, "", "BeatmapDataItem/BeatmapDataItemType");
NEED_NO_BOX(::GlobalNamespace::BeatmapDataItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataItem*, "", "BeatmapDataItem");
