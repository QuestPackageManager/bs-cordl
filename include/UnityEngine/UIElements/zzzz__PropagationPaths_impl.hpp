#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PropagationPaths.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPaths_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPaths_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__PropagationPaths__Type::__PropagationPaths__Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__PropagationPaths__Type::__PropagationPaths__Type() {}
constexpr ::UnityEngine::UIElements::__PropagationPaths__Type UnityEngine::UIElements::__PropagationPaths__Type::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::__PropagationPaths__Type UnityEngine::UIElements::__PropagationPaths__Type::TrickleDown{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::__PropagationPaths__Type UnityEngine::UIElements::__PropagationPaths__Type::BubbleUp{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UIElements::PropagationPaths._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PropagationPaths::*)()>(&::UnityEngine::UIElements::PropagationPaths::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x35ccab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PropagationPaths*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropagationPaths.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::PropagationPaths* (*)(::UnityEngine::UIElements::PropagationPaths*)>(
    &::UnityEngine::UIElements::PropagationPaths::Copy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x35ccb7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PropagationPaths*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PropagationPaths*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropagationPaths.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::PropagationPaths* (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::EventBase*,
                                                                 ::UnityEngine::UIElements::__PropagationPaths__Type)>(&::UnityEngine::UIElements::PropagationPaths::Build)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x35ccc5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PropagationPaths*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__PropagationPaths__Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropagationPaths.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PropagationPaths::*)()>(&::UnityEngine::UIElements::PropagationPaths::Release)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x35ccf54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PropagationPaths*>::get(), "Release",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::PropagationPaths::__cordl_internal_get_trickleDownPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trickleDownPath;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*> const&
UnityEngine::UIElements::PropagationPaths::__cordl_internal_get_trickleDownPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trickleDownPath;
}
constexpr void UnityEngine::UIElements::PropagationPaths::__cordl_internal_set_trickleDownPath(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___trickleDownPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::PropagationPaths::__cordl_internal_get_targetElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetElements;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*> const&
UnityEngine::UIElements::PropagationPaths::__cordl_internal_get_targetElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetElements;
}
constexpr void UnityEngine::UIElements::PropagationPaths::__cordl_internal_set_targetElements(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::PropagationPaths::__cordl_internal_get_bubbleUpPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bubbleUpPath;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*> const&
UnityEngine::UIElements::PropagationPaths::__cordl_internal_get_bubbleUpPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bubbleUpPath;
}
constexpr void UnityEngine::UIElements::PropagationPaths::__cordl_internal_set_bubbleUpPath(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bubbleUpPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::PropagationPaths::setStaticF_s_Pool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>*, "s_Pool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PropagationPaths*>::get>(
      std::forward<::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>*>(value));
}
inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>* UnityEngine::UIElements::PropagationPaths::getStaticF_s_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>*, "s_Pool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PropagationPaths*>::get>();
}
inline ::UnityEngine::UIElements::PropagationPaths* UnityEngine::UIElements::PropagationPaths::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::PropagationPaths*>());
}
inline void UnityEngine::UIElements::PropagationPaths::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PropagationPaths*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropagationPaths* UnityEngine::UIElements::PropagationPaths::Copy(::UnityEngine::UIElements::PropagationPaths* paths) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PropagationPaths*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PropagationPaths*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PropagationPaths*, false>(nullptr, ___internal_method, paths);
}
inline ::UnityEngine::UIElements::PropagationPaths* UnityEngine::UIElements::PropagationPaths::Build(::UnityEngine::UIElements::VisualElement* elem, ::UnityEngine::UIElements::EventBase* evt,
                                                                                                     ::UnityEngine::UIElements::__PropagationPaths__Type pathTypesRequested) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PropagationPaths*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__PropagationPaths__Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PropagationPaths*, false>(nullptr, ___internal_method, elem, evt, pathTypesRequested);
}
inline void UnityEngine::UIElements::PropagationPaths::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PropagationPaths*>::get(), "Release",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropagationPaths::PropagationPaths() {}
