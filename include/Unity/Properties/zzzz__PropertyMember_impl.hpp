#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyMember.hpp"
#include "Unity/Properties/zzzz__PropertyMember_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__IMemberInfo_def.hpp"
//  Writing Method size for method: ::Unity::Properties::PropertyMember.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Properties::PropertyMember::*)()>(&::Unity::Properties::PropertyMember::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48980f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyMember>::get(), "get_Name",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyMember.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Properties::PropertyMember::*)()>(&::Unity::Properties::PropertyMember::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4898100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyMember>::get(), "get_IsReadOnly",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyMember.get_ValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Unity::Properties::PropertyMember::*)()>(&::Unity::Properties::PropertyMember::get_ValueType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4898130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyMember>::get(), "get_ValueType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyMember._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::PropertyMember::*)(::System::Reflection::PropertyInfo*)>(
    &::Unity::Properties::PropertyMember::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4898154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyMember>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyMember.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* (::Unity::Properties::PropertyMember::*)()>(
    &::Unity::Properties::PropertyMember::GetCustomAttributes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4898174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyMember>::get(),
                                                                               "GetCustomAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Properties::IMemberInfo"
constexpr Unity::Properties::PropertyMember::operator ::Unity::Properties::IMemberInfo*() {
  return static_cast<::Unity::Properties::IMemberInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Properties::IMemberInfo"
constexpr ::Unity::Properties::IMemberInfo* Unity::Properties::PropertyMember::i___Unity__Properties__IMemberInfo() {
  return static_cast<::Unity::Properties::IMemberInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline ::StringW Unity::Properties::PropertyMember::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyMember>::get(), "get_Name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Unity::Properties::PropertyMember::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyMember>::get(), "get_IsReadOnly",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Type* Unity::Properties::PropertyMember::get_ValueType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyMember>::get(), "get_ValueType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void Unity::Properties::PropertyMember::_ctor(::System::Reflection::PropertyInfo* propertyInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyMember>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyInfo);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* Unity::Properties::PropertyMember::GetCustomAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyMember>::get(), "GetCustomAttributes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_PropertyInfo", ty: "::System::Reflection::PropertyInfo*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_Name_k__BackingField", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Unity::Properties::PropertyMember::PropertyMember(::System::Reflection::PropertyInfo* m_PropertyInfo, ::StringW _Name_k__BackingField) noexcept {
  this->m_PropertyInfo = m_PropertyInfo;
  this->_Name_k__BackingField = _Name_k__BackingField;
}
// Ctor Parameters []
constexpr ::Unity::Properties::PropertyMember::PropertyMember() {}
