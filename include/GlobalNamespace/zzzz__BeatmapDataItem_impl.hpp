#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataItem.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType::__BeatmapDataItem__BeatmapDataItemType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType::__BeatmapDataItem__BeatmapDataItemType() {}
constexpr ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType::BeatmapObject{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType::BeatmapEvent{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2215098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), "get_time",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.set_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataItem::*)(float_t)>(&::GlobalNamespace::BeatmapDataItem::set_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22150a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), "set_time", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_executionOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::get_executionOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22150a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), "get_executionOrder",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_subtypeGroupIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::get_subtypeGroupIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22150b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_subtypeIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::get_subtypeIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22150b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                                                                               "get_subtypeIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.set_subtypeIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataItem::*)(int32_t)>(&::GlobalNamespace::BeatmapDataItem::set_subtypeIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22150c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), "set_subtypeIdentifier",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType (::GlobalNamespace::BeatmapDataItem::*)()>(
    &::GlobalNamespace::BeatmapDataItem::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22150c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), "get_type",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.set_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataItem::*)(::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType)>(
    &::GlobalNamespace::BeatmapDataItem::set_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22150d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), "set_type", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BeatmapDataItem::*)(float_t, int32_t, int32_t, ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType)>(&::GlobalNamespace::BeatmapDataItem::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x22150d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.GetCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::BeatmapDataItem::*)()>(
    &::GlobalNamespace::BeatmapDataItem::GetCopy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapDataItem::*)(::GlobalNamespace::BeatmapDataItem*)>(
    &::GlobalNamespace::BeatmapDataItem::CompareTo)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2215124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>"
constexpr GlobalNamespace::BeatmapDataItem::operator ::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>*() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>"
constexpr ::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>* GlobalNamespace::BeatmapDataItem::i___System__IComparable_1___GlobalNamespace__BeatmapDataItem__() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>*>(static_cast<void*>(this));
}
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
constexpr ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType& GlobalNamespace::BeatmapDataItem::__cordl_internal_get__type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type_k__BackingField;
}
constexpr ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType const& GlobalNamespace::BeatmapDataItem::__cordl_internal_get__type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapDataItem::__cordl_internal_set__type_k__BackingField(::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type_k__BackingField = value;
}
inline float_t GlobalNamespace::BeatmapDataItem::get_time() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), "get_time",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataItem::set_time(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), "set_time", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::BeatmapDataItem::get_executionOrder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), "get_executionOrder",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapDataItem::get_subtypeGroupIdentifier() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapDataItem::get_subtypeIdentifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                                                                             "get_subtypeIdentifier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataItem::set_subtypeIdentifier(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), "set_subtypeIdentifier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType GlobalNamespace::BeatmapDataItem::get_type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), "get_type",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDataItem::set_type(::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), "set_type", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::BeatmapDataItem::New_ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier,
                                                                                      ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapDataItem*>(time, executionOrder, subtypeIdentifier, type));
}
inline void GlobalNamespace::BeatmapDataItem::_ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier, ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, executionOrder, subtypeIdentifier, type);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::BeatmapDataItem::GetCopy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapDataItem::CompareTo(::GlobalNamespace::BeatmapDataItem* b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, b);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataItem::BeatmapDataItem() {}
