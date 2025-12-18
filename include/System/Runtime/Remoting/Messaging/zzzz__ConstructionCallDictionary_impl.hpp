#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/ConstructionCallDictionary.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ConstructionCallDictionary_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCallDictionary._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCallDictionary::*)(
    ::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&::System::Runtime::Remoting::Messaging::ConstructionCallDictionary::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5993514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCallDictionary.GetMethodProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::ConstructionCallDictionary::*)(::StringW)>(
    &::System::Runtime::Remoting::Messaging::ConstructionCallDictionary::GetMethodProperty)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5994478;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ConstructionCallDictionary.SetMethodProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ConstructionCallDictionary::*)(::StringW, ::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::ConstructionCallDictionary::SetMethodProperty)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5994dfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>::get(), 22));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Messaging::ConstructionCallDictionary::setStaticF_InternalKeys(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "InternalKeys",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Runtime::Remoting::Messaging::ConstructionCallDictionary::getStaticF_InternalKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "InternalKeys",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>::get>();
}
inline void System::Runtime::Remoting::Messaging::ConstructionCallDictionary::_ctor(::System::Runtime::Remoting::Activation::IConstructionCallMessage* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::ConstructionCallDictionary::GetMethodProperty(::StringW key) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, key);
}
inline void System::Runtime::Remoting::Messaging::ConstructionCallDictionary::SetMethodProperty(::StringW key, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline ::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*
System::Runtime::Remoting::Messaging::ConstructionCallDictionary::New_ctor(::System::Runtime::Remoting::Activation::IConstructionCallMessage* message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*>(message));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::ConstructionCallDictionary::ConstructionCallDictionary() {}
