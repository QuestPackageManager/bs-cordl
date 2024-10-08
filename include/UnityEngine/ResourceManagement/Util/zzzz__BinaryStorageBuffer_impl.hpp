#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/BinaryStorageBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache_2_impl.hpp"
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
constexpr ::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer__ObjectToStringRemap::__BinaryStorageBuffer__BuiltinTypesSerializer__ObjectToStringRemap(uint32_t stringId,
                                                                                                                                                                    char16_t separator) noexcept {
  this->stringId = stringId;
  this->separator = separator;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer__ObjectToStringRemap::__BinaryStorageBuffer__BuiltinTypesSerializer__ObjectToStringRemap() {}
//  Writing Method size for method: ::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x471c5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0._FindBestSeparator_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0::*)(char16_t)>(
    &::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0::_FindBestSeparator_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x471ca28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0*>::get(), "<FindBestSeparator>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
constexpr char16_t& GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr char16_t const& GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0::__cordl_internal_set_s(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
inline ::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0* GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0*>());
}
inline void GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0::_FindBestSeparator_b__0(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0*>::get(), "<FindBestSeparator>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0::__BinaryStorageBuffer__BuiltinTypesSerializer____c__DisplayClass4_0() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer.get_Dependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::*)()>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::get_Dependencies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x471c080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer*>::get(),
                                                 "get_Dependencies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::*)(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*, ::System::Type*, uint32_t)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::Deserialize)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x471c088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer*>::get(), "Deserialize",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer.FindBestSeparator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::*)(
    ::StringW, ::ArrayW<char16_t, ::Array<char16_t>*>)>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::FindBestSeparator)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x471c3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer*>::get(),
                                                 "FindBestSeparator", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::*)(
    ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*, ::System::Object*)>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::Serialize)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x471c5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer*>::get(), "Serialize",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::*)()>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x471ca20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int32_t>"
constexpr UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<
    int32_t>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int32_t>"
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int32_t>*
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter_1_int32_t_() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter"
constexpr UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::
    __BinaryStorageBuffer__ISerializationAdapter*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter"
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<bool>"
constexpr UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<
    bool>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<bool>"
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<bool>*
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter_1_bool_() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int64_t>"
constexpr UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<
    int64_t>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int64_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int64_t>"
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int64_t>*
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter_1_int64_t_() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<int64_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::StringW>"
constexpr UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<
    ::StringW>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::StringW>"
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::StringW>*
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter_1___StringW_() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::UnityEngine::Hash128>"
constexpr UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<
    ::UnityEngine::Hash128>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::UnityEngine::Hash128>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::UnityEngine::Hash128>"
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::UnityEngine::Hash128>* UnityEngine::ResourceManagement::Util::
    __BinaryStorageBuffer__BuiltinTypesSerializer::i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter_1___UnityEngine__Hash128_() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::UnityEngine::Hash128>*>(static_cast<void*>(this));
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::get_Dependencies() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer*>::get(),
                                               "get_Dependencies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*, false>(
      this, ___internal_method);
}
inline ::System::Object*
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::Deserialize(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader* reader, ::System::Type* t,
                                                                                                  uint32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer*>::get(), "Deserialize",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, t, offset);
}
inline char16_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::FindBestSeparator(::StringW str, ::ArrayW<char16_t, ::Array<char16_t>*> seps) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer*>::get(),
                                               "FindBestSeparator", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, str, seps);
}
inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::Serialize(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer* writer,
                                                                                                                ::System::Object* val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer*>::get(), "Serialize",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, writer, val);
}
inline ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer* UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer*>());
}
inline void UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__BuiltinTypesSerializer::__BinaryStorageBuffer__BuiltinTypesSerializer() {}
// Ctor Parameters [CppParam { name: "assemblyId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "classId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BinaryStorageBuffer__TypeSerializer__Data::__BinaryStorageBuffer__TypeSerializer__Data(uint32_t assemblyId, uint32_t classId) noexcept {
  this->assemblyId = assemblyId;
  this->classId = classId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BinaryStorageBuffer__TypeSerializer__Data::__BinaryStorageBuffer__TypeSerializer__Data() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer.get_Dependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* (
        ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::*)()>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::get_Dependencies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x471ca38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer*>::get(),
                                                 "get_Dependencies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::*)(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*, ::System::Type*, uint32_t)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::Deserialize)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x471ca40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer*>::get(), "Deserialize",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::*)(
    ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*, ::System::Object*)>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::Serialize)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x471cbf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer*>::get(), "Serialize",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::*)()>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x471cd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::System::Type*>"
constexpr UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<
    ::System::Type*>*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::System::Type*>"
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::System::Type*>*
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter_1___System__Type__() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter"
constexpr UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter"
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>(static_cast<void*>(this));
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::get_Dependencies() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer*>::get(),
                                               "get_Dependencies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*, false>(
      this, ___internal_method);
}
inline ::System::Object* UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::Deserialize(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader* reader,
                                                                                                                   ::System::Type* type, uint32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer*>::get(), "Deserialize",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, type, offset);
}
inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::Serialize(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer* writer,
                                                                                                        ::System::Object* val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer*>::get(), "Serialize",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, writer, val);
}
inline ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer* UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer*>());
}
inline void UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__TypeSerializer::__BinaryStorageBuffer__TypeSerializer() {}
// Ctor Parameters [CppParam { name: "stringId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nextId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__DynamicString::__BinaryStorageBuffer__DynamicString(uint32_t stringId, uint32_t nextId) noexcept {
  this->stringId = stringId;
  this->nextId = nextId;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__DynamicString::__BinaryStorageBuffer__DynamicString() {}
// Ctor Parameters [CppParam { name: "typeId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "objectId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ObjectTypeData::__BinaryStorageBuffer__ObjectTypeData(uint32_t typeId, uint32_t objectId) noexcept {
  this->typeId = typeId;
  this->objectId = objectId;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ObjectTypeData::__BinaryStorageBuffer__ObjectTypeData() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter.get_Dependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter::*)()>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter::get_Dependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter::*)(
    ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*, ::System::Object*)>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter::*)(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*, ::System::Type*, uint32_t)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>::get(), 2));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter::get_Dependencies() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*, false>(
      this, ___internal_method);
}
inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter::Serialize(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer* writer,
                                                                                                               ::System::Object* val) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, writer, val);
}
inline ::System::Object*
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter::Deserialize(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader* reader, ::System::Type* t,
                                                                                                 uint32_t offset) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, t, offset);
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter"
template <typename T>
constexpr UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<
    T>::operator ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter"
template <typename T>
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter_1<T>::i___UnityEngine__ResourceManagement__Util____BinaryStorageBuffer__ISerializationAdapter() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*,
             ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>)>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::Init)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x471cd2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*,
                                                                           ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader.AddSerializationAdapter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::*)(
    ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*)>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::AddSerializationAdapter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x471cef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "AddSerializationAdapter",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*,
             ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>)>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x471cf04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*,
                                                                           ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader.GetBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::*)()>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::GetBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x471cf48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "GetBuffer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::*)(
    ::System::IO::Stream*, uint32_t, int32_t,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*,
             ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>)>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x471cf50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*,
                                                                           ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader.ReadObjectArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (
    ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::*)(uint32_t, bool)>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadObjectArray)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x471d034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadObjectArray",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader.ReadObjectArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::*)(::System::Type*, uint32_t, bool)>(
        &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadObjectArray)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x471d228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadObjectArray",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader.ReadObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::*)(uint32_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadObject)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x471d170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader.ReadObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::*)(::System::Type*, uint32_t, bool)>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadObject)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x471d36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader.ReadString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::*)(uint32_t, char16_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x471c3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader.ReadStringInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::*)(
    uint32_t, ::System::Text::Encoding*, bool)>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadStringInternal)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x471d764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(),
                                                 "ReadStringInternal", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader.ReadAutoEncodedString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::*)(uint32_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadAutoEncodedString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x471d568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadAutoEncodedString",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader.ReadDynamicString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::*)(uint32_t, char16_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadDynamicString)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x471d5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadDynamicString",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::__cordl_internal_get_m_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::__cordl_internal_get_m_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffer;
}
constexpr void UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::__cordl_internal_set_m_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*&
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::__cordl_internal_get_m_Adapters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Adapters;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*> const&
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::__cordl_internal_get_m_Adapters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Adapters;
}
constexpr void UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::__cordl_internal_set_m_Adapters(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Adapters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*>& UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::__cordl_internal_get_m_Cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cache;
}
constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*> const&
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::__cordl_internal_get_m_Cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cache;
}
constexpr void
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::__cordl_internal_set_m_Cache(::UnityEngine::ResourceManagement::Util::LRUCache_2<uint32_t, ::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Cache = value;
}
constexpr ::System::Text::StringBuilder*& UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::__cordl_internal_get_stringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stringBuilder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::__cordl_internal_get_stringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stringBuilder;
}
constexpr void UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::__cordl_internal_set_stringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stringBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::Init(
    ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t maxCachedObjects,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>
        adapters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*,
                                                                         ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, maxCachedObjects, adapters);
}
inline void UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::AddSerializationAdapter(::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter* a) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "AddSerializationAdapter",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a);
}
/// @param maxCachedObjects: int32_t (default: static_cast<int32_t>(0x400))
inline ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader* UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::New_ctor(
    ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t maxCachedObjects,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>
        adapters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>(data, maxCachedObjects, adapters));
}
/// @param maxCachedObjects: int32_t (default: static_cast<int32_t>(0x400))
inline void UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::_ctor(
    ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t maxCachedObjects,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>
        adapters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*,
                                                                         ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, maxCachedObjects, adapters);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::GetBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "GetBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader* UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::New_ctor(
    ::System::IO::Stream* inputStream, uint32_t bufferSize, int32_t maxCachedObjects,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>
        adapters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>(inputStream, bufferSize, maxCachedObjects, adapters));
}
inline void UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::_ctor(
    ::System::IO::Stream* inputStream, uint32_t bufferSize, int32_t maxCachedObjects,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>
        adapters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*,
                                                                         ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputStream, bufferSize, maxCachedObjects, adapters);
}
template <typename T> inline bool UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::TryGetCachedValue(uint32_t offset, ByRef<T> val) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "TryGetCachedValue",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, offset, val);
}
/// @param cacheValues: bool (default: true)
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadObjectArray(uint32_t id, bool cacheValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadObjectArray",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, id, cacheValues);
}
/// @param cacheValues: bool (default: true)
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadObjectArray(::System::Type* t, uint32_t id,
                                                                                                                                                      bool cacheValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadObjectArray",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, t, id, cacheValues);
}
/// @param cacheValues: bool (default: true)
template <typename T> inline ::ArrayW<T, ::Array<T>*> UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadObjectArray(uint32_t id, bool cacheValues) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadObjectArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method, id, cacheValues);
}
/// @param cacheValue: bool (default: true)
inline ::System::Object* UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadObject(uint32_t id, bool cacheValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, id, cacheValue);
}
/// @param cacheValue: bool (default: true)
template <typename T> inline T UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadObject(uint32_t offset, bool cacheValue) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadObject",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, offset, cacheValue);
}
/// @param cacheValue: bool (default: true)
inline ::System::Object* UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadObject(::System::Type* t, uint32_t id, bool cacheValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, t, id, cacheValue);
}
/// @param cacheValue: bool (default: true)
template <typename T> inline ::ArrayW<T, ::Array<T>*> UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadValueArray(uint32_t id, bool cacheValue) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadValueArray",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method, id, cacheValue);
}
template <typename T> inline T UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadValue(uint32_t id) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadValue",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, id);
}
/// @param sep: char16_t (default: u'\u{0}')
/// @param cacheValue: bool (default: true)
inline ::StringW UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadString(uint32_t id, char16_t sep, bool cacheValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, id, sep, cacheValue);
}
/// @param cacheValue: bool (default: true)
inline ::StringW UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadStringInternal(uint32_t offset, ::System::Text::Encoding* enc, bool cacheValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(),
                                               "ReadStringInternal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, offset, enc, cacheValue);
}
inline ::StringW UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadAutoEncodedString(uint32_t id, bool cacheValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadAutoEncodedString",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, id, cacheValue);
}
inline ::StringW UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::ReadDynamicString(uint32_t id, char16_t sep, bool cacheValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader*>::get(), "ReadDynamicString",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, id, sep, cacheValue);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Reader::__BinaryStorageBuffer__Reader() {}
//  Writing Method size for method: ::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk::*)()>(
    &::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x471dc30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint32_t& GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr uint32_t const& GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk::__cordl_internal_set_position(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk::__cordl_internal_set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk* GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk*>());
}
inline void GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk::__BinaryStorageBuffer__Writer__Chunk() {}
// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "dataSize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "isUnicode", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts::__BinaryStorageBuffer__Writer__StringParts(::StringW str, uint32_t dataSize, bool isUnicode) noexcept {
  this->str = str;
  this->dataSize = dataSize;
  this->isUnicode = isUnicode;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts::__BinaryStorageBuffer__Writer__StringParts() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::*)()>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x471d99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "get_Length",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::*)(
    int32_t, ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*,
                      ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::_ctor)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x471d9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*,
                                                                           ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer.FindChunkWithSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk* (
    ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::*)(uint32_t)>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::FindChunkWithSpace)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x471dc38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "FindChunkWithSpace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer.WriteInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::*)(
    ::cordl_internals::Ptr<void>, uint32_t, bool)>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteInternal)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x471ddb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "WriteInternal",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer.ReserveInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::*)(uint32_t, bool)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::ReserveInternal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x471df68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "ReserveInternal",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer.WriteInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::*)(
    uint32_t, ::cordl_internals::Ptr<void>, uint32_t, bool)>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteInternal)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x471dfc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "WriteInternal",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer.WriteObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::*)(::System::Object*, bool)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteObject)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x471e240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "WriteObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer.WriteString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::*)(::StringW, char16_t)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x471ca04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "WriteString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer.WriteStringInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::*)(
    ::StringW, ::System::Text::Encoding*)>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteStringInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x471e58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(),
                                                 "WriteStringInternal", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer.SerializeToByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::*)()>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::SerializeToByteArray)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x471e5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(),
                                                 "SerializeToByteArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer.SerializeToStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::*)(::System::IO::Stream*)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::SerializeToStream)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x471e834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "SerializeToStream",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer.IsUnicode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::IsUnicode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x471e9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "IsUnicode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer.WriteAutoEncodedString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::*)(::StringW)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteAutoEncodedString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x471e4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "WriteAutoEncodedString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer.WriteUnicodeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::*)(::StringW)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteUnicodeString)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x471ea20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "WriteUnicodeString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer.ComputeStringSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::StringW, ByRef<bool>)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::ComputeStringSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x471ea58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "ComputeStringSize",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer.RecurseDynamicStringParts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::*)(
    ::ArrayW<::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts, ::Array<::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts>*>, int32_t, char16_t, uint32_t)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::RecurseDynamicStringParts)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x471eaac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "RecurseDynamicStringParts",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::ArrayW<::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts, ::Array<::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer.WriteDynamicString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::*)(::StringW, char16_t)>(
    &::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteDynamicString)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x471e388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "WriteDynamicString",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::__cordl_internal_get_totalBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalBytes;
}
constexpr uint32_t const& UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::__cordl_internal_get_totalBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalBytes;
}
constexpr void UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::__cordl_internal_set_totalBytes(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalBytes = value;
}
constexpr uint32_t& UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::__cordl_internal_get_defaulChunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaulChunkSize;
}
constexpr uint32_t const& UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::__cordl_internal_get_defaulChunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaulChunkSize;
}
constexpr void UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::__cordl_internal_set_defaulChunkSize(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaulChunkSize = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk*>*&
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::__cordl_internal_get_chunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk*>*> const&
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::__cordl_internal_get_chunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunks;
}
constexpr void UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::__cordl_internal_set_chunks(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chunks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>*& UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::__cordl_internal_get_existingValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___existingValues;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>*> const&
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::__cordl_internal_get_existingValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___existingValues;
}
constexpr void
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::__cordl_internal_set_existingValues(::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___existingValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*&
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::__cordl_internal_get_serializationAdapters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationAdapters;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*> const&
UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::__cordl_internal_get_serializationAdapters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationAdapters;
}
constexpr void UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::__cordl_internal_set_serializationAdapters(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializationAdapters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::get_Length() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "get_Length",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
/// @param chunkSize: int32_t (default: static_cast<int32_t>(0x100000))
inline ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer* UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::New_ctor(
    int32_t chunkSize,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>
        adapters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>(chunkSize, adapters));
}
/// @param chunkSize: int32_t (default: static_cast<int32_t>(0x100000))
inline void UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::_ctor(
    int32_t chunkSize,
    ::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*, ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>
        adapters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*,
                                                                         ::Array<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunkSize, adapters);
}
inline ::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk* UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::FindChunkWithSpace(uint32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "FindChunkWithSpace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BinaryStorageBuffer__Writer__Chunk*, false>(this, ___internal_method, length);
}
inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteInternal(::cordl_internals::Ptr<void> pData, uint32_t dataSize, bool prefixSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "WriteInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pData, dataSize, prefixSize);
}
inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::ReserveInternal(uint32_t dataSize, bool prefixSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "ReserveInternal",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, dataSize, prefixSize);
}
inline void UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteInternal(uint32_t id, ::cordl_internals::Ptr<void> pData, uint32_t dataSize, bool prefixSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "WriteInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, pData, dataSize, prefixSize);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::Reserve() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "Reserve",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::Write(ByRef<T> val) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "Write",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, val);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::Write(T val) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "Write",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, val);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::Write(uint32_t offset, ByRef<T> val) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "Write",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, offset, val);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::Write(uint32_t offset, T val) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "Write",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, offset, val);
}
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::Reserve(uint32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "Reserve",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, count);
}
/// @param hashElements: bool (default: true)
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::Write(::ArrayW<T, ::Array<T>*> values, bool hashElements) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "Write",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, values, hashElements);
}
/// @param hashElements: bool (default: true)
template <typename T> inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::Write(uint32_t offset, ::ArrayW<T, ::Array<T>*> values, bool hashElements) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "Write",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, offset, values, hashElements);
}
template <typename T>
inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteObjects(::System::Collections::Generic::IEnumerable_1<T>* objs, bool serizalizeTypeData) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "WriteObjects",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, objs, serizalizeTypeData);
}
inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteObject(::System::Object* obj, bool serializeTypeData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "WriteObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, obj, serializeTypeData);
}
/// @param sep: char16_t (default: u'\u{0}')
inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteString(::StringW str, char16_t sep) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "WriteString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, str, sep);
}
inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteStringInternal(::StringW val, ::System::Text::Encoding* enc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(),
                                               "WriteStringInternal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, val, enc);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::SerializeToByteArray() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(),
                                               "SerializeToByteArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::SerializeToStream(::System::IO::Stream* str) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "SerializeToStream",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, str);
}
inline bool UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::IsUnicode(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "IsUnicode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str);
}
inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteAutoEncodedString(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "WriteAutoEncodedString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, str);
}
inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteUnicodeString(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "WriteUnicodeString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, str);
}
inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::ComputeStringSize(::StringW str, ByRef<bool> isUnicode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "ComputeStringSize",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, str, isUnicode);
}
inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::RecurseDynamicStringParts(
    ::ArrayW<::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts, ::Array<::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts>*> parts, int32_t index, char16_t sep,
    uint32_t minSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "RecurseDynamicStringParts",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::ArrayW<::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts, ::Array<::GlobalNamespace::__BinaryStorageBuffer__Writer__StringParts>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, parts, index, sep, minSize);
}
inline uint32_t UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::WriteDynamicString(::StringW str, char16_t sep) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer*>::get(), "WriteDynamicString",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, str, sep);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__Writer::__BinaryStorageBuffer__Writer() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer.ComputeHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, uint64_t, ::cordl_internals::Ptr<::UnityEngine::Hash128>)>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ComputeHash)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x471b82c;

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
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*,
    ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*, bool)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::AddSerializationAdapter)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x471b844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>::get(), "AddSerializationAdapter",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer.GetSerializationAdapter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*, ::System::Type*,
    ByRef<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>)>(&::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::GetSerializationAdapter)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x471be40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>::get(), "GetSerializationAdapter",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::*)()>(
    &::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x471c078;

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
/// @param forceOverride: bool (default: false)
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::AddSerializationAdapter(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* serializationAdapters,
    ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter* adapter, bool forceOverride) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>::get(), "AddSerializationAdapter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, serializationAdapters, adapter, forceOverride);
}
inline bool UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::GetSerializationAdapter(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>* serializationAdapters, ::System::Type* t,
    ByRef<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*> adapter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>::get(), "GetSerializationAdapter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ResourceManagement::Util::__BinaryStorageBuffer__ISerializationAdapter*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, serializationAdapters, t, adapter);
}
inline ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer* UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>());
}
inline void UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BinaryStorageBuffer() {}
