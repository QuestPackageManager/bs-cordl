#pragma once
// IWYU pragma private; include "System/Xml/XmlNamedNodeMap.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlNamedNodeMap_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlNamedNodeMap_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::*)(::System::Object*)>(
    &::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62c19e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::*)()>(
    &::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x62c19f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::*)()>(
    &::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62c1a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::*)()>(
    &::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62c1a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::__cordl_internal_get_loneValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loneValue;
}
constexpr ::System::Object* const& System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::__cordl_internal_get_loneValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loneValue;
}
constexpr void System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::__cordl_internal_set_loneValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loneValue = value;
}
constexpr int32_t& System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr int32_t const& System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::__cordl_internal_set_position(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
inline void System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::_ctor(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator* System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::New_ctor(::System::Object* value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator*>(value));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator() {}
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap_SmallXmlNodeList.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlNamedNodeMap_SmallXmlNodeList::*)()>(&::System::Xml::XmlNamedNodeMap_SmallXmlNodeList::get_Count)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x62b3048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap_SmallXmlNodeList>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap_SmallXmlNodeList.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::XmlNamedNodeMap_SmallXmlNodeList::*)(int32_t)>(&::System::Xml::XmlNamedNodeMap_SmallXmlNodeList::get_Item)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x62b2e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap_SmallXmlNodeList>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap_SmallXmlNodeList.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNamedNodeMap_SmallXmlNodeList::*)(::System::Object*)>(&::System::Xml::XmlNamedNodeMap_SmallXmlNodeList::Add)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x62c1624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap_SmallXmlNodeList>(), { "Add", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap_SmallXmlNodeList.RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNamedNodeMap_SmallXmlNodeList::*)(int32_t)>(&::System::Xml::XmlNamedNodeMap_SmallXmlNodeList::RemoveAt)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x62c1754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap_SmallXmlNodeList>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap_SmallXmlNodeList.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNamedNodeMap_SmallXmlNodeList::*)(int32_t, ::System::Object*)>(
    &::System::Xml::XmlNamedNodeMap_SmallXmlNodeList::Insert)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x62c1844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap_SmallXmlNodeList>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap_SmallXmlNodeList.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Xml::XmlNamedNodeMap_SmallXmlNodeList::*)()>(
    &::System::Xml::XmlNamedNodeMap_SmallXmlNodeList::GetEnumerator)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x62c1530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap_SmallXmlNodeList>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t System::Xml::XmlNamedNodeMap_SmallXmlNodeList::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap_SmallXmlNodeList>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Object* System::Xml::XmlNamedNodeMap_SmallXmlNodeList::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap_SmallXmlNodeList>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, index);
}
inline void System::Xml::XmlNamedNodeMap_SmallXmlNodeList::Add(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap_SmallXmlNodeList>(), { "Add", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Xml::XmlNamedNodeMap_SmallXmlNodeList::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap_SmallXmlNodeList>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline void System::Xml::XmlNamedNodeMap_SmallXmlNodeList::Insert(int32_t index, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap_SmallXmlNodeList>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline ::System::Collections::IEnumerator* System::Xml::XmlNamedNodeMap_SmallXmlNodeList::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap_SmallXmlNodeList>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "field", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlNamedNodeMap_SmallXmlNodeList::XmlNamedNodeMap_SmallXmlNodeList(::System::Object* field) noexcept {
  this->field = field;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNamedNodeMap_SmallXmlNodeList::XmlNamedNodeMap_SmallXmlNodeList() {}
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlNamedNodeMap::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlNamedNodeMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b2e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.GetNamedItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlNamedNodeMap::*)(::StringW)>(&::System::Xml::XmlNamedNodeMap::GetNamedItem)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x62c1294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), { ::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.SetNamedItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlNamedNodeMap::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlNamedNodeMap::SetNamedItem)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x62c1418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), { ::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlNamedNodeMap::*)()>(&::System::Xml::XmlNamedNodeMap::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b3d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), { ::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Xml::XmlNamedNodeMap::*)()>(&::System::Xml::XmlNamedNodeMap::GetEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62c1528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), { ::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.FindNodeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlNamedNodeMap::*)(::StringW)>(&::System::Xml::XmlNamedNodeMap::FindNodeOffset)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x62c1338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), { "FindNodeOffset", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.FindNodeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlNamedNodeMap::*)(::StringW, ::StringW)>(&::System::Xml::XmlNamedNodeMap::FindNodeOffset)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x62b3508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), { "FindNodeOffset", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.AddNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlNamedNodeMap::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlNamedNodeMap::AddNode)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x62b3f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), { ::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.AddNodeForLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlNamedNodeMap::*)(::System::Xml::XmlNode*, ::System::Xml::XmlDocument*)>(
    &::System::Xml::XmlNamedNodeMap::AddNodeForLoad)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x62b3978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), { ::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.RemoveNodeAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlNamedNodeMap::*)(int32_t)>(&::System::Xml::XmlNamedNodeMap::RemoveNodeAt)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x62b36c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), { ::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.ReplaceNodeAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlNamedNodeMap::*)(int32_t, ::System::Xml::XmlNode*)>(&::System::Xml::XmlNamedNodeMap::ReplaceNodeAt)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62c14d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), { "ReplaceNodeAt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.InsertNodeAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlNamedNodeMap::*)(int32_t, ::System::Xml::XmlNode*)>(&::System::Xml::XmlNamedNodeMap::InsertNodeAt)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x62b41ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), { ::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), 12 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNode*& System::Xml::XmlNamedNodeMap::__cordl_internal_get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr ::System::Xml::XmlNode* const& System::Xml::XmlNamedNodeMap::__cordl_internal_get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr void System::Xml::XmlNamedNodeMap::__cordl_internal_set_parent(::System::Xml::XmlNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parent = value;
}
constexpr ::System::Xml::XmlNamedNodeMap_SmallXmlNodeList& System::Xml::XmlNamedNodeMap::__cordl_internal_get_nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr ::System::Xml::XmlNamedNodeMap_SmallXmlNodeList const& System::Xml::XmlNamedNodeMap::__cordl_internal_get_nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr void System::Xml::XmlNamedNodeMap::__cordl_internal_set_nodes(::System::Xml::XmlNamedNodeMap_SmallXmlNodeList value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nodes = value;
}
inline void System::Xml::XmlNamedNodeMap::_ctor(::System::Xml::XmlNode* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline ::System::Xml::XmlNode* System::Xml::XmlNamedNodeMap::GetNamedItem(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, name);
}
inline ::System::Xml::XmlNode* System::Xml::XmlNamedNodeMap::SetNamedItem(::System::Xml::XmlNode* node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, node);
}
inline int32_t System::Xml::XmlNamedNodeMap::get_Count() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Xml::XmlNamedNodeMap::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline int32_t System::Xml::XmlNamedNodeMap::FindNodeOffset(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), { "FindNodeOffset", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline int32_t System::Xml::XmlNamedNodeMap::FindNodeOffset(::StringW localName, ::StringW namespaceURI) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), { "FindNodeOffset", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, localName, namespaceURI);
}
inline ::System::Xml::XmlNode* System::Xml::XmlNamedNodeMap::AddNode(::System::Xml::XmlNode* node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, node);
}
inline ::System::Xml::XmlNode* System::Xml::XmlNamedNodeMap::AddNodeForLoad(::System::Xml::XmlNode* node, ::System::Xml::XmlDocument* doc) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, node, doc);
}
inline ::System::Xml::XmlNode* System::Xml::XmlNamedNodeMap::RemoveNodeAt(int32_t i) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, i);
}
inline ::System::Xml::XmlNode* System::Xml::XmlNamedNodeMap::ReplaceNodeAt(int32_t i, ::System::Xml::XmlNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), { "ReplaceNodeAt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, i, node);
}
inline ::System::Xml::XmlNode* System::Xml::XmlNamedNodeMap::InsertNodeAt(int32_t i, ::System::Xml::XmlNode* node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlNamedNodeMap*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, i, node);
}
inline ::System::Xml::XmlNamedNodeMap* System::Xml::XmlNamedNodeMap::New_ctor(::System::Xml::XmlNode* parent) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlNamedNodeMap*>(parent));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Xml::XmlNamedNodeMap::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Xml::XmlNamedNodeMap::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNamedNodeMap::XmlNamedNodeMap() {}
