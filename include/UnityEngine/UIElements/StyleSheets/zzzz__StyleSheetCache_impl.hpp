#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleSheetCache.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleSheetCache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleSheetCache_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey::*)(
    ::UnityEngine::UIElements::StyleSheet*, int32_t)>(&::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x49e6fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey::_ctor(::UnityEngine::UIElements::StyleSheet* sheet, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sheet, index);
}
// Ctor Parameters [CppParam { name: "sheetInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey::StyleSheetCache_SheetHandleKey(int32_t sheetInstanceID, int32_t index) noexcept {
  this->sheetInstanceID = sheetInstanceID;
  this->index = index;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey::StyleSheetCache_SheetHandleKey() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::*)(
    ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey)>(
    &::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x49e72bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*>::get(), "Equals",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::*)(
    ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey)>(&::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x49e72dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*>::get(), "GetHashCode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49e72b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::Equals(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey x,
                                                                                                 ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*>::get(), "Equals",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::GetHashCode(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*>::get(), "GetHashCode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
inline void UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer* UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>"
constexpr UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::operator ::System::Collections::Generic::IEqualityComparer_1<
    ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>* UnityEngine::UIElements::StyleSheets::
    StyleSheetCache_SheetHandleKeyComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__UIElements__StyleSheets__StyleSheetCache_SheetHandleKey_() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::StyleSheetCache_SheetHandleKeyComparer() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetCache.GetPropertyIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> (*)(::UnityEngine::UIElements::StyleSheet*, int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StyleSheetCache::GetPropertyIds)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x49e2728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>::get(), "GetPropertyIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetCache.GetPropertyIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> (*)(::UnityEngine::UIElements::StyleRule*)>(
        &::UnityEngine::UIElements::StyleSheets::StyleSheetCache::GetPropertyIds)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x49e7104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>::get(), "GetPropertyIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRule*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetCache.GetPropertyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::StylePropertyId (*)(::UnityEngine::UIElements::StyleRule*, int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StyleSheetCache::GetPropertyId)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x49e7014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>::get(), "GetPropertyId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRule*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::StyleSheetCache::setStaticF_s_Comparer(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*, "s_Comparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>::get>(
      std::forward<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*>(value));
}
inline ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer* UnityEngine::UIElements::StyleSheets::StyleSheetCache::getStaticF_s_Comparer() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*, "s_Comparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>::get>();
}
inline void UnityEngine::UIElements::StyleSheets::StyleSheetCache::setStaticF_s_RulePropertyIdsCache(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey,
                                                 ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey,
                                                   ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>>*,
      "s_RulePropertyIdsCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey,
                                                                ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>>*>(
          value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey,
                                                    ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>>*
UnityEngine::UIElements::StyleSheets::StyleSheetCache::getStaticF_s_RulePropertyIdsCache() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey,
                                                   ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>>*,
      "s_RulePropertyIdsCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>::get>();
}
inline ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>
UnityEngine::UIElements::StyleSheets::StyleSheetCache::GetPropertyIds(::UnityEngine::UIElements::StyleSheet* sheet, int32_t ruleIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>::get(), "GetPropertyIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>, false>(
      nullptr, ___internal_method, sheet, ruleIndex);
}
inline ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>
UnityEngine::UIElements::StyleSheets::StyleSheetCache::GetPropertyIds(::UnityEngine::UIElements::StyleRule* rule) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>::get(), "GetPropertyIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRule*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>, false>(
      nullptr, ___internal_method, rule);
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId UnityEngine::UIElements::StyleSheets::StyleSheetCache::GetPropertyId(::UnityEngine::UIElements::StyleRule* rule, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>::get(), "GetPropertyId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRule*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::StylePropertyId, false>(nullptr, ___internal_method, rule, index);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StyleSheetCache::StyleSheetCache() {}
