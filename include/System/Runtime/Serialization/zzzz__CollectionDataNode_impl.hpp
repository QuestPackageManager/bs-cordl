#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/CollectionDataNode.hpp"
#include "System/Runtime/Serialization/zzzz__DataNode_1_impl.hpp"
#include "System/Runtime/Serialization/zzzz__CollectionDataNode_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__ElementData_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDataNode_def.hpp"
#include "System/zzzz__Array_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataNode::*)()>(&::System::Runtime::Serialization::CollectionDataNode::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x614aed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataNode.get_Items
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>* (
    ::System::Runtime::Serialization::CollectionDataNode::*)()>(&::System::Runtime::Serialization::CollectionDataNode::get_Items)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614b054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), { "get_Items", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataNode.set_Items
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataNode::*)(
    ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>*)>(&::System::Runtime::Serialization::CollectionDataNode::set_Items)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614b05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(),
                                                             { "set_Items", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataNode.get_ItemName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::CollectionDataNode::*)()>(&::System::Runtime::Serialization::CollectionDataNode::get_ItemName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614b064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), { "get_ItemName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataNode.set_ItemName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataNode::*)(::StringW)>(
    &::System::Runtime::Serialization::CollectionDataNode::set_ItemName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614b06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), { "set_ItemName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataNode.get_ItemNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::CollectionDataNode::*)()>(
    &::System::Runtime::Serialization::CollectionDataNode::get_ItemNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614b074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), { "get_ItemNamespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataNode.set_ItemNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataNode::*)(::StringW)>(
    &::System::Runtime::Serialization::CollectionDataNode::set_ItemNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614b07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), { "set_ItemNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataNode.get_Size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::CollectionDataNode::*)()>(&::System::Runtime::Serialization::CollectionDataNode::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614b084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), { "get_Size", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataNode.set_Size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataNode::*)(int32_t)>(&::System::Runtime::Serialization::CollectionDataNode::set_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614b08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), { "set_Size", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataNode.GetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataNode::*)(::System::Runtime::Serialization::ElementData*)>(
    &::System::Runtime::Serialization::CollectionDataNode::GetData)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x614b094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataNode.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataNode::*)()>(&::System::Runtime::Serialization::CollectionDataNode::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x614b27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), 23 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>*& System::Runtime::Serialization::CollectionDataNode::__cordl_internal_get_items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>* const& System::Runtime::Serialization::CollectionDataNode::__cordl_internal_get_items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr void System::Runtime::Serialization::CollectionDataNode::__cordl_internal_set_items(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___items = value;
}
constexpr ::StringW& System::Runtime::Serialization::CollectionDataNode::__cordl_internal_get_itemName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemName;
}
constexpr ::StringW const& System::Runtime::Serialization::CollectionDataNode::__cordl_internal_get_itemName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemName;
}
constexpr void System::Runtime::Serialization::CollectionDataNode::__cordl_internal_set_itemName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemName = value;
}
constexpr ::StringW& System::Runtime::Serialization::CollectionDataNode::__cordl_internal_get_itemNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemNamespace;
}
constexpr ::StringW const& System::Runtime::Serialization::CollectionDataNode::__cordl_internal_get_itemNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemNamespace;
}
constexpr void System::Runtime::Serialization::CollectionDataNode::__cordl_internal_set_itemNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemNamespace = value;
}
constexpr int32_t& System::Runtime::Serialization::CollectionDataNode::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr int32_t const& System::Runtime::Serialization::CollectionDataNode::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void System::Runtime::Serialization::CollectionDataNode::__cordl_internal_set_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
inline void System::Runtime::Serialization::CollectionDataNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>* System::Runtime::Serialization::CollectionDataNode::get_Items() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), { "get_Items", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::CollectionDataNode::set_Items(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(),
                                                           { "set_Items", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::IDataNode*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Runtime::Serialization::CollectionDataNode::get_ItemName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), { "get_ItemName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Serialization::CollectionDataNode::set_ItemName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), { "set_ItemName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Runtime::Serialization::CollectionDataNode::get_ItemNamespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), { "get_ItemNamespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Serialization::CollectionDataNode::set_ItemNamespace(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), { "set_ItemNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Runtime::Serialization::CollectionDataNode::get_Size() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), { "get_Size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Runtime::Serialization::CollectionDataNode::set_Size(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), { "set_Size", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::CollectionDataNode::GetData(::System::Runtime::Serialization::ElementData* element) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void System::Runtime::Serialization::CollectionDataNode::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataNode*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::CollectionDataNode* System::Runtime::Serialization::CollectionDataNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CollectionDataNode*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::CollectionDataNode::CollectionDataNode() {}
