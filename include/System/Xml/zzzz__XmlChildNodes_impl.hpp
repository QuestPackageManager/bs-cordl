#pragma once
// IWYU pragma private; include "System/Xml/XmlChildNodes.hpp"
#include "System/Xml/zzzz__XmlNodeList_impl.hpp"
#include "System/Xml/zzzz__XmlChildNodes_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlChildNodes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlChildNodes::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlChildNodes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62b5224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlChildNodes*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlChildNodes.Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlChildNodes::*)(int32_t)>(&::System::Xml::XmlChildNodes::Item)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62b5230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlChildNodes*>(), { ::i2c::class_of<::System::Xml::XmlChildNodes*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlChildNodes.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlChildNodes::*)()>(&::System::Xml::XmlChildNodes::get_Count)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x62b528c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlChildNodes*>(), { ::i2c::class_of<::System::Xml::XmlChildNodes*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlChildNodes.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Xml::XmlChildNodes::*)()>(&::System::Xml::XmlChildNodes::GetEnumerator)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x62b52d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlChildNodes*>(), { ::i2c::class_of<::System::Xml::XmlChildNodes*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNode*& System::Xml::XmlChildNodes::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::System::Xml::XmlNode* const& System::Xml::XmlChildNodes::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void System::Xml::XmlChildNodes::__cordl_internal_set_container(::System::Xml::XmlNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___container = value;
}
inline void System::Xml::XmlChildNodes::_ctor(::System::Xml::XmlNode* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlChildNodes*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::System::Xml::XmlNode* System::Xml::XmlChildNodes::Item(int32_t i) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlChildNodes*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, i);
}
inline int32_t System::Xml::XmlChildNodes::get_Count() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlChildNodes*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Xml::XmlChildNodes::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlChildNodes*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Xml::XmlChildNodes* System::Xml::XmlChildNodes::New_ctor(::System::Xml::XmlNode* container) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlChildNodes*>(container));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlChildNodes::XmlChildNodes() {}
