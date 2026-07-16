#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JPropertyKeyedCollection.hpp"
#include "System/Collections/ObjectModel/zzzz__Collection_1_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JPropertyKeyedCollection_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)()>(&::Newtonsoft::Json::Linq::JPropertyKeyedCollection::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d712f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.AddKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::StringW, ::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JPropertyKeyedCollection::AddKey)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d77514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(),
                                                                                           { "AddKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.ChangeItemKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::Newtonsoft::Json::Linq::JToken*, ::StringW)>(
    &::Newtonsoft::Json::Linq::JPropertyKeyedCollection::ChangeItemKey)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5d77670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(),
                                                             { "ChangeItemKey", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.ClearItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)()>(&::Newtonsoft::Json::Linq::JPropertyKeyedCollection::ClearItems)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d7797c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::StringW)>(&::Newtonsoft::Json::Linq::JPropertyKeyedCollection::Contains)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d733b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.ContainsItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JPropertyKeyedCollection::ContainsItem)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d777fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "ContainsItem", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.EnsureDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)()>(&::Newtonsoft::Json::Linq::JPropertyKeyedCollection::EnsureDictionary)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5d77598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "EnsureDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.GetKeyForItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JPropertyKeyedCollection::GetKeyForItem)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d77888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "GetKeyForItem", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.InsertItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(int32_t, ::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JPropertyKeyedCollection::InsertItem)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d779fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::StringW)>(&::Newtonsoft::Json::Linq::JPropertyKeyedCollection::Remove)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d77a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "Remove", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.RemoveItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(int32_t)>(&::Newtonsoft::Json::Linq::JPropertyKeyedCollection::RemoveItem)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d77b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.RemoveKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::StringW)>(&::Newtonsoft::Json::Linq::JPropertyKeyedCollection::RemoveKey)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d7790c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "RemoveKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.SetItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(int32_t, ::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JPropertyKeyedCollection::SetItem)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5d77c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::StringW)>(
    &::Newtonsoft::Json::Linq::JPropertyKeyedCollection::get_Item)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d77ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.TryGetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::StringW, ::by_ref<::Newtonsoft::Json::Linq::JToken*>)>(
    &::Newtonsoft::Json::Linq::JPropertyKeyedCollection::TryGetValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d71cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(),
                                                             { "TryGetValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Newtonsoft::Json::Linq::JToken*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.get_Keys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)()>(
    &::Newtonsoft::Json::Linq::JPropertyKeyedCollection::get_Keys)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d7348c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "get_Keys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.get_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)()>(
    &::Newtonsoft::Json::Linq::JPropertyKeyedCollection::get_Values)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d77f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "get_Values", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.IndexOfReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JPropertyKeyedCollection::IndexOfReference)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d71998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "IndexOfReference", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyKeyedCollection.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JPropertyKeyedCollection::*)(::Newtonsoft::Json::Linq::JPropertyKeyedCollection*)>(
    &::Newtonsoft::Json::Linq::JPropertyKeyedCollection::Compare)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x5d71590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(),
                                                                                           { "Compare", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>*& Newtonsoft::Json::Linq::JPropertyKeyedCollection::__cordl_internal_get__dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>* const&
Newtonsoft::Json::Linq::JPropertyKeyedCollection::__cordl_internal_get__dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dictionary;
}
constexpr void Newtonsoft::Json::Linq::JPropertyKeyedCollection::__cordl_internal_set__dictionary(::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dictionary = value;
}
inline void Newtonsoft::Json::Linq::JPropertyKeyedCollection::setStaticF_Comparer(::System::Collections::Generic::IEqualityComparer_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::StringW>*, "Comparer", ::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(
      std::forward<::System::Collections::Generic::IEqualityComparer_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::StringW>* Newtonsoft::Json::Linq::JPropertyKeyedCollection::getStaticF_Comparer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::StringW>*, "Comparer", ::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>();
}
inline void Newtonsoft::Json::Linq::JPropertyKeyedCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JPropertyKeyedCollection::AddKey(::StringW key, ::Newtonsoft::Json::Linq::JToken* item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(),
                                                                                         { "AddKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, item);
}
inline void Newtonsoft::Json::Linq::JPropertyKeyedCollection::ChangeItemKey(::Newtonsoft::Json::Linq::JToken* item, ::StringW newKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(),
                                                           { "ChangeItemKey", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, newKey);
}
inline void Newtonsoft::Json::Linq::JPropertyKeyedCollection::ClearItems() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JPropertyKeyedCollection::Contains(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool Newtonsoft::Json::Linq::JPropertyKeyedCollection::ContainsItem(::Newtonsoft::Json::Linq::JToken* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "ContainsItem", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JPropertyKeyedCollection::EnsureDictionary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "EnsureDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Linq::JPropertyKeyedCollection::GetKeyForItem(::Newtonsoft::Json::Linq::JToken* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "GetKeyForItem", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JPropertyKeyedCollection::InsertItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
inline bool Newtonsoft::Json::Linq::JPropertyKeyedCollection::Remove(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "Remove", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline void Newtonsoft::Json::Linq::JPropertyKeyedCollection::RemoveItem(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Newtonsoft::Json::Linq::JPropertyKeyedCollection::RemoveKey(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "RemoveKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void Newtonsoft::Json::Linq::JPropertyKeyedCollection::SetItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JPropertyKeyedCollection::get_Item(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, key);
}
inline bool Newtonsoft::Json::Linq::JPropertyKeyedCollection::TryGetValue(::StringW key, ::by_ref<::Newtonsoft::Json::Linq::JToken*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(),
                                                           { "TryGetValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Newtonsoft::Json::Linq::JToken*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
inline ::System::Collections::Generic::ICollection_1<::StringW>* Newtonsoft::Json::Linq::JPropertyKeyedCollection::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JPropertyKeyedCollection::get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Linq::JPropertyKeyedCollection::IndexOfReference(::Newtonsoft::Json::Linq::JToken* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(), { "IndexOfReference", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, t);
}
inline bool Newtonsoft::Json::Linq::JPropertyKeyedCollection::Compare(::Newtonsoft::Json::Linq::JPropertyKeyedCollection* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>(),
                                                                                         { "Compare", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::Newtonsoft::Json::Linq::JPropertyKeyedCollection* Newtonsoft::Json::Linq::JPropertyKeyedCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JPropertyKeyedCollection::JPropertyKeyedCollection() {}
