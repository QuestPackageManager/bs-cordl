#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Messaging\CADMessageBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMessageBase_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADArgHolder_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(::System::Runtime::Remoting::Messaging::IMethodMessage*)>(
    &::System::Runtime::Remoting::Messaging::CADMessageBase::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b40968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.GetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (::System::Runtime::Remoting::Messaging::CADMessageBase::*)()>(
    &::System::Runtime::Remoting::Messaging::CADMessageBase::GetMethod)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b409e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(), { "GetMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.GetSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (*)(::System::Reflection::MethodBase*, bool)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::GetSignature)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5b40a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                                                                                           { "GetSignature", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.MarshalProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::IDictionary*, ::by_ref<::System::Collections::ArrayList*>)>(
    &::System::Runtime::Remoting::Messaging::CADMessageBase::MarshalProperties)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x5b40c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                                         { "MarshalProperties", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::by_ref<::System::Collections::ArrayList*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.UnmarshalProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, int32_t, ::System::Collections::ArrayList*)>(
    &::System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalProperties)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b414b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                            { "UnmarshalProperties", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.IsPossibleToIgnoreMarshal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::IsPossibleToIgnoreMarshal)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5b415f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(), { "IsPossibleToIgnoreMarshal", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.MarshalArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(::System::Object*, ::by_ref<::System::Collections::ArrayList*>)>(
    &::System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArgument)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5b4176c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                                                             { "MarshalArgument", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Collections::ArrayList*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.UnmarshalArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(::System::Object*, ::System::Collections::ArrayList*)>(
    &::System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArgument)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x5b418d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                                                             { "UnmarshalArgument", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.MarshalArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(
    ::ArrayW<::System::Object*>, ::by_ref<::System::Collections::ArrayList*>)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArguments)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b42024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                                                { "MarshalArguments", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::by_ref<::System::Collections::ArrayList*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.UnmarshalArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(
    ::ArrayW<::System::Object*>, ::System::Collections::ArrayList*)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArguments)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b42118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                                                             { "UnmarshalArguments", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.SaveLogicalCallContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::CADMessageBase::*)(
    ::System::Runtime::Remoting::Messaging::IMethodMessage*, ::by_ref<::System::Collections::ArrayList*>)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::SaveLogicalCallContext)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5b4220c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
            { "SaveLogicalCallContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodMessage*>(), ::i2c::type_of<::by_ref<::System::Collections::ArrayList*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMessageBase.GetLogicalCallContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (
    ::System::Runtime::Remoting::Messaging::CADMessageBase::*)(::System::Collections::ArrayList*)>(&::System::Runtime::Remoting::Messaging::CADMessageBase::GetLogicalCallContext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b42438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                                                                                           { "GetLogicalCallContext", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Object*>& System::Runtime::Remoting::Messaging::CADMessageBase::__cordl_internal_get__args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____args;
}
constexpr ::ArrayW<::System::Object*> const& System::Runtime::Remoting::Messaging::CADMessageBase::__cordl_internal_get__args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____args;
}
constexpr void System::Runtime::Remoting::Messaging::CADMessageBase::__cordl_internal_set__args(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____args = value;
}
constexpr ::ArrayW<uint8_t>& System::Runtime::Remoting::Messaging::CADMessageBase::__cordl_internal_get__serializedArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializedArgs;
}
constexpr ::ArrayW<uint8_t> const& System::Runtime::Remoting::Messaging::CADMessageBase::__cordl_internal_get__serializedArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializedArgs;
}
constexpr void System::Runtime::Remoting::Messaging::CADMessageBase::__cordl_internal_set__serializedArgs(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serializedArgs = value;
}
constexpr int32_t& System::Runtime::Remoting::Messaging::CADMessageBase::__cordl_internal_get__propertyCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyCount;
}
constexpr int32_t const& System::Runtime::Remoting::Messaging::CADMessageBase::__cordl_internal_get__propertyCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyCount;
}
constexpr void System::Runtime::Remoting::Messaging::CADMessageBase::__cordl_internal_set__propertyCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyCount = value;
}
constexpr ::System::Runtime::Remoting::Messaging::CADArgHolder*& System::Runtime::Remoting::Messaging::CADMessageBase::__cordl_internal_get__callContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callContext;
}
constexpr ::System::Runtime::Remoting::Messaging::CADArgHolder* const& System::Runtime::Remoting::Messaging::CADMessageBase::__cordl_internal_get__callContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callContext;
}
constexpr void System::Runtime::Remoting::Messaging::CADMessageBase::__cordl_internal_set__callContext(::System::Runtime::Remoting::Messaging::CADArgHolder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callContext = value;
}
constexpr ::ArrayW<uint8_t>& System::Runtime::Remoting::Messaging::CADMessageBase::__cordl_internal_get_serializedMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedMethod;
}
constexpr ::ArrayW<uint8_t> const& System::Runtime::Remoting::Messaging::CADMessageBase::__cordl_internal_get_serializedMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedMethod;
}
constexpr void System::Runtime::Remoting::Messaging::CADMessageBase::__cordl_internal_set_serializedMethod(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializedMethod = value;
}
inline void System::Runtime::Remoting::Messaging::CADMessageBase::_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline ::System::Reflection::MethodBase* System::Runtime::Remoting::Messaging::CADMessageBase::GetMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(), { "GetMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*> System::Runtime::Remoting::Messaging::CADMessageBase::GetSignature(::System::Reflection::MethodBase* methodBase, bool load) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                                                                                         { "GetSignature", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(nullptr, ___internal_method, methodBase, load);
}
inline int32_t System::Runtime::Remoting::Messaging::CADMessageBase::MarshalProperties(::System::Collections::IDictionary* dict, ::by_ref<::System::Collections::ArrayList*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                                              { "MarshalProperties", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::by_ref<::System::Collections::ArrayList*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, dict, args);
}
inline void System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalProperties(::System::Collections::IDictionary* dict, int32_t count, ::System::Collections::ArrayList* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                          { "UnmarshalProperties", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dict, count, args);
}
inline bool System::Runtime::Remoting::Messaging::CADMessageBase::IsPossibleToIgnoreMarshal(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(), { "IsPossibleToIgnoreMarshal", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArgument(::System::Object* arg, ::by_ref<::System::Collections::ArrayList*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                                                           { "MarshalArgument", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Collections::ArrayList*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, arg, args);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArgument(::System::Object* arg, ::System::Collections::ArrayList* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                                                           { "UnmarshalArgument", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, arg, args);
}
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::Messaging::CADMessageBase::MarshalArguments(::ArrayW<::System::Object*> arguments, ::by_ref<::System::Collections::ArrayList*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                                              { "MarshalArguments", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::by_ref<::System::Collections::ArrayList*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, arguments, args);
}
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::Messaging::CADMessageBase::UnmarshalArguments(::ArrayW<::System::Object*> arguments, ::System::Collections::ArrayList* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                                                           { "UnmarshalArguments", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, arguments, args);
}
inline void System::Runtime::Remoting::Messaging::CADMessageBase::SaveLogicalCallContext(::System::Runtime::Remoting::Messaging::IMethodMessage* msg,
                                                                                         ::by_ref<::System::Collections::ArrayList*> serializeList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
          { "SaveLogicalCallContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodMessage*>(), ::i2c::type_of<::by_ref<::System::Collections::ArrayList*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg, serializeList);
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* System::Runtime::Remoting::Messaging::CADMessageBase::GetLogicalCallContext(::System::Collections::ArrayList* args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADMessageBase*>(),
                                                                                         { "GetLogicalCallContext", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(this, ___internal_method, args);
}
inline ::System::Runtime::Remoting::Messaging::CADMessageBase* System::Runtime::Remoting::Messaging::CADMessageBase::New_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* msg) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::CADMessageBase*>(msg));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::CADMessageBase::CADMessageBase() {}
