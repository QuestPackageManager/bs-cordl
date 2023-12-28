#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetSerializedMetaData_def.hpp"
#include "HoudiniEngineUnity/zzzz__CurveNodeData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetSerializedMetaData.get_SoftDeleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AssetSerializedMetaData::*)()>(
    &::HoudiniEngineUnity::HEU_AssetSerializedMetaData::get_SoftDeleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2150918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>::get(),
                                                                               "get_SoftDeleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetSerializedMetaData.set_SoftDeleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetSerializedMetaData::*)(bool)>(
    &::HoudiniEngineUnity::HEU_AssetSerializedMetaData::set_SoftDeleted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2150920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>::get(), "set_SoftDeleted",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetSerializedMetaData.get_SavedCurveNodeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* (::HoudiniEngineUnity::HEU_AssetSerializedMetaData::*)()>(
    &::HoudiniEngineUnity::HEU_AssetSerializedMetaData::get_SavedCurveNodeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215092c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>::get(),
                                                                               "get_SavedCurveNodeData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetSerializedMetaData.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_AssetSerializedMetaData::*)(::HoudiniEngineUnity::HEU_AssetSerializedMetaData*)>(
    &::HoudiniEngineUnity::HEU_AssetSerializedMetaData::IsEquivalentTo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2150934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetSerializedMetaData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetSerializedMetaData::*)()>(
    &::HoudiniEngineUnity::HEU_AssetSerializedMetaData::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21509f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>"
constexpr HoudiniEngineUnity::HEU_AssetSerializedMetaData::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>*>(static_cast<void*>(this));
}
constexpr bool& HoudiniEngineUnity::HEU_AssetSerializedMetaData::__get__softDeleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____softDeleted;
}
constexpr bool const& HoudiniEngineUnity::HEU_AssetSerializedMetaData::__get__softDeleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____softDeleted;
}
constexpr void HoudiniEngineUnity::HEU_AssetSerializedMetaData::__set__softDeleted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____softDeleted = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>*&
HoudiniEngineUnity::HEU_AssetSerializedMetaData::__get__savedCurveNodeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____savedCurveNodeData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>*> const&
HoudiniEngineUnity::HEU_AssetSerializedMetaData::__get__savedCurveNodeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____savedCurveNodeData;
}
constexpr void HoudiniEngineUnity::HEU_AssetSerializedMetaData::__set__savedCurveNodeData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____savedCurveNodeData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool HoudiniEngineUnity::HEU_AssetSerializedMetaData::get_SoftDeleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>::get(),
                                                                             "get_SoftDeleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AssetSerializedMetaData::set_SoftDeleted(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>::get(), "set_SoftDeleted",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>*
HoudiniEngineUnity::HEU_AssetSerializedMetaData::get_SavedCurveNodeData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>::get(),
                                                                             "get_SavedCurveNodeData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>*, false>(
      this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_AssetSerializedMetaData::IsEquivalentTo(::HoudiniEngineUnity::HEU_AssetSerializedMetaData* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_AssetSerializedMetaData* HoudiniEngineUnity::HEU_AssetSerializedMetaData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>());
}
inline void HoudiniEngineUnity::HEU_AssetSerializedMetaData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_AssetSerializedMetaData::HEU_AssetSerializedMetaData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
