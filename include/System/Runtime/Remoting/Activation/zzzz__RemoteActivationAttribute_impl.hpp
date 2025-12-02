#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Activation/RemoteActivationAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__RemoteActivationAttribute_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContextAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::RemoteActivationAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Activation::RemoteActivationAttribute::*)(::System::Collections::IList*)>(
    &::System::Runtime::Remoting::Activation::RemoteActivationAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59270e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::RemoteActivationAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::RemoteActivationAttribute.IsContextOK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Activation::RemoteActivationAttribute::*)(
    ::System::Runtime::Remoting::Contexts::Context*, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(
    &::System::Runtime::Remoting::Activation::RemoteActivationAttribute::IsContextOK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59270ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::RemoteActivationAttribute*>::get(), "IsContextOK", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::RemoteActivationAttribute.GetPropertiesForNewContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Activation::RemoteActivationAttribute::*)(
    ::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&::System::Runtime::Remoting::Activation::RemoteActivationAttribute::GetPropertiesForNewContext)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x59270f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::RemoteActivationAttribute*>::get(), "GetPropertiesForNewContext",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& System::Runtime::Remoting::Activation::RemoteActivationAttribute::__cordl_internal_get__contextProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextProperties;
}
constexpr ::System::Collections::IList* const& System::Runtime::Remoting::Activation::RemoteActivationAttribute::__cordl_internal_get__contextProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextProperties;
}
constexpr void System::Runtime::Remoting::Activation::RemoteActivationAttribute::__cordl_internal_set__contextProperties(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____contextProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::Activation::RemoteActivationAttribute::_ctor(::System::Collections::IList* contextProperties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::RemoteActivationAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contextProperties);
}
inline bool System::Runtime::Remoting::Activation::RemoteActivationAttribute::IsContextOK(::System::Runtime::Remoting::Contexts::Context* ctx,
                                                                                          ::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::RemoteActivationAttribute*>::get(), "IsContextOK", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ctx, ctor);
}
inline void System::Runtime::Remoting::Activation::RemoteActivationAttribute::GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::RemoteActivationAttribute*>::get(), "GetPropertiesForNewContext",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctor);
}
inline ::System::Runtime::Remoting::Activation::RemoteActivationAttribute* System::Runtime::Remoting::Activation::RemoteActivationAttribute::New_ctor(::System::Collections::IList* contextProperties) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Activation::RemoteActivationAttribute*>(contextProperties));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Contexts::IContextAttribute"
constexpr System::Runtime::Remoting::Activation::RemoteActivationAttribute::operator ::System::Runtime::Remoting::Contexts::IContextAttribute*() noexcept {
  return static_cast<::System::Runtime::Remoting::Contexts::IContextAttribute*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Contexts::IContextAttribute"
constexpr ::System::Runtime::Remoting::Contexts::IContextAttribute*
System::Runtime::Remoting::Activation::RemoteActivationAttribute::i___System__Runtime__Remoting__Contexts__IContextAttribute() noexcept {
  return static_cast<::System::Runtime::Remoting::Contexts::IContextAttribute*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Activation::RemoteActivationAttribute::RemoteActivationAttribute() {}
