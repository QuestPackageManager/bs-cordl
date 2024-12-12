#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/BinaryStorageBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache_2_impl.hpp"
#include "UnityEngine/zzzz__Hash128_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__BinaryStorageBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__BinaryStorageBuffer_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
// Ctor Parameters [CppParam { name: "stringId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "separator", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap(
    uint32_t stringId, char16_t separator) noexcept {
  this->stringId = stringId;
  this->separator = separator;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::*)()>(
    &::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4791fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0._FindBestSeparator_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::*)(
    char16_t)>(&::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::_FindBestSeparator_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4792454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0*>::get(),
        "<FindBestSeparator>b__0", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
constexpr char16_t& UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr char16_t const& UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::__cordl_internal_set_s(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
inline void UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::_FindBestSeparator_b__0(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0*>::get(),
      "<FindBestSeparator>b__0", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline ::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0*
UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0::BuiltinTypesSerializer_BinaryStorageBuffer___c__DisplayClass4_0() {}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter::get_Dependencies() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*, false>(
      this, ___internal_method);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter::Serialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer* writer,
                                                                                                            ::System::Object* val) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, writer, val);
}
inline ::System::Object* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter::Deserialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader* reader,
                                                                                                                       ::System::Type* t, uint32_t offset) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, t, offset);
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
template <typename T>
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<
    T>::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
template <typename T>
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<T>::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer.get_Dependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::*)()>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::get_Dependencies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4791aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>::get(),
                                                 "get_Dependencies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::*)(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*, ::System::Type*, uint32_t)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::Deserialize)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x4791ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>::get(), "Deserialize",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer.FindBestSeparator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::*)(
    ::StringW, ::ArrayW<char16_t, ::Array<char16_t>*>)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::FindBestSeparator)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4791e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>::get(),
                                                 "FindBestSeparator", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::*)(
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*, ::System::Object*)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::Serialize)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x4791fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>::get(), "Serialize",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::*)()>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x479244c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::get_Dependencies() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>::get(),
                                               "get_Dependencies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*, false>(
      this, ___internal_method);
}
inline ::System::Object* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::Deserialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader* reader,
                                                                                                                        ::System::Type* t, uint32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>::get(), "Deserialize",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, t, offset);
}
inline char16_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::FindBestSeparator(::StringW str, ::ArrayW<char16_t, ::Array<char16_t>*> seps) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>::get(),
                                               "FindBestSeparator", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, str, seps);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::Serialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer* writer,
                                                                                                             ::System::Object* val) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>::get(), "Serialize",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, writer, val);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int32_t>"
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<
    int32_t>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int32_t>"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int32_t>*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1_int32_t_() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<bool>"
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<
    bool>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<bool>"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<bool>*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1_bool_() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int64_t>"
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<
    int64_t>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int64_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int64_t>"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int64_t>*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1_int64_t_() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<int64_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::StringW>"
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<
    ::StringW>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::StringW>"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::StringW>*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1___StringW_() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::Hash128>"
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<
    ::UnityEngine::Hash128>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::Hash128>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::Hash128>"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::Hash128>* UnityEngine::ResourceManagement::Util::
    BinaryStorageBuffer_BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1___UnityEngine__Hash128_() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::UnityEngine::Hash128>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_BuiltinTypesSerializer::BinaryStorageBuffer_BuiltinTypesSerializer() {}
// Ctor Parameters [CppParam { name: "assemblyId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "classId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::TypeSerializer_BinaryStorageBuffer_Data::TypeSerializer_BinaryStorageBuffer_Data(uint32_t assemblyId, uint32_t classId) noexcept {
  this->assemblyId = assemblyId;
  this->classId = classId;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::TypeSerializer_BinaryStorageBuffer_Data::TypeSerializer_BinaryStorageBuffer_Data() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer.get_Dependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* (
        ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::*)()>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::get_Dependencies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4792464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>::get(),
                                                 "get_Dependencies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::*)(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*, ::System::Type*, uint32_t)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::Deserialize)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x479246c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>::get(), "Deserialize",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::*)(
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*, ::System::Object*)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::Serialize)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x4792620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>::get(), "Serialize",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::*)()>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4792750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::get_Dependencies() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>::get(),
                                               "get_Dependencies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*, false>(
      this, ___internal_method);
}
inline ::System::Object* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::Deserialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader* reader,
                                                                                                                ::System::Type* type, uint32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>::get(), "Deserialize",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, type, offset);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::Serialize(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer* writer,
                                                                                                     ::System::Object* val) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>::get(), "Serialize",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, writer, val);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::System::Type*>"
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<
    ::System::Type*>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::System::Type*>"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::System::Type*>*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter_1___System__Type__() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
constexpr UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::operator ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter"
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::i___UnityEngine__ResourceManagement__Util__BinaryStorageBuffer_ISerializationAdapter() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_TypeSerializer::BinaryStorageBuffer_TypeSerializer() {}
// Ctor Parameters [CppParam { name: "stringId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nextId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_DynamicString::BinaryStorageBuffer_DynamicString(uint32_t stringId, uint32_t nextId) noexcept {
  this->stringId = stringId;
  this->nextId = nextId;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_DynamicString::BinaryStorageBuffer_DynamicString() {}
// Ctor Parameters [CppParam { name: "typeId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "objectId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ObjectTypeData::BinaryStorageBuffer_ObjectTypeData(uint32_t typeId, uint32_t objectId) noexcept {
  this->typeId = typeId;
  this->objectId = objectId;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ObjectTypeData::BinaryStorageBuffer_ObjectTypeData() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::Init)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x4792758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*,
                                                                           ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.AddSerializationAdapter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::AddSerializationAdapter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4792924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "AddSerializationAdapter",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4792930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*,
                                                                           ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.GetBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)()>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::GetBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4792974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "GetBuffer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(
    ::System::IO::Stream*, uint32_t, int32_t,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x479297c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*,
                                                                           ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ReadObjectArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(uint32_t, bool)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObjectArray)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x4792a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadObjectArray",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ReadObjectArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(::System::Type*, uint32_t, bool)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObjectArray)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x4792c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadObjectArray",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ReadObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(uint32_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObject)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4792b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ReadObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(::System::Type*, uint32_t, bool)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObject)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x4792d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ReadString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(uint32_t, char16_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4791dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ReadStringInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(
    uint32_t, ::System::Text::Encoding*, bool)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadStringInternal)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x4793190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(),
                                                 "ReadStringInternal", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ReadAutoEncodedString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(uint32_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadAutoEncodedString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4792f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadAutoEncodedString",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader.ReadDynamicString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::*)(uint32_t, char16_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadDynamicString)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x4792fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadDynamicString",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_get_m_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_get_m_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffer;
}
constexpr void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_set_m_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*&
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_get_m_Adapters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Adapters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* const&
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_get_m_Adapters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Adapters;
}
constexpr void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_set_m_Adapters(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Adapters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*>& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_get_m_Cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cache;
}
constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*> const&
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_get_m_Cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cache;
}
constexpr void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_set_m_Cache(::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Cache = value;
}
constexpr ::System::Text::StringBuilder*& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_get_stringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stringBuilder;
}
constexpr ::System::Text::StringBuilder* const& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_get_stringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stringBuilder;
}
constexpr void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::__cordl_internal_set_stringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stringBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::Init(
    ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t maxCachedObjects,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>
        adapters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*,
                                                                         ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, maxCachedObjects, adapters);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::AddSerializationAdapter(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter* a) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "AddSerializationAdapter",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::_ctor(
    ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t maxCachedObjects,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>
        adapters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*,
                                                                         ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, maxCachedObjects, adapters);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::GetBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "GetBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::_ctor(
    ::System::IO::Stream* inputStream, uint32_t bufferSize, int32_t maxCachedObjects,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>
        adapters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*,
                                                                         ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputStream, bufferSize, maxCachedObjects, adapters);
}
template <typename T> inline bool UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::TryGetCachedValue(uint32_t offset, ::ByRef<T> val) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "TryGetCachedValue",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, offset, val);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObjectArray(uint32_t id, bool cacheValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadObjectArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, id, cacheValues);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObjectArray(::System::Type* t, uint32_t id, bool cacheValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadObjectArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, t, id, cacheValues);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObjectArray(uint32_t id, bool cacheValues) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadObjectArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method, id, cacheValues);
}
inline ::System::Object* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObject(uint32_t id, bool cacheValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, id, cacheValue);
}
template <typename T> inline T UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObject(uint32_t offset, bool cacheValue) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadObject",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, offset, cacheValue);
}
inline ::System::Object* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadObject(::System::Type* t, uint32_t id, bool cacheValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, t, id, cacheValue);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadValueArray(uint32_t id, bool cacheValue) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadValueArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method, id, cacheValue);
}
template <typename T> inline T UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadValue(uint32_t id) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadValue",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, id);
}
inline ::StringW UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadString(uint32_t id, char16_t sep, bool cacheValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, id, sep, cacheValue);
}
inline ::StringW UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadStringInternal(uint32_t offset, ::System::Text::Encoding* enc, bool cacheValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(),
                                               "ReadStringInternal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, offset, enc, cacheValue);
}
inline ::StringW UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadAutoEncodedString(uint32_t id, bool cacheValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadAutoEncodedString",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, id, cacheValue);
}
inline ::StringW UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::ReadDynamicString(uint32_t id, char16_t sep, bool cacheValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>::get(), "ReadDynamicString",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, id, sep, cacheValue);
}
inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::New_ctor(
    ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t maxCachedObjects,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>
        adapters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(data, maxCachedObjects, adapters));
}
inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::New_ctor(
    ::System::IO::Stream* inputStream, uint32_t bufferSize, int32_t maxCachedObjects,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>
        adapters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader*>(inputStream, bufferSize, maxCachedObjects, adapters));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Reader::BinaryStorageBuffer_Reader() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::*)()>(
    &::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x479365c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr uint32_t const& UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::__cordl_internal_set_position(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::__cordl_internal_set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk* UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk::Writer_BinaryStorageBuffer_Chunk() {}
// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "dataSize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "isUnicode", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts::Writer_BinaryStorageBuffer_StringParts(::StringW str, uint32_t dataSize, bool isUnicode) noexcept {
  this->str = str;
  this->dataSize = dataSize;
  this->isUnicode = isUnicode;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts::Writer_BinaryStorageBuffer_StringParts() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)()>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47933c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "get_Length",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(
    int32_t, ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*,
                      ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::_ctor)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x47933d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*,
                                                                           ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.FindChunkWithSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk* (
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(uint32_t)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::FindChunkWithSpace)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x4793664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "FindChunkWithSpace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.WriteInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(
    ::cordl_internals::Ptr<void>, uint32_t, bool)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteInternal)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x47937e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "WriteInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.ReserveInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(uint32_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::ReserveInternal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4793994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "ReserveInternal",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.WriteInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(
    uint32_t, ::cordl_internals::Ptr<void>, uint32_t, bool)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteInternal)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x47939ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "WriteInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.WriteObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(::System::Object*, bool)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteObject)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x4793c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "WriteObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.WriteString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(::StringW, char16_t)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4792430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "WriteString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.WriteStringInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(
    ::StringW, ::System::Text::Encoding*)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteStringInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4793fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(),
                                                 "WriteStringInternal", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.SerializeToByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)()>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::SerializeToByteArray)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x4794014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(),
                                                 "SerializeToByteArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.SerializeToStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(::System::IO::Stream*)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::SerializeToStream)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x4794260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "SerializeToStream",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.IsUnicode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::IsUnicode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x47943e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "IsUnicode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.WriteAutoEncodedString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(::StringW)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteAutoEncodedString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4793f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "WriteAutoEncodedString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.WriteUnicodeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(::StringW)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteUnicodeString)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x479444c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "WriteUnicodeString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.ComputeStringSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::StringW, ::ByRef<bool>)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::ComputeStringSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4794484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "ComputeStringSize",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.RecurseDynamicStringParts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(
    ::ArrayW<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts, ::Array<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts>*>, int32_t,
    char16_t, uint32_t)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::RecurseDynamicStringParts)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x47944d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "RecurseDynamicStringParts",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts,
                                                                           ::Array<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer.WriteDynamicString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::*)(::StringW, char16_t)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteDynamicString)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x4793db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "WriteDynamicString",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_totalBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalBytes;
}
constexpr uint32_t const& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_totalBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalBytes;
}
constexpr void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_set_totalBytes(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalBytes = value;
}
constexpr uint32_t& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_defaulChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaulChunkSize;
}
constexpr uint32_t const& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_defaulChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaulChunkSize;
}
constexpr void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_set_defaulChunkSize(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaulChunkSize = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>*&
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_chunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunks;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>* const&
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_chunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunks;
}
constexpr void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_set_chunks(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chunks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>*& UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_existingValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___existingValues;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>* const&
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_existingValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___existingValues;
}
constexpr void
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_set_existingValues(::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___existingValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*&
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_serializationAdapters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationAdapters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* const&
UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_get_serializationAdapters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationAdapters;
}
constexpr void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::__cordl_internal_set_serializationAdapters(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializationAdapters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::get_Length() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "get_Length",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::_ctor(
    int32_t chunkSize,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>
        adapters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*,
                                                                         ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunkSize, adapters);
}
inline ::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::FindChunkWithSpace(uint32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "FindChunkWithSpace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_Chunk*, false>(this, ___internal_method, length);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteInternal(::cordl_internals::Ptr<void> pData, uint32_t dataSize, bool prefixSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "WriteInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pData, dataSize, prefixSize);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::ReserveInternal(uint32_t dataSize, bool prefixSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "ReserveInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, dataSize, prefixSize);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteInternal(uint32_t id, ::cordl_internals::Ptr<void> pData, uint32_t dataSize, bool prefixSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "WriteInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, pData, dataSize, prefixSize);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::Reserve() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "Reserve",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::Write(::ByRef<T> val) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "Write",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, val);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::Write(T val) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "Write",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, val);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::Write(uint32_t offset, ::ByRef<T> val) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "Write",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, offset, val);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::Write(uint32_t offset, T val) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "Write",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, offset, val);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::Reserve(uint32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "Reserve",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, count);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::Write(::ArrayW<T, ::Array<T>*> values, bool hashElements) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "Write",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, values, hashElements);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::Write(uint32_t offset, ::ArrayW<T, ::Array<T>*> values, bool hashElements) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "Write",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, offset, values, hashElements);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteObjects(::System::Collections::Generic::IEnumerable_1<T>* objs, bool serizalizeTypeData) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "WriteObjects",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, objs, serizalizeTypeData);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteObject(::System::Object* obj, bool serializeTypeData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "WriteObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, obj, serializeTypeData);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteString(::StringW str, char16_t sep) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "WriteString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, str, sep);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteStringInternal(::StringW val, ::System::Text::Encoding* enc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(),
                                               "WriteStringInternal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, val, enc);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::SerializeToByteArray() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(),
                                               "SerializeToByteArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::SerializeToStream(::System::IO::Stream* str) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "SerializeToStream",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, str);
}
inline bool UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::IsUnicode(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "IsUnicode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteAutoEncodedString(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "WriteAutoEncodedString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, str);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteUnicodeString(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "WriteUnicodeString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, str);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::ComputeStringSize(::StringW str, ::ByRef<bool> isUnicode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "ComputeStringSize",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, str, isUnicode);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::RecurseDynamicStringParts(
    ::ArrayW<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts, ::Array<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts>*> parts,
    int32_t index, char16_t sep, uint32_t minSize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "RecurseDynamicStringParts",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts,
                                                                                                     ::Array<::UnityEngine::ResourceManagement::Util::Writer_BinaryStorageBuffer_StringParts>*>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, parts, index, sep, minSize);
}
inline uint32_t UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::WriteDynamicString(::StringW str, char16_t sep) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>::get(), "WriteDynamicString",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, str, sep);
}
inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::New_ctor(
    int32_t chunkSize,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>
        adapters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer*>(chunkSize, adapters));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_Writer::BinaryStorageBuffer_Writer() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer.ComputeHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, uint64_t, ::cordl_internals::Ptr<::UnityEngine::Hash128>)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ComputeHash)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4791258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>::get(), "ComputeHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::Hash128>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer.AddSerializationAdapter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*,
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*, bool)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::AddSerializationAdapter)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x4791270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>::get(), "AddSerializationAdapter",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer.GetSerializationAdapter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*, ::System::Type*,
    ::ByRef<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::GetSerializationAdapter)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x479186c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>::get(), "GetSerializationAdapter",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::*)()>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4791aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ComputeHash(::cordl_internals::Ptr<void> pData, uint64_t size, ::cordl_internals::Ptr<::UnityEngine::Hash128> hash) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>::get(), "ComputeHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::Hash128>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pData, size, hash);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::AddSerializationAdapter(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* serializationAdapters,
    ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter* adapter, bool forceOverride) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>::get(), "AddSerializationAdapter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, serializationAdapters, adapter, forceOverride);
}
inline bool UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::GetSerializationAdapter(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>* serializationAdapters, ::System::Type* t,
    ::ByRef<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*> adapter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>::get(), "GetSerializationAdapter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer_ISerializationAdapter*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, serializationAdapters, t, adapter);
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BinaryStorageBuffer() {}
