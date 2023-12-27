#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__DynamicPropertyCollection_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__DynamicPropertyCollection_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicProperty_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicMessageSink_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::*)()>(
    &::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249eefc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Remoting::Contexts::IDynamicProperty*& System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::__get_Property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Property;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Contexts::IDynamicProperty*> const&
System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::__get_Property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Property;
}
constexpr void System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::__set_Property(::System::Runtime::Remoting::Contexts::IDynamicProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Property)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Contexts::IDynamicMessageSink*& System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::__get_Sink() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Sink;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*> const&
System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::__get_Sink() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Sink;
}
constexpr void System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::__set_Sink(::System::Runtime::Remoting::Contexts::IDynamicMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Sink)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg* System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg*>());
}
inline void System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::__DynamicPropertyCollection__DynamicPropertyReg() {}
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection.get_HasProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)()>(
    &::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::get_HasProperties)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x249c7ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(), "get_HasProperties",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection.RegisterDynamicProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)(
    ::System::Runtime::Remoting::Contexts::IDynamicProperty*)>(&::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::RegisterDynamicProperty)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x249ca38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(), "RegisterDynamicProperty", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::IDynamicProperty*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection.UnregisterDynamicProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)(::StringW)>(
    &::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::UnregisterDynamicProperty)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x249cd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(), "UnregisterDynamicProperty",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection.NotifyMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)(
    bool, ::System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(&::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::NotifyMessage)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x249d07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(), "NotifyMessage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection.FindProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)(::StringW)>(
    &::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::FindProperty)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x249ed98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(), "FindProperty",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)()>(
    &::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x249cf14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Runtime::Remoting::Contexts::DynamicPropertyCollection::__get__properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____properties;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Runtime::Remoting::Contexts::DynamicPropertyCollection::__get__properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____properties;
}
constexpr void System::Runtime::Remoting::Contexts::DynamicPropertyCollection::__set__properties(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____properties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool System::Runtime::Remoting::Contexts::DynamicPropertyCollection::get_HasProperties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(), "get_HasProperties",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Contexts::DynamicPropertyCollection::RegisterDynamicProperty(::System::Runtime::Remoting::Contexts::IDynamicProperty* prop) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(), "RegisterDynamicProperty", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::IDynamicProperty*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, prop);
}
inline bool System::Runtime::Remoting::Contexts::DynamicPropertyCollection::UnregisterDynamicProperty(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(), "UnregisterDynamicProperty",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline void System::Runtime::Remoting::Contexts::DynamicPropertyCollection::NotifyMessage(bool start, ::System::Runtime::Remoting::Messaging::IMessage* msg, bool client_site, bool async) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(), "NotifyMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, msg, client_site, async);
}
inline int32_t System::Runtime::Remoting::Contexts::DynamicPropertyCollection::FindProperty(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(), "FindProperty",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name);
}
inline ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* System::Runtime::Remoting::Contexts::DynamicPropertyCollection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>());
}
inline void System::Runtime::Remoting::Contexts::DynamicPropertyCollection::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::DynamicPropertyCollection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
