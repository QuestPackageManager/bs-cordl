#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SurrogateHashtable.hpp"
#include "System/Collections/zzzz__Hashtable_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SurrogateHashtable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateHashtable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SurrogateHashtable::*)(int32_t)>(
    &::System::Runtime::Serialization::SurrogateHashtable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cf99f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateHashtable*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateHashtable.KeyEquals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::SurrogateHashtable::*)(::System::Object*, ::System::Object*)>(
    &::System::Runtime::Serialization::SurrogateHashtable::KeyEquals)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3cf9d8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateHashtable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateHashtable*>::get(), 36));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::SurrogateHashtable::_ctor(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateHashtable*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
inline bool System::Runtime::Serialization::SurrogateHashtable::KeyEquals(::System::Object* key, ::System::Object* item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateHashtable*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, item);
}
inline ::System::Runtime::Serialization::SurrogateHashtable* System::Runtime::Serialization::SurrogateHashtable::New_ctor(int32_t size) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::SurrogateHashtable*>(size));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SurrogateHashtable::SurrogateHashtable() {}
