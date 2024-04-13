#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodRef_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodRef.GetTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::System::Runtime::Remoting::Messaging::CADMethodRef::*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::System::Runtime::Remoting::Messaging::CADMethodRef::GetTypes)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x27299f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodRef*>::get(), "GetTypes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodRef.Resolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (::System::Runtime::Remoting::Messaging::CADMethodRef::*)()>(
    &::System::Runtime::Remoting::Messaging::CADMethodRef::Resolve)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x2729b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodRef*>::get(),
                                                                               "Resolve", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodRef._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::CADMethodRef::*)(
    ::System::Runtime::Remoting::Messaging::IMethodMessage*)>(&::System::Runtime::Remoting::Messaging::CADMethodRef::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x272a064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodRef*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& System::Runtime::Remoting::Messaging::CADMethodRef::__cordl_internal_get_ctor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctor;
}
constexpr bool const& System::Runtime::Remoting::Messaging::CADMethodRef::__cordl_internal_get_ctor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctor;
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodRef::__cordl_internal_set_ctor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ctor = value;
}
constexpr ::StringW& System::Runtime::Remoting::Messaging::CADMethodRef::__cordl_internal_get_typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::CADMethodRef::__cordl_internal_get_typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodRef::__cordl_internal_set_typeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___typeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Remoting::Messaging::CADMethodRef::__cordl_internal_get_methodName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodName;
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::CADMethodRef::__cordl_internal_get_methodName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodName;
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodRef::__cordl_internal_set_methodName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___methodName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Runtime::Remoting::Messaging::CADMethodRef::__cordl_internal_get_param_names() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param_names;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Runtime::Remoting::Messaging::CADMethodRef::__cordl_internal_get_param_names() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param_names;
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodRef::__cordl_internal_set_param_names(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___param_names)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Runtime::Remoting::Messaging::CADMethodRef::__cordl_internal_get_generic_arg_names() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generic_arg_names;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Runtime::Remoting::Messaging::CADMethodRef::__cordl_internal_get_generic_arg_names() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generic_arg_names;
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodRef::__cordl_internal_set_generic_arg_names(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___generic_arg_names)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Runtime::Remoting::Messaging::CADMethodRef::GetTypes(::ArrayW<::StringW, ::Array<::StringW>*> typeArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodRef*>::get(), "GetTypes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method, typeArray);
}
inline ::System::Reflection::MethodBase* System::Runtime::Remoting::Messaging::CADMethodRef::Resolve() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodRef*>::get(),
                                                                             "Resolve", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::CADMethodRef* System::Runtime::Remoting::Messaging::CADMethodRef::New_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* msg) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::CADMethodRef*>(msg));
}
inline void System::Runtime::Remoting::Messaging::CADMethodRef::_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodRef*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::CADMethodRef::CADMethodRef() {}
