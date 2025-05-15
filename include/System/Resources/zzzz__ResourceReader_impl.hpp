#pragma once
// IWYU pragma private; include "System/Resources/ResourceReader.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_impl.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/Resources/zzzz__IResourceReader_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Resources/zzzz__ResourceReader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__UnmanagedMemoryStream_def.hpp"
#include "System/Resources/zzzz__ResourceLocator_def.hpp"
#include "System/Resources/zzzz__ResourceReader_def.hpp"
#include "System/Resources/zzzz__ResourceTypeCode_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryFormatter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
//  Writing Method size for method: ::System::Resources::ResourceReader_ResourceEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceReader_ResourceEnumerator::*)(::System::Resources::ResourceReader*)>(
    &::System::Resources::ResourceReader_ResourceEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3d1e800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader_ResourceEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader_ResourceEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Resources::ResourceReader_ResourceEnumerator::*)()>(
    &::System::Resources::ResourceReader_ResourceEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3d1cc0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader_ResourceEnumerator*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader_ResourceEnumerator.get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader_ResourceEnumerator::*)()>(
    &::System::Resources::ResourceReader_ResourceEnumerator::get_Key)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3d1cb5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader_ResourceEnumerator*>::get(),
                                                                               "get_Key", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader_ResourceEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader_ResourceEnumerator::*)()>(
    &::System::Resources::ResourceReader_ResourceEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3d2125c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader_ResourceEnumerator*>::get(),
                                                                               "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader_ResourceEnumerator.get_DataPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Resources::ResourceReader_ResourceEnumerator::*)()>(
    &::System::Resources::ResourceReader_ResourceEnumerator::get_DataPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d21600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader_ResourceEnumerator*>::get(),
                                                                               "get_DataPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader_ResourceEnumerator.get_Entry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::DictionaryEntry (::System::Resources::ResourceReader_ResourceEnumerator::*)()>(
    &::System::Resources::ResourceReader_ResourceEnumerator::get_Entry)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x3d212c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader_ResourceEnumerator*>::get(),
                                                                               "get_Entry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader_ResourceEnumerator.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader_ResourceEnumerator::*)()>(
    &::System::Resources::ResourceReader_ResourceEnumerator::get_Value)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3d21608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader_ResourceEnumerator*>::get(),
                                                                               "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader_ResourceEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceReader_ResourceEnumerator::*)()>(
    &::System::Resources::ResourceReader_ResourceEnumerator::Reset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3d216b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader_ResourceEnumerator*>::get(),
                                                                               "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Resources::ResourceReader*& System::Resources::ResourceReader_ResourceEnumerator::__cordl_internal_get__reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
constexpr ::System::Resources::ResourceReader* const& System::Resources::ResourceReader_ResourceEnumerator::__cordl_internal_get__reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
constexpr void System::Resources::ResourceReader_ResourceEnumerator::__cordl_internal_set__reader(::System::Resources::ResourceReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Resources::ResourceReader_ResourceEnumerator::__cordl_internal_get__currentIsValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentIsValid;
}
constexpr bool const& System::Resources::ResourceReader_ResourceEnumerator::__cordl_internal_get__currentIsValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentIsValid;
}
constexpr void System::Resources::ResourceReader_ResourceEnumerator::__cordl_internal_set__currentIsValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentIsValid = value;
}
constexpr int32_t& System::Resources::ResourceReader_ResourceEnumerator::__cordl_internal_get__currentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentName;
}
constexpr int32_t const& System::Resources::ResourceReader_ResourceEnumerator::__cordl_internal_get__currentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentName;
}
constexpr void System::Resources::ResourceReader_ResourceEnumerator::__cordl_internal_set__currentName(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentName = value;
}
constexpr int32_t& System::Resources::ResourceReader_ResourceEnumerator::__cordl_internal_get__dataPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataPosition;
}
constexpr int32_t const& System::Resources::ResourceReader_ResourceEnumerator::__cordl_internal_get__dataPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataPosition;
}
constexpr void System::Resources::ResourceReader_ResourceEnumerator::__cordl_internal_set__dataPosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataPosition = value;
}
inline void System::Resources::ResourceReader_ResourceEnumerator::_ctor(::System::Resources::ResourceReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader_ResourceEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline bool System::Resources::ResourceReader_ResourceEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader_ResourceEnumerator*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Resources::ResourceReader_ResourceEnumerator::get_Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader_ResourceEnumerator*>::get(),
                                                                             "get_Key", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Resources::ResourceReader_ResourceEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader_ResourceEnumerator*>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline int32_t System::Resources::ResourceReader_ResourceEnumerator::get_DataPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader_ResourceEnumerator*>::get(),
                                                                             "get_DataPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::DictionaryEntry System::Resources::ResourceReader_ResourceEnumerator::get_Entry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader_ResourceEnumerator*>::get(),
                                                                             "get_Entry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry, false>(this, ___internal_method);
}
inline ::System::Object* System::Resources::ResourceReader_ResourceEnumerator::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader_ResourceEnumerator*>::get(),
                                                                             "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Resources::ResourceReader_ResourceEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader_ResourceEnumerator*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Resources::ResourceReader_ResourceEnumerator* System::Resources::ResourceReader_ResourceEnumerator::New_ctor(::System::Resources::ResourceReader* reader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::ResourceReader_ResourceEnumerator*>(reader));
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
constexpr System::Resources::ResourceReader_ResourceEnumerator::operator ::System::Collections::IDictionaryEnumerator*() noexcept {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
constexpr ::System::Collections::IDictionaryEnumerator* System::Resources::ResourceReader_ResourceEnumerator::i___System__Collections__IDictionaryEnumerator() noexcept {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Resources::ResourceReader_ResourceEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Resources::ResourceReader_ResourceEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Resources::ResourceReader_ResourceEnumerator::ResourceReader_ResourceEnumerator() {}
//  Writing Method size for method: ::System::Resources::ResourceReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceReader::*)(
    ::System::IO::Stream*, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*)>(&::System::Resources::ResourceReader::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3d1b4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::Close)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3d1b800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "Close",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3d1e4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceReader::*)(bool)>(&::System::Resources::ResourceReader::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3d1e4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.ReadUnalignedI4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::Ptr<int32_t>)>(&::System::Resources::ResourceReader::ReadUnalignedI4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d1e528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "ReadUnalignedI4", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.SkipString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::SkipString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3d1e530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "SkipString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.GetNameHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::GetNameHash)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3d1e5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "GetNameHash", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.GetNamePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::GetNamePosition)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3d1e624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "GetNamePosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Resources::ResourceReader::*)()>(
    &::System::Resources::ResourceReader::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1e73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "System.Collections.IEnumerable.GetEnumerator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Resources::ResourceReader::*)()>(
    &::System::Resources::ResourceReader::GetEnumerator)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3d1e740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.GetEnumeratorInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::ResourceReader_ResourceEnumerator* (::System::Resources::ResourceReader::*)()>(
    &::System::Resources::ResourceReader::GetEnumeratorInternal)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3d1caf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                                                                               "GetEnumeratorInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.FindPosForResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Resources::ResourceReader::*)(::StringW)>(
    &::System::Resources::ResourceReader::FindPosForResource)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x3d1c3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "FindPosForResource", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.CompareStringEqualsName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Resources::ResourceReader::*)(::StringW)>(
    &::System::Resources::ResourceReader::CompareStringEqualsName)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x3d1e834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "CompareStringEqualsName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.AllocateStringForNameIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Resources::ResourceReader::*)(int32_t, ::ByRef<int32_t>)>(
    &::System::Resources::ResourceReader::AllocateStringForNameIndex)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0x3d1ea3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "AllocateStringForNameIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.GetValueForNameIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t)>(
    &::System::Resources::ResourceReader::GetValueForNameIndex)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x3d1f1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "GetValueForNameIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.LoadString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::LoadString)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x3d1c79c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "LoadString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.LoadObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t)>(
    &::System::Resources::ResourceReader::LoadObject)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3d1fa44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "LoadObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.LoadObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t, ::ByRef<::System::Resources::ResourceTypeCode>)>(
    &::System::Resources::ResourceReader::LoadObject)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3d1ca44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "LoadObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Resources::ResourceTypeCode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.LoadObjectV1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t)>(
    &::System::Resources::ResourceReader::LoadObjectV1)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3d1f498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "LoadObjectV1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader._LoadObjectV1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t)>(
    &::System::Resources::ResourceReader::_LoadObjectV1)> {
  constexpr static std::size_t size = 0x848;
  constexpr static std::size_t addrs = 0x3d1fa70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "_LoadObjectV1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.LoadObjectV2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t, ::ByRef<::System::Resources::ResourceTypeCode>)>(
    &::System::Resources::ResourceReader::LoadObjectV2)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3d1f590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "LoadObjectV2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Resources::ResourceTypeCode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader._LoadObjectV2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t, ::ByRef<::System::Resources::ResourceTypeCode>)>(
    &::System::Resources::ResourceReader::_LoadObjectV2)> {
  constexpr static std::size_t size = 0x724;
  constexpr static std::size_t addrs = 0x3d20488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "_LoadObjectV2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Resources::ResourceTypeCode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.DeserializeObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t)>(
    &::System::Resources::ResourceReader::DeserializeObject)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x3d202b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "DeserializeObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.ReadResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::ReadResources)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3d1e348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "ReadResources",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader._ReadResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::_ReadResources)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x3d20bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "_ReadResources",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.FindType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (::System::Resources::ResourceReader::*)(int32_t)>(
    &::System::Resources::ResourceReader::FindType)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x3d1f688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "FindType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::IO::BinaryReader*& System::Resources::ResourceReader::__cordl_internal_get__store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____store;
}
constexpr ::System::IO::BinaryReader* const& System::Resources::ResourceReader::__cordl_internal_get__store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____store;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__store(::System::IO::BinaryReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____store)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*& System::Resources::ResourceReader::__cordl_internal_get__resCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* const& System::Resources::ResourceReader::__cordl_internal_get__resCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resCache;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__resCache(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Resources::ResourceReader::__cordl_internal_get__nameSectionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameSectionOffset;
}
constexpr int64_t const& System::Resources::ResourceReader::__cordl_internal_get__nameSectionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameSectionOffset;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__nameSectionOffset(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nameSectionOffset = value;
}
constexpr int64_t& System::Resources::ResourceReader::__cordl_internal_get__dataSectionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSectionOffset;
}
constexpr int64_t const& System::Resources::ResourceReader::__cordl_internal_get__dataSectionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSectionOffset;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__dataSectionOffset(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSectionOffset = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Resources::ResourceReader::__cordl_internal_get__nameHashes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameHashes;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Resources::ResourceReader::__cordl_internal_get__nameHashes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameHashes;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__nameHashes(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nameHashes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<int32_t>& System::Resources::ResourceReader::__cordl_internal_get__nameHashesPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameHashesPtr;
}
constexpr ::cordl_internals::Ptr<int32_t> const& System::Resources::ResourceReader::__cordl_internal_get__nameHashesPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameHashesPtr;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__nameHashesPtr(::cordl_internals::Ptr<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nameHashesPtr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Resources::ResourceReader::__cordl_internal_get__namePositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namePositions;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Resources::ResourceReader::__cordl_internal_get__namePositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namePositions;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__namePositions(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____namePositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<int32_t>& System::Resources::ResourceReader::__cordl_internal_get__namePositionsPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namePositionsPtr;
}
constexpr ::cordl_internals::Ptr<int32_t> const& System::Resources::ResourceReader::__cordl_internal_get__namePositionsPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namePositionsPtr;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__namePositionsPtr(::cordl_internals::Ptr<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____namePositionsPtr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*>& System::Resources::ResourceReader::__cordl_internal_get__typeTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeTable;
}
constexpr ::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> const& System::Resources::ResourceReader::__cordl_internal_get__typeTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeTable;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__typeTable(::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Resources::ResourceReader::__cordl_internal_get__typeNamePositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeNamePositions;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Resources::ResourceReader::__cordl_internal_get__typeNamePositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeNamePositions;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__typeNamePositions(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeNamePositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*& System::Resources::ResourceReader::__cordl_internal_get__objFormatter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objFormatter;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* const& System::Resources::ResourceReader::__cordl_internal_get__objFormatter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objFormatter;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__objFormatter(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objFormatter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Resources::ResourceReader::__cordl_internal_get__numResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numResources;
}
constexpr int32_t const& System::Resources::ResourceReader::__cordl_internal_get__numResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numResources;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__numResources(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numResources = value;
}
constexpr ::System::IO::UnmanagedMemoryStream*& System::Resources::ResourceReader::__cordl_internal_get__ums() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ums;
}
constexpr ::System::IO::UnmanagedMemoryStream* const& System::Resources::ResourceReader::__cordl_internal_get__ums() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ums;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__ums(::System::IO::UnmanagedMemoryStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ums)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Resources::ResourceReader::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& System::Resources::ResourceReader::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
inline void System::Resources::ResourceReader::_ctor(::System::IO::Stream* stream, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* resCache) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, resCache);
}
inline void System::Resources::ResourceReader::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "Close",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Resources::ResourceReader::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Resources::ResourceReader::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "Dispose", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline int32_t System::Resources::ResourceReader::ReadUnalignedI4(::cordl_internals::Ptr<int32_t> p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "ReadUnalignedI4", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, p);
}
inline void System::Resources::ResourceReader::SkipString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "SkipString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Resources::ResourceReader::GetNameHash(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "GetNameHash",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index);
}
inline int32_t System::Resources::ResourceReader::GetNamePosition(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "GetNamePosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index);
}
inline ::System::Collections::IEnumerator* System::Resources::ResourceReader::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "System.Collections.IEnumerable.GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Collections::IDictionaryEnumerator* System::Resources::ResourceReader::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*, false>(this, ___internal_method);
}
inline ::System::Resources::ResourceReader_ResourceEnumerator* System::Resources::ResourceReader::GetEnumeratorInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                                                                             "GetEnumeratorInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceReader_ResourceEnumerator*, false>(this, ___internal_method);
}
inline int32_t System::Resources::ResourceReader::FindPosForResource(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "FindPosForResource", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name);
}
inline bool System::Resources::ResourceReader::CompareStringEqualsName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "CompareStringEqualsName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline ::StringW System::Resources::ResourceReader::AllocateStringForNameIndex(int32_t index, ::ByRef<int32_t> dataOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "AllocateStringForNameIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, index, dataOffset);
}
inline ::System::Object* System::Resources::ResourceReader::GetValueForNameIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "GetValueForNameIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, index);
}
inline ::StringW System::Resources::ResourceReader::LoadString(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "LoadString",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, pos);
}
inline ::System::Object* System::Resources::ResourceReader::LoadObject(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "LoadObject",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pos);
}
inline ::System::Object* System::Resources::ResourceReader::LoadObject(int32_t pos, ::ByRef<::System::Resources::ResourceTypeCode> typeCode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "LoadObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Resources::ResourceTypeCode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pos, typeCode);
}
inline ::System::Object* System::Resources::ResourceReader::LoadObjectV1(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "LoadObjectV1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pos);
}
inline ::System::Object* System::Resources::ResourceReader::_LoadObjectV1(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "_LoadObjectV1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pos);
}
inline ::System::Object* System::Resources::ResourceReader::LoadObjectV2(int32_t pos, ::ByRef<::System::Resources::ResourceTypeCode> typeCode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "LoadObjectV2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Resources::ResourceTypeCode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pos, typeCode);
}
inline ::System::Object* System::Resources::ResourceReader::_LoadObjectV2(int32_t pos, ::ByRef<::System::Resources::ResourceTypeCode> typeCode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "_LoadObjectV2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Resources::ResourceTypeCode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pos, typeCode);
}
inline ::System::Object* System::Resources::ResourceReader::DeserializeObject(int32_t typeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "DeserializeObject",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeIndex);
}
inline void System::Resources::ResourceReader::ReadResources() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "ReadResources",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Resources::ResourceReader::_ReadResources() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "_ReadResources",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::RuntimeType* System::Resources::ResourceReader::FindType(int32_t typeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(), "FindType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*, false>(this, ___internal_method, typeIndex);
}
inline ::System::Resources::ResourceReader* System::Resources::ResourceReader::New_ctor(::System::IO::Stream* stream,
                                                                                        ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* resCache) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::ResourceReader*>(stream, resCache));
}
/// @brief Convert operator to "::System::Resources::IResourceReader"
constexpr System::Resources::ResourceReader::operator ::System::Resources::IResourceReader*() noexcept {
  return static_cast<::System::Resources::IResourceReader*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Resources::IResourceReader"
constexpr ::System::Resources::IResourceReader* System::Resources::ResourceReader::i___System__Resources__IResourceReader() noexcept {
  return static_cast<::System::Resources::IResourceReader*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Resources::ResourceReader::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Resources::ResourceReader::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Resources::ResourceReader::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Resources::ResourceReader::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Resources::ResourceReader::ResourceReader() {}
