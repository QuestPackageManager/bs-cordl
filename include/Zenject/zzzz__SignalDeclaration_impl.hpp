#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__BindingId_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_impl.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_impl.hpp"
#include "Zenject/zzzz__SignalMissingHandlerResponses_impl.hpp"
#include "Zenject/zzzz__SignalDeclaration_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SignalSubscription_def.hpp"
#include "Zenject/zzzz__ZenjectSettings_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "Zenject/zzzz__SignalDeclaration_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Zenject::SignalDeclaration._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclaration::*)(::Zenject::SignalDeclarationBindInfo*, ::Zenject::ZenjectSettings*)>(
    &::Zenject::SignalDeclaration::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2ec2874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ZenjectSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.get_TickPriority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::SignalDeclaration::*)()>(&::Zenject::SignalDeclaration::get_TickPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ec29fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "get_TickPriority",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.set_TickPriority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclaration::*)(int32_t)>(&::Zenject::SignalDeclaration::set_TickPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ec2a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "set_TickPriority", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.get_IsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::SignalDeclaration::*)()>(&::Zenject::SignalDeclaration::get_IsAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ec2a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "get_IsAsync",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.get_BindingId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindingId (::Zenject::SignalDeclaration::*)()>(&::Zenject::SignalDeclaration::get_BindingId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ec2a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "get_BindingId",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclaration::*)()>(&::Zenject::SignalDeclaration::Dispose)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2ec2a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.Fire
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclaration::*)(::System::Object*)>(&::Zenject::SignalDeclaration::Fire)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2ec2b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "Fire", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.FireInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Zenject::SignalDeclaration::*)(::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>*, ::System::Object*)>(&::Zenject::SignalDeclaration::FireInternal)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2ec2e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "FireInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclaration::*)()>(&::Zenject::SignalDeclaration::Tick)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x2ec30b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "Tick",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclaration::*)(::Zenject::SignalSubscription*)>(&::Zenject::SignalDeclaration::Add)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2ec33d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "Add", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalSubscription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclaration::*)(::Zenject::SignalSubscription*)>(&::Zenject::SignalDeclaration::Remove)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ec34b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalSubscription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::SignalDeclaration::__zenCreate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2ec350c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SignalDeclaration::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2ec3628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::ITickable"
constexpr Zenject::SignalDeclaration::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::SignalDeclaration::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>*& Zenject::SignalDeclaration::__get__subscriptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subscriptions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>*> const& Zenject::SignalDeclaration::__get__subscriptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subscriptions;
}
constexpr void Zenject::SignalDeclaration::__set__subscriptions(::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subscriptions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Zenject::SignalDeclaration::__get__asyncQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& Zenject::SignalDeclaration::__get__asyncQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncQueue;
}
constexpr void Zenject::SignalDeclaration::__set__asyncQueue(::System::Collections::Generic::List_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____asyncQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::BindingId& Zenject::SignalDeclaration::__get__bindingId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingId;
}
constexpr ::Zenject::BindingId const& Zenject::SignalDeclaration::__get__bindingId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingId;
}
constexpr void Zenject::SignalDeclaration::__set__bindingId(::Zenject::BindingId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindingId = value;
}
constexpr ::Zenject::SignalMissingHandlerResponses& Zenject::SignalDeclaration::__get__missingHandlerResponses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingHandlerResponses;
}
constexpr ::Zenject::SignalMissingHandlerResponses const& Zenject::SignalDeclaration::__get__missingHandlerResponses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingHandlerResponses;
}
constexpr void Zenject::SignalDeclaration::__set__missingHandlerResponses(::Zenject::SignalMissingHandlerResponses value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missingHandlerResponses = value;
}
constexpr bool& Zenject::SignalDeclaration::__get__isAsync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAsync;
}
constexpr bool const& Zenject::SignalDeclaration::__get__isAsync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAsync;
}
constexpr void Zenject::SignalDeclaration::__set__isAsync(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isAsync = value;
}
constexpr ::Zenject::__ZenjectSettings__SignalSettings*& Zenject::SignalDeclaration::__get__settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::__ZenjectSettings__SignalSettings*> const& Zenject::SignalDeclaration::__get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr void Zenject::SignalDeclaration::__set__settings(::Zenject::__ZenjectSettings__SignalSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Zenject::SignalDeclaration::__get__TickPriority_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TickPriority_k__BackingField;
}
constexpr int32_t const& Zenject::SignalDeclaration::__get__TickPriority_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TickPriority_k__BackingField;
}
constexpr void Zenject::SignalDeclaration::__set__TickPriority_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TickPriority_k__BackingField = value;
}
inline ::Zenject::SignalDeclaration* Zenject::SignalDeclaration::New_ctor(::Zenject::SignalDeclarationBindInfo* bindInfo, ::Zenject::ZenjectSettings* zenjectSettings) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SignalDeclaration*>(bindInfo, zenjectSettings));
}
inline void Zenject::SignalDeclaration::_ctor(::Zenject::SignalDeclarationBindInfo* bindInfo, ::Zenject::ZenjectSettings* zenjectSettings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ZenjectSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo, zenjectSettings);
}
inline int32_t Zenject::SignalDeclaration::get_TickPriority() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "get_TickPriority",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Zenject::SignalDeclaration::set_TickPriority(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "set_TickPriority", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Zenject::SignalDeclaration::get_IsAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "get_IsAsync",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Zenject::BindingId Zenject::SignalDeclaration::get_BindingId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "get_BindingId",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindingId, false>(this, ___internal_method);
}
inline void Zenject::SignalDeclaration::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::SignalDeclaration::Fire(::System::Object* signal) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "Fire", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void Zenject::SignalDeclaration::FireInternal(::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>* subscriptions, ::System::Object* signal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "FireInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subscriptions, signal);
}
inline void Zenject::SignalDeclaration::Tick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "Tick",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::SignalDeclaration::Add(::Zenject::SignalSubscription* subscription) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalSubscription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subscription);
}
inline void Zenject::SignalDeclaration::Remove(::Zenject::SignalSubscription* subscription) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalSubscription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subscription);
}
inline ::System::Object* Zenject::SignalDeclaration::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SignalDeclaration::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration*>::get(), "__zenCreateInjectTypeInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::SignalDeclaration::SignalDeclaration() {}
//  Writing Method size for method: ::Zenject::__SignalDeclaration__Factory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__SignalDeclaration__Factory::*)()>(&::Zenject::__SignalDeclaration__Factory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ec392c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SignalDeclaration__Factory*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SignalDeclaration__Factory.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__SignalDeclaration__Factory::__zenCreate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ec3974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SignalDeclaration__Factory*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__SignalDeclaration__Factory.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__SignalDeclaration__Factory::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2ec39cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SignalDeclaration__Factory*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Zenject::__SignalDeclaration__Factory* Zenject::__SignalDeclaration__Factory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__SignalDeclaration__Factory*>());
}
inline void Zenject::__SignalDeclaration__Factory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SignalDeclaration__Factory*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::__SignalDeclaration__Factory::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SignalDeclaration__Factory*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__SignalDeclaration__Factory::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__SignalDeclaration__Factory*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__SignalDeclaration__Factory::__SignalDeclaration__Factory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
