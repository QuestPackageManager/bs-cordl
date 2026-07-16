#pragma once
// IWYU pragma private; include "System/Xml/Serialization/ListMap.hpp"
#include "System/Xml/Serialization/zzzz__ObjectMap_impl.hpp"
#include "System/Xml/Serialization/zzzz__ListMap_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapElementInfoList_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapElementInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::ListMap.set_ChoiceMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::ListMap::*)(::StringW)>(&::System::Xml::Serialization::ListMap::set_ChoiceMember)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6310378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(), { "set_ChoiceMember", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ListMap.get_ItemInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapElementInfoList* (::System::Xml::Serialization::ListMap::*)()>(
    &::System::Xml::Serialization::ListMap::get_ItemInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6310380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(), { "get_ItemInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ListMap.set_ItemInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::ListMap::*)(::System::Xml::Serialization::XmlTypeMapElementInfoList*)>(
    &::System::Xml::Serialization::ListMap::set_ItemInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6310388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(),
                                                                                           { "set_ItemInfo", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapElementInfoList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ListMap.FindElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapElementInfo* (::System::Xml::Serialization::ListMap::*)(::System::Object*, int32_t, ::System::Object*)>(
    &::System::Xml::Serialization::ListMap::FindElement)> {
  constexpr static std::size_t size = 0x7c4;
  constexpr static std::size_t addrs = 0x630a414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(),
                                                             { "FindElement", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ListMap.FindElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapElementInfo* (::System::Xml::Serialization::ListMap::*)(::StringW, ::StringW)>(
    &::System::Xml::Serialization::ListMap::FindElement)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x6310390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(), { "FindElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ListMap.FindTextElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapElementInfo* (::System::Xml::Serialization::ListMap::*)()>(
    &::System::Xml::Serialization::ListMap::FindTextElement)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x6310680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(), { "FindTextElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ListMap.GetArrayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::ListMap::*)(int32_t, ::by_ref<::StringW>, ::by_ref<::StringW>)>(
    &::System::Xml::Serialization::ListMap::GetArrayType)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x630a1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(),
                                                             { "GetArrayType", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ListMap.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::ListMap::*)(::System::Object*)>(&::System::Xml::Serialization::ListMap::Equals)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6310948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(), { ::i2c::class_of<::System::Xml::Serialization::ListMap*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ListMap.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::ListMap::*)()>(&::System::Xml::Serialization::ListMap::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6310aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(), { ::i2c::class_of<::System::Xml::Serialization::ListMap*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ListMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::ListMap::*)()>(&::System::Xml::Serialization::ListMap::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6310ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Serialization::XmlTypeMapElementInfoList*& System::Xml::Serialization::ListMap::__cordl_internal_get__itemInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemInfo;
}
constexpr ::System::Xml::Serialization::XmlTypeMapElementInfoList* const& System::Xml::Serialization::ListMap::__cordl_internal_get__itemInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemInfo;
}
constexpr void System::Xml::Serialization::ListMap::__cordl_internal_set__itemInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____itemInfo = value;
}
constexpr ::StringW& System::Xml::Serialization::ListMap::__cordl_internal_get__choiceMember() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____choiceMember;
}
constexpr ::StringW const& System::Xml::Serialization::ListMap::__cordl_internal_get__choiceMember() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____choiceMember;
}
constexpr void System::Xml::Serialization::ListMap::__cordl_internal_set__choiceMember(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____choiceMember = value;
}
inline void System::Xml::Serialization::ListMap::set_ChoiceMember(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(), { "set_ChoiceMember", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Serialization::XmlTypeMapElementInfoList* System::Xml::Serialization::ListMap::get_ItemInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(), { "get_ItemInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapElementInfoList*>(this, ___internal_method);
}
inline void System::Xml::Serialization::ListMap::set_ItemInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(),
                                                                                         { "set_ItemInfo", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapElementInfoList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Serialization::XmlTypeMapElementInfo* System::Xml::Serialization::ListMap::FindElement(::System::Object* ob, int32_t index, ::System::Object* memberValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(),
                                                           { "FindElement", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapElementInfo*>(this, ___internal_method, ob, index, memberValue);
}
inline ::System::Xml::Serialization::XmlTypeMapElementInfo* System::Xml::Serialization::ListMap::FindElement(::StringW elementName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(), { "FindElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapElementInfo*>(this, ___internal_method, elementName, ns);
}
inline ::System::Xml::Serialization::XmlTypeMapElementInfo* System::Xml::Serialization::ListMap::FindTextElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(), { "FindTextElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapElementInfo*>(this, ___internal_method);
}
inline void System::Xml::Serialization::ListMap::GetArrayType(int32_t itemCount, ::by_ref<::StringW> localName, ::by_ref<::StringW> ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(),
                                                           { "GetArrayType", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemCount, localName, ns);
}
inline bool System::Xml::Serialization::ListMap::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::ListMap*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t System::Xml::Serialization::ListMap::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::ListMap*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Serialization::ListMap::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ListMap*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::ListMap* System::Xml::Serialization::ListMap::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::ListMap*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::ListMap::ListMap() {}
