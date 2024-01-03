#pragma once
#include "System/Security/AccessControl/zzzz__ObjectAceFlags_impl.hpp"
#include "System/Security/AccessControl/zzzz__QualifiedAce_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/Security/AccessControl/zzzz__ObjectAce_def.hpp"
#include "System/Security/AccessControl/zzzz__AceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__AceQualifier_def.hpp"
#include "System/Security/AccessControl/zzzz__AceType_def.hpp"
#include "System/Security/AccessControl/zzzz__ObjectAceFlags_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(
    ::System::Security::AccessControl::AceFlags, ::System::Security::AccessControl::AceQualifier, int32_t, ::System::Security::Principal::SecurityIdentifier*,
    ::System::Security::AccessControl::ObjectAceFlags, ::System::Guid, ::System::Guid, bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Security::AccessControl::ObjectAce::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x24824ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceQualifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ObjectAceFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Security::AccessControl::ObjectAce::_ctor)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x24838ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_BinaryLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::AccessControl::ObjectAce::*)()>(
    &::System::Security::AccessControl::ObjectAce::get_BinaryLength)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2484584;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_InheritedObjectAceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Security::AccessControl::ObjectAce::*)()>(
    &::System::Security::AccessControl::ObjectAce::get_InheritedObjectAceType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24845d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(),
                                                                               "get_InheritedObjectAceType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.set_InheritedObjectAceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::System::Guid)>(
    &::System::Security::AccessControl::ObjectAce::set_InheritedObjectAceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24845e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), "set_InheritedObjectAceType",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_InheritedObjectAceTypePresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::AccessControl::ObjectAce::*)()>(
    &::System::Security::AccessControl::ObjectAce::get_InheritedObjectAceTypePresent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24844e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(),
                                                                               "get_InheritedObjectAceTypePresent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_ObjectAceFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::ObjectAceFlags (::System::Security::AccessControl::ObjectAce::*)()>(
    &::System::Security::AccessControl::ObjectAce::get_ObjectAceFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24845ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(),
                                                                               "get_ObjectAceFlags", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.set_ObjectAceFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::System::Security::AccessControl::ObjectAceFlags)>(
    &::System::Security::AccessControl::ObjectAce::set_ObjectAceFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24845f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), "set_ObjectAceFlags", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ObjectAceFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_ObjectAceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Security::AccessControl::ObjectAce::*)()>(
    &::System::Security::AccessControl::ObjectAce::get_ObjectAceType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24845fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(),
                                                                               "get_ObjectAceType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.set_ObjectAceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::System::Guid)>(
    &::System::Security::AccessControl::ObjectAce::set_ObjectAceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2484608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), "set_ObjectAceType",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.get_ObjectAceTypePresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::AccessControl::ObjectAce::*)()>(
    &::System::Security::AccessControl::ObjectAce::get_ObjectAceTypePresent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24844d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(),
                                                                               "get_ObjectAceTypePresent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.GetBinaryForm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Security::AccessControl::ObjectAce::GetBinaryForm)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2484610;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.ConvertType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AceType (*)(::System::Security::AccessControl::AceQualifier, bool)>(
    &::System::Security::AccessControl::ObjectAce::ConvertType)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x24843c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), "ConvertType", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceQualifier>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.WriteGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Security::AccessControl::ObjectAce::*)(::System::Guid, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::System::Security::AccessControl::ObjectAce::WriteGuid)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x248477c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), "WriteGuid", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::ObjectAce.ReadGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::System::Security::AccessControl::ObjectAce::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Security::AccessControl::ObjectAce::ReadGuid)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x24844ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), "ReadGuid", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Guid& System::Security::AccessControl::ObjectAce::__get_object_ace_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___object_ace_type;
}
constexpr ::System::Guid const& System::Security::AccessControl::ObjectAce::__get_object_ace_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___object_ace_type;
}
constexpr void System::Security::AccessControl::ObjectAce::__set_object_ace_type(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___object_ace_type = value;
}
constexpr ::System::Guid& System::Security::AccessControl::ObjectAce::__get_inherited_object_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inherited_object_type;
}
constexpr ::System::Guid const& System::Security::AccessControl::ObjectAce::__get_inherited_object_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inherited_object_type;
}
constexpr void System::Security::AccessControl::ObjectAce::__set_inherited_object_type(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inherited_object_type = value;
}
constexpr ::System::Security::AccessControl::ObjectAceFlags& System::Security::AccessControl::ObjectAce::__get_object_ace_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___object_ace_flags;
}
constexpr ::System::Security::AccessControl::ObjectAceFlags const& System::Security::AccessControl::ObjectAce::__get_object_ace_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___object_ace_flags;
}
constexpr void System::Security::AccessControl::ObjectAce::__set_object_ace_flags(::System::Security::AccessControl::ObjectAceFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___object_ace_flags = value;
}
inline ::System::Security::AccessControl::ObjectAce* System::Security::AccessControl::ObjectAce::New_ctor(::System::Security::AccessControl::AceFlags aceFlags,
                                                                                                          ::System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask,
                                                                                                          ::System::Security::Principal::SecurityIdentifier* sid,
                                                                                                          ::System::Security::AccessControl::ObjectAceFlags flags, ::System::Guid type,
                                                                                                          ::System::Guid inheritedType, bool isCallback, ::ArrayW<uint8_t, ::Array<uint8_t>*> opaque) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::AccessControl::ObjectAce*>(aceFlags, qualifier, accessMask, sid, flags, type, inheritedType, isCallback, opaque));
}
inline void System::Security::AccessControl::ObjectAce::_ctor(::System::Security::AccessControl::AceFlags aceFlags, ::System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask,
                                                              ::System::Security::Principal::SecurityIdentifier* sid, ::System::Security::AccessControl::ObjectAceFlags flags, ::System::Guid type,
                                                              ::System::Guid inheritedType, bool isCallback, ::ArrayW<uint8_t, ::Array<uint8_t>*> opaque) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceQualifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ObjectAceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aceFlags, qualifier, accessMask, sid, flags, type, inheritedType, isCallback, opaque);
}
inline ::System::Security::AccessControl::ObjectAce* System::Security::AccessControl::ObjectAce::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::AccessControl::ObjectAce*>(binaryForm, offset));
}
inline void System::Security::AccessControl::ObjectAce::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binaryForm, offset);
}
inline int32_t System::Security::AccessControl::ObjectAce::get_BinaryLength() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Guid System::Security::AccessControl::ObjectAce::get_InheritedObjectAceType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(),
                                                                             "get_InheritedObjectAceType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline void System::Security::AccessControl::ObjectAce::set_InheritedObjectAceType(::System::Guid value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), "set_InheritedObjectAceType",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Security::AccessControl::ObjectAce::get_InheritedObjectAceTypePresent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(),
                                                                             "get_InheritedObjectAceTypePresent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Security::AccessControl::ObjectAceFlags System::Security::AccessControl::ObjectAce::get_ObjectAceFlags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(),
                                                                             "get_ObjectAceFlags", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::ObjectAceFlags, false>(this, ___internal_method);
}
inline void System::Security::AccessControl::ObjectAce::set_ObjectAceFlags(::System::Security::AccessControl::ObjectAceFlags value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), "set_ObjectAceFlags", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ObjectAceFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Guid System::Security::AccessControl::ObjectAce::get_ObjectAceType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(),
                                                                             "get_ObjectAceType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline void System::Security::AccessControl::ObjectAce::set_ObjectAceType(::System::Guid value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), "set_ObjectAceType",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Security::AccessControl::ObjectAce::get_ObjectAceTypePresent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(),
                                                                             "get_ObjectAceTypePresent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Security::AccessControl::ObjectAce::GetBinaryForm(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binaryForm, offset);
}
inline ::System::Security::AccessControl::AceType System::Security::AccessControl::ObjectAce::ConvertType(::System::Security::AccessControl::AceQualifier qualifier, bool isCallback) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), "ConvertType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceQualifier>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AceType, false>(nullptr, ___internal_method, qualifier, isCallback);
}
inline void System::Security::AccessControl::ObjectAce::WriteGuid(::System::Guid val, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), "WriteGuid", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val, buffer, offset);
}
inline ::System::Guid System::Security::AccessControl::ObjectAce::ReadGuid(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::ObjectAce*>::get(), "ReadGuid", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method, buffer, offset);
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::ObjectAce::ObjectAce() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
