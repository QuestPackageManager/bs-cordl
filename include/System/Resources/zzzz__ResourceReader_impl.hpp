#pragma once
// IWYU pragma private; include "System\Resources\ResourceReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__RuntimeType_impl.hpp"
#include "System/Resources/zzzz__ResourceReader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__UnmanagedMemoryStream_def.hpp"
#include "System/Resources/zzzz__IResourceReader_def.hpp"
#include "System/Resources/zzzz__ResourceLocator_def.hpp"
#include "System/Resources/zzzz__ResourceReader_def.hpp"
#include "System/Resources/zzzz__ResourceTypeCode_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryFormatter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
//  Writing Method size for method: ::System::Resources::ResourceReader_ResourceEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceReader_ResourceEnumerator::*)(::System::Resources::ResourceReader*)>(
    &::System::Resources::ResourceReader_ResourceEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b7a3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader_ResourceEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Resources::ResourceReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader_ResourceEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Resources::ResourceReader_ResourceEnumerator::*)()>(&::System::Resources::ResourceReader_ResourceEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b74bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader_ResourceEnumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader_ResourceEnumerator.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::ResourceReader_ResourceEnumerator::*)()>(
    &::System::Resources::ResourceReader_ResourceEnumerator::get_Key)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b74b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader_ResourceEnumerator*>(), { "get_Key", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader_ResourceEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::ResourceReader_ResourceEnumerator::*)()>(
    &::System::Resources::ResourceReader_ResourceEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b7cc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader_ResourceEnumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader_ResourceEnumerator.get_DataPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Resources::ResourceReader_ResourceEnumerator::*)()>(
    &::System::Resources::ResourceReader_ResourceEnumerator::get_DataPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7cf8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader_ResourceEnumerator*>(), { "get_DataPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader_ResourceEnumerator.get_Entry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::DictionaryEntry (::System::Resources::ResourceReader_ResourceEnumerator::*)()>(
    &::System::Resources::ResourceReader_ResourceEnumerator::get_Entry)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5b7cc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader_ResourceEnumerator*>(), { "get_Entry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader_ResourceEnumerator.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::ResourceReader_ResourceEnumerator::*)()>(
    &::System::Resources::ResourceReader_ResourceEnumerator::get_Value)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b7cf94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader_ResourceEnumerator*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader_ResourceEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceReader_ResourceEnumerator::*)()>(&::System::Resources::ResourceReader_ResourceEnumerator::Reset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b7d034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader_ResourceEnumerator*>(), { "Reset", {}, {} })));
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
  this->____reader = value;
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader_ResourceEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Resources::ResourceReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline bool System::Resources::ResourceReader_ResourceEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader_ResourceEnumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Resources::ResourceReader_ResourceEnumerator::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader_ResourceEnumerator*>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Resources::ResourceReader_ResourceEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader_ResourceEnumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t System::Resources::ResourceReader_ResourceEnumerator::get_DataPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader_ResourceEnumerator*>(), { "get_DataPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::DictionaryEntry System::Resources::ResourceReader_ResourceEnumerator::get_Entry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader_ResourceEnumerator*>(), { "get_Entry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry>(this, ___internal_method);
}
inline ::System::Object* System::Resources::ResourceReader_ResourceEnumerator::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader_ResourceEnumerator*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Resources::ResourceReader_ResourceEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader_ResourceEnumerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Resources::ResourceReader_ResourceEnumerator* System::Resources::ResourceReader_ResourceEnumerator::New_ctor(::System::Resources::ResourceReader* reader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::ResourceReader_ResourceEnumerator*>(reader));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceReader::*)(
    ::System::IO::Stream*, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*)>(&::System::Resources::ResourceReader::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b735b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Resources::ResourceReader*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::Close)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b738e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b7a0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceReader::*)(bool)>(&::System::Resources::ResourceReader::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b7a074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.ReadUnalignedI4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t*)>(&::System::Resources::ResourceReader::ReadUnalignedI4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7a0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "ReadUnalignedI4", {}, { ::i2c::type_of<int32_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.SkipString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::SkipString)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b7a0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "SkipString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.GetNameHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::GetNameHash)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b7a1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "GetNameHash", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.GetNamePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::GetNamePosition)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5b7a1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "GetNamePosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Resources::ResourceReader::*)()>(
    &::System::Resources::ResourceReader::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b7a2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::GetEnumerator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b7a2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.GetEnumeratorInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Resources::ResourceReader_ResourceEnumerator* (::System::Resources::ResourceReader::*)()>(
    &::System::Resources::ResourceReader::GetEnumeratorInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b74af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "GetEnumeratorInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.FindPosForResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Resources::ResourceReader::*)(::StringW)>(&::System::Resources::ResourceReader::FindPosForResource)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5b7444c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "FindPosForResource", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.CompareStringEqualsName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Resources::ResourceReader::*)(::StringW)>(&::System::Resources::ResourceReader::CompareStringEqualsName)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5b7a3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "CompareStringEqualsName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.AllocateStringForNameIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::ResourceReader::*)(int32_t, ::by_ref<int32_t>)>(
    &::System::Resources::ResourceReader::AllocateStringForNameIndex)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0x5b7a5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(),
                                                                                           { "AllocateStringForNameIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.GetValueForNameIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::GetValueForNameIndex)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5b7ad6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "GetValueForNameIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.LoadString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::LoadString)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5b74824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "LoadString", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.LoadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::LoadObject)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b7b59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "LoadObject", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.LoadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t, ::by_ref<::System::Resources::ResourceTypeCode>)>(
    &::System::Resources::ResourceReader::LoadObject)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b74a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(),
                                                             { "LoadObject", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Resources::ResourceTypeCode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.LoadObjectV1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::LoadObjectV1)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5b7b008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "LoadObjectV1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader._LoadObjectV1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::_LoadObjectV1)> {
  constexpr static std::size_t size = 0x6f4;
  constexpr static std::size_t addrs = 0x5b7b5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "_LoadObjectV1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.LoadObjectV2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t, ::by_ref<::System::Resources::ResourceTypeCode>)>(
    &::System::Resources::ResourceReader::LoadObjectV2)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5b7b100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(),
                                                             { "LoadObjectV2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Resources::ResourceTypeCode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader._LoadObjectV2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t, ::by_ref<::System::Resources::ResourceTypeCode>)>(
    &::System::Resources::ResourceReader::_LoadObjectV2)> {
  constexpr static std::size_t size = 0x744;
  constexpr static std::size_t addrs = 0x5b7be40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(),
                                                             { "_LoadObjectV2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Resources::ResourceTypeCode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.DeserializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::DeserializeObject)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5b7bcb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "DeserializeObject", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.ReadResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::ReadResources)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5b79f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "ReadResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader._ReadResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::_ReadResources)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0x5b7c584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "_ReadResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.FindType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType* (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::FindType)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5b7b1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "FindType", {}, { ::i2c::type_of<int32_t>() } })));
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
  this->____store = value;
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
  this->____resCache = value;
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
constexpr ::ArrayW<int32_t>& System::Resources::ResourceReader::__cordl_internal_get__nameHashes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameHashes;
}
constexpr ::ArrayW<int32_t> const& System::Resources::ResourceReader::__cordl_internal_get__nameHashes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameHashes;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__nameHashes(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nameHashes = value;
}
constexpr int32_t*& System::Resources::ResourceReader::__cordl_internal_get__nameHashesPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameHashesPtr;
}
constexpr int32_t* const& System::Resources::ResourceReader::__cordl_internal_get__nameHashesPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameHashesPtr;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__nameHashesPtr(int32_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nameHashesPtr = value;
}
constexpr ::ArrayW<int32_t>& System::Resources::ResourceReader::__cordl_internal_get__namePositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namePositions;
}
constexpr ::ArrayW<int32_t> const& System::Resources::ResourceReader::__cordl_internal_get__namePositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namePositions;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__namePositions(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____namePositions = value;
}
constexpr int32_t*& System::Resources::ResourceReader::__cordl_internal_get__namePositionsPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namePositionsPtr;
}
constexpr int32_t* const& System::Resources::ResourceReader::__cordl_internal_get__namePositionsPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namePositionsPtr;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__namePositionsPtr(int32_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____namePositionsPtr = value;
}
constexpr ::ArrayW<::System::RuntimeType*>& System::Resources::ResourceReader::__cordl_internal_get__typeTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeTable;
}
constexpr ::ArrayW<::System::RuntimeType*> const& System::Resources::ResourceReader::__cordl_internal_get__typeTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeTable;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__typeTable(::ArrayW<::System::RuntimeType*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeTable = value;
}
constexpr ::ArrayW<int32_t>& System::Resources::ResourceReader::__cordl_internal_get__typeNamePositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeNamePositions;
}
constexpr ::ArrayW<int32_t> const& System::Resources::ResourceReader::__cordl_internal_get__typeNamePositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeNamePositions;
}
constexpr void System::Resources::ResourceReader::__cordl_internal_set__typeNamePositions(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeNamePositions = value;
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
  this->____objFormatter = value;
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
  this->____ums = value;
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
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Resources::ResourceReader*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, resCache);
}
inline void System::Resources::ResourceReader::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Resources::ResourceReader::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Resources::ResourceReader::Dispose(bool disposing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline int32_t System::Resources::ResourceReader::ReadUnalignedI4(int32_t* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "ReadUnalignedI4", {}, { ::i2c::type_of<int32_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, p);
}
inline void System::Resources::ResourceReader::SkipString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "SkipString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Resources::ResourceReader::GetNameHash(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "GetNameHash", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline int32_t System::Resources::ResourceReader::GetNamePosition(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "GetNamePosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline ::System::Collections::IEnumerator* System::Resources::ResourceReader::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IDictionaryEnumerator* System::Resources::ResourceReader::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
inline ::System::Resources::ResourceReader_ResourceEnumerator* System::Resources::ResourceReader::GetEnumeratorInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "GetEnumeratorInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceReader_ResourceEnumerator*>(this, ___internal_method);
}
inline int32_t System::Resources::ResourceReader::FindPosForResource(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "FindPosForResource", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline bool System::Resources::ResourceReader::CompareStringEqualsName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "CompareStringEqualsName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline ::StringW System::Resources::ResourceReader::AllocateStringForNameIndex(int32_t index, ::by_ref<int32_t> dataOffset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(),
                                                                                         { "AllocateStringForNameIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index, dataOffset);
}
inline ::System::Object* System::Resources::ResourceReader::GetValueForNameIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "GetValueForNameIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline ::StringW System::Resources::ResourceReader::LoadString(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "LoadString", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, pos);
}
inline ::System::Object* System::Resources::ResourceReader::LoadObject(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "LoadObject", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, pos);
}
inline ::System::Object* System::Resources::ResourceReader::LoadObject(int32_t pos, ::by_ref<::System::Resources::ResourceTypeCode> typeCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(),
                                                           { "LoadObject", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Resources::ResourceTypeCode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, pos, typeCode);
}
inline ::System::Object* System::Resources::ResourceReader::LoadObjectV1(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "LoadObjectV1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, pos);
}
inline ::System::Object* System::Resources::ResourceReader::_LoadObjectV1(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "_LoadObjectV1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, pos);
}
inline ::System::Object* System::Resources::ResourceReader::LoadObjectV2(int32_t pos, ::by_ref<::System::Resources::ResourceTypeCode> typeCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(),
                                                           { "LoadObjectV2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Resources::ResourceTypeCode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, pos, typeCode);
}
inline ::System::Object* System::Resources::ResourceReader::_LoadObjectV2(int32_t pos, ::by_ref<::System::Resources::ResourceTypeCode> typeCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(),
                                                           { "_LoadObjectV2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Resources::ResourceTypeCode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, pos, typeCode);
}
inline ::System::Object* System::Resources::ResourceReader::DeserializeObject(int32_t typeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "DeserializeObject", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, typeIndex);
}
inline void System::Resources::ResourceReader::ReadResources() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "ReadResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Resources::ResourceReader::_ReadResources() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "_ReadResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::RuntimeType* System::Resources::ResourceReader::FindType(int32_t typeIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Resources::ResourceReader*>(), { "FindType", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*>(this, ___internal_method, typeIndex);
}
inline ::System::Resources::ResourceReader* System::Resources::ResourceReader::New_ctor(::System::IO::Stream* stream,
                                                                                        ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* resCache) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::ResourceReader*>(stream, resCache));
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
