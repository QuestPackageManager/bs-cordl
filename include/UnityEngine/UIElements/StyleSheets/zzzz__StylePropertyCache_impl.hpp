#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StyleSheets\StylePropertyCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyCache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyCache.TryGetSyntax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyCache::TryGetSyntax)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6d0a908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyCache*>(),
                                                                                           { "TryGetSyntax", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyCache.TryGetNonTerminalValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyCache::TryGetNonTerminalValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6d0a9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyCache*>(),
                                                                                           { "TryGetNonTerminalValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::StylePropertyCache::setStaticF_s_PropertySyntaxCache(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_PropertySyntaxCache", ::UnityEngine::UIElements::StyleSheets::StylePropertyCache*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* UnityEngine::UIElements::StyleSheets::StylePropertyCache::getStaticF_s_PropertySyntaxCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_PropertySyntaxCache", ::UnityEngine::UIElements::StyleSheets::StylePropertyCache*>();
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyCache::setStaticF_s_NonTerminalValues(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_NonTerminalValues", ::UnityEngine::UIElements::StyleSheets::StylePropertyCache*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* UnityEngine::UIElements::StyleSheets::StylePropertyCache::getStaticF_s_NonTerminalValues() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_NonTerminalValues", ::UnityEngine::UIElements::StyleSheets::StylePropertyCache*>();
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyCache::TryGetSyntax(::StringW name, ::by_ref<::StringW> syntax) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyCache*>(),
                                                                                         { "TryGetSyntax", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, syntax);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyCache::TryGetNonTerminalValue(::StringW name, ::by_ref<::StringW> syntax) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyCache*>(),
                                                                                         { "TryGetNonTerminalValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, syntax);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyCache::StylePropertyCache() {}
