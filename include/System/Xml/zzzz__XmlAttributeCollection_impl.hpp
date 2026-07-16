#pragma once
// IWYU pragma private; include "System/Xml/XmlAttributeCollection.hpp"
#include "System/Xml/zzzz__XmlNamedNodeMap_impl.hpp"
#include "System/Xml/zzzz__XmlAttributeCollection_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlAttributeCollection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b2e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.get_ItemOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlAttributeCollection::*)(int32_t)>(&::System::Xml::XmlAttributeCollection::get_ItemOf)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x62af1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "get_ItemOf", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.get_ItemOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlAttributeCollection::*)(::StringW)>(&::System::Xml::XmlAttributeCollection::get_ItemOf)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x62b2f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "get_ItemOf", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.get_ItemOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlAttributeCollection::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlAttributeCollection::get_ItemOf)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x62b30d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "get_ItemOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.FindNodeOffsetNS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlAttribute*)>(&::System::Xml::XmlAttributeCollection::FindNodeOffsetNS)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x62b3214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "FindNodeOffsetNS", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.SetNamedItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlNode*)>(
    &::System::Xml::XmlAttributeCollection::SetNamedItem)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x62b3380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { ::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlAttribute*)>(
    &::System::Xml::XmlAttributeCollection::Append)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x62b3828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "Append", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlAttribute*)>(
    &::System::Xml::XmlAttributeCollection::Remove)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x62b3b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "Remove", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlAttributeCollection::*)(int32_t)>(&::System::Xml::XmlAttributeCollection::RemoveAt)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x62b3be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.RemoveAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttributeCollection::*)()>(&::System::Xml::XmlAttributeCollection::RemoveAll)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x62b3ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "RemoveAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.System_Collections_ICollection_CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttributeCollection::*)(::System::Array*, int32_t)>(
    &::System::Xml::XmlAttributeCollection::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x62b3ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(),
                                                             { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.System_Collections_ICollection_get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAttributeCollection::*)()>(&::System::Xml::XmlAttributeCollection::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b3d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.System_Collections_ICollection_get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XmlAttributeCollection::*)()>(
    &::System::Xml::XmlAttributeCollection::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62b3d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.System_Collections_ICollection_get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlAttributeCollection::*)()>(&::System::Xml::XmlAttributeCollection::System_Collections_ICollection_get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b3d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "System.Collections.ICollection.get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.AddNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlAttributeCollection::AddNode)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x62b3d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { ::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.InsertNodeAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlAttributeCollection::*)(int32_t, ::System::Xml::XmlNode*)>(
    &::System::Xml::XmlAttributeCollection::InsertNodeAt)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x62b4100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { ::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.RemoveNodeAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlAttributeCollection::*)(int32_t)>(&::System::Xml::XmlAttributeCollection::RemoveNodeAt)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x62b4354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { ::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.Detach
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlAttribute*)>(&::System::Xml::XmlAttributeCollection::Detach)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x62b3930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "Detach", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.InsertParentIntoElementIdAttrMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlAttribute*)>(
    &::System::Xml::XmlAttributeCollection::InsertParentIntoElementIdAttrMap)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x62b3a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "InsertParentIntoElementIdAttrMap", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.RemoveParentFromElementIdAttrMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlAttribute*)>(
    &::System::Xml::XmlAttributeCollection::RemoveParentFromElementIdAttrMap)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x62b44f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "RemoveParentFromElementIdAttrMap", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.RemoveDuplicateAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlAttribute*)>(
    &::System::Xml::XmlAttributeCollection::RemoveDuplicateAttribute)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x62b3e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "RemoveDuplicateAttribute", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.PrepareParentInElementIdAttrMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAttributeCollection::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlAttributeCollection::PrepareParentInElementIdAttrMap)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x62b1088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(),
                                                                                           { "PrepareParentInElementIdAttrMap", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.ResetParentInElementIdAttrMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttributeCollection::*)(::StringW, ::StringW)>(&::System::Xml::XmlAttributeCollection::ResetParentInElementIdAttrMap)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x62b1174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(),
                                                                                           { "ResetParentInElementIdAttrMap", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttributeCollection.InternalAppendAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Xml::XmlAttributeCollection::*)(::System::Xml::XmlAttribute*)>(
    &::System::Xml::XmlAttributeCollection::InternalAppendAttribute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x62b3620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "InternalAppendAttribute", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlAttributeCollection::_ctor(::System::Xml::XmlNode* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlAttributeCollection::get_ItemOf(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "get_ItemOf", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method, i);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlAttributeCollection::get_ItemOf(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "get_ItemOf", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method, name);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlAttributeCollection::get_ItemOf(::StringW localName, ::StringW namespaceURI) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "get_ItemOf", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method, localName, namespaceURI);
}
inline int32_t System::Xml::XmlAttributeCollection::FindNodeOffsetNS(::System::Xml::XmlAttribute* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "FindNodeOffsetNS", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, node);
}
inline ::System::Xml::XmlNode* System::Xml::XmlAttributeCollection::SetNamedItem(::System::Xml::XmlNode* node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, node);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlAttributeCollection::Append(::System::Xml::XmlAttribute* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "Append", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method, node);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlAttributeCollection::Remove(::System::Xml::XmlAttribute* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "Remove", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method, node);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlAttributeCollection::RemoveAt(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method, i);
}
inline void System::Xml::XmlAttributeCollection::RemoveAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "RemoveAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlAttributeCollection::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline bool System::Xml::XmlAttributeCollection::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Xml::XmlAttributeCollection::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t System::Xml::XmlAttributeCollection::System_Collections_ICollection_get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "System.Collections.ICollection.get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlAttributeCollection::AddNode(::System::Xml::XmlNode* node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, node);
}
inline ::System::Xml::XmlNode* System::Xml::XmlAttributeCollection::InsertNodeAt(int32_t i, ::System::Xml::XmlNode* node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, i, node);
}
inline ::System::Xml::XmlNode* System::Xml::XmlAttributeCollection::RemoveNodeAt(int32_t i) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, i);
}
inline void System::Xml::XmlAttributeCollection::Detach(::System::Xml::XmlAttribute* attr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "Detach", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attr);
}
inline void System::Xml::XmlAttributeCollection::InsertParentIntoElementIdAttrMap(::System::Xml::XmlAttribute* attr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "InsertParentIntoElementIdAttrMap", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attr);
}
inline void System::Xml::XmlAttributeCollection::RemoveParentFromElementIdAttrMap(::System::Xml::XmlAttribute* attr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "RemoveParentFromElementIdAttrMap", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attr);
}
inline int32_t System::Xml::XmlAttributeCollection::RemoveDuplicateAttribute(::System::Xml::XmlAttribute* attr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "RemoveDuplicateAttribute", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, attr);
}
inline bool System::Xml::XmlAttributeCollection::PrepareParentInElementIdAttrMap(::StringW attrPrefix, ::StringW attrLocalName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(),
                                                                                         { "PrepareParentInElementIdAttrMap", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attrPrefix, attrLocalName);
}
inline void System::Xml::XmlAttributeCollection::ResetParentInElementIdAttrMap(::StringW oldVal, ::StringW newVal) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(),
                                                                                         { "ResetParentInElementIdAttrMap", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldVal, newVal);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlAttributeCollection::InternalAppendAttribute(::System::Xml::XmlAttribute* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlAttributeCollection*>(), { "InternalAppendAttribute", {}, { ::i2c::type_of<::System::Xml::XmlAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method, node);
}
inline ::System::Xml::XmlAttributeCollection* System::Xml::XmlAttributeCollection::New_ctor(::System::Xml::XmlNode* parent) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlAttributeCollection*>(parent));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Xml::XmlAttributeCollection::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Xml::XmlAttributeCollection::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Xml::XmlAttributeCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Xml::XmlAttributeCollection::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlAttributeCollection::XmlAttributeCollection() {}
