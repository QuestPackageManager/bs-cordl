#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\HybridObjectCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__HybridObjectCache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::HybridObjectCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::HybridObjectCache::*)()>(&::System::Runtime::Serialization::HybridObjectCache::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6157640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::HybridObjectCache*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::HybridObjectCache.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::HybridObjectCache::*)(::StringW, ::System::Object*)>(
    &::System::Runtime::Serialization::HybridObjectCache::Add)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6157644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::HybridObjectCache*>(),
                                                                                           { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::HybridObjectCache.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::HybridObjectCache::*)(::StringW)>(&::System::Runtime::Serialization::HybridObjectCache::Remove)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61577f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::HybridObjectCache*>(), { "Remove", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::HybridObjectCache.GetObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::HybridObjectCache::*)(::StringW)>(
    &::System::Runtime::Serialization::HybridObjectCache::GetObject)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6157860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::HybridObjectCache*>(), { "GetObject", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::HybridObjectCache.IsObjectReferenced
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::HybridObjectCache::*)(::StringW)>(
    &::System::Runtime::Serialization::HybridObjectCache::IsObjectReferenced)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x61579d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::HybridObjectCache*>(), { "IsObjectReferenced", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*& System::Runtime::Serialization::HybridObjectCache::__cordl_internal_get_objectDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* const& System::Runtime::Serialization::HybridObjectCache::__cordl_internal_get_objectDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectDictionary;
}
constexpr void System::Runtime::Serialization::HybridObjectCache::__cordl_internal_set_objectDictionary(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectDictionary = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*& System::Runtime::Serialization::HybridObjectCache::__cordl_internal_get_referencedObjectDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referencedObjectDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* const&
System::Runtime::Serialization::HybridObjectCache::__cordl_internal_get_referencedObjectDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referencedObjectDictionary;
}
constexpr void System::Runtime::Serialization::HybridObjectCache::__cordl_internal_set_referencedObjectDictionary(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___referencedObjectDictionary = value;
}
inline void System::Runtime::Serialization::HybridObjectCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::HybridObjectCache*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::HybridObjectCache::Add(::StringW id, ::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::HybridObjectCache*>(), { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, obj);
}
inline void System::Runtime::Serialization::HybridObjectCache::Remove(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::HybridObjectCache*>(), { "Remove", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::System::Object* System::Runtime::Serialization::HybridObjectCache::GetObject(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::HybridObjectCache*>(), { "GetObject", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, id);
}
inline bool System::Runtime::Serialization::HybridObjectCache::IsObjectReferenced(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::HybridObjectCache*>(), { "IsObjectReferenced", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline ::System::Runtime::Serialization::HybridObjectCache* System::Runtime::Serialization::HybridObjectCache::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::HybridObjectCache*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::HybridObjectCache::HybridObjectCache() {}
