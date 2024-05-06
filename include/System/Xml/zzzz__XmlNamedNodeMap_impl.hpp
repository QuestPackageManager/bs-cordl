#pragma once
#include "System/Xml/zzzz__XmlNamedNodeMap_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlNamedNodeMap_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlNamedNodeMap_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::*)(::System::Object*)>(
    &::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2e9c54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::*)()>(
    &::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2e9c57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator*>::get(),
                                                 "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::*)()>(
    &::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e9c5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::*)()>(
    &::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e9c5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator*>::get(),
                                                 "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr ::System::Object*& GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::__cordl_internal_get_loneValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loneValue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::__cordl_internal_get_loneValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loneValue;
}
constexpr void GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::__cordl_internal_set_loneValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___loneValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr int32_t const& GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::__cordl_internal_set_position(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
inline ::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator* GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::New_ctor(::System::Object* value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator*>(value));
}
inline void GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::_ctor(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator*>::get(),
                                               "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator*>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator::__XmlNamedNodeMap__SmallXmlNodeList__SingleObjectEnumerator() {}
//  Writing Method size for method: ::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::*)()>(
    &::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::get_Count)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2e9baf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList>::get(),
                                                                               "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::*)(int32_t)>(
    &::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::get_Item)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2e9b7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList>::get(), "get_Item",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::*)(::System::Object*)>(
    &::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::Add)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2e9be18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList.RemoveAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::*)(int32_t)>(
    &::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::RemoveAt)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2e9c144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList>::get(), "RemoveAt",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList.Insert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::*)(int32_t, ::System::Object*)>(
    &::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::Insert)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2e9c3a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList>::get(), "Insert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::*)()>(
    &::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::GetEnumerator)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2e9bba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList>::get(),
                                                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList>::get(),
                                                                             "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, index);
}
inline void System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::Add(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList>::get(), "RemoveAt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::Insert(int32_t index, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList>::get(), "Insert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline ::System::Collections::IEnumerator* System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "field", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::__XmlNamedNodeMap__SmallXmlNodeList(::System::Object* field) noexcept {
  this->field = field;
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList::__XmlNamedNodeMap__SmallXmlNodeList() {}
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNamedNodeMap::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlNamedNodeMap::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e9b634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.GetNamedItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlNamedNodeMap::*)(::StringW)>(
    &::System::Xml::XmlNamedNodeMap::GetNamedItem)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2e9b65c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.SetNamedItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlNamedNodeMap::*)(::System::Xml::XmlNode*)>(
    &::System::Xml::XmlNamedNodeMap::SetNamedItem)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e9b8b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlNamedNodeMap::*)()>(&::System::Xml::XmlNamedNodeMap::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9baec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Xml::XmlNamedNodeMap::*)()>(
    &::System::Xml::XmlNamedNodeMap::GetEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9bb98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.FindNodeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlNamedNodeMap::*)(::StringW)>(&::System::Xml::XmlNamedNodeMap::FindNodeOffset)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2e9b6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), "FindNodeOffset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.FindNodeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlNamedNodeMap::*)(::StringW, ::StringW)>(&::System::Xml::XmlNamedNodeMap::FindNodeOffset)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2e9b974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), "FindNodeOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.AddNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlNamedNodeMap::*)(::System::Xml::XmlNode*)>(
    &::System::Xml::XmlNamedNodeMap::AddNode)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2e9bca0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.AddNodeForLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlNamedNodeMap::*)(::System::Xml::XmlNode*, ::System::Xml::XmlDocument*)>(
    &::System::Xml::XmlNamedNodeMap::AddNodeForLoad)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2e9bf34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.RemoveNodeAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlNamedNodeMap::*)(int32_t)>(
    &::System::Xml::XmlNamedNodeMap::RemoveNodeAt)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2e9bfdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.ReplaceNodeAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlNamedNodeMap::*)(int32_t, ::System::Xml::XmlNode*)>(
    &::System::Xml::XmlNamedNodeMap::ReplaceNodeAt)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2e9ba98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), "ReplaceNodeAt", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNamedNodeMap.InsertNodeAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlNamedNodeMap::*)(int32_t, ::System::Xml::XmlNode*)>(
    &::System::Xml::XmlNamedNodeMap::InsertNodeAt)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2e9c228;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), 12));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Xml::XmlNamedNodeMap::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Xml::XmlNamedNodeMap::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr ::System::Xml::XmlNode*& System::Xml::XmlNamedNodeMap::__cordl_internal_get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> const& System::Xml::XmlNamedNodeMap::__cordl_internal_get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr void System::Xml::XmlNamedNodeMap::__cordl_internal_set_parent(::System::Xml::XmlNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList& System::Xml::XmlNamedNodeMap::__cordl_internal_get_nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr ::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList const& System::Xml::XmlNamedNodeMap::__cordl_internal_get_nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr void System::Xml::XmlNamedNodeMap::__cordl_internal_set_nodes(::System::Xml::__XmlNamedNodeMap__SmallXmlNodeList value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nodes = value;
}
inline ::System::Xml::XmlNamedNodeMap* System::Xml::XmlNamedNodeMap::New_ctor(::System::Xml::XmlNode* parent) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlNamedNodeMap*>(parent));
}
inline void System::Xml::XmlNamedNodeMap::_ctor(::System::Xml::XmlNode* parent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent);
}
inline ::System::Xml::XmlNode* System::Xml::XmlNamedNodeMap::GetNamedItem(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method, name);
}
inline ::System::Xml::XmlNode* System::Xml::XmlNamedNodeMap::SetNamedItem(::System::Xml::XmlNode* node) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method, node);
}
inline int32_t System::Xml::XmlNamedNodeMap::get_Count() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Xml::XmlNamedNodeMap::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlNamedNodeMap::FindNodeOffset(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), "FindNodeOffset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name);
}
inline int32_t System::Xml::XmlNamedNodeMap::FindNodeOffset(::StringW localName, ::StringW namespaceURI) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), "FindNodeOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, localName, namespaceURI);
}
inline ::System::Xml::XmlNode* System::Xml::XmlNamedNodeMap::AddNode(::System::Xml::XmlNode* node) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method, node);
}
inline ::System::Xml::XmlNode* System::Xml::XmlNamedNodeMap::AddNodeForLoad(::System::Xml::XmlNode* node, ::System::Xml::XmlDocument* doc) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method, node, doc);
}
inline ::System::Xml::XmlNode* System::Xml::XmlNamedNodeMap::RemoveNodeAt(int32_t i) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method, i);
}
inline ::System::Xml::XmlNode* System::Xml::XmlNamedNodeMap::ReplaceNodeAt(int32_t i, ::System::Xml::XmlNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), "ReplaceNodeAt", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method, i, node);
}
inline ::System::Xml::XmlNode* System::Xml::XmlNamedNodeMap::InsertNodeAt(int32_t i, ::System::Xml::XmlNode* node) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNamedNodeMap*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*, false>(this, ___internal_method, i, node);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNamedNodeMap::XmlNamedNodeMap() {}
