#pragma once
#include "System/Data/zzzz__XMLSchema_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__XDRSchema_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__XDRSchema_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::__XDRSchema__NameType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::__XDRSchema__NameType::*)(::StringW, ::System::Type*)>(
    &::System::Data::__XDRSchema__NameType::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ce4ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__XDRSchema__NameType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::__XDRSchema__NameType.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::__XDRSchema__NameType::*)(::System::Object*)>(
    &::System::Data::__XDRSchema__NameType::CompareTo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ce4ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__XDRSchema__NameType*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable"
constexpr System::Data::__XDRSchema__NameType::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Data::__XDRSchema__NameType::i___System__IComparable() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
constexpr ::StringW& System::Data::__XDRSchema__NameType::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Data::__XDRSchema__NameType::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Data::__XDRSchema__NameType::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Data::__XDRSchema__NameType::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Data::__XDRSchema__NameType::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Data::__XDRSchema__NameType::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Data::__XDRSchema__NameType* System::Data::__XDRSchema__NameType::New_ctor(::StringW n, ::System::Type* t) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::__XDRSchema__NameType*>(n, t));
}
inline void System::Data::__XDRSchema__NameType::_ctor(::StringW n, ::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__XDRSchema__NameType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n, t);
}
inline int32_t System::Data::__XDRSchema__NameType::CompareTo(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__XDRSchema__NameType*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::System::Data::__XDRSchema__NameType::__XDRSchema__NameType() {}
//  Writing Method size for method: ::System::Data::XDRSchema._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XDRSchema::*)(::System::Data::DataSet*, bool)>(&::System::Data::XDRSchema::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ce1294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.LoadSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*, ::System::Data::DataSet*)>(
    &::System::Data::XDRSchema::LoadSchema)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2ce130c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "LoadSchema", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.FindTypeNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlElement* (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*)>(
    &::System::Data::XDRSchema::FindTypeNode)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x2ce174c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "FindTypeNode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.IsTextOnlyContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*)>(&::System::Data::XDRSchema::IsTextOnlyContent)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2ce1a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "IsTextOnlyContent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.IsXDRField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*, ::System::Xml::XmlElement*)>(
    &::System::Data::XDRSchema::IsXDRField)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2ce1c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "IsXDRField", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.HandleTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*)>(
    &::System::Data::XDRSchema::HandleTable)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2ce158c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "HandleTable", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.FindNameType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::__XDRSchema__NameType* (*)(::StringW)>(&::System::Data::XDRSchema::FindNameType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2ce2678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "FindNameType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.ParseDataType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Data::XDRSchema::*)(::StringW, ::StringW)>(&::System::Data::XDRSchema::ParseDataType)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2ce274c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "ParseDataType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.GetInstanceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*)>(&::System::Data::XDRSchema::GetInstanceName)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2ce2888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "GetInstanceName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.HandleColumn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*, ::System::Data::DataTable*)>(
    &::System::Data::XDRSchema::HandleColumn)> {
  constexpr static std::size_t size = 0x860;
  constexpr static std::size_t addrs = 0x2ce2a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "HandleColumn", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.GetMinMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*, ByRef<int32_t>, ByRef<int32_t>)>(
    &::System::Data::XDRSchema::GetMinMax)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ce1d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "GetMinMax", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.GetMinMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*, bool, ByRef<int32_t>, ByRef<int32_t>)>(
    &::System::Data::XDRSchema::GetMinMax)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x2ce3388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "GetMinMax", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.HandleTypeNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::XDRSchema::*)(::System::Xml::XmlElement*, ::System::Data::DataTable*, ::System::Collections::ArrayList*)>(&::System::Data::XDRSchema::HandleTypeNode)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2ce3b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "HandleTypeNode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.InstantiateTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (
    ::System::Data::XDRSchema::*)(::System::Data::DataSet*, ::System::Xml::XmlElement*, ::System::Xml::XmlElement*)>(&::System::Data::XDRSchema::InstantiateTable)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x2ce1fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "InstantiateTable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XDRSchema.InstantiateSimpleTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (::System::Data::XDRSchema::*)(::System::Data::DataSet*, ::System::Xml::XmlElement*)>(
    &::System::Data::XDRSchema::InstantiateSimpleTable)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2ce1d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "InstantiateSimpleTable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Data::XDRSchema::__cordl_internal_get__schemaName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaName;
}
constexpr ::StringW const& System::Data::XDRSchema::__cordl_internal_get__schemaName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaName;
}
constexpr void System::Data::XDRSchema::__cordl_internal_set__schemaName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____schemaName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Data::XDRSchema::__cordl_internal_get__schemaUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaUri;
}
constexpr ::StringW const& System::Data::XDRSchema::__cordl_internal_get__schemaUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaUri;
}
constexpr void System::Data::XDRSchema::__cordl_internal_set__schemaUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____schemaUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlElement*& System::Data::XDRSchema::__cordl_internal_get__schemaRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaRoot;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlElement*> const& System::Data::XDRSchema::__cordl_internal_get__schemaRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaRoot;
}
constexpr void System::Data::XDRSchema::__cordl_internal_set__schemaRoot(::System::Xml::XmlElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____schemaRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataSet*& System::Data::XDRSchema::__cordl_internal_get__ds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataSet*> const& System::Data::XDRSchema::__cordl_internal_get__ds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ds;
}
constexpr void System::Data::XDRSchema::__cordl_internal_set__ds(::System::Data::DataSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Data::XDRSchema::setStaticF_s_colonArray(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "s_colonArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Data::XDRSchema::getStaticF_s_colonArray() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "s_colonArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get>();
}
inline void System::Data::XDRSchema::setStaticF_s_mapNameTypeXdr(::ArrayW<::System::Data::__XDRSchema__NameType*, ::Array<::System::Data::__XDRSchema__NameType*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Data::__XDRSchema__NameType*, ::Array<::System::Data::__XDRSchema__NameType*>*>, "s_mapNameTypeXdr",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get>(
      std::forward<::ArrayW<::System::Data::__XDRSchema__NameType*, ::Array<::System::Data::__XDRSchema__NameType*>*>>(value));
}
inline ::ArrayW<::System::Data::__XDRSchema__NameType*, ::Array<::System::Data::__XDRSchema__NameType*>*> System::Data::XDRSchema::getStaticF_s_mapNameTypeXdr() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Data::__XDRSchema__NameType*, ::Array<::System::Data::__XDRSchema__NameType*>*>, "s_mapNameTypeXdr",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get>();
}
inline void System::Data::XDRSchema::setStaticF_s_enumerationNameType(::System::Data::__XDRSchema__NameType* value) {
  ::cordl_internals::setStaticField<::System::Data::__XDRSchema__NameType*, "s_enumerationNameType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get>(
      std::forward<::System::Data::__XDRSchema__NameType*>(value));
}
inline ::System::Data::__XDRSchema__NameType* System::Data::XDRSchema::getStaticF_s_enumerationNameType() {
  return ::cordl_internals::getStaticField<::System::Data::__XDRSchema__NameType*, "s_enumerationNameType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get>();
}
inline ::System::Data::XDRSchema* System::Data::XDRSchema::New_ctor(::System::Data::DataSet* ds, bool fInline) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::XDRSchema*>(ds, fInline));
}
inline void System::Data::XDRSchema::_ctor(::System::Data::DataSet* ds, bool fInline) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ds, fInline);
}
inline void System::Data::XDRSchema::LoadSchema(::System::Xml::XmlElement* schemaRoot, ::System::Data::DataSet* ds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "LoadSchema", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schemaRoot, ds);
}
inline ::System::Xml::XmlElement* System::Data::XDRSchema::FindTypeNode(::System::Xml::XmlElement* node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "FindTypeNode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*, false>(this, ___internal_method, node);
}
inline bool System::Data::XDRSchema::IsTextOnlyContent(::System::Xml::XmlElement* node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "IsTextOnlyContent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline bool System::Data::XDRSchema::IsXDRField(::System::Xml::XmlElement* node, ::System::Xml::XmlElement* typeNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "IsXDRField", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node, typeNode);
}
inline ::System::Data::DataTable* System::Data::XDRSchema::HandleTable(::System::Xml::XmlElement* node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "HandleTable", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method, node);
}
inline ::System::Data::__XDRSchema__NameType* System::Data::XDRSchema::FindNameType(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "FindNameType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::__XDRSchema__NameType*, false>(nullptr, ___internal_method, name);
}
inline ::System::Type* System::Data::XDRSchema::ParseDataType(::StringW dt, ::StringW dtValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "ParseDataType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, dt, dtValues);
}
inline ::StringW System::Data::XDRSchema::GetInstanceName(::System::Xml::XmlElement* node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "GetInstanceName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, node);
}
inline void System::Data::XDRSchema::HandleColumn(::System::Xml::XmlElement* node, ::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "HandleColumn", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, table);
}
inline void System::Data::XDRSchema::GetMinMax(::System::Xml::XmlElement* elNode, ByRef<int32_t> minOccurs, ByRef<int32_t> maxOccurs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "GetMinMax", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elNode, minOccurs, maxOccurs);
}
inline void System::Data::XDRSchema::GetMinMax(::System::Xml::XmlElement* elNode, bool isAttribute, ByRef<int32_t> minOccurs, ByRef<int32_t> maxOccurs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "GetMinMax", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elNode, isAttribute, minOccurs, maxOccurs);
}
inline void System::Data::XDRSchema::HandleTypeNode(::System::Xml::XmlElement* typeNode, ::System::Data::DataTable* table, ::System::Collections::ArrayList* tableChildren) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "HandleTypeNode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeNode, table, tableChildren);
}
inline ::System::Data::DataTable* System::Data::XDRSchema::InstantiateTable(::System::Data::DataSet* dataSet, ::System::Xml::XmlElement* node, ::System::Xml::XmlElement* typeNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "InstantiateTable", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method, dataSet, node, typeNode);
}
inline ::System::Data::DataTable* System::Data::XDRSchema::InstantiateSimpleTable(::System::Data::DataSet* dataSet, ::System::Xml::XmlElement* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XDRSchema*>::get(), "InstantiateSimpleTable", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method, dataSet, node);
}
// Ctor Parameters []
constexpr ::System::Data::XDRSchema::XDRSchema() {}
