#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataItem)
namespace GlobalNamespace {
struct BeatmapDataItem_BeatmapDataItemType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapDataItem_BeatmapDataItemType;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType);
MARK_REF_T(::GlobalNamespace::BeatmapDataItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType, "", "BeatmapDataItem/BeatmapDataItemType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapDataItem*, "", "BeatmapDataItem");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapDataItem/BeatmapDataItemType
struct CORDL_TYPE BeatmapDataItem_BeatmapDataItemType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BeatmapDataItem_BeatmapDataItemType_Unwrapped
  enum struct __BeatmapDataItem_BeatmapDataItemType_Unwrapped : int32_t {
    __E_BeatmapObject = static_cast<int32_t>(0x0),
    __E_BeatmapEvent = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BeatmapDataItem_BeatmapDataItemType_Unwrapped() const noexcept {
    return static_cast<__BeatmapDataItem_BeatmapDataItemType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataItem_BeatmapDataItemType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BeatmapDataItem_BeatmapDataItemType(int32_t value__) noexcept;

  /// @brief Field BeatmapEvent value: I32(1)
  static ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType const BeatmapEvent;

  /// @brief Field BeatmapObject value: I32(0)
  static ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType const BeatmapObject;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21228 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDataItem::BeatmapDataItemType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataItem
class CORDL_TYPE BeatmapDataItem : public ::System::Object {
public:
  // Declarations
  using BeatmapDataItemType = ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType;

  /// @brief Field <baseTypeId>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__baseTypeId_k__BackingField, put = __cordl_internal_set__baseTypeId_k__BackingField)) int32_t _baseTypeId_k__BackingField;

  /// @brief Field <executionOrder>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__executionOrder_k__BackingField, put = __cordl_internal_set__executionOrder_k__BackingField)) int32_t _executionOrder_k__BackingField;

  /// @brief Field <itemTypeId>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__itemTypeId_k__BackingField, put = __cordl_internal_set__itemTypeId_k__BackingField)) int32_t _itemTypeId_k__BackingField;

  /// @brief Field _nextTypeId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__nextTypeId, put = setStaticF__nextTypeId)) int32_t _nextTypeId;

  /// @brief Field <subtypeIdentifier>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__subtypeIdentifier_k__BackingField, put = __cordl_internal_set__subtypeIdentifier_k__BackingField)) int32_t _subtypeIdentifier_k__BackingField;

  /// @brief Field <time>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__time_k__BackingField, put = __cordl_internal_set__time_k__BackingField)) float_t _time_k__BackingField;

  /// @brief Field _typeIdMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__typeIdMap, put = setStaticF__typeIdMap)) ::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* _typeIdMap;

  /// @brief Field _typeIdMapLock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__typeIdMapLock, put = setStaticF__typeIdMapLock)) ::System::Object* _typeIdMapLock;

  /// @brief Field <type>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__type_k__BackingField, put = __cordl_internal_set__type_k__BackingField)) ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType _type_k__BackingField;

  __declspec(property(get = get_baseTypeId, put = set_baseTypeId)) int32_t baseTypeId;

  __declspec(property(get = get_executionOrder)) int32_t executionOrder;

  __declspec(property(get = get_itemTypeId, put = set_itemTypeId)) int32_t itemTypeId;

  __declspec(property(get = get_subtypeGroupIdentifier)) int32_t subtypeGroupIdentifier;

  __declspec(property(get = get_subtypeIdentifier, put = set_subtypeIdentifier)) int32_t subtypeIdentifier;

  __declspec(property(get = get_time, put = set_time)) float_t time;

  __declspec(property(get = get_type, put = set_type)) ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType type;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>*() noexcept;

  /// @brief Method CompareTo, addr 0x3258f84, size 0x48, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::BeatmapDataItem* b);

  /// @brief Method GetCopy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method GetTypeId, addr 0x3258c44, size 0x1d8, virtual false, abstract: false, final false
  static inline int32_t GetTypeId(::System::Type* type);

  static inline ::GlobalNamespace::BeatmapDataItem* New_ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier, ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType type);

  constexpr int32_t const& __cordl_internal_get__baseTypeId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__baseTypeId_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__executionOrder_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__executionOrder_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__itemTypeId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__itemTypeId_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__subtypeIdentifier_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__subtypeIdentifier_k__BackingField();

  constexpr float_t const& __cordl_internal_get__time_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__time_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType const& __cordl_internal_get__type_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType& __cordl_internal_get__type_k__BackingField();

  constexpr void __cordl_internal_set__baseTypeId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__executionOrder_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__itemTypeId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__subtypeIdentifier_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__time_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__type_k__BackingField(::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType value);

  /// @brief Method .ctor, addr 0x3258e7c, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier, ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType type);

  static inline int32_t getStaticF__nextTypeId();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* getStaticF__typeIdMap();

  static inline ::System::Object* getStaticF__typeIdMapLock();

  /// @brief Method get_baseTypeId, addr 0x3258e44, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_baseTypeId();

  /// @brief Method get_executionOrder, addr 0x3258e2c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_executionOrder();

  /// @brief Method get_itemTypeId, addr 0x3258e34, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_itemTypeId();

  /// @brief Method get_subtypeGroupIdentifier, addr 0x3258e54, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_subtypeGroupIdentifier();

  /// @brief Method get_subtypeIdentifier, addr 0x3258e5c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_subtypeIdentifier();

  /// @brief Method get_time, addr 0x3258e1c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method get_type, addr 0x3258e6c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType get_type();

  /// @brief Method get_typeIdCount, addr 0x3258b30, size 0x114, virtual false, abstract: false, final false
  static inline int32_t get_typeIdCount();

  /// @brief Convert to "::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>"
  constexpr ::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>* i___System__IComparable_1___GlobalNamespace__BeatmapDataItem__() noexcept;

  static inline void setStaticF__nextTypeId(int32_t value);

  static inline void setStaticF__typeIdMap(::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* value);

  static inline void setStaticF__typeIdMapLock(::System::Object* value);

  /// @brief Method set_baseTypeId, addr 0x3258e4c, size 0x8, virtual false, abstract: false, final false
  inline void set_baseTypeId(int32_t value);

  /// @brief Method set_itemTypeId, addr 0x3258e3c, size 0x8, virtual false, abstract: false, final false
  inline void set_itemTypeId(int32_t value);

  /// @brief Method set_subtypeIdentifier, addr 0x3258e64, size 0x8, virtual false, abstract: false, final false
  inline void set_subtypeIdentifier(int32_t value);

  /// @brief Method set_time, addr 0x3258e24, size 0x8, virtual false, abstract: false, final false
  inline void set_time(float_t value);

  /// @brief Method set_type, addr 0x3258e74, size 0x8, virtual false, abstract: false, final false
  inline void set_type(::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21229 };

  /// @brief Field <time>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t ____time_k__BackingField;

  /// @brief Field <executionOrder>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____executionOrder_k__BackingField;

  /// @brief Field <itemTypeId>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____itemTypeId_k__BackingField;

  /// @brief Field <baseTypeId>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____baseTypeId_k__BackingField;

  /// @brief Field <subtypeIdentifier>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____subtypeIdentifier_k__BackingField;

  /// @brief Field <type>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType ____type_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataItem, ____time_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataItem, ____executionOrder_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataItem, ____itemTypeId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataItem, ____baseTypeId_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataItem, ____subtypeIdentifier_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataItem, ____type_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapDataItem) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
