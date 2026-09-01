#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\SerializationInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__IFormatterConverter_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfoEnumerator_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfo::*)(::System::Type*, ::System::Runtime::Serialization::IFormatterConverter*)>(
    &::System::Runtime::Serialization::SerializationInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5516c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfo::*)(::System::Type*, ::System::Runtime::Serialization::IFormatterConverter*, bool)>(
    &::System::Runtime::Serialization::SerializationInfo::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5b55174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.get_FullTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::SerializationInfo::*)()>(&::System::Runtime::Serialization::SerializationInfo::get_FullTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b55384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "get_FullTypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.get_AssemblyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::SerializationInfo::*)()>(&::System::Runtime::Serialization::SerializationInfo::get_AssemblyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5538c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "get_AssemblyName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.SetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfo::*)(::System::Type*)>(&::System::Runtime::Serialization::SerializationInfo::SetType)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5b546f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "SetType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Runtime::Serialization::SerializationInfo::Compare)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b55398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                           { "Compare", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.DemandForUnsafeAssemblyNameAssignments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::Runtime::Serialization::SerializationInfo::DemandForUnsafeAssemblyNameAssignments)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b55394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                             { "DemandForUnsafeAssemblyNameAssignments", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.IsAssemblyNameAssignmentSafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::System::Runtime::Serialization::SerializationInfo::IsAssemblyNameAssignmentSafe)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5b5540c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                           { "IsAssemblyNameAssignmentSafe", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.get_MemberCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::SerializationInfo::*)()>(&::System::Runtime::Serialization::SerializationInfo::get_MemberCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b55548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "get_MemberCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.get_ObjectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::SerializationInfo::*)()>(
    &::System::Runtime::Serialization::SerializationInfo::get_ObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b55550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "get_ObjectType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.get_IsFullTypeNameSetExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::SerializationInfo::*)()>(
    &::System::Runtime::Serialization::SerializationInfo::get_IsFullTypeNameSetExplicit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b55558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "get_IsFullTypeNameSetExplicit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.get_IsAssemblyNameSetExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::SerializationInfo::*)()>(
    &::System::Runtime::Serialization::SerializationInfo::get_IsAssemblyNameSetExplicit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b55560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "get_IsAssemblyNameSetExplicit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationInfoEnumerator* (::System::Runtime::Serialization::SerializationInfo::*)()>(
    &::System::Runtime::Serialization::SerializationInfo::GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b48180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.ExpandArrays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfo::*)()>(&::System::Runtime::Serialization::SerializationInfo::ExpandArrays)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5b55568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "ExpandArrays", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfo::*)(::StringW, ::System::Object*, ::System::Type*)>(
    &::System::Runtime::Serialization::SerializationInfo::AddValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b54674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                             { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfo::*)(::StringW, ::System::Object*)>(
    &::System::Runtime::Serialization::SerializationInfo::AddValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b493fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                           { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfo::*)(::StringW, bool)>(
    &::System::Runtime::Serialization::SerializationInfo::AddValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b5585c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfo::*)(::StringW, uint8_t)>(
    &::System::Runtime::Serialization::SerializationInfo::AddValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b558d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfo::*)(::StringW, int16_t)>(
    &::System::Runtime::Serialization::SerializationInfo::AddValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b55944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfo::*)(::StringW, int32_t)>(
    &::System::Runtime::Serialization::SerializationInfo::AddValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b4a2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfo::*)(::StringW, int64_t)>(
    &::System::Runtime::Serialization::SerializationInfo::AddValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b559b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfo::*)(::StringW, uint64_t)>(
    &::System::Runtime::Serialization::SerializationInfo::AddValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b55a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfo::*)(::StringW, float_t)>(
    &::System::Runtime::Serialization::SerializationInfo::AddValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b55aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfo::*)(::StringW, ::System::DateTime)>(
    &::System::Runtime::Serialization::SerializationInfo::AddValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b55b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                           { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.AddValueInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfo::*)(::StringW, ::System::Object*, ::System::Type*)>(
    &::System::Runtime::Serialization::SerializationInfo::AddValueInternal)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5b55684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                             { "AddValueInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.UpdateValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationInfo::*)(::StringW, ::System::Object*, ::System::Type*)>(
    &::System::Runtime::Serialization::SerializationInfo::UpdateValue)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b51c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                             { "UpdateValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.FindElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::SerializationInfo::*)(::StringW)>(
    &::System::Runtime::Serialization::SerializationInfo::FindElement)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b55bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "FindElement", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.GetElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::SerializationInfo::*)(::StringW, ::by_ref<::System::Type*>)>(
    &::System::Runtime::Serialization::SerializationInfo::GetElement)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b55c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                           { "GetElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.GetElementNoThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::SerializationInfo::*)(::StringW, ::by_ref<::System::Type*>)>(
    &::System::Runtime::Serialization::SerializationInfo::GetElementNoThrow)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b55d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                           { "GetElementNoThrow", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::SerializationInfo::*)(::StringW, ::System::Type*)>(
    &::System::Runtime::Serialization::SerializationInfo::GetValue)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5b542ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                           { "GetValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.GetValueNoThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::SerializationInfo::*)(::StringW, ::System::Type*)>(
    &::System::Runtime::Serialization::SerializationInfo::GetValueNoThrow)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5b541cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                           { "GetValueNoThrow", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.GetBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::SerializationInfo::*)(::StringW)>(&::System::Runtime::Serialization::SerializationInfo::GetBoolean)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5b55e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "GetBoolean", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.GetInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::SerializationInfo::*)(::StringW)>(&::System::Runtime::Serialization::SerializationInfo::GetInt32)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5b55f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "GetInt32", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.GetInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Runtime::Serialization::SerializationInfo::*)(::StringW)>(&::System::Runtime::Serialization::SerializationInfo::GetInt64)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5b5609c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "GetInt64", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.GetSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Runtime::Serialization::SerializationInfo::*)(::StringW)>(&::System::Runtime::Serialization::SerializationInfo::GetSingle)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5b561e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "GetSingle", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationInfo.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::SerializationInfo::*)(::StringW)>(
    &::System::Runtime::Serialization::SerializationInfo::GetString)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b56324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "GetString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_m_members() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_members;
}
constexpr ::ArrayW<::StringW> const& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_m_members() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_members;
}
constexpr void System::Runtime::Serialization::SerializationInfo::__cordl_internal_set_m_members(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_members = value;
}
constexpr ::ArrayW<::System::Object*>& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_m_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_data;
}
constexpr ::ArrayW<::System::Object*> const& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_m_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_data;
}
constexpr void System::Runtime::Serialization::SerializationInfo::__cordl_internal_set_m_data(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_data = value;
}
constexpr ::ArrayW<::System::Type*>& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_m_types() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_types;
}
constexpr ::ArrayW<::System::Type*> const& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_m_types() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_types;
}
constexpr void System::Runtime::Serialization::SerializationInfo::__cordl_internal_set_m_types(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_types = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_m_nameToIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nameToIndex;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_m_nameToIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nameToIndex;
}
constexpr void System::Runtime::Serialization::SerializationInfo::__cordl_internal_set_m_nameToIndex(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_nameToIndex = value;
}
constexpr int32_t& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_m_currMember() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currMember;
}
constexpr int32_t const& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_m_currMember() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currMember;
}
constexpr void System::Runtime::Serialization::SerializationInfo::__cordl_internal_set_m_currMember(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_currMember = value;
}
constexpr ::System::Runtime::Serialization::IFormatterConverter*& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_m_converter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_converter;
}
constexpr ::System::Runtime::Serialization::IFormatterConverter* const& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_m_converter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_converter;
}
constexpr void System::Runtime::Serialization::SerializationInfo::__cordl_internal_set_m_converter(::System::Runtime::Serialization::IFormatterConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_converter = value;
}
constexpr ::StringW& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_m_fullTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fullTypeName;
}
constexpr ::StringW const& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_m_fullTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fullTypeName;
}
constexpr void System::Runtime::Serialization::SerializationInfo::__cordl_internal_set_m_fullTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fullTypeName = value;
}
constexpr ::StringW& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_m_assemName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_assemName;
}
constexpr ::StringW const& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_m_assemName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_assemName;
}
constexpr void System::Runtime::Serialization::SerializationInfo::__cordl_internal_set_m_assemName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_assemName = value;
}
constexpr ::System::Type*& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_objectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectType;
}
constexpr ::System::Type* const& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_objectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectType;
}
constexpr void System::Runtime::Serialization::SerializationInfo::__cordl_internal_set_objectType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectType = value;
}
constexpr bool& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_isFullTypeNameSetExplicit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFullTypeNameSetExplicit;
}
constexpr bool const& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_isFullTypeNameSetExplicit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFullTypeNameSetExplicit;
}
constexpr void System::Runtime::Serialization::SerializationInfo::__cordl_internal_set_isFullTypeNameSetExplicit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isFullTypeNameSetExplicit = value;
}
constexpr bool& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_isAssemblyNameSetExplicit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAssemblyNameSetExplicit;
}
constexpr bool const& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_isAssemblyNameSetExplicit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAssemblyNameSetExplicit;
}
constexpr void System::Runtime::Serialization::SerializationInfo::__cordl_internal_set_isAssemblyNameSetExplicit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isAssemblyNameSetExplicit = value;
}
constexpr bool& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_requireSameTokenInPartialTrust() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requireSameTokenInPartialTrust;
}
constexpr bool const& System::Runtime::Serialization::SerializationInfo::__cordl_internal_get_requireSameTokenInPartialTrust() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requireSameTokenInPartialTrust;
}
constexpr void System::Runtime::Serialization::SerializationInfo::__cordl_internal_set_requireSameTokenInPartialTrust(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requireSameTokenInPartialTrust = value;
}
inline void System::Runtime::Serialization::SerializationInfo::_ctor(::System::Type* type, ::System::Runtime::Serialization::IFormatterConverter* converter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, converter);
}
inline void System::Runtime::Serialization::SerializationInfo::_ctor(::System::Type* type, ::System::Runtime::Serialization::IFormatterConverter* converter, bool requireSameTokenInPartialTrust) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, converter, requireSameTokenInPartialTrust);
}
inline ::StringW System::Runtime::Serialization::SerializationInfo::get_FullTypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "get_FullTypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::SerializationInfo::get_AssemblyName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "get_AssemblyName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Serialization::SerializationInfo::SetType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "SetType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline bool System::Runtime::Serialization::SerializationInfo::Compare(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                         { "Compare", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline void System::Runtime::Serialization::SerializationInfo::DemandForUnsafeAssemblyNameAssignments(::StringW originalAssemblyName, ::StringW newAssemblyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                           { "DemandForUnsafeAssemblyNameAssignments", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, originalAssemblyName, newAssemblyName);
}
inline bool System::Runtime::Serialization::SerializationInfo::IsAssemblyNameAssignmentSafe(::StringW originalAssemblyName, ::StringW newAssemblyName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                         { "IsAssemblyNameAssignmentSafe", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, originalAssemblyName, newAssemblyName);
}
inline int32_t System::Runtime::Serialization::SerializationInfo::get_MemberCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "get_MemberCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::SerializationInfo::get_ObjectType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "get_ObjectType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::SerializationInfo::get_IsFullTypeNameSetExplicit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "get_IsFullTypeNameSetExplicit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::SerializationInfo::get_IsAssemblyNameSetExplicit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "get_IsAssemblyNameSetExplicit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::SerializationInfoEnumerator* System::Runtime::Serialization::SerializationInfo::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationInfoEnumerator*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::SerializationInfo::ExpandArrays() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "ExpandArrays", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::SerializationInfo::AddValue(::StringW name, ::System::Object* value, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                           { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, type);
}
inline void System::Runtime::Serialization::SerializationInfo::AddValue(::StringW name, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                         { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Runtime::Serialization::SerializationInfo::AddValue(::StringW name, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Runtime::Serialization::SerializationInfo::AddValue(::StringW name, uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Runtime::Serialization::SerializationInfo::AddValue(::StringW name, int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Runtime::Serialization::SerializationInfo::AddValue(::StringW name, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Runtime::Serialization::SerializationInfo::AddValue(::StringW name, int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Runtime::Serialization::SerializationInfo::AddValue(::StringW name, uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Runtime::Serialization::SerializationInfo::AddValue(::StringW name, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Runtime::Serialization::SerializationInfo::AddValue(::StringW name, ::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                         { "AddValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Runtime::Serialization::SerializationInfo::AddValueInternal(::StringW name, ::System::Object* value, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                           { "AddValueInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, type);
}
inline void System::Runtime::Serialization::SerializationInfo::UpdateValue(::StringW name, ::System::Object* value, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                           { "UpdateValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, type);
}
inline int32_t System::Runtime::Serialization::SerializationInfo::FindElement(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "FindElement", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline ::System::Object* System::Runtime::Serialization::SerializationInfo::GetElement(::StringW name, ::by_ref<::System::Type*> foundType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                         { "GetElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, foundType);
}
inline ::System::Object* System::Runtime::Serialization::SerializationInfo::GetElementNoThrow(::StringW name, ::by_ref<::System::Type*> foundType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                         { "GetElementNoThrow", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, foundType);
}
inline ::System::Object* System::Runtime::Serialization::SerializationInfo::GetValue(::StringW name, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                         { "GetValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, type);
}
inline ::System::Object* System::Runtime::Serialization::SerializationInfo::GetValueNoThrow(::StringW name, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                                         { "GetValueNoThrow", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, type);
}
inline bool System::Runtime::Serialization::SerializationInfo::GetBoolean(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "GetBoolean", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline int32_t System::Runtime::Serialization::SerializationInfo::GetInt32(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "GetInt32", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline int64_t System::Runtime::Serialization::SerializationInfo::GetInt64(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "GetInt64", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, name);
}
inline float_t System::Runtime::Serialization::SerializationInfo::GetSingle(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "GetSingle", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, name);
}
inline ::StringW System::Runtime::Serialization::SerializationInfo::GetString(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationInfo*>(), { "GetString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::System::Runtime::Serialization::SerializationInfo* System::Runtime::Serialization::SerializationInfo::New_ctor(::System::Type* type,
                                                                                                                        ::System::Runtime::Serialization::IFormatterConverter* converter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::SerializationInfo*>(type, converter));
}
inline ::System::Runtime::Serialization::SerializationInfo*
System::Runtime::Serialization::SerializationInfo::New_ctor(::System::Type* type, ::System::Runtime::Serialization::IFormatterConverter* converter, bool requireSameTokenInPartialTrust) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::SerializationInfo*>(type, converter, requireSameTokenInPartialTrust));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SerializationInfo::SerializationInfo() {}
