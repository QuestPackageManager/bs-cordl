#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/ObjectMap.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectMap_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryAssemblyInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectReader_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ReadObjectInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SizedArray_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectMap::*)(
    ::StringW, ::System::Type*, ::ArrayW<::StringW, ::Array<::StringW>*>, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, int32_t,
    ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectMap::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x285e6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectMap::*)(
    ::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>,
    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>,
    ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::ArrayW<int32_t, ::Array<int32_t>*>, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, int32_t,
    ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::System::Runtime::Serialization::Formatters::Binary::SizedArray*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectMap::_ctor)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x285e86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
            ::std::array<Il2CppType const*, 9>{
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SizedArray*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectMap.CreateObjectInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* (
    ::System::Runtime::Serialization::Formatters::Binary::ObjectMap::*)(ByRef<::System::Runtime::Serialization::SerializationInfo*>, ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectMap::CreateObjectInfo)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x285eb54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>::get(), "CreateObjectInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::Serialization::SerializationInfo*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectMap.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::Formatters::Binary::ObjectMap* (*)(::StringW, ::System::Type*, ::ArrayW<::StringW, ::Array<::StringW>*>,
                                                                                     ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, int32_t,
                                                                                     ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*)>(
        &::System::Runtime::Serialization::Formatters::Binary::ObjectMap::Create)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x285ebbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectMap.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::Formatters::Binary::
                    ObjectMap* (*)(::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>,
                                   ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>,
                                   ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::ArrayW<int32_t, ::Array<int32_t>*>, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*,
                                   int32_t, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::System::Runtime::Serialization::Formatters::Binary::SizedArray*)>(
        &::System::Runtime::Serialization::Formatters::Binary::ObjectMap::Create)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x285ec5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
            ::std::array<Il2CppType const*, 9>{
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SizedArray*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_objectName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectType;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_objectType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>&
System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_binaryTypeEnumA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryTypeEnumA;
}
constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> const&
System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_binaryTypeEnumA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryTypeEnumA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_binaryTypeEnumA(
    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___binaryTypeEnumA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_typeInformationA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInformationA;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_typeInformationA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInformationA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_typeInformationA(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___typeInformationA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_memberTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypes;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_memberTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypes;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_memberTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_memberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_memberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_memberNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*> const&
System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectInfo;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_objectInfo(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_isInitObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInitObjectInfo;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_isInitObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInitObjectInfo;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_isInitObjectInfo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isInitObjectInfo = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectReader;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*> const&
System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectReader;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_objectReader(::System::Runtime::Serialization::Formatters::Binary::ObjectReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_objectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_objectId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectId = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*& System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_assemblyInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*> const&
System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_get_assemblyInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyInfo;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMap::__cordl_internal_set_assemblyInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assemblyInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMap*
System::Runtime::Serialization::Formatters::Binary::ObjectMap::New_ctor(::StringW objectName, ::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                                                                        ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
                                                                        ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>(objectName, objectType, memberNames, objectReader, objectId, assemblyInfo));
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectMap::_ctor(::StringW objectName, ::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                                                                                 ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
                                                                                 ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectName, objectType, memberNames, objectReader, objectId, assemblyInfo);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMap* System::Runtime::Serialization::Formatters::Binary::ObjectMap::New_ctor(
    ::StringW objectName, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> binaryTypeEnumA,
    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> typeInformationA, ::ArrayW<int32_t, ::Array<int32_t>*> memberAssemIds,
    ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo,
    ::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>(objectName, memberNames, binaryTypeEnumA, typeInformationA, memberAssemIds,
                                                                                                                    objectReader, objectId, assemblyInfo, assemIdToAssemblyTable));
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectMap::_ctor(
    ::StringW objectName, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> binaryTypeEnumA,
    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> typeInformationA, ::ArrayW<int32_t, ::Array<int32_t>*> memberAssemIds,
    ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo,
    ::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
          ::std::array<Il2CppType const*, 9>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SizedArray*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectName, memberNames, binaryTypeEnumA, typeInformationA, memberAssemIds, objectReader, objectId, assemblyInfo,
                                                          assemIdToAssemblyTable);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*
System::Runtime::Serialization::Formatters::Binary::ObjectMap::CreateObjectInfo(ByRef<::System::Runtime::Serialization::SerializationInfo*> si,
                                                                                ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> memberData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>::get(), "CreateObjectInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::Serialization::SerializationInfo*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, false>(this, ___internal_method, si, memberData);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMap*
System::Runtime::Serialization::Formatters::Binary::ObjectMap::Create(::StringW name, ::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                                                                      ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId,
                                                                      ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*, false>(nullptr, ___internal_method, name, objectType, memberNames, objectReader,
                                                                                                                      objectId, assemblyInfo);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMap* System::Runtime::Serialization::Formatters::Binary::ObjectMap::Create(
    ::StringW name, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> binaryTypeEnumA,
    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> typeInformationA, ::ArrayW<int32_t, ::Array<int32_t>*> memberAssemIds,
    ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo,
    ::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
          ::std::array<Il2CppType const*, 9>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                  ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SizedArray*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ObjectMap*, false>(nullptr, ___internal_method, name, memberNames, binaryTypeEnumA, typeInformationA,
                                                                                                                      memberAssemIds, objectReader, objectId, assemblyInfo, assemIdToAssemblyTable);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectMap::ObjectMap() {}
