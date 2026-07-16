#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/ProviderData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ProviderData_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ProviderData.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ProviderData::*)(::System::Runtime::Remoting::ProviderData*)>(
    &::System::Runtime::Remoting::ProviderData::CopyFrom)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x5b26834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ProviderData*>(), { "CopyFrom", {}, { ::i2c::type_of<::System::Runtime::Remoting::ProviderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ProviderData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ProviderData::*)()>(&::System::Runtime::Remoting::ProviderData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b267d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ProviderData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::ProviderData::__cordl_internal_get_Ref() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Ref;
}
constexpr ::StringW const& System::Runtime::Remoting::ProviderData::__cordl_internal_get_Ref() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Ref;
}
constexpr void System::Runtime::Remoting::ProviderData::__cordl_internal_set_Ref(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Ref = value;
}
constexpr ::StringW& System::Runtime::Remoting::ProviderData::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::StringW const& System::Runtime::Remoting::ProviderData::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void System::Runtime::Remoting::ProviderData::__cordl_internal_set_Type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
constexpr ::StringW& System::Runtime::Remoting::ProviderData::__cordl_internal_get_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr ::StringW const& System::Runtime::Remoting::ProviderData::__cordl_internal_get_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr void System::Runtime::Remoting::ProviderData::__cordl_internal_set_Id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Id = value;
}
constexpr ::System::Collections::Hashtable*& System::Runtime::Remoting::ProviderData::__cordl_internal_get_CustomProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomProperties;
}
constexpr ::System::Collections::Hashtable* const& System::Runtime::Remoting::ProviderData::__cordl_internal_get_CustomProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomProperties;
}
constexpr void System::Runtime::Remoting::ProviderData::__cordl_internal_set_CustomProperties(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CustomProperties = value;
}
constexpr ::System::Collections::IList*& System::Runtime::Remoting::ProviderData::__cordl_internal_get_CustomData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomData;
}
constexpr ::System::Collections::IList* const& System::Runtime::Remoting::ProviderData::__cordl_internal_get_CustomData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomData;
}
constexpr void System::Runtime::Remoting::ProviderData::__cordl_internal_set_CustomData(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CustomData = value;
}
inline void System::Runtime::Remoting::ProviderData::CopyFrom(::System::Runtime::Remoting::ProviderData* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ProviderData*>(), { "CopyFrom", {}, { ::i2c::type_of<::System::Runtime::Remoting::ProviderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void System::Runtime::Remoting::ProviderData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ProviderData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::ProviderData* System::Runtime::Remoting::ProviderData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::ProviderData*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::ProviderData::ProviderData() {}
