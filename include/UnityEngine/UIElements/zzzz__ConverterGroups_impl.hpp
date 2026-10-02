#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ConverterGroups.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ConverterGroups_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__ConverterGroup_def.hpp"
#include "UnityEngine/UIElements/zzzz__ConverterGroups_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ConverterGroups_Unsafe.LazyRegisterGlobal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Type*, ::System::Func_1<::System::Delegate*>*)>(
    &::UnityEngine::UIElements::ConverterGroups_Unsafe::LazyRegisterGlobal)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x7088114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ConverterGroups_Unsafe>(),
                            { "LazyRegisterGlobal", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Func_1<::System::Delegate*>*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ConverterGroups_Unsafe::LazyRegisterGlobal(::System::Type* source, ::System::Type* destination, ::System::Func_1<::System::Delegate*>* converterDelegate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ConverterGroups_Unsafe>(),
                          { "LazyRegisterGlobal", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Func_1<::System::Delegate*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination, converterDelegate);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ConverterGroups_Unsafe::ConverterGroups_Unsafe() {}
inline void UnityEngine::UIElements::ConverterGroups::setStaticF_s_GlobalConverters(::UnityEngine::UIElements::ConverterGroup* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ConverterGroup*, "s_GlobalConverters", ::UnityEngine::UIElements::ConverterGroups*>(
      std::forward<::UnityEngine::UIElements::ConverterGroup*>(value));
}
inline ::UnityEngine::UIElements::ConverterGroup* UnityEngine::UIElements::ConverterGroups::getStaticF_s_GlobalConverters() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ConverterGroup*, "s_GlobalConverters", ::UnityEngine::UIElements::ConverterGroups*>();
}
inline void UnityEngine::UIElements::ConverterGroups::setStaticF_s_BindingConverterGroups(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::ConverterGroup*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::ConverterGroup*>*, "s_BindingConverterGroups",
                                    ::UnityEngine::UIElements::ConverterGroups*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::ConverterGroup*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::ConverterGroup*>* UnityEngine::UIElements::ConverterGroups::getStaticF_s_BindingConverterGroups() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::ConverterGroup*>*, "s_BindingConverterGroups",
                                           ::UnityEngine::UIElements::ConverterGroups*>();
}
template <typename TSource, typename TDestination> inline bool UnityEngine::UIElements::ConverterGroups::TryConvert(::by_ref<TSource> source, ::by_ref<TDestination> destination) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ConverterGroups*>(),
                          { "TryConvert", { ::i2c::class_of<TSource>(), ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<TSource>>(), ::i2c::type_of<::by_ref<TDestination>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSource>(), ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ConverterGroups::ConverterGroups() {}
