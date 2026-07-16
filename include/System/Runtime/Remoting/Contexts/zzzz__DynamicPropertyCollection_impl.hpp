#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Contexts/DynamicPropertyCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__DynamicPropertyCollection_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__DynamicPropertyCollection_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicMessageSink_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicProperty_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg::*)()>(
    &::System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3658c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Remoting::Contexts::IDynamicProperty*& System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg::__cordl_internal_get_Property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Property;
}
constexpr ::System::Runtime::Remoting::Contexts::IDynamicProperty* const& System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg::__cordl_internal_get_Property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Property;
}
constexpr void System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg::__cordl_internal_set_Property(::System::Runtime::Remoting::Contexts::IDynamicProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Property = value;
}
constexpr ::System::Runtime::Remoting::Contexts::IDynamicMessageSink*& System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg::__cordl_internal_get_Sink() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sink;
}
constexpr ::System::Runtime::Remoting::Contexts::IDynamicMessageSink* const& System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg::__cordl_internal_get_Sink() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sink;
}
constexpr void System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg::__cordl_internal_set_Sink(::System::Runtime::Remoting::Contexts::IDynamicMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Sink = value;
}
inline void System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg* System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection_DynamicPropertyReg::DynamicPropertyCollection_DynamicPropertyReg() {}
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection.get_HasProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)()>(
    &::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::get_HasProperties)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b3470c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(), { "get_HasProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection.RegisterDynamicProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)(::System::Runtime::Remoting::Contexts::IDynamicProperty*)>(
    &::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::RegisterDynamicProperty)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5b34940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(),
                                                             { "RegisterDynamicProperty", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::IDynamicProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection.UnregisterDynamicProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)(::StringW)>(
    &::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::UnregisterDynamicProperty)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b34cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(), { "UnregisterDynamicProperty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection.NotifyMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)(bool, ::System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(
    &::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::NotifyMessage)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x5b34f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(),
                            { "NotifyMessage", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection.FindProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)(::StringW)>(
    &::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::FindProperty)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5b36424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(), { "FindProperty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)()>(
    &::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b34e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Runtime::Remoting::Contexts::DynamicPropertyCollection::__cordl_internal_get__properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____properties;
}
constexpr ::System::Collections::ArrayList* const& System::Runtime::Remoting::Contexts::DynamicPropertyCollection::__cordl_internal_get__properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____properties;
}
constexpr void System::Runtime::Remoting::Contexts::DynamicPropertyCollection::__cordl_internal_set__properties(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____properties = value;
}
inline bool System::Runtime::Remoting::Contexts::DynamicPropertyCollection::get_HasProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(), { "get_HasProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Contexts::DynamicPropertyCollection::RegisterDynamicProperty(::System::Runtime::Remoting::Contexts::IDynamicProperty* prop) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(),
                                                           { "RegisterDynamicProperty", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::IDynamicProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prop);
}
inline bool System::Runtime::Remoting::Contexts::DynamicPropertyCollection::UnregisterDynamicProperty(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(), { "UnregisterDynamicProperty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline void System::Runtime::Remoting::Contexts::DynamicPropertyCollection::NotifyMessage(bool start, ::System::Runtime::Remoting::Messaging::IMessage* msg, bool client_site, bool async) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(),
                          { "NotifyMessage", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, msg, client_site, async);
}
inline int32_t System::Runtime::Remoting::Contexts::DynamicPropertyCollection::FindProperty(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(), { "FindProperty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline void System::Runtime::Remoting::Contexts::DynamicPropertyCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* System::Runtime::Remoting::Contexts::DynamicPropertyCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::DynamicPropertyCollection() {}
