#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\ExtensionDataObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataObject_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataMember_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ExtensionDataObject::*)()>(&::System::Runtime::Serialization::ExtensionDataObject::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61504bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataObject*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataObject.get_Members
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* (
    ::System::Runtime::Serialization::ExtensionDataObject::*)()>(&::System::Runtime::Serialization::ExtensionDataObject::get_Members)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61504c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataObject*>(), { "get_Members", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataObject.set_Members
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ExtensionDataObject::*)(
    ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*)>(&::System::Runtime::Serialization::ExtensionDataObject::set_Members)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61504c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataObject*>(),
                                                { "set_Members", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*& System::Runtime::Serialization::ExtensionDataObject::__cordl_internal_get_members() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___members;
}
constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* const&
System::Runtime::Serialization::ExtensionDataObject::__cordl_internal_get_members() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___members;
}
constexpr void
System::Runtime::Serialization::ExtensionDataObject::__cordl_internal_set_members(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___members = value;
}
inline void System::Runtime::Serialization::ExtensionDataObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataObject*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* System::Runtime::Serialization::ExtensionDataObject::get_Members() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataObject*>(), { "get_Members", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ExtensionDataObject::set_Members(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataObject*>(),
                                              { "set_Members", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::ExtensionDataObject* System::Runtime::Serialization::ExtensionDataObject::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ExtensionDataObject*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ExtensionDataObject::ExtensionDataObject() {}
