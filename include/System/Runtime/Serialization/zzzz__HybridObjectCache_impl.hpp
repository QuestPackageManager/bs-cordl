#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/HybridObjectCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__HybridObjectCache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::HybridObjectCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::HybridObjectCache::*)()>(
    &::System::Runtime::Serialization::HybridObjectCache::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fa2ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::HybridObjectCache*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::HybridObjectCache.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::HybridObjectCache::*)(::StringW, ::System::Object*)>(
    &::System::Runtime::Serialization::HybridObjectCache::Add)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5fa2aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::HybridObjectCache*>::get(),
                                                                               "Add", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::HybridObjectCache.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::HybridObjectCache::*)(::StringW)>(
    &::System::Runtime::Serialization::HybridObjectCache::Remove)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fa2c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::HybridObjectCache*>::get(), "Remove",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::HybridObjectCache.GetObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Serialization::HybridObjectCache::*)(::StringW)>(
    &::System::Runtime::Serialization::HybridObjectCache::GetObject)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5fa2d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::HybridObjectCache*>::get(), "GetObject",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::HybridObjectCache.IsObjectReferenced
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::HybridObjectCache::*)(::StringW)>(
    &::System::Runtime::Serialization::HybridObjectCache::IsObjectReferenced)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fa2e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::HybridObjectCache*>::get(), "IsObjectReferenced",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___referencedObjectDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::HybridObjectCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::HybridObjectCache*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::HybridObjectCache::Add(::StringW id, ::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::HybridObjectCache*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, obj);
}
inline void System::Runtime::Serialization::HybridObjectCache::Remove(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::HybridObjectCache*>::get(), "Remove",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline ::System::Object* System::Runtime::Serialization::HybridObjectCache::GetObject(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::HybridObjectCache*>::get(), "GetObject",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, id);
}
inline bool System::Runtime::Serialization::HybridObjectCache::IsObjectReferenced(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::HybridObjectCache*>::get(), "IsObjectReferenced",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id);
}
inline ::System::Runtime::Serialization::HybridObjectCache* System::Runtime::Serialization::HybridObjectCache::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::HybridObjectCache*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::HybridObjectCache::HybridObjectCache() {}
