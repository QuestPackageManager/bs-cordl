#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataItem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType::BeatmapDataItem_BeatmapDataItemType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType::BeatmapDataItem_BeatmapDataItemType() {}
constexpr ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType GlobalNamespace::BeatmapDataItem_BeatmapDataItemType::BeatmapObject{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType GlobalNamespace::BeatmapDataItem_BeatmapDataItemType::BeatmapEvent{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_typeIdCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::BeatmapDataItem::get_typeIdCount)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3258570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "get_typeIdCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.GetTypeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::GlobalNamespace::BeatmapDataItem::GetTypeId)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3258684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "GetTypeId", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325885c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.set_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataItem::*)(float_t)>(&::GlobalNamespace::BeatmapDataItem::set_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3258864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "set_time", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_executionOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::get_executionOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325886c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "get_executionOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_itemTypeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::get_itemTypeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3258874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "get_itemTypeId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.set_itemTypeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataItem::*)(int32_t)>(&::GlobalNamespace::BeatmapDataItem::set_itemTypeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325887c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "set_itemTypeId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_baseTypeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::get_baseTypeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3258884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "get_baseTypeId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.set_baseTypeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataItem::*)(int32_t)>(&::GlobalNamespace::BeatmapDataItem::set_baseTypeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325888c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "set_baseTypeId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_subtypeGroupIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::get_subtypeGroupIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3258894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_subtypeIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::get_subtypeIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325889c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "get_subtypeIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.set_subtypeIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataItem::*)(int32_t)>(&::GlobalNamespace::BeatmapDataItem::set_subtypeIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32588a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "set_subtypeIdentifier", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType (::GlobalNamespace::BeatmapDataItem::*)()>(
    &::GlobalNamespace::BeatmapDataItem::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32588ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.set_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataItem::*)(::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType)>(
    &::GlobalNamespace::BeatmapDataItem::set_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32588b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "set_type", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataItem::*)(float_t, int32_t, int32_t, ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType)>(
    &::GlobalNamespace::BeatmapDataItem::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x32588bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(),
            { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.GetCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::GetCopy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapDataItem::*)(::GlobalNamespace::BeatmapDataItem*)>(&::GlobalNamespace::BeatmapDataItem::CompareTo)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x32589c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "CompareTo", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BeatmapDataItem::__cordl_internal_get__time_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeatmapDataItem::__cordl_internal_get__time_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapDataItem::__cordl_internal_set__time_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____time_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::BeatmapDataItem::__cordl_internal_get__executionOrder_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executionOrder_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BeatmapDataItem::__cordl_internal_get__executionOrder_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executionOrder_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapDataItem::__cordl_internal_set__executionOrder_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____executionOrder_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::BeatmapDataItem::__cordl_internal_get__itemTypeId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemTypeId_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BeatmapDataItem::__cordl_internal_get__itemTypeId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemTypeId_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapDataItem::__cordl_internal_set__itemTypeId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____itemTypeId_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::BeatmapDataItem::__cordl_internal_get__baseTypeId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseTypeId_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BeatmapDataItem::__cordl_internal_get__baseTypeId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseTypeId_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapDataItem::__cordl_internal_set__baseTypeId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseTypeId_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::BeatmapDataItem::__cordl_internal_get__subtypeIdentifier_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subtypeIdentifier_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BeatmapDataItem::__cordl_internal_get__subtypeIdentifier_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subtypeIdentifier_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapDataItem::__cordl_internal_set__subtypeIdentifier_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subtypeIdentifier_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType& GlobalNamespace::BeatmapDataItem::__cordl_internal_get__type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType const& GlobalNamespace::BeatmapDataItem::__cordl_internal_get__type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapDataItem::__cordl_internal_set__type_k__BackingField(::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type_k__BackingField = value;
}
inline void GlobalNamespace::BeatmapDataItem::setStaticF__typeIdMapLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_typeIdMapLock", ::GlobalNamespace::BeatmapDataItem*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* GlobalNamespace::BeatmapDataItem::getStaticF__typeIdMapLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "_typeIdMapLock", ::GlobalNamespace::BeatmapDataItem*>();
}
inline void GlobalNamespace::BeatmapDataItem::setStaticF__typeIdMap(::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>*, "_typeIdMap", ::GlobalNamespace::BeatmapDataItem*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* GlobalNamespace::BeatmapDataItem::getStaticF__typeIdMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>*, "_typeIdMap", ::GlobalNamespace::BeatmapDataItem*>();
}
inline void GlobalNamespace::BeatmapDataItem::setStaticF__nextTypeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_nextTypeId", ::GlobalNamespace::BeatmapDataItem*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BeatmapDataItem::getStaticF__nextTypeId() {
  return ::cordl_internals::getStaticField<int32_t, "_nextTypeId", ::GlobalNamespace::BeatmapDataItem*>();
}
inline int32_t GlobalNamespace::BeatmapDataItem::get_typeIdCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "get_typeIdCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapDataItem::GetTypeId(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "GetTypeId", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type);
}
inline float_t GlobalNamespace::BeatmapDataItem::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataItem::set_time(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "set_time", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::BeatmapDataItem::get_executionOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "get_executionOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapDataItem::get_itemTypeId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "get_itemTypeId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataItem::set_itemTypeId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "set_itemTypeId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::BeatmapDataItem::get_baseTypeId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "get_baseTypeId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataItem::set_baseTypeId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "set_baseTypeId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::BeatmapDataItem::get_subtypeGroupIdentifier() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapDataItem::get_subtypeIdentifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "get_subtypeIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataItem::set_subtypeIdentifier(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "set_subtypeIdentifier", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType GlobalNamespace::BeatmapDataItem::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataItem::set_type(::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "set_type", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapDataItem::_ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier, ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(),
          { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, executionOrder, subtypeIdentifier, type);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::BeatmapDataItem::GetCopy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapDataItem::CompareTo(::GlobalNamespace::BeatmapDataItem* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataItem*>(), { "CompareTo", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, b);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::BeatmapDataItem::New_ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier,
                                                                                      ::GlobalNamespace::BeatmapDataItem_BeatmapDataItemType type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataItem*>(time, executionOrder, subtypeIdentifier, type));
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>"
constexpr GlobalNamespace::BeatmapDataItem::operator ::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>*() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>"
constexpr ::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>* GlobalNamespace::BeatmapDataItem::i___System__IComparable_1___GlobalNamespace__BeatmapDataItem__() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataItem::BeatmapDataItem() {}
