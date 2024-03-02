#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SonyLevelProductCollectionModel_def.hpp"
#include "GlobalNamespace/zzzz__ILevelPackProductData_1_def.hpp"
#include "GlobalNamespace/zzzz__ILevelProductData_def.hpp"
#include "GlobalNamespace/zzzz__SonyLevelProductCollectionModel_def.hpp"
#include "GlobalNamespace/zzzz__SonyLevelProductPackSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData.get_entitlementLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::*)()>(
    &::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::get_entitlementLabel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12eb7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>::get(),
                                                 "get_entitlementLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData.get_productLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::*)()>(
    &::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::get_productLabel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12eb7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>::get(),
                                                 "get_productLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData.get_levelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::*)()>(
    &::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::get_levelId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12eb7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>::get(), "get_levelId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::*)(::StringW, ::StringW, ::StringW)>(
    &::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x12eb7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ILevelProductData"
constexpr GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::operator ::GlobalNamespace::ILevelProductData*() noexcept {
  return static_cast<::GlobalNamespace::ILevelProductData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelProductData"
constexpr ::GlobalNamespace::ILevelProductData* GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::i___GlobalNamespace__ILevelProductData() noexcept {
  return static_cast<::GlobalNamespace::ILevelProductData*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::__cordl_internal_get__levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr ::StringW const& GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::__cordl_internal_get__levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr void GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::__cordl_internal_set__levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::__cordl_internal_get__entitlementLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementLabel;
}
constexpr ::StringW const& GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::__cordl_internal_get__entitlementLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementLabel;
}
constexpr void GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::__cordl_internal_set__entitlementLabel(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entitlementLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::__cordl_internal_get__productLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____productLabel;
}
constexpr ::StringW const& GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::__cordl_internal_get__productLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____productLabel;
}
constexpr void GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::__cordl_internal_set__productLabel(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____productLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::get_entitlementLabel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>::get(),
                                               "get_entitlementLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::get_productLabel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>::get(),
                                               "get_productLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::get_levelId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>::get(), "get_levelId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*
GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::New_ctor(::StringW entitlementLabel, ::StringW productLabel, ::StringW levelId) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>(entitlementLabel, productLabel, levelId));
}
inline void GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::_ctor(::StringW entitlementLabel, ::StringW productLabel, ::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entitlementLabel, productLabel, levelId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData::__SonyLevelProductCollectionModel__LevelProductData() {}
//  Writing Method size for method: ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData.get_productLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::*)()>(
    &::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::get_productLabel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12eb81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>::get(),
                                                 "get_productLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData.get_levelPackId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::*)()>(
    &::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::get_levelPackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12eb824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>::get(),
                                                 "get_levelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData.get_packLevelPriceDiscountMul
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::*)()>(
    &::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::get_packLevelPriceDiscountMul)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12eb82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>::get(),
                                                 "get_packLevelPriceDiscountMul", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData.get_packIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::*)()>(
    &::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::get_packIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12eb834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>::get(),
                                                 "get_packIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData.get_levelProductsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>* (
        ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::*)()>(&::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::get_levelProductsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12eb83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>::get(),
                                                 "get_levelProductsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::*)(
    ::StringW, ::StringW, float_t, ::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*>,
    int32_t)>(&::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x12eb844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*,
                                                                                                           ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::*)(
    ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*)>(&::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x12eb910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>::get(), "CompareTo",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>"
constexpr GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::operator ::System::IComparable_1<
    ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>*() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>"
constexpr ::System::IComparable_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>*
GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::i___System__IComparable_1___GlobalNamespace____SonyLevelProductCollectionModel__LevelPackProductData__() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>"
constexpr GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::operator ::GlobalNamespace::ILevelPackProductData_1<
    ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*() noexcept {
  return static_cast<::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>"
constexpr ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>* GlobalNamespace::
    __SonyLevelProductCollectionModel__LevelPackProductData::i___GlobalNamespace__ILevelPackProductData_1___GlobalNamespace____SonyLevelProductCollectionModel__LevelProductData__() noexcept {
  return static_cast<::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__packId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packId;
}
constexpr ::StringW const& GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__packId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packId;
}
constexpr void GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::__cordl_internal_set__packId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____packId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__productLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____productLabel;
}
constexpr ::StringW const& GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__productLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____productLabel;
}
constexpr void GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::__cordl_internal_set__productLabel(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____productLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__packLevelPriceDiscountMul() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packLevelPriceDiscountMul;
}
constexpr float_t const& GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__packLevelPriceDiscountMul() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packLevelPriceDiscountMul;
}
constexpr void GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::__cordl_internal_set__packLevelPriceDiscountMul(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packLevelPriceDiscountMul = value;
}
constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*>&
GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__levelProductsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelProductsData;
}
constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*> const&
GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__levelProductsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelProductsData;
}
constexpr void GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::__cordl_internal_set__levelProductsData(
    ::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelProductsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__packIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packIndex;
}
constexpr int32_t const& GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__packIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packIndex;
}
constexpr void GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::__cordl_internal_set__packIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packIndex = value;
}
inline ::StringW GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::get_productLabel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>::get(),
                                               "get_productLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::get_levelPackId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>::get(),
                                               "get_levelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::get_packLevelPriceDiscountMul() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>::get(),
                                               "get_packLevelPriceDiscountMul", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::get_packIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>::get(),
                                               "get_packIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*
GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::get_levelProductsData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>::get(),
                                               "get_levelProductsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*, false>(this,
                                                                                                                                                                               ___internal_method);
}
inline ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData* GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::New_ctor(
    ::StringW productLabel, ::StringW levelPackId, float_t packLevelPriceDiscountMul,
    ::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*> levelProductsData,
    int32_t packIndex) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>(productLabel, levelPackId, packLevelPriceDiscountMul, levelProductsData, packIndex));
}
inline void GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::_ctor(
    ::StringW productLabel, ::StringW levelPackId, float_t packLevelPriceDiscountMul,
    ::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*> levelProductsData,
    int32_t packIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*,
                                                                                                         ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, productLabel, levelPackId, packLevelPriceDiscountMul, levelProductsData, packIndex);
}
inline int32_t GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::CompareTo(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData::__SonyLevelProductCollectionModel__LevelPackProductData() {}
//  Writing Method size for method: ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData.get_targetLevelPackId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::get_targetLevelPackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12eb930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                                 "get_targetLevelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData.get_shouldOwnLevelPackId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::get_shouldOwnLevelPackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12eb938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                                 "get_shouldOwnLevelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData.get_redirectedProductLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::get_redirectedProductLabel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12eb940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                                 "get_redirectedProductLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData.get_validUntilDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::get_validUntilDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12eb948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                                 "get_validUntilDate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::*)(
    ::StringW, ::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x12eb950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__targetLevelPackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetLevelPackId;
}
constexpr ::StringW const& GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__targetLevelPackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetLevelPackId;
}
constexpr void GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_set__targetLevelPackId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetLevelPackId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__shouldOwnLevelPackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldOwnLevelPackId;
}
constexpr ::StringW const& GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__shouldOwnLevelPackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldOwnLevelPackId;
}
constexpr void GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_set__shouldOwnLevelPackId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shouldOwnLevelPackId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__redirectedProductLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____redirectedProductLabel;
}
constexpr ::StringW const& GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__redirectedProductLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____redirectedProductLabel;
}
constexpr void GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_set__redirectedProductLabel(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____redirectedProductLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__validUntilDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validUntilDate;
}
constexpr ::StringW const& GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__validUntilDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validUntilDate;
}
constexpr void GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_set__validUntilDate(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____validUntilDate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::get_targetLevelPackId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                               "get_targetLevelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::get_shouldOwnLevelPackId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                               "get_shouldOwnLevelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::get_redirectedProductLabel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                               "get_redirectedProductLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::get_validUntilDate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                               "get_validUntilDate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*
GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::New_ctor(::StringW targetLevelPackId, ::StringW shouldOwnLevelPackId, ::StringW redirectedProductLabel,
                                                                                       ::StringW validUntilDate) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>(targetLevelPackId, shouldOwnLevelPackId, redirectedProductLabel, validUntilDate));
}
inline void GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::_ctor(::StringW targetLevelPackId, ::StringW shouldOwnLevelPackId, ::StringW redirectedProductLabel,
                                                                                                ::StringW validUntilDate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetLevelPackId, shouldOwnLevelPackId, redirectedProductLabel, validUntilDate);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData::__SonyLevelProductCollectionModel__LevelPackRedirectionData() {}
//  Writing Method size for method: ::GlobalNamespace::SonyLevelProductCollectionModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyLevelProductCollectionModel::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLevelProductPackSO>>*)>(&::GlobalNamespace::SonyLevelProductCollectionModel::_ctor)> {
  constexpr static std::size_t size = 0x9d0;
  constexpr static std::size_t addrs = 0x12eac90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLevelProductCollectionModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLevelProductPackSO>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyLevelProductCollectionModel.GetLevelProductData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData* (
    ::GlobalNamespace::SonyLevelProductCollectionModel::*)(::StringW)>(&::GlobalNamespace::SonyLevelProductCollectionModel::GetLevelProductData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x12eb660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLevelProductCollectionModel*>::get(), "GetLevelProductData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyLevelProductCollectionModel.GetLevelPackProductData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData* (
    ::GlobalNamespace::SonyLevelProductCollectionModel::*)(::StringW)>(&::GlobalNamespace::SonyLevelProductCollectionModel::GetLevelPackProductData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x12eb6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLevelProductCollectionModel*>::get(), "GetLevelPackProductData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyLevelProductCollectionModel.GetLevelPackRedirectionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData* (
    ::GlobalNamespace::SonyLevelProductCollectionModel::*)(::StringW)>(&::GlobalNamespace::SonyLevelProductCollectionModel::GetLevelPackRedirectionData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x12eb750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLevelProductCollectionModel*>::get(), "GetLevelPackRedirectionData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*&
GlobalNamespace::SonyLevelProductCollectionModel::__cordl_internal_get__levelIdToProductData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelIdToProductData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*> const&
GlobalNamespace::SonyLevelProductCollectionModel::__cordl_internal_get__levelIdToProductData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelIdToProductData;
}
constexpr void GlobalNamespace::SonyLevelProductCollectionModel::__cordl_internal_set__levelIdToProductData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelIdToProductData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>*&
GlobalNamespace::SonyLevelProductCollectionModel::__cordl_internal_get__levelPackIdToProductData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackIdToProductData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>*> const&
GlobalNamespace::SonyLevelProductCollectionModel::__cordl_internal_get__levelPackIdToProductData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackIdToProductData;
}
constexpr void GlobalNamespace::SonyLevelProductCollectionModel::__cordl_internal_set__levelPackIdToProductData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackIdToProductData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>*&
GlobalNamespace::SonyLevelProductCollectionModel::__cordl_internal_get__levelPackRedirectionData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>*> const&
GlobalNamespace::SonyLevelProductCollectionModel::__cordl_internal_get__levelPackRedirectionData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr void GlobalNamespace::SonyLevelProductCollectionModel::__cordl_internal_set__levelPackRedirectionData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackRedirectionData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::SonyLevelProductCollectionModel*
GlobalNamespace::SonyLevelProductCollectionModel::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLevelProductPackSO>>* sonyLevelProductPacksSOs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SonyLevelProductCollectionModel*>(sonyLevelProductPacksSOs));
}
inline void GlobalNamespace::SonyLevelProductCollectionModel::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLevelProductPackSO>>* sonyLevelProductPacksSOs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLevelProductCollectionModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLevelProductPackSO>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sonyLevelProductPacksSOs);
}
inline ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData* GlobalNamespace::SonyLevelProductCollectionModel::GetLevelProductData(::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLevelProductCollectionModel*>::get(), "GetLevelProductData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*, false>(this, ___internal_method, levelId);
}
inline ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData* GlobalNamespace::SonyLevelProductCollectionModel::GetLevelPackProductData(::StringW levelPackId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLevelProductCollectionModel*>::get(), "GetLevelPackProductData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*, false>(this, ___internal_method, levelPackId);
}
inline ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData* GlobalNamespace::SonyLevelProductCollectionModel::GetLevelPackRedirectionData(::StringW levelPackId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLevelProductCollectionModel*>::get(), "GetLevelPackRedirectionData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*, false>(this, ___internal_method, levelPackId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SonyLevelProductCollectionModel::SonyLevelProductCollectionModel() {}
