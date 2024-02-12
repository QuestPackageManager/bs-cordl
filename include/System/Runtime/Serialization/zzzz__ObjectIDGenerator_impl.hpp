#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectIDGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectIDGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectIDGenerator::*)()>(
    &::System::Runtime::Serialization::ObjectIDGenerator::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x24d9558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectIDGenerator.FindElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::ObjectIDGenerator::*)(::System::Object*, ByRef<bool>)>(
    &::System::Runtime::Serialization::ObjectIDGenerator::FindElement)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x24d9630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                                                                               "FindElement", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectIDGenerator.GetId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::ObjectIDGenerator::*)(::System::Object*, ByRef<bool>)>(
    &::System::Runtime::Serialization::ObjectIDGenerator::GetId)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x24d96f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectIDGenerator.HasId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::ObjectIDGenerator::*)(::System::Object*, ByRef<bool>)>(
    &::System::Runtime::Serialization::ObjectIDGenerator::HasId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x24d9b2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectIDGenerator.Rehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectIDGenerator::*)()>(
    &::System::Runtime::Serialization::ObjectIDGenerator::Rehash)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x24d9878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                                                                               "Rehash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Serialization::ObjectIDGenerator::__cordl_internal_get_m_currentCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentCount;
}
constexpr int32_t const& System::Runtime::Serialization::ObjectIDGenerator::__cordl_internal_get_m_currentCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentCount;
}
constexpr void System::Runtime::Serialization::ObjectIDGenerator::__cordl_internal_set_m_currentCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_currentCount = value;
}
constexpr int32_t& System::Runtime::Serialization::ObjectIDGenerator::__cordl_internal_get_m_currentSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentSize;
}
constexpr int32_t const& System::Runtime::Serialization::ObjectIDGenerator::__cordl_internal_get_m_currentSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentSize;
}
constexpr void System::Runtime::Serialization::ObjectIDGenerator::__cordl_internal_set_m_currentSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_currentSize = value;
}
constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& System::Runtime::Serialization::ObjectIDGenerator::__cordl_internal_get_m_ids() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ids;
}
constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& System::Runtime::Serialization::ObjectIDGenerator::__cordl_internal_get_m_ids() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ids;
}
constexpr void System::Runtime::Serialization::ObjectIDGenerator::__cordl_internal_set_m_ids(::ArrayW<int64_t, ::Array<int64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ids)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Runtime::Serialization::ObjectIDGenerator::__cordl_internal_get_m_objs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_objs;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Runtime::Serialization::ObjectIDGenerator::__cordl_internal_get_m_objs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_objs;
}
constexpr void System::Runtime::Serialization::ObjectIDGenerator::__cordl_internal_set_m_objs(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_objs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::ObjectIDGenerator::setStaticF_sizes(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "sizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Runtime::Serialization::ObjectIDGenerator::getStaticF_sizes() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "sizes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get>();
}
inline ::System::Runtime::Serialization::ObjectIDGenerator* System::Runtime::Serialization::ObjectIDGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::ObjectIDGenerator*>());
}
inline void System::Runtime::Serialization::ObjectIDGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::ObjectIDGenerator::FindElement(::System::Object* obj, ByRef<bool> found) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                                                                             "FindElement", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj, found);
}
inline int64_t System::Runtime::Serialization::ObjectIDGenerator::GetId(::System::Object* obj, ByRef<bool> firstTime) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, obj, firstTime);
}
inline int64_t System::Runtime::Serialization::ObjectIDGenerator::HasId(::System::Object* obj, ByRef<bool> firstTime) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, obj, firstTime);
}
inline void System::Runtime::Serialization::ObjectIDGenerator::Rehash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectIDGenerator*>::get(),
                                                                             "Rehash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ObjectIDGenerator::ObjectIDGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
