#pragma once
// IWYU pragma private; include "System\DelegateSerializationHolder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__DelegateSerializationHolder_def.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DelegateSerializationHolder_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::DelegateSerializationHolder_DelegateEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DelegateSerializationHolder_DelegateEntry::*)(::System::Delegate*, ::StringW)>(
    &::System::DelegateSerializationHolder_DelegateEntry::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c9299c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DelegateSerializationHolder_DelegateEntry*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DelegateSerializationHolder_DelegateEntry.DeserializeDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (::System::DelegateSerializationHolder_DelegateEntry::*)(::System::Runtime::Serialization::SerializationInfo*, int32_t)>(
    &::System::DelegateSerializationHolder_DelegateEntry::DeserializeDelegate)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5c9273c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DelegateSerializationHolder_DelegateEntry*>(),
                                                             { "DeserializeDelegate", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::StringW const& System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_set_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::StringW& System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_get_assembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly;
}
constexpr ::StringW const& System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_get_assembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly;
}
constexpr void System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_set_assembly(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assembly = value;
}
constexpr ::System::Object*& System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::System::Object* const& System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_set_target(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___target = value;
}
constexpr ::StringW& System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_get_targetTypeAssembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTypeAssembly;
}
constexpr ::StringW const& System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_get_targetTypeAssembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTypeAssembly;
}
constexpr void System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_set_targetTypeAssembly(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetTypeAssembly = value;
}
constexpr ::StringW& System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_get_targetTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTypeName;
}
constexpr ::StringW const& System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_get_targetTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTypeName;
}
constexpr void System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_set_targetTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetTypeName = value;
}
constexpr ::StringW& System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_get_methodName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodName;
}
constexpr ::StringW const& System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_get_methodName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodName;
}
constexpr void System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_set_methodName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___methodName = value;
}
constexpr ::System::DelegateSerializationHolder_DelegateEntry*& System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_get_delegateEntry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegateEntry;
}
constexpr ::System::DelegateSerializationHolder_DelegateEntry* const& System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_get_delegateEntry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegateEntry;
}
constexpr void System::DelegateSerializationHolder_DelegateEntry::__cordl_internal_set_delegateEntry(::System::DelegateSerializationHolder_DelegateEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delegateEntry = value;
}
inline void System::DelegateSerializationHolder_DelegateEntry::_ctor(::System::Delegate* del, ::StringW targetLabel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DelegateSerializationHolder_DelegateEntry*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, del, targetLabel);
}
inline ::System::Delegate* System::DelegateSerializationHolder_DelegateEntry::DeserializeDelegate(::System::Runtime::Serialization::SerializationInfo* info, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DelegateSerializationHolder_DelegateEntry*>(),
                                                           { "DeserializeDelegate", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(this, ___internal_method, info, index);
}
inline ::System::DelegateSerializationHolder_DelegateEntry* System::DelegateSerializationHolder_DelegateEntry::New_ctor(::System::Delegate* del, ::StringW targetLabel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::DelegateSerializationHolder_DelegateEntry*>(del, targetLabel));
}
// Ctor Parameters []
constexpr ::System::DelegateSerializationHolder_DelegateEntry::DelegateSerializationHolder_DelegateEntry() {}
//  Writing Method size for method: ::System::DelegateSerializationHolder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DelegateSerializationHolder::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::DelegateSerializationHolder::_ctor)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5c92544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DelegateSerializationHolder*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DelegateSerializationHolder.GetDelegateData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Delegate*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::DelegateSerializationHolder::GetDelegateData)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5c920f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DelegateSerializationHolder*>(),
                                                             { "GetDelegateData",
                                                               {},
                                                               { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DelegateSerializationHolder.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DelegateSerializationHolder::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::DelegateSerializationHolder::GetObjectData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c92ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::DelegateSerializationHolder*>(),
                         { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DelegateSerializationHolder.GetRealObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::DelegateSerializationHolder::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::DelegateSerializationHolder::GetRealObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c92af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DelegateSerializationHolder*>(),
                                                                                           { "GetRealObject", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Delegate*& System::DelegateSerializationHolder::__cordl_internal_get__delegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delegate;
}
constexpr ::System::Delegate* const& System::DelegateSerializationHolder::__cordl_internal_get__delegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delegate;
}
constexpr void System::DelegateSerializationHolder::__cordl_internal_set__delegate(::System::Delegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delegate = value;
}
inline void System::DelegateSerializationHolder::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DelegateSerializationHolder*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, ctx);
}
inline void System::DelegateSerializationHolder::GetDelegateData(::System::Delegate* instance, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                 ::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DelegateSerializationHolder*>(), { "GetDelegateData",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                         ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance, info, ctx);
}
inline void System::DelegateSerializationHolder::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DelegateSerializationHolder*>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Object* System::DelegateSerializationHolder::GetRealObject(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DelegateSerializationHolder*>(), { "GetRealObject", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context);
}
inline ::System::DelegateSerializationHolder* System::DelegateSerializationHolder::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                            ::System::Runtime::Serialization::StreamingContext ctx) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::DelegateSerializationHolder*>(info, ctx));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::DelegateSerializationHolder::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::DelegateSerializationHolder::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr System::DelegateSerializationHolder::operator ::System::Runtime::Serialization::IObjectReference*() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
constexpr ::System::Runtime::Serialization::IObjectReference* System::DelegateSerializationHolder::i___System__Runtime__Serialization__IObjectReference() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::DelegateSerializationHolder::DelegateSerializationHolder() {}
