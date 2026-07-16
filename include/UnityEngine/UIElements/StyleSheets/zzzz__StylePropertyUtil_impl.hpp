#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StylePropertyUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyUtil_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleEnumType_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__UsageHints_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyUtil.TryGetEnumIntValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::StyleSheets::StyleEnumType, ::StringW, ::by_ref<int32_t>)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyUtil::TryGetEnumIntValue)> {
  constexpr static std::size_t size = 0x1260;
  constexpr static std::size_t addrs = 0x6d05fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>(),
                         { "TryGetEnumIntValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleEnumType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyUtil.IsMatchingShorthand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyUtil::IsMatchingShorthand)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6d09238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>(),
            { "IsMatchingShorthand", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyUtil.IsAnimatable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyUtil::IsAnimatable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6d09428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>(),
                                                                                           { "IsAnimatable", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::StylePropertyUtil::setStaticF_s_NameToId(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyId>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyId>*, "s_NameToId",
                                    ::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyId>*
UnityEngine::UIElements::StyleSheets::StylePropertyUtil::getStaticF_s_NameToId() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyId>*, "s_NameToId",
                                           ::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>();
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyUtil::setStaticF_s_IdToName(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::StringW>*, "s_IdToName",
                                    ::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::StringW>*
UnityEngine::UIElements::StyleSheets::StylePropertyUtil::getStaticF_s_IdToName() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::StringW>*, "s_IdToName",
                                           ::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>();
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyUtil::setStaticF_s_UssNameToCSharpName(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_UssNameToCSharpName", ::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* UnityEngine::UIElements::StyleSheets::StylePropertyUtil::getStaticF_s_UssNameToCSharpName() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_UssNameToCSharpName", ::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>();
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyUtil::setStaticF_s_CSharpNameToUssName(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_CSharpNameToUssName", ::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* UnityEngine::UIElements::StyleSheets::StylePropertyUtil::getStaticF_s_CSharpNameToUssName() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "s_CSharpNameToUssName", ::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>();
}
inline void
UnityEngine::UIElements::StyleSheets::StylePropertyUtil::setStaticF_s_AnimatableProperties(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*, "s_AnimatableProperties",
                                    ::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>(
      std::forward<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*
UnityEngine::UIElements::StyleSheets::StylePropertyUtil::getStaticF_s_AnimatableProperties() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*, "s_AnimatableProperties",
                                           ::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>();
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyUtil::setStaticF_s_AnimatableWithUsageHintProperties(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::UsageHints>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::UsageHints>*,
                                    "s_AnimatableWithUsageHintProperties", ::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::UsageHints>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::UsageHints>*
UnityEngine::UIElements::StyleSheets::StylePropertyUtil::getStaticF_s_AnimatableWithUsageHintProperties() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::UsageHints>*,
                                           "s_AnimatableWithUsageHintProperties", ::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>();
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyUtil::TryGetEnumIntValue(::UnityEngine::UIElements::StyleSheets::StyleEnumType enumType, ::StringW value, ::by_ref<int32_t> intValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>(),
                       { "TryGetEnumIntValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleEnumType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, enumType, value, intValue);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyUtil::IsMatchingShorthand(::UnityEngine::UIElements::StyleSheets::StylePropertyId shorthand,
                                                                                         ::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>(),
          { "IsMatchingShorthand", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, shorthand, id);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyUtil::IsAnimatable(::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*>(),
                                                                                         { "IsAnimatable", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyUtil::StylePropertyUtil() {}
