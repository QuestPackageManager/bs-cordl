#pragma once
#include "System/zzzz__SystemException_impl.hpp"
#include "System/Reflection/zzzz__ReflectionTypeLoadException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::Reflection::ReflectionTypeLoadException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::ReflectionTypeLoadException::*)(
    ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::ArrayW<::System::Exception*, ::Array<::System::Exception*>*>)>(&::System::Reflection::ReflectionTypeLoadException::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24e9a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Exception*, ::Array<::System::Exception*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ReflectionTypeLoadException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::ReflectionTypeLoadException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::ReflectionTypeLoadException::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x24e9ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ReflectionTypeLoadException.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::ReflectionTypeLoadException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::ReflectionTypeLoadException::GetObjectData)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x24e9c0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ReflectionTypeLoadException.get_LoaderExceptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> (
    ::System::Reflection::ReflectionTypeLoadException::*)()>(&::System::Reflection::ReflectionTypeLoadException::get_LoaderExceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e9d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(),
                                                                               "get_LoaderExceptions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ReflectionTypeLoadException.get_Message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::ReflectionTypeLoadException::*)()>(
    &::System::Reflection::ReflectionTypeLoadException::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e9d3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ReflectionTypeLoadException.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::ReflectionTypeLoadException::*)()>(
    &::System::Reflection::ReflectionTypeLoadException::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e9e7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ReflectionTypeLoadException.CreateString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::ReflectionTypeLoadException::*)(bool)>(
    &::System::Reflection::ReflectionTypeLoadException::CreateString)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x24e9d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(), "CreateString",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Reflection::ReflectionTypeLoadException::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& System::Reflection::ReflectionTypeLoadException::__get__Types_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Types_k__BackingField;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& System::Reflection::ReflectionTypeLoadException::__get__Types_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Types_k__BackingField;
}
constexpr void System::Reflection::ReflectionTypeLoadException::__set__Types_k__BackingField(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Types_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Exception*, ::Array<::System::Exception*>*>& System::Reflection::ReflectionTypeLoadException::__get__LoaderExceptions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LoaderExceptions_k__BackingField;
}
constexpr ::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> const& System::Reflection::ReflectionTypeLoadException::__get__LoaderExceptions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LoaderExceptions_k__BackingField;
}
constexpr void System::Reflection::ReflectionTypeLoadException::__set__LoaderExceptions_k__BackingField(::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LoaderExceptions_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Reflection::ReflectionTypeLoadException* System::Reflection::ReflectionTypeLoadException::New_ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> classes,
                                                                                                                    ::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> exceptions) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::ReflectionTypeLoadException*>(classes, exceptions));
}
inline void System::Reflection::ReflectionTypeLoadException::_ctor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> classes,
                                                                   ::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> exceptions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Exception*, ::Array<::System::Exception*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, classes, exceptions);
}
inline ::System::Reflection::ReflectionTypeLoadException* System::Reflection::ReflectionTypeLoadException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::ReflectionTypeLoadException*>(info, context));
}
inline void System::Reflection::ReflectionTypeLoadException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Reflection::ReflectionTypeLoadException::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> System::Reflection::ReflectionTypeLoadException::get_LoaderExceptions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(),
                                                                             "get_LoaderExceptions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Exception*, ::Array<::System::Exception*>*>, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::ReflectionTypeLoadException::get_Message() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::ReflectionTypeLoadException::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::ReflectionTypeLoadException::CreateString(bool isMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ReflectionTypeLoadException*>::get(), "CreateString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, isMessage);
}
// Ctor Parameters []
constexpr ::System::Reflection::ReflectionTypeLoadException::ReflectionTypeLoadException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
