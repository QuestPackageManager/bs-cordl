#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\ClassDataNode.hpp"
#include "System/Runtime/Serialization/zzzz__DataNode_1_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ClassDataNode_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataMember_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataNode::*)()>(&::System::Runtime::Serialization::ClassDataNode::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6150514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataNode.get_Members
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* (
    ::System::Runtime::Serialization::ClassDataNode::*)()>(&::System::Runtime::Serialization::ClassDataNode::get_Members)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataNode*>(), { "get_Members", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataNode.set_Members
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataNode::*)(
    ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*)>(&::System::Runtime::Serialization::ClassDataNode::set_Members)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6150698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataNode*>(),
                                                { "set_Members", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ClassDataNode.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ClassDataNode::*)()>(&::System::Runtime::Serialization::ClassDataNode::Clear)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x61506a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataNode*>(), { ::i2c::class_of<::System::Runtime::Serialization::ClassDataNode*>(), 23 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*& System::Runtime::Serialization::ClassDataNode::__cordl_internal_get_members() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___members;
}
constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* const& System::Runtime::Serialization::ClassDataNode::__cordl_internal_get_members() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___members;
}
constexpr void System::Runtime::Serialization::ClassDataNode::__cordl_internal_set_members(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___members = value;
}
inline void System::Runtime::Serialization::ClassDataNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* System::Runtime::Serialization::ClassDataNode::get_Members() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataNode*>(), { "get_Members", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ClassDataNode::set_Members(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ClassDataNode*>(),
                                              { "set_Members", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::ClassDataNode::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ClassDataNode*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ClassDataNode* System::Runtime::Serialization::ClassDataNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ClassDataNode*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ClassDataNode::ClassDataNode() {}
