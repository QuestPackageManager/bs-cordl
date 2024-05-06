#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlReflectionImporter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Serialization/zzzz__ReflectionHelper_def.hpp"
#include "System/Xml/Serialization/zzzz__TypeData_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributeOverrides_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributes_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlReflectionImporter_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlReflectionMember_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlRootAttribute_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapElementInfoList_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberElement_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMember_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapping_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::__XmlReflectionImporter____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::__XmlReflectionImporter____c::*)()>(
    &::System::Xml::Serialization::__XmlReflectionImporter____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ed6ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlReflectionImporter____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::__XmlReflectionImporter____c._ImportClassMapping_b__28_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Xml::Serialization::__XmlReflectionImporter____c::*)(::System::Xml::Serialization::XmlReflectionMember*, ::System::Xml::Serialization::XmlReflectionMember*)>(
        &::System::Xml::Serialization::__XmlReflectionImporter____c::_ImportClassMapping_b__28_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2ed6ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlReflectionImporter____c*>::get(), "<ImportClassMapping>b__28_0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlReflectionMember*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlReflectionMember*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::__XmlReflectionImporter____c::setStaticF___9(::System::Xml::Serialization::__XmlReflectionImporter____c* value) {
  ::cordl_internals::setStaticField<::System::Xml::Serialization::__XmlReflectionImporter____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlReflectionImporter____c*>::get>(
      std::forward<::System::Xml::Serialization::__XmlReflectionImporter____c*>(value));
}
inline ::System::Xml::Serialization::__XmlReflectionImporter____c* System::Xml::Serialization::__XmlReflectionImporter____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Xml::Serialization::__XmlReflectionImporter____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlReflectionImporter____c*>::get>();
}
inline void System::Xml::Serialization::__XmlReflectionImporter____c::setStaticF___9__28_0(::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>*, "<>9__28_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlReflectionImporter____c*>::get>(
      std::forward<::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>*>(value));
}
inline ::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>* System::Xml::Serialization::__XmlReflectionImporter____c::getStaticF___9__28_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>*, "<>9__28_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlReflectionImporter____c*>::get>();
}
inline ::System::Xml::Serialization::__XmlReflectionImporter____c* System::Xml::Serialization::__XmlReflectionImporter____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::__XmlReflectionImporter____c*>());
}
inline void System::Xml::Serialization::__XmlReflectionImporter____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlReflectionImporter____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::Serialization::__XmlReflectionImporter____c::_ImportClassMapping_b__28_0(::System::Xml::Serialization::XmlReflectionMember* m1,
                                                                                                     ::System::Xml::Serialization::XmlReflectionMember* m2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::__XmlReflectionImporter____c*>::get(), "<ImportClassMapping>b__28_0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlReflectionMember*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlReflectionMember*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, m1, m2);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::__XmlReflectionImporter____c::__XmlReflectionImporter____c() {}
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlReflectionImporter::*)(
    ::System::Xml::Serialization::XmlAttributeOverrides*, ::StringW)>(&::System::Xml::Serialization::XmlReflectionImporter::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2ecfc30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributeOverrides*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportTypeMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*)>(&::System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ecfd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportTypeMapping",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportTypeMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*, ::StringW)>(&::System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ecff3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportTypeMapping", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportTypeMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::Serialization::XmlTypeMapping* (::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(
        &::System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2ecfd54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportTypeMapping", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportTypeMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x2ecff48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportTypeMapping", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.CreateTypeMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::CreateTypeMapping)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x2ed2a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "CreateTypeMapping", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportClassMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW, bool)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportClassMapping)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2ed2f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportClassMapping", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportClassMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW, bool)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportClassMapping)> {
  constexpr static std::size_t size = 0xff0;
  constexpr static std::size_t addrs = 0x2ed03cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportClassMapping", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.RegisterDerivedMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlReflectionImporter::*)(
    ::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::XmlTypeMapping*)>(&::System::Xml::Serialization::XmlReflectionImporter::RegisterDerivedMap)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2ed4834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "RegisterDerivedMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.GetTypeNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Serialization::XmlReflectionImporter::*)(
    ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(&::System::Xml::Serialization::XmlReflectionImporter::GetTypeNamespace)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2ed2fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "GetTypeNamespace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportListMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW, ::System::Xml::Serialization::XmlAttributes*, int32_t)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportListMapping)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2ed4a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportListMapping", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportListMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW,
                                                            ::System::Xml::Serialization::XmlAttributes*, int32_t)>(&::System::Xml::Serialization::XmlReflectionImporter::ImportListMapping)> {
  constexpr static std::size_t size = 0xd04;
  constexpr static std::size_t addrs = 0x2ed13bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportListMapping", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportXmlNodeMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportXmlNodeMapping)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2ed20c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportXmlNodeMapping", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportPrimitiveMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportPrimitiveMapping)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ed2294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportPrimitiveMapping", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportEnumMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportEnumMapping)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x2ed2348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportEnumMapping", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportXmlSerializableMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportXmlSerializableMapping)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2ed2940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportXmlSerializableMapping", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportIncludedTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportIncludedTypes)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2ed4950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportIncludedTypes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.GetReflectionMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Xml::Serialization::XmlReflectionMember*>* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*)>(&::System::Xml::Serialization::XmlReflectionImporter::GetReflectionMembers)> {
  constexpr static std::size_t size = 0xd64;
  constexpr static std::size_t addrs = 0x2ed30c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "GetReflectionMembers",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.CreateMapMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapMember* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*, ::System::Xml::Serialization::XmlReflectionMember*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::CreateMapMember)> {
  constexpr static std::size_t size = 0x9a8;
  constexpr static std::size_t addrs = 0x2ed3e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "CreateMapMember", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlReflectionMember*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportElementInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapElementInfoList* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*, ::StringW, ::StringW, ::System::Type*, ::System::Xml::Serialization::XmlTypeMapMemberElement*,
                                                            ::System::Xml::Serialization::XmlAttributes*)>(&::System::Xml::Serialization::XmlReflectionImporter::ImportElementInfo)> {
  constexpr static std::size_t size = 0x1164;
  constexpr static std::size_t addrs = 0x2ed5264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportElementInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMemberElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributes*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportAnyElementInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapElementInfoList* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::StringW, ::System::Xml::Serialization::XmlReflectionMember*, ::System::Xml::Serialization::XmlTypeMapMemberElement*,
                                                            ::System::Xml::Serialization::XmlAttributes*)>(&::System::Xml::Serialization::XmlReflectionImporter::ImportAnyElementInfo)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x2ed4b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportAnyElementInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlReflectionMember*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMemberElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributes*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.ImportTextElementInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlReflectionImporter::*)(
    ::System::Xml::Serialization::XmlTypeMapElementInfoList*, ::System::Type*, ::System::Xml::Serialization::XmlTypeMapMemberElement*, ::System::Xml::Serialization::XmlAttributes*, ::StringW)>(
    &::System::Xml::Serialization::XmlReflectionImporter::ImportTextElementInfo)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x2ed659c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportTextElementInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapElementInfoList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMemberElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributes*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.CanBeNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*)>(
    &::System::Xml::Serialization::XmlReflectionImporter::CanBeNull)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ed2e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "CanBeNull", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.IncludeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Type*)>(
    &::System::Xml::Serialization::XmlReflectionImporter::IncludeType)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x2ed68e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "IncludeType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlReflectionImporter.GetDefaultValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Xml::Serialization::XmlReflectionImporter::*)(::System::Xml::Serialization::TypeData*, ::System::Object*)>(&::System::Xml::Serialization::XmlReflectionImporter::GetDefaultValue)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2ed63c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "GetDefaultValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_initialDefaultNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialDefaultNamespace;
}
constexpr ::StringW const& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_initialDefaultNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialDefaultNamespace;
}
constexpr void System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_set_initialDefaultNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___initialDefaultNamespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::XmlAttributeOverrides*& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_attributeOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeOverrides;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlAttributeOverrides*> const&
System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_attributeOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeOverrides;
}
constexpr void System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_set_attributeOverrides(::System::Xml::Serialization::XmlAttributeOverrides* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeOverrides)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_includedTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includedTypes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_includedTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includedTypes;
}
constexpr void System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_set_includedTypes(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___includedTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::ReflectionHelper*& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::ReflectionHelper*> const& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr void System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_set_helper(::System::Xml::Serialization::ReflectionHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___helper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_arrayChoiceCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayChoiceCount;
}
constexpr int32_t const& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_arrayChoiceCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayChoiceCount;
}
constexpr void System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_set_arrayChoiceCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arrayChoiceCount = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_relatedMaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relatedMaps;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_relatedMaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relatedMaps;
}
constexpr void System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_set_relatedMaps(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___relatedMaps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_allowPrivateTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowPrivateTypes;
}
constexpr bool const& System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_get_allowPrivateTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowPrivateTypes;
}
constexpr void System::Xml::Serialization::XmlReflectionImporter::__cordl_internal_set_allowPrivateTypes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowPrivateTypes = value;
}
inline void System::Xml::Serialization::XmlReflectionImporter::setStaticF_errSimple(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "errSimple", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Xml::Serialization::XmlReflectionImporter::getStaticF_errSimple() {
  return ::cordl_internals::getStaticField<::StringW, "errSimple", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get>();
}
inline void System::Xml::Serialization::XmlReflectionImporter::setStaticF_errSimple2(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "errSimple2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Xml::Serialization::XmlReflectionImporter::getStaticF_errSimple2() {
  return ::cordl_internals::getStaticField<::StringW, "errSimple2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get>();
}
inline ::System::Xml::Serialization::XmlReflectionImporter* System::Xml::Serialization::XmlReflectionImporter::New_ctor(::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides,
                                                                                                                        ::StringW defaultNamespace) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlReflectionImporter*>(attributeOverrides, defaultNamespace));
}
inline void System::Xml::Serialization::XmlReflectionImporter::_ctor(::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides, ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributeOverrides*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeOverrides, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportTypeMapping",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*, false>(this, ___internal_method, type);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping(::System::Type* type, ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportTypeMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*, false>(this, ___internal_method, type, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                          ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportTypeMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*, false>(this, ___internal_method, type, root, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportTypeMapping(::System::Xml::Serialization::TypeData* typeData,
                                                                                                                          ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                          ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportTypeMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*, false>(this, ___internal_method, typeData, root, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::CreateTypeMapping(::System::Xml::Serialization::TypeData* typeData,
                                                                                                                          ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                          ::StringW defaultXmlType, ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "CreateTypeMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*, false>(this, ___internal_method, typeData, root, defaultXmlType, defaultNamespace);
}
/// @param isBaseType: bool (default: false)
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportClassMapping(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                           ::StringW defaultNamespace, bool isBaseType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportClassMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*, false>(this, ___internal_method, type, root, defaultNamespace, isBaseType);
}
/// @param isBaseType: bool (default: false)
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportClassMapping(::System::Xml::Serialization::TypeData* typeData,
                                                                                                                           ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                           ::StringW defaultNamespace, bool isBaseType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportClassMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*, false>(this, ___internal_method, typeData, root, defaultNamespace, isBaseType);
}
inline void System::Xml::Serialization::XmlReflectionImporter::RegisterDerivedMap(::System::Xml::Serialization::XmlTypeMapping* map, ::System::Xml::Serialization::XmlTypeMapping* derivedMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "RegisterDerivedMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map, derivedMap);
}
inline ::StringW System::Xml::Serialization::XmlReflectionImporter::GetTypeNamespace(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                     ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "GetTypeNamespace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, typeData, root, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportListMapping(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                          ::StringW defaultNamespace, ::System::Xml::Serialization::XmlAttributes* atts,
                                                                                                                          int32_t nestingLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportListMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributes*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*, false>(this, ___internal_method, type, root, defaultNamespace, atts, nestingLevel);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportListMapping(::System::Xml::Serialization::TypeData* typeData,
                                                                                                                          ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                          ::StringW defaultNamespace, ::System::Xml::Serialization::XmlAttributes* atts,
                                                                                                                          int32_t nestingLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportListMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributes*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*, false>(this, ___internal_method, typeData, root, defaultNamespace, atts, nestingLevel);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportXmlNodeMapping(::System::Xml::Serialization::TypeData* typeData,
                                                                                                                             ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                             ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportXmlNodeMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*, false>(this, ___internal_method, typeData, root, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportPrimitiveMapping(::System::Xml::Serialization::TypeData* typeData,
                                                                                                                               ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                               ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportPrimitiveMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*, false>(this, ___internal_method, typeData, root, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportEnumMapping(::System::Xml::Serialization::TypeData* typeData,
                                                                                                                          ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                          ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportEnumMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*, false>(this, ___internal_method, typeData, root, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlReflectionImporter::ImportXmlSerializableMapping(::System::Xml::Serialization::TypeData* typeData,
                                                                                                                                     ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                                                                     ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportXmlSerializableMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*, false>(this, ___internal_method, typeData, root, defaultNamespace);
}
inline void System::Xml::Serialization::XmlReflectionImporter::ImportIncludedTypes(::System::Type* type, ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportIncludedTypes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, defaultNamespace);
}
inline ::System::Collections::Generic::List_1<::System::Xml::Serialization::XmlReflectionMember*>* System::Xml::Serialization::XmlReflectionImporter::GetReflectionMembers(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "GetReflectionMembers",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Xml::Serialization::XmlReflectionMember*>*, false>(this, ___internal_method, type);
}
inline ::System::Xml::Serialization::XmlTypeMapMember*
System::Xml::Serialization::XmlReflectionImporter::CreateMapMember(::System::Type* declaringType, ::System::Xml::Serialization::XmlReflectionMember* rmember, ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "CreateMapMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlReflectionMember*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapMember*, false>(this, ___internal_method, declaringType, rmember, defaultNamespace);
}
inline ::System::Xml::Serialization::XmlTypeMapElementInfoList* System::Xml::Serialization::XmlReflectionImporter::ImportElementInfo(::System::Type* cls, ::StringW defaultName,
                                                                                                                                     ::StringW defaultNamespace, ::System::Type* defaultType,
                                                                                                                                     ::System::Xml::Serialization::XmlTypeMapMemberElement* member,
                                                                                                                                     ::System::Xml::Serialization::XmlAttributes* atts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportElementInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMemberElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributes*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapElementInfoList*, false>(this, ___internal_method, cls, defaultName, defaultNamespace, defaultType, member, atts);
}
inline ::System::Xml::Serialization::XmlTypeMapElementInfoList* System::Xml::Serialization::XmlReflectionImporter::ImportAnyElementInfo(::StringW defaultNamespace,
                                                                                                                                        ::System::Xml::Serialization::XmlReflectionMember* rmember,
                                                                                                                                        ::System::Xml::Serialization::XmlTypeMapMemberElement* member,
                                                                                                                                        ::System::Xml::Serialization::XmlAttributes* atts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportAnyElementInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlReflectionMember*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMemberElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributes*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapElementInfoList*, false>(this, ___internal_method, defaultNamespace, rmember, member, atts);
}
inline void System::Xml::Serialization::XmlReflectionImporter::ImportTextElementInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* list, ::System::Type* defaultType,
                                                                                     ::System::Xml::Serialization::XmlTypeMapMemberElement* member, ::System::Xml::Serialization::XmlAttributes* atts,
                                                                                     ::StringW defaultNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "ImportTextElementInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapElementInfoList*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMemberElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAttributes*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, defaultType, member, atts, defaultNamespace);
}
inline bool System::Xml::Serialization::XmlReflectionImporter::CanBeNull(::System::Xml::Serialization::TypeData* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "CanBeNull", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline void System::Xml::Serialization::XmlReflectionImporter::IncludeType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "IncludeType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::System::Object* System::Xml::Serialization::XmlReflectionImporter::GetDefaultValue(::System::Xml::Serialization::TypeData* typeData, ::System::Object* defaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlReflectionImporter*>::get(), "GetDefaultValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeData, defaultValue);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlReflectionImporter::XmlReflectionImporter() {}
