#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleSheetCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleSheetCache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleSheetCache_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey::*)(::UnityEngine::UIElements::StyleSheet*, int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6d14598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey::_ctor(::UnityEngine::UIElements::StyleSheet* sheet, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sheet, index);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::*)(
    ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey)>(
    &::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d1487c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*>(),
                                                                                           { "Equals",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::*)(
    ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey)>(&::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::GetHashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d14888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*>(),
                                                             { "GetHashCode", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d14878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::Equals(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey x,
                                                                                                 ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey y) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*>(),
                                                                                         { "Equals",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::GetHashCode(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*>(),
                                                           { "GetHashCode", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
inline void UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer* UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*>());
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId> (*)(::UnityEngine::UIElements::StyleSheet*, int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StyleSheetCache::GetPropertyIds)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6d0f450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>(),
                                                             { "GetPropertyIds", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetCache.GetPropertyIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId> (*)(::UnityEngine::UIElements::StyleRule*)>(
    &::UnityEngine::UIElements::StyleSheets::StyleSheetCache::GetPropertyIds)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6d146ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>(),
                                                                                           { "GetPropertyIds", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleRule*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetCache.GetPropertyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::StylePropertyId (*)(::UnityEngine::UIElements::StyleRule*, int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StyleSheetCache::GetPropertyId)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6d145cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>(),
                                                             { "GetPropertyId", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleRule*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::StyleSheetCache::setStaticF_s_Comparer(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*, "s_Comparer", ::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>(
      std::forward<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*>(value));
}
inline ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer* UnityEngine::UIElements::StyleSheets::StyleSheetCache::getStaticF_s_Comparer() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*, "s_Comparer", ::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>();
}
inline void UnityEngine::UIElements::StyleSheets::StyleSheetCache::setStaticF_s_RulePropertyIdsCache(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>>*,
      "s_RulePropertyIdsCache", ::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>(
      std::forward<
          ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>>*>(
          value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>>*
UnityEngine::UIElements::StyleSheets::StyleSheetCache::getStaticF_s_RulePropertyIdsCache() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>>*,
      "s_RulePropertyIdsCache", ::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>();
}
inline ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId> UnityEngine::UIElements::StyleSheets::StyleSheetCache::GetPropertyIds(::UnityEngine::UIElements::StyleSheet* sheet,
                                                                                                                                               int32_t ruleIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>(),
                                                           { "GetPropertyIds", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>>(nullptr, ___internal_method, sheet, ruleIndex);
}
inline ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId> UnityEngine::UIElements::StyleSheets::StyleSheetCache::GetPropertyIds(::UnityEngine::UIElements::StyleRule* rule) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>(),
                                                                                         { "GetPropertyIds", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleRule*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>>(nullptr, ___internal_method, rule);
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId UnityEngine::UIElements::StyleSheets::StyleSheetCache::GetPropertyId(::UnityEngine::UIElements::StyleRule* rule, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetCache*>(),
                                                           { "GetPropertyId", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleRule*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(nullptr, ___internal_method, rule, index);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StyleSheetCache::StyleSheetCache() {}
