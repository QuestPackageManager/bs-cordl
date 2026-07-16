#pragma once
// IWYU pragma private; include "System/Reflection/CustomAttributeData.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeNamedArgument_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeTypedArgument_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::CustomAttributeData_LazyCAttrData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::CustomAttributeData_LazyCAttrData::*)()>(&::System::Reflection::CustomAttributeData_LazyCAttrData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b871e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData_LazyCAttrData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::Assembly*& System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_get_assembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly;
}
constexpr ::System::Reflection::Assembly* const& System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_get_assembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly;
}
constexpr void System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_set_assembly(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assembly = value;
}
constexpr ::System::IntPtr& System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::System::IntPtr const& System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_set_data(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
constexpr uint32_t& System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_get_data_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data_length;
}
constexpr uint32_t const& System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_get_data_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data_length;
}
constexpr void System::Reflection::CustomAttributeData_LazyCAttrData::__cordl_internal_set_data_length(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data_length = value;
}
inline void System::Reflection::CustomAttributeData_LazyCAttrData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData_LazyCAttrData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::CustomAttributeData_LazyCAttrData* System::Reflection::CustomAttributeData_LazyCAttrData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::CustomAttributeData_LazyCAttrData*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::CustomAttributeData_LazyCAttrData::CustomAttributeData_LazyCAttrData() {}
//  Writing Method size for method: ::System::Reflection::CustomAttributeData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b87158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::CustomAttributeData::*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::Assembly*, ::System::IntPtr,
                                                                                                           uint32_t)>(&::System::Reflection::CustomAttributeData::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b8715c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<::System::Reflection::Assembly*>(),
                                                                 ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::CustomAttributeData::*)(::System::Reflection::ConstructorInfo*)>(
    &::System::Reflection::CustomAttributeData::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5b871e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::CustomAttributeData::*)(
    ::System::Reflection::ConstructorInfo*, ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>*,
    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>*)>(&::System::Reflection::CustomAttributeData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b87304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.ResolveArgumentsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::Assembly*, ::System::IntPtr, uint32_t,
                                                                ::by_ref<::ArrayW<::System::Object*>>, ::by_ref<::ArrayW<::System::Object*>>)>(
    &::System::Reflection::CustomAttributeData::ResolveArgumentsInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b87310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(),
                                                { "ResolveArgumentsInternal",
                                                  {},
                                                  { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::IntPtr>(),
                                                    ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Object*>>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Object*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.ResolveArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::ResolveArguments)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5b87314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { "ResolveArguments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.get_Constructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (::System::Reflection::CustomAttributeData::*)()>(
    &::System::Reflection::CustomAttributeData::get_Constructor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b874f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { ::i2c::class_of<::System::Reflection::CustomAttributeData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.get_ConstructorArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* (::System::Reflection::CustomAttributeData::*)()>(
    &::System::Reflection::CustomAttributeData::get_ConstructorArguments)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b874f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { ::i2c::class_of<::System::Reflection::CustomAttributeData*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.get_NamedArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* (::System::Reflection::CustomAttributeData::*)()>(
    &::System::Reflection::CustomAttributeData::get_NamedArguments)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b87510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { ::i2c::class_of<::System::Reflection::CustomAttributeData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::Assembly*)>(
    &::System::Reflection::CustomAttributeData::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b87528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::MemberInfo*)>(
    &::System::Reflection::CustomAttributeData::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b87588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetCustomAttributesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::RuntimeType*)>(
    &::System::Reflection::CustomAttributeData::GetCustomAttributesInternal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b875e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { "GetCustomAttributesInternal", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::Module*)>(
    &::System::Reflection::CustomAttributeData::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b87648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Module*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::ParameterInfo*)>(
    &::System::Reflection::CustomAttributeData::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b876a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.get_AttributeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::get_AttributeType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b87708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { "get_AttributeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::ToString)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x5b87724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { ::i2c::class_of<::System::Reflection::CustomAttributeData*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::CustomAttributeData::*)(::System::Object*)>(&::System::Reflection::CustomAttributeData::Equals)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x5b87cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { ::i2c::class_of<::System::Reflection::CustomAttributeData*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::GetHashCode)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5b88368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { ::i2c::class_of<::System::Reflection::CustomAttributeData*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::ConstructorInfo*& System::Reflection::CustomAttributeData::__cordl_internal_get_ctorInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctorInfo;
}
constexpr ::System::Reflection::ConstructorInfo* const& System::Reflection::CustomAttributeData::__cordl_internal_get_ctorInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctorInfo;
}
constexpr void System::Reflection::CustomAttributeData::__cordl_internal_set_ctorInfo(::System::Reflection::ConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ctorInfo = value;
}
constexpr ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>*& System::Reflection::CustomAttributeData::__cordl_internal_get_ctorArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctorArgs;
}
constexpr ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* const& System::Reflection::CustomAttributeData::__cordl_internal_get_ctorArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctorArgs;
}
constexpr void System::Reflection::CustomAttributeData::__cordl_internal_set_ctorArgs(::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ctorArgs = value;
}
constexpr ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>*& System::Reflection::CustomAttributeData::__cordl_internal_get_namedArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namedArgs;
}
constexpr ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* const& System::Reflection::CustomAttributeData::__cordl_internal_get_namedArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namedArgs;
}
constexpr void System::Reflection::CustomAttributeData::__cordl_internal_set_namedArgs(::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namedArgs = value;
}
constexpr ::System::Reflection::CustomAttributeData_LazyCAttrData*& System::Reflection::CustomAttributeData::__cordl_internal_get_lazyData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lazyData;
}
constexpr ::System::Reflection::CustomAttributeData_LazyCAttrData* const& System::Reflection::CustomAttributeData::__cordl_internal_get_lazyData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lazyData;
}
constexpr void System::Reflection::CustomAttributeData::__cordl_internal_set_lazyData(::System::Reflection::CustomAttributeData_LazyCAttrData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lazyData = value;
}
inline void System::Reflection::CustomAttributeData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Reflection::CustomAttributeData::_ctor(::System::Reflection::ConstructorInfo* ctorInfo, ::System::Reflection::Assembly* assembly, ::System::IntPtr data, uint32_t data_length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<::System::Reflection::Assembly*>(),
                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctorInfo, assembly, data, data_length);
}
inline void System::Reflection::CustomAttributeData::_ctor(::System::Reflection::ConstructorInfo* ctorInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctorInfo);
}
inline void System::Reflection::CustomAttributeData::_ctor(::System::Reflection::ConstructorInfo* ctorInfo,
                                                           ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* ctorArgs,
                                                           ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* namedArgs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>*>(),
                              ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctorInfo, ctorArgs, namedArgs);
}
inline void System::Reflection::CustomAttributeData::ResolveArgumentsInternal(::System::Reflection::ConstructorInfo* ctor, ::System::Reflection::Assembly* assembly, ::System::IntPtr data,
                                                                              uint32_t data_length, ::by_ref<::ArrayW<::System::Object*>> ctorArgs, ::by_ref<::ArrayW<::System::Object*>> namedArgs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(),
                                              { "ResolveArgumentsInternal",
                                                {},
                                                { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::IntPtr>(),
                                                  ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Object*>>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Object*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ctor, assembly, data, data_length, ctorArgs, namedArgs);
}
inline void System::Reflection::CustomAttributeData::ResolveArguments() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { "ResolveArguments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Reflection::CustomAttributeData::get_Constructor() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::CustomAttributeData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* System::Reflection::CustomAttributeData::get_ConstructorArguments() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::CustomAttributeData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* System::Reflection::CustomAttributeData::get_NamedArguments() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::CustomAttributeData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* System::Reflection::CustomAttributeData::GetCustomAttributes(::System::Reflection::Assembly* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*>(nullptr, ___internal_method, target);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* System::Reflection::CustomAttributeData::GetCustomAttributes(::System::Reflection::MemberInfo* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*>(nullptr, ___internal_method, target);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* System::Reflection::CustomAttributeData::GetCustomAttributesInternal(::System::RuntimeType* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { "GetCustomAttributesInternal", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*>(nullptr, ___internal_method, target);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* System::Reflection::CustomAttributeData::GetCustomAttributes(::System::Reflection::Module* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Module*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*>(nullptr, ___internal_method, target);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* System::Reflection::CustomAttributeData::GetCustomAttributes(::System::Reflection::ParameterInfo* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*>(nullptr, ___internal_method, target);
}
inline ::System::Type* System::Reflection::CustomAttributeData::get_AttributeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { "get_AttributeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Reflection::CustomAttributeData::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::CustomAttributeData*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T> System::Reflection::CustomAttributeData::UnboxValues(::ArrayW<::System::Object*> values) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeData*>(), { "UnboxValues", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, values);
}
inline bool System::Reflection::CustomAttributeData::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::CustomAttributeData*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Reflection::CustomAttributeData::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::CustomAttributeData*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Reflection::CustomAttributeData* System::Reflection::CustomAttributeData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::CustomAttributeData*>());
}
inline ::System::Reflection::CustomAttributeData* System::Reflection::CustomAttributeData::New_ctor(::System::Reflection::ConstructorInfo* ctorInfo, ::System::Reflection::Assembly* assembly,
                                                                                                    ::System::IntPtr data, uint32_t data_length) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::CustomAttributeData*>(ctorInfo, assembly, data, data_length));
}
inline ::System::Reflection::CustomAttributeData* System::Reflection::CustomAttributeData::New_ctor(::System::Reflection::ConstructorInfo* ctorInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::CustomAttributeData*>(ctorInfo));
}
inline ::System::Reflection::CustomAttributeData*
System::Reflection::CustomAttributeData::New_ctor(::System::Reflection::ConstructorInfo* ctorInfo,
                                                  ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* ctorArgs,
                                                  ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* namedArgs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::CustomAttributeData*>(ctorInfo, ctorArgs, namedArgs));
}
// Ctor Parameters []
constexpr ::System::Reflection::CustomAttributeData::CustomAttributeData() {}
