#pragma once
#include "System/Xml/Serialization/zzzz__ObjectMap_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__EnumMap_def.hpp"
#include "System/Xml/Serialization/zzzz__EnumMap_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::__EnumMap__EnumMapMember._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::__EnumMap__EnumMapMember::*)(::StringW, ::StringW, int64_t)>(
    &::System::Xml::Serialization::__EnumMap__EnumMapMember::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2df08a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__EnumMap__EnumMapMember*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__EnumMap__EnumMapMember.get_XmlName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Serialization::__EnumMap__EnumMapMember::*)()>(
    &::System::Xml::Serialization::__EnumMap__EnumMapMember::get_XmlName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2df08dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__EnumMap__EnumMapMember*>::get(),
                                                                               "get_XmlName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__EnumMap__EnumMapMember.get_EnumName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Serialization::__EnumMap__EnumMapMember::*)()>(
    &::System::Xml::Serialization::__EnumMap__EnumMapMember::get_EnumName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2df08e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__EnumMap__EnumMapMember*>::get(),
                                                                               "get_EnumName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__EnumMap__EnumMapMember.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Xml::Serialization::__EnumMap__EnumMapMember::*)()>(
    &::System::Xml::Serialization::__EnumMap__EnumMapMember::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2df08ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__EnumMap__EnumMapMember*>::get(),
                                                                               "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::__EnumMap__EnumMapMember::__cordl_internal_get__xmlName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlName;
}
constexpr ::StringW const& System::Xml::Serialization::__EnumMap__EnumMapMember::__cordl_internal_get__xmlName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlName;
}
constexpr void System::Xml::Serialization::__EnumMap__EnumMapMember::__cordl_internal_set__xmlName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____xmlName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::__EnumMap__EnumMapMember::__cordl_internal_get__enumName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumName;
}
constexpr ::StringW const& System::Xml::Serialization::__EnumMap__EnumMapMember::__cordl_internal_get__enumName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumName;
}
constexpr void System::Xml::Serialization::__EnumMap__EnumMapMember::__cordl_internal_set__enumName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enumName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Xml::Serialization::__EnumMap__EnumMapMember::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr int64_t const& System::Xml::Serialization::__EnumMap__EnumMapMember::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void System::Xml::Serialization::__EnumMap__EnumMapMember::__cordl_internal_set__value(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
inline ::System::Xml::Serialization::__EnumMap__EnumMapMember* System::Xml::Serialization::__EnumMap__EnumMapMember::New_ctor(::StringW xmlName, ::StringW enumName, int64_t value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::__EnumMap__EnumMapMember*>(xmlName, enumName, value));
}
inline void System::Xml::Serialization::__EnumMap__EnumMapMember::_ctor(::StringW xmlName, ::StringW enumName, int64_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__EnumMap__EnumMapMember*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlName, enumName, value);
}
inline ::StringW System::Xml::Serialization::__EnumMap__EnumMapMember::get_XmlName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__EnumMap__EnumMapMember*>::get(),
                                                                             "get_XmlName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::__EnumMap__EnumMapMember::get_EnumName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__EnumMap__EnumMapMember*>::get(),
                                                                             "get_EnumName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int64_t System::Xml::Serialization::__EnumMap__EnumMapMember::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__EnumMap__EnumMapMember*>::get(),
                                                                             "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::__EnumMap__EnumMapMember::__EnumMap__EnumMapMember() {}
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::EnumMap::*)(
    ::ArrayW<::System::Xml::Serialization::__EnumMap__EnumMapMember*, ::Array<::System::Xml::Serialization::__EnumMap__EnumMapMember*>*>, bool)>(&::System::Xml::Serialization::EnumMap::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2df040c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::EnumMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ArrayW<::System::Xml::Serialization::__EnumMap__EnumMapMember*, ::Array<::System::Xml::Serialization::__EnumMap__EnumMapMember*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap.get_IsFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::EnumMap::*)()>(&::System::Xml::Serialization::EnumMap::get_IsFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2df05a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::EnumMap*>::get(), "get_IsFlags",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap.get_EnumNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Xml::Serialization::EnumMap::*)()>(
    &::System::Xml::Serialization::EnumMap::get_EnumNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2df05a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::EnumMap*>::get(), "get_EnumNames",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap.get_XmlNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Xml::Serialization::EnumMap::*)()>(
    &::System::Xml::Serialization::EnumMap::get_XmlNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2df05b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::EnumMap*>::get(), "get_XmlNames",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap.get_Values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int64_t, ::Array<int64_t>*> (::System::Xml::Serialization::EnumMap::*)()>(
    &::System::Xml::Serialization::EnumMap::get_Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2df05b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::EnumMap*>::get(), "get_Values",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap.GetXmlName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Serialization::EnumMap::*)(::StringW, ::System::Object*)>(
    &::System::Xml::Serialization::EnumMap::GetXmlName)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x2dea4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::EnumMap*>::get(), "GetXmlName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::EnumMap.GetEnumName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Serialization::EnumMap::*)(::StringW, ::StringW)>(
    &::System::Xml::Serialization::EnumMap::GetEnumName)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x2df05c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::EnumMap*>::get(), "GetEnumName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Xml::Serialization::__EnumMap__EnumMapMember*, ::Array<::System::Xml::Serialization::__EnumMap__EnumMapMember*>*>&
System::Xml::Serialization::EnumMap::__cordl_internal_get__members() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____members;
}
constexpr ::ArrayW<::System::Xml::Serialization::__EnumMap__EnumMapMember*, ::Array<::System::Xml::Serialization::__EnumMap__EnumMapMember*>*> const&
System::Xml::Serialization::EnumMap::__cordl_internal_get__members() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____members;
}
constexpr void System::Xml::Serialization::EnumMap::__cordl_internal_set__members(
    ::ArrayW<::System::Xml::Serialization::__EnumMap__EnumMapMember*, ::Array<::System::Xml::Serialization::__EnumMap__EnumMapMember*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____members)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::Serialization::EnumMap::__cordl_internal_get__isFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFlags;
}
constexpr bool const& System::Xml::Serialization::EnumMap::__cordl_internal_get__isFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFlags;
}
constexpr void System::Xml::Serialization::EnumMap::__cordl_internal_set__isFlags(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isFlags = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Xml::Serialization::EnumMap::__cordl_internal_get__enumNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Xml::Serialization::EnumMap::__cordl_internal_get__enumNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumNames;
}
constexpr void System::Xml::Serialization::EnumMap::__cordl_internal_set__enumNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enumNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Xml::Serialization::EnumMap::__cordl_internal_get__xmlNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Xml::Serialization::EnumMap::__cordl_internal_get__xmlNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlNames;
}
constexpr void System::Xml::Serialization::EnumMap::__cordl_internal_set__xmlNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____xmlNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& System::Xml::Serialization::EnumMap::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& System::Xml::Serialization::EnumMap::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void System::Xml::Serialization::EnumMap::__cordl_internal_set__values(::ArrayW<int64_t, ::Array<int64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Serialization::EnumMap*
System::Xml::Serialization::EnumMap::New_ctor(::ArrayW<::System::Xml::Serialization::__EnumMap__EnumMapMember*, ::Array<::System::Xml::Serialization::__EnumMap__EnumMapMember*>*> members,
                                              bool isFlags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::EnumMap*>(members, isFlags));
}
inline void System::Xml::Serialization::EnumMap::_ctor(::ArrayW<::System::Xml::Serialization::__EnumMap__EnumMapMember*, ::Array<::System::Xml::Serialization::__EnumMap__EnumMapMember*>*> members,
                                                       bool isFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::EnumMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::ArrayW<::System::Xml::Serialization::__EnumMap__EnumMapMember*, ::Array<::System::Xml::Serialization::__EnumMap__EnumMapMember*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, members, isFlags);
}
inline bool System::Xml::Serialization::EnumMap::get_IsFlags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::EnumMap*>::get(), "get_IsFlags",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Xml::Serialization::EnumMap::get_EnumNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::EnumMap*>::get(), "get_EnumNames",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Xml::Serialization::EnumMap::get_XmlNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::EnumMap*>::get(), "get_XmlNames",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<int64_t, ::Array<int64_t>*> System::Xml::Serialization::EnumMap::get_Values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::EnumMap*>::get(), "get_Values",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int64_t, ::Array<int64_t>*>, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::EnumMap::GetXmlName(::StringW typeName, ::System::Object* enumValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::EnumMap*>::get(), "GetXmlName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, typeName, enumValue);
}
inline ::StringW System::Xml::Serialization::EnumMap::GetEnumName(::StringW typeName, ::StringW xmlName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::EnumMap*>::get(), "GetEnumName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, typeName, xmlName);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::EnumMap::EnumMap() {}
