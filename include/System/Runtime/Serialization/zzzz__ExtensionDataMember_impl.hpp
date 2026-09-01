#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\ExtensionDataMember.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataMember_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDataNode_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataMember.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::ExtensionDataMember::*)()>(&::System::Runtime::Serialization::ExtensionDataMember::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61504d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataMember.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ExtensionDataMember::*)(::StringW)>(&::System::Runtime::Serialization::ExtensionDataMember::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61504d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataMember.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::ExtensionDataMember::*)()>(&::System::Runtime::Serialization::ExtensionDataMember::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61504e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(), { "get_Namespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataMember.set_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ExtensionDataMember::*)(::StringW)>(
    &::System::Runtime::Serialization::ExtensionDataMember::set_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61504e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(), { "set_Namespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataMember.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::IDataNode* (::System::Runtime::Serialization::ExtensionDataMember::*)()>(
    &::System::Runtime::Serialization::ExtensionDataMember::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61504f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataMember.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ExtensionDataMember::*)(::System::Runtime::Serialization::IDataNode*)>(
    &::System::Runtime::Serialization::ExtensionDataMember::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61504f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(),
                                                                                           { "set_Value", {}, { ::i2c::type_of<::System::Runtime::Serialization::IDataNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataMember.get_MemberIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::ExtensionDataMember::*)()>(&::System::Runtime::Serialization::ExtensionDataMember::get_MemberIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(), { "get_MemberIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataMember.set_MemberIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ExtensionDataMember::*)(int32_t)>(
    &::System::Runtime::Serialization::ExtensionDataMember::set_MemberIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(), { "set_MemberIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataMember._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ExtensionDataMember::*)()>(&::System::Runtime::Serialization::ExtensionDataMember::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6150510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::ExtensionDataMember::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Runtime::Serialization::ExtensionDataMember::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Runtime::Serialization::ExtensionDataMember::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::StringW& System::Runtime::Serialization::ExtensionDataMember::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Runtime::Serialization::ExtensionDataMember::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Runtime::Serialization::ExtensionDataMember::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ns = value;
}
constexpr ::System::Runtime::Serialization::IDataNode*& System::Runtime::Serialization::ExtensionDataMember::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::System::Runtime::Serialization::IDataNode* const& System::Runtime::Serialization::ExtensionDataMember::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void System::Runtime::Serialization::ExtensionDataMember::__cordl_internal_set_value(::System::Runtime::Serialization::IDataNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
constexpr int32_t& System::Runtime::Serialization::ExtensionDataMember::__cordl_internal_get_memberIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberIndex;
}
constexpr int32_t const& System::Runtime::Serialization::ExtensionDataMember::__cordl_internal_get_memberIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberIndex;
}
constexpr void System::Runtime::Serialization::ExtensionDataMember::__cordl_internal_set_memberIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberIndex = value;
}
inline ::StringW System::Runtime::Serialization::ExtensionDataMember::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ExtensionDataMember::set_Name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Runtime::Serialization::ExtensionDataMember::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(), { "get_Namespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ExtensionDataMember::set_Namespace(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(), { "set_Namespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::IDataNode* System::Runtime::Serialization::ExtensionDataMember::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::IDataNode*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ExtensionDataMember::set_Value(::System::Runtime::Serialization::IDataNode* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(),
                                                                                         { "set_Value", {}, { ::i2c::type_of<::System::Runtime::Serialization::IDataNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Runtime::Serialization::ExtensionDataMember::get_MemberIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(), { "get_MemberIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ExtensionDataMember::set_MemberIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(), { "set_MemberIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::ExtensionDataMember::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ExtensionDataMember*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ExtensionDataMember* System::Runtime::Serialization::ExtensionDataMember::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ExtensionDataMember*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ExtensionDataMember::ExtensionDataMember() {}
