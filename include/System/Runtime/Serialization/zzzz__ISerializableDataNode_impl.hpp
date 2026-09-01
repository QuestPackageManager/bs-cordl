#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\ISerializableDataNode.hpp"
#include "System/Runtime/Serialization/zzzz__DataNode_1_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializableDataNode_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__ElementData_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializableDataMember_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ISerializableDataNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ISerializableDataNode::*)()>(&::System::Runtime::Serialization::ISerializableDataNode::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6150cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ISerializableDataNode.get_FactoryTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::ISerializableDataNode::*)()>(
    &::System::Runtime::Serialization::ISerializableDataNode::get_FactoryTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(), { "get_FactoryTypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ISerializableDataNode.set_FactoryTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ISerializableDataNode::*)(::StringW)>(
    &::System::Runtime::Serialization::ISerializableDataNode::set_FactoryTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(), { "set_FactoryTypeName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ISerializableDataNode.get_FactoryTypeNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::ISerializableDataNode::*)()>(
    &::System::Runtime::Serialization::ISerializableDataNode::get_FactoryTypeNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(), { "get_FactoryTypeNamespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ISerializableDataNode.set_FactoryTypeNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ISerializableDataNode::*)(::StringW)>(
    &::System::Runtime::Serialization::ISerializableDataNode::set_FactoryTypeNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(), { "set_FactoryTypeNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ISerializableDataNode.get_Members
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>* (
    ::System::Runtime::Serialization::ISerializableDataNode::*)()>(&::System::Runtime::Serialization::ISerializableDataNode::get_Members)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(), { "get_Members", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ISerializableDataNode.set_Members
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ISerializableDataNode::*)(
    ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>*)>(&::System::Runtime::Serialization::ISerializableDataNode::set_Members)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(),
                                                { "set_Members", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ISerializableDataNode.GetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ISerializableDataNode::*)(::System::Runtime::Serialization::ElementData*)>(
    &::System::Runtime::Serialization::ISerializableDataNode::GetData)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6150e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ISerializableDataNode.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ISerializableDataNode::*)()>(&::System::Runtime::Serialization::ISerializableDataNode::Clear)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6150f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(), 23 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::ISerializableDataNode::__cordl_internal_get_factoryTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___factoryTypeName;
}
constexpr ::StringW const& System::Runtime::Serialization::ISerializableDataNode::__cordl_internal_get_factoryTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___factoryTypeName;
}
constexpr void System::Runtime::Serialization::ISerializableDataNode::__cordl_internal_set_factoryTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___factoryTypeName = value;
}
constexpr ::StringW& System::Runtime::Serialization::ISerializableDataNode::__cordl_internal_get_factoryTypeNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___factoryTypeNamespace;
}
constexpr ::StringW const& System::Runtime::Serialization::ISerializableDataNode::__cordl_internal_get_factoryTypeNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___factoryTypeNamespace;
}
constexpr void System::Runtime::Serialization::ISerializableDataNode::__cordl_internal_set_factoryTypeNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___factoryTypeNamespace = value;
}
constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>*& System::Runtime::Serialization::ISerializableDataNode::__cordl_internal_get_members() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___members;
}
constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>* const&
System::Runtime::Serialization::ISerializableDataNode::__cordl_internal_get_members() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___members;
}
constexpr void
System::Runtime::Serialization::ISerializableDataNode::__cordl_internal_set_members(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___members = value;
}
inline void System::Runtime::Serialization::ISerializableDataNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ISerializableDataNode::get_FactoryTypeName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(), { "get_FactoryTypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ISerializableDataNode::set_FactoryTypeName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(), { "set_FactoryTypeName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Runtime::Serialization::ISerializableDataNode::get_FactoryTypeNamespace() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(), { "get_FactoryTypeNamespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ISerializableDataNode::set_FactoryTypeNamespace(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(), { "set_FactoryTypeNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>* System::Runtime::Serialization::ISerializableDataNode::get_Members() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(), { "get_Members", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ISerializableDataNode::set_Members(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(),
                                              { "set_Members", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::ISerializableDataNode::GetData(::System::Runtime::Serialization::ElementData* element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void System::Runtime::Serialization::ISerializableDataNode::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ISerializableDataNode*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ISerializableDataNode* System::Runtime::Serialization::ISerializableDataNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ISerializableDataNode*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ISerializableDataNode::ISerializableDataNode() {}
