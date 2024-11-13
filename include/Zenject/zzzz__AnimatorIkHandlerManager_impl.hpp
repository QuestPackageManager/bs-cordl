#pragma once
// IWYU pragma private; include "Zenject/AnimatorIkHandlerManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__AnimatorIkHandlerManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IAnimatorIkHandler_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::AnimatorIkHandlerManager.Construct
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Zenject::AnimatorIkHandlerManager::*)(::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>*)>(&::Zenject::AnimatorIkHandlerManager::Construct)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4add00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorIkHandlerManager*>::get(), "Construct", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorIkHandlerManager.OnAnimatorIk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::AnimatorIkHandlerManager::*)()>(&::Zenject::AnimatorIkHandlerManager::OnAnimatorIk)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x4add014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorIkHandlerManager*>::get(), "OnAnimatorIk",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorIkHandlerManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::AnimatorIkHandlerManager::*)()>(&::Zenject::AnimatorIkHandlerManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4add1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorIkHandlerManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorIkHandlerManager.__zenInjectMethod0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::AnimatorIkHandlerManager::__zenInjectMethod0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x4add1cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorIkHandlerManager*>::get(), "__zenInjectMethod0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorIkHandlerManager.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::AnimatorIkHandlerManager::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x4add2a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorIkHandlerManager*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>*& Zenject::AnimatorIkHandlerManager::__cordl_internal_get__handlers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>*> const&
Zenject::AnimatorIkHandlerManager::__cordl_internal_get__handlers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlers;
}
constexpr void Zenject::AnimatorIkHandlerManager::__cordl_internal_set__handlers(::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handlers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::AnimatorIkHandlerManager::Construct(::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>* handlers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorIkHandlerManager*>::get(), "Construct", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handlers);
}
inline void Zenject::AnimatorIkHandlerManager::OnAnimatorIk() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorIkHandlerManager*>::get(), "OnAnimatorIk",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::AnimatorIkHandlerManager* Zenject::AnimatorIkHandlerManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::AnimatorIkHandlerManager*>());
}
inline void Zenject::AnimatorIkHandlerManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorIkHandlerManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::AnimatorIkHandlerManager::__zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorIkHandlerManager*>::get(), "__zenInjectMethod0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
inline ::Zenject::InjectTypeInfo* Zenject::AnimatorIkHandlerManager::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorIkHandlerManager*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::AnimatorIkHandlerManager::AnimatorIkHandlerManager() {}
