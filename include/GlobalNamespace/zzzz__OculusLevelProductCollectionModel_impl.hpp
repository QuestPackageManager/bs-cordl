#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusLevelProductCollectionModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductCollectionModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__ILevelPackProductData_1_def.hpp"
#include "GlobalNamespace/zzzz__ILevelProductData_def.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductCollectionModel_def.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductPacksSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus::*)()>(
    &::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ebebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus::__cordl_internal_get_checkAdditionalSkus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkAdditionalSkus;
}
constexpr bool const& GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus::__cordl_internal_get_checkAdditionalSkus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkAdditionalSkus;
}
constexpr void GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus::__cordl_internal_set_checkAdditionalSkus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkAdditionalSkus = value;
}
constexpr ::StringW& GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus::__cordl_internal_get_noEnvironmentKeywordsSku() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noEnvironmentKeywordsSku;
}
constexpr ::StringW const& GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus::__cordl_internal_get_noEnvironmentKeywordsSku() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noEnvironmentKeywordsSku;
}
constexpr void GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus::__cordl_internal_set_noEnvironmentKeywordsSku(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___noEnvironmentKeywordsSku)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus*>());
}
inline void GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus::__OculusLevelProductCollectionModel__AdditionalSkus() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData.get_sku
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::*)()>(
    &::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::get_sku)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ebec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>::get(), "get_sku",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData.get_additionalSkus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* (
    ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::*)()>(&::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::get_additionalSkus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ebecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>::get(),
                                                 "get_additionalSkus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData.get_levelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::*)()>(
    &::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::get_levelId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ebed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>::get(),
                                                 "get_levelId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x14ebedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ILevelProductData"
constexpr GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::operator ::GlobalNamespace::ILevelProductData*() noexcept {
  return static_cast<::GlobalNamespace::ILevelProductData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelProductData"
constexpr ::GlobalNamespace::ILevelProductData* GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::i___GlobalNamespace__ILevelProductData() noexcept {
  return static_cast<::GlobalNamespace::ILevelProductData*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::__cordl_internal_get__levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr ::StringW const& GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::__cordl_internal_get__levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr void GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::__cordl_internal_set__levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::__cordl_internal_get__sku() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sku;
}
constexpr ::StringW const& GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::__cordl_internal_get__sku() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sku;
}
constexpr void GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::__cordl_internal_set__sku(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sku)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus*& GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::__cordl_internal_get__additionalSkus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalSkus;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus*> const&
GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::__cordl_internal_get__additionalSkus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalSkus;
}
constexpr void
GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::__cordl_internal_set__additionalSkus(::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____additionalSkus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::get_sku() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>::get(), "get_sku",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::get_additionalSkus() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>::get(),
                                               "get_additionalSkus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::get_levelId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>::get(), "get_levelId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData* GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::New_ctor(::StringW levelId, ::StringW sku) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>(levelId, sku));
}
inline void GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::_ctor(::StringW levelId, ::StringW sku) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelId, sku);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData::__OculusLevelProductCollectionModel__LevelProductData() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData.get_sku
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::*)()>(
    &::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::get_sku)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ebf08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>::get(),
                                                 "get_sku", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData.get_additionalSkus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* (
    ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::*)()>(&::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::get_additionalSkus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ebf10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>::get(),
                                                 "get_additionalSkus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData.get_levelPackId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::*)()>(
    &::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::get_levelPackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ebf18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>::get(),
                                                 "get_levelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData.get_levelProductsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* (
        ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::*)()>(&::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::get_levelProductsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ebf20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>::get(),
                                                 "get_levelProductsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::*)(
    ::StringW, ::StringW, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*)>(
    &::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x14ebf28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>"
constexpr GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::operator ::GlobalNamespace::ILevelPackProductData_1<
    ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*() noexcept {
  return static_cast<::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>"
constexpr ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* GlobalNamespace::
    __OculusLevelProductCollectionModel__LevelPackProductData::i___GlobalNamespace__ILevelPackProductData_1___GlobalNamespace____OculusLevelProductCollectionModel__LevelProductData__() noexcept {
  return static_cast<::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__levelPackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackId;
}
constexpr ::StringW const& GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__levelPackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackId;
}
constexpr void GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::__cordl_internal_set__levelPackId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__sku() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sku;
}
constexpr ::StringW const& GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__sku() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sku;
}
constexpr void GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::__cordl_internal_set__sku(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sku)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus*& GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__additionalSkus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalSkus;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus*> const&
GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__additionalSkus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalSkus;
}
constexpr void
GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::__cordl_internal_set__additionalSkus(::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____additionalSkus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*>&
GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__levelProductsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelProductsData;
}
constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*> const&
GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__levelProductsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelProductsData;
}
constexpr void GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::__cordl_internal_set__levelProductsData(
    ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelProductsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::get_sku() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>::get(), "get_sku",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::get_additionalSkus() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>::get(),
                                               "get_additionalSkus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::get_levelPackId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>::get(),
                                               "get_levelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*
GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::get_levelProductsData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>::get(),
                                               "get_levelProductsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*, false>(this,
                                                                                                                                                                                 ___internal_method);
}
inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData* GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::New_ctor(
    ::StringW levelPackId, ::StringW sku, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* levelProductsData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>(levelPackId, sku, levelProductsData));
}
inline void GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::_ctor(
    ::StringW levelPackId, ::StringW sku, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* levelProductsData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelPackId, sku, levelProductsData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData::__OculusLevelProductCollectionModel__LevelPackProductData() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData.get_targetLevelPackId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::get_targetLevelPackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ebfa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                                 "get_targetLevelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData.get_shouldOwnLevelPackId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::get_shouldOwnLevelPackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ebfac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                                 "get_shouldOwnLevelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData.get_redirectedSku
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::get_redirectedSku)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ebfb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                                 "get_redirectedSku", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData.get_validUntilDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::get_validUntilDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ebfbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                                 "get_validUntilDate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ebfc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__targetLevelPackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetLevelPackId;
}
constexpr ::StringW const& GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__targetLevelPackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetLevelPackId;
}
constexpr void GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_set__targetLevelPackId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetLevelPackId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__shouldOwnLevelPackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldOwnLevelPackId;
}
constexpr ::StringW const& GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__shouldOwnLevelPackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldOwnLevelPackId;
}
constexpr void GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_set__shouldOwnLevelPackId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shouldOwnLevelPackId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__redirectedSku() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____redirectedSku;
}
constexpr ::StringW const& GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__redirectedSku() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____redirectedSku;
}
constexpr void GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_set__redirectedSku(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____redirectedSku)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__validUntilDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validUntilDate;
}
constexpr ::StringW const& GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__validUntilDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validUntilDate;
}
constexpr void GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_set__validUntilDate(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____validUntilDate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::get_targetLevelPackId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                               "get_targetLevelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::get_shouldOwnLevelPackId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                               "get_shouldOwnLevelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::get_redirectedSku() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                               "get_redirectedSku", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::get_validUntilDate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                               "get_validUntilDate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData* GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>());
}
inline void GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData::__OculusLevelProductCollectionModel__LevelPackRedirectionData() {}
//  Writing Method size for method: ::GlobalNamespace::OculusLevelProductCollectionModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusLevelProductCollectionModel::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>*)>(&::GlobalNamespace::OculusLevelProductCollectionModel::_ctor)> {
  constexpr static std::size_t size = 0xae8;
  constexpr static std::size_t addrs = 0x14eb130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductCollectionModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusLevelProductCollectionModel.GetLevelProductData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData* (
    ::GlobalNamespace::OculusLevelProductCollectionModel::*)(::StringW)>(&::GlobalNamespace::OculusLevelProductCollectionModel::GetLevelProductData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x14ebcdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductCollectionModel*>::get(), "GetLevelProductData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusLevelProductCollectionModel.GetLevelPackProductData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData* (
    ::GlobalNamespace::OculusLevelProductCollectionModel::*)(::StringW)>(&::GlobalNamespace::OculusLevelProductCollectionModel::GetLevelPackProductData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x14ebd54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductCollectionModel*>::get(), "GetLevelPackProductData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusLevelProductCollectionModel.GetLevelSku
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::OculusLevelProductCollectionModel::*)(::StringW)>(
    &::GlobalNamespace::OculusLevelProductCollectionModel::GetLevelSku)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x14ebdcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductCollectionModel*>::get(), "GetLevelSku",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusLevelProductCollectionModel.GetLevelPackRedirectionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData* (
    ::GlobalNamespace::OculusLevelProductCollectionModel::*)(::StringW)>(&::GlobalNamespace::OculusLevelProductCollectionModel::GetLevelPackRedirectionData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x14ebe44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductCollectionModel*>::get(), "GetLevelPackRedirectionData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusLevelProductCollectionModel.InsertAdditionalSkuIfValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusLevelProductCollectionModel::*)(
    ::StringW, ::StringW, ::GlobalNamespace::BeatmapLevelDataVersion)>(&::GlobalNamespace::OculusLevelProductCollectionModel::InsertAdditionalSkuIfValid)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x14ebc18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductCollectionModel*>::get(), "InsertAdditionalSkuIfValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*&
GlobalNamespace::OculusLevelProductCollectionModel::__cordl_internal_get__levelIdToProductData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelIdToProductData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*> const&
GlobalNamespace::OculusLevelProductCollectionModel::__cordl_internal_get__levelIdToProductData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelIdToProductData;
}
constexpr void GlobalNamespace::OculusLevelProductCollectionModel::__cordl_internal_set__levelIdToProductData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelIdToProductData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>*&
GlobalNamespace::OculusLevelProductCollectionModel::__cordl_internal_get__levelPackIdToProductData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackIdToProductData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>*> const&
GlobalNamespace::OculusLevelProductCollectionModel::__cordl_internal_get__levelPackIdToProductData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackIdToProductData;
}
constexpr void GlobalNamespace::OculusLevelProductCollectionModel::__cordl_internal_set__levelPackIdToProductData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackIdToProductData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>*&
GlobalNamespace::OculusLevelProductCollectionModel::__cordl_internal_get__levelPackRedirectionData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>*> const&
GlobalNamespace::OculusLevelProductCollectionModel::__cordl_internal_get__levelPackRedirectionData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr void GlobalNamespace::OculusLevelProductCollectionModel::__cordl_internal_set__levelPackRedirectionData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackRedirectionData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& GlobalNamespace::OculusLevelProductCollectionModel::__cordl_internal_get__assetFileToSku() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetFileToSku;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const&
GlobalNamespace::OculusLevelProductCollectionModel::__cordl_internal_get__assetFileToSku() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetFileToSku;
}
constexpr void GlobalNamespace::OculusLevelProductCollectionModel::__cordl_internal_set__assetFileToSku(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetFileToSku)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::OculusLevelProductCollectionModel*
GlobalNamespace::OculusLevelProductCollectionModel::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>* levelProductPacksSOs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OculusLevelProductCollectionModel*>(levelProductPacksSOs));
}
inline void GlobalNamespace::OculusLevelProductCollectionModel::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>* levelProductPacksSOs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductCollectionModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelProductPacksSOs);
}
inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData* GlobalNamespace::OculusLevelProductCollectionModel::GetLevelProductData(::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductCollectionModel*>::get(), "GetLevelProductData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, false>(this, ___internal_method, levelId);
}
inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData* GlobalNamespace::OculusLevelProductCollectionModel::GetLevelPackProductData(::StringW levelPackId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductCollectionModel*>::get(), "GetLevelPackProductData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*, false>(this, ___internal_method, levelPackId);
}
inline ::StringW GlobalNamespace::OculusLevelProductCollectionModel::GetLevelSku(::StringW assetFile) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductCollectionModel*>::get(), "GetLevelSku",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, assetFile);
}
inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData* GlobalNamespace::OculusLevelProductCollectionModel::GetLevelPackRedirectionData(::StringW levelPackId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductCollectionModel*>::get(), "GetLevelPackRedirectionData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*, false>(this, ___internal_method, levelPackId);
}
inline void GlobalNamespace::OculusLevelProductCollectionModel::InsertAdditionalSkuIfValid(::StringW levelId, ::StringW additionalSku, ::GlobalNamespace::BeatmapLevelDataVersion additionalSkuType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductCollectionModel*>::get(), "InsertAdditionalSkuIfValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelId, additionalSku, additionalSkuType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusLevelProductCollectionModel::OculusLevelProductCollectionModel() {}
