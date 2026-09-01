#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Messaging\ArgInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ArgInfo_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ArgInfoType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ArgInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::ArgInfo::*)(
    ::System::Reflection::MethodBase*, ::System::Runtime::Remoting::Messaging::ArgInfoType)>(&::System::Runtime::Remoting::Messaging::ArgInfo::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5b3fad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ArgInfo*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::ArgInfoType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ArgInfo.GetInOutArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Runtime::Remoting::Messaging::ArgInfo::*)(::ArrayW<::System::Object*>)>(
    &::System::Runtime::Remoting::Messaging::ArgInfo::GetInOutArgs)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b3fc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ArgInfo*>(), { "GetInOutArgs", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& System::Runtime::Remoting::Messaging::ArgInfo::__cordl_internal_get__paramMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramMap;
}
constexpr ::ArrayW<int32_t> const& System::Runtime::Remoting::Messaging::ArgInfo::__cordl_internal_get__paramMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramMap;
}
constexpr void System::Runtime::Remoting::Messaging::ArgInfo::__cordl_internal_set__paramMap(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____paramMap = value;
}
constexpr int32_t& System::Runtime::Remoting::Messaging::ArgInfo::__cordl_internal_get__inoutArgCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inoutArgCount;
}
constexpr int32_t const& System::Runtime::Remoting::Messaging::ArgInfo::__cordl_internal_get__inoutArgCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inoutArgCount;
}
constexpr void System::Runtime::Remoting::Messaging::ArgInfo::__cordl_internal_set__inoutArgCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inoutArgCount = value;
}
constexpr ::System::Reflection::MethodBase*& System::Runtime::Remoting::Messaging::ArgInfo::__cordl_internal_get__method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
constexpr ::System::Reflection::MethodBase* const& System::Runtime::Remoting::Messaging::ArgInfo::__cordl_internal_get__method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
constexpr void System::Runtime::Remoting::Messaging::ArgInfo::__cordl_internal_set__method(::System::Reflection::MethodBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____method = value;
}
inline void System::Runtime::Remoting::Messaging::ArgInfo::_ctor(::System::Reflection::MethodBase* method, ::System::Runtime::Remoting::Messaging::ArgInfoType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ArgInfo*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::ArgInfoType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, type);
}
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::Messaging::ArgInfo::GetInOutArgs(::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ArgInfo*>(), { "GetInOutArgs", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, args);
}
inline ::System::Runtime::Remoting::Messaging::ArgInfo* System::Runtime::Remoting::Messaging::ArgInfo::New_ctor(::System::Reflection::MethodBase* method,
                                                                                                                ::System::Runtime::Remoting::Messaging::ArgInfoType type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::ArgInfo*>(method, type));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::ArgInfo::ArgInfo() {}
