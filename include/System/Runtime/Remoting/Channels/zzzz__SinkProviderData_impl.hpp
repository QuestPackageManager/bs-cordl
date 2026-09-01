#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Channels\SinkProviderData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__SinkProviderData_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::SinkProviderData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Channels::SinkProviderData::*)(::StringW)>(&::System::Runtime::Remoting::Channels::SinkProviderData::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b3cbc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::SinkProviderData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::SinkProviderData.get_Children
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::System::Runtime::Remoting::Channels::SinkProviderData::*)()>(
    &::System::Runtime::Remoting::Channels::SinkProviderData::get_Children)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3cc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::SinkProviderData*>(), { "get_Children", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::SinkProviderData.get_Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::System::Runtime::Remoting::Channels::SinkProviderData::*)()>(
    &::System::Runtime::Remoting::Channels::SinkProviderData::get_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3cc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::SinkProviderData*>(), { "get_Properties", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::Channels::SinkProviderData::__cordl_internal_get_sinkName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sinkName;
}
constexpr ::StringW const& System::Runtime::Remoting::Channels::SinkProviderData::__cordl_internal_get_sinkName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sinkName;
}
constexpr void System::Runtime::Remoting::Channels::SinkProviderData::__cordl_internal_set_sinkName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sinkName = value;
}
constexpr ::System::Collections::ArrayList*& System::Runtime::Remoting::Channels::SinkProviderData::__cordl_internal_get_children() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___children;
}
constexpr ::System::Collections::ArrayList* const& System::Runtime::Remoting::Channels::SinkProviderData::__cordl_internal_get_children() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___children;
}
constexpr void System::Runtime::Remoting::Channels::SinkProviderData::__cordl_internal_set_children(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___children = value;
}
constexpr ::System::Collections::Hashtable*& System::Runtime::Remoting::Channels::SinkProviderData::__cordl_internal_get_properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___properties;
}
constexpr ::System::Collections::Hashtable* const& System::Runtime::Remoting::Channels::SinkProviderData::__cordl_internal_get_properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___properties;
}
constexpr void System::Runtime::Remoting::Channels::SinkProviderData::__cordl_internal_set_properties(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___properties = value;
}
inline void System::Runtime::Remoting::Channels::SinkProviderData::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::SinkProviderData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::System::Collections::IList* System::Runtime::Remoting::Channels::SinkProviderData::get_Children() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::SinkProviderData*>(), { "get_Children", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline ::System::Collections::IDictionary* System::Runtime::Remoting::Channels::SinkProviderData::get_Properties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::SinkProviderData*>(), { "get_Properties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Channels::SinkProviderData* System::Runtime::Remoting::Channels::SinkProviderData::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Channels::SinkProviderData*>(name));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Channels::SinkProviderData::SinkProviderData() {}
