#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceTypeInfo.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceTypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceTypeInfo.InitParentTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::InstanceTypeInfo::InitParentTypes)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x68280e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceTypeInfo*>(), { "InitParentTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceTypeInfo.InitChildTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::InstanceTypeInfo::InitChildTypes)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x682819c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceTypeInfo*>(), { "InitChildTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceTypeInfo.GetMaxChildTypeRecursively
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::InstanceType (*)(::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::InstanceTypeInfo::GetMaxChildTypeRecursively)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x682852c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceTypeInfo*>(),
                                                                                           { "GetMaxChildTypeRecursively", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceTypeInfo.FlattenChildInstanceTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::InstanceType, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceType>)>(
    &::UnityEngine::Rendering::InstanceTypeInfo::FlattenChildInstanceTypes)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x682869c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceTypeInfo*>(),
                            { "FlattenChildInstanceTypes",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceTypeInfo.ValidateTypeRelationsAreCorrectlySorted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::InstanceTypeInfo::ValidateTypeRelationsAreCorrectlySorted)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x68283ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceTypeInfo*>(), { "ValidateTypeRelationsAreCorrectlySorted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceTypeInfo.GetParentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::InstanceType (*)(::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::InstanceTypeInfo::GetParentType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6828830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceTypeInfo*>(), { "GetParentType", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceTypeInfo.GetChildTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::InstanceType>* (*)(::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::InstanceTypeInfo::GetChildTypes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68288b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceTypeInfo*>(), { "GetChildTypes", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceTypeInfo::setStaticF_s_ParentTypes(::ArrayW<::UnityEngine::Rendering::InstanceType> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::InstanceType>, "s_ParentTypes", ::UnityEngine::Rendering::InstanceTypeInfo*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::InstanceType>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::InstanceType> UnityEngine::Rendering::InstanceTypeInfo::getStaticF_s_ParentTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::InstanceType>, "s_ParentTypes", ::UnityEngine::Rendering::InstanceTypeInfo*>();
}
inline void UnityEngine::Rendering::InstanceTypeInfo::setStaticF_s_ChildTypes(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::InstanceType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::InstanceType>*>, "s_ChildTypes", ::UnityEngine::Rendering::InstanceTypeInfo*>(
      std::forward<::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::InstanceType>*>>(value));
}
inline ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::InstanceType>*> UnityEngine::Rendering::InstanceTypeInfo::getStaticF_s_ChildTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::InstanceType>*>, "s_ChildTypes", ::UnityEngine::Rendering::InstanceTypeInfo*>();
}
inline void UnityEngine::Rendering::InstanceTypeInfo::InitParentTypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceTypeInfo*>(), { "InitParentTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceTypeInfo::InitChildTypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceTypeInfo*>(), { "InitChildTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::InstanceType UnityEngine::Rendering::InstanceTypeInfo::GetMaxChildTypeRecursively(::UnityEngine::Rendering::InstanceType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceTypeInfo*>(),
                                                                                         { "GetMaxChildTypeRecursively", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceType>(nullptr, ___internal_method, type);
}
inline void UnityEngine::Rendering::InstanceTypeInfo::FlattenChildInstanceTypes(::UnityEngine::Rendering::InstanceType instanceType,
                                                                                ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceType> instanceTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceTypeInfo*>(),
                          { "FlattenChildInstanceTypes",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceType>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instanceType, instanceTypes);
}
inline void UnityEngine::Rendering::InstanceTypeInfo::ValidateTypeRelationsAreCorrectlySorted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceTypeInfo*>(), { "ValidateTypeRelationsAreCorrectlySorted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::InstanceType UnityEngine::Rendering::InstanceTypeInfo::GetParentType(::UnityEngine::Rendering::InstanceType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceTypeInfo*>(), { "GetParentType", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceType>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::InstanceType>* UnityEngine::Rendering::InstanceTypeInfo::GetChildTypes(::UnityEngine::Rendering::InstanceType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceTypeInfo*>(), { "GetChildTypes", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::InstanceType>*>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceTypeInfo::InstanceTypeInfo() {}
