#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_PluginStorage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PluginStorage_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PluginStorage_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_PluginStorage_DataType::HEU_PluginStorage_DataType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_PluginStorage_DataType::HEU_PluginStorage_DataType() {}
constexpr ::HoudiniEngineUnity::HEU_PluginStorage_DataType HoudiniEngineUnity::HEU_PluginStorage_DataType::BOOL{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_PluginStorage_DataType HoudiniEngineUnity::HEU_PluginStorage_DataType::INT{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_PluginStorage_DataType HoudiniEngineUnity::HEU_PluginStorage_DataType::LONG{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HEU_PluginStorage_DataType HoudiniEngineUnity::HEU_PluginStorage_DataType::FLOAT{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HEU_PluginStorage_DataType HoudiniEngineUnity::HEU_PluginStorage_DataType::STRING{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage_StoreData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PluginStorage_StoreData::*)()>(
    &::HoudiniEngineUnity::HEU_PluginStorage_StoreData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a40bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage_StoreData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::HoudiniEngineUnity::HEU_PluginStorage_DataType& HoudiniEngineUnity::HEU_PluginStorage_StoreData::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::HoudiniEngineUnity::HEU_PluginStorage_DataType const& HoudiniEngineUnity::HEU_PluginStorage_StoreData::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void HoudiniEngineUnity::HEU_PluginStorage_StoreData::__cordl_internal_set__type(::HoudiniEngineUnity::HEU_PluginStorage_DataType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_PluginStorage_StoreData::__cordl_internal_get__valueStr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueStr;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_PluginStorage_StoreData::__cordl_internal_get__valueStr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueStr;
}
constexpr void HoudiniEngineUnity::HEU_PluginStorage_StoreData::__cordl_internal_set__valueStr(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____valueStr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_PluginStorage_StoreData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage_StoreData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_PluginStorage_StoreData* HoudiniEngineUnity::HEU_PluginStorage_StoreData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_PluginStorage_StoreData*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_PluginStorage_StoreData::HEU_PluginStorage_StoreData() {}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*>& HoudiniEngineUnity::HEU_PluginStorage_StoreDataArray_1<T>::__cordl_internal_get__array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____array;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*> const& HoudiniEngineUnity::HEU_PluginStorage_StoreDataArray_1<T>::__cordl_internal_get__array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____array;
}
template <typename T> constexpr void HoudiniEngineUnity::HEU_PluginStorage_StoreDataArray_1<T>::__cordl_internal_set__array(::ArrayW<T, ::Array<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____array, value);
}
template <typename T> inline void HoudiniEngineUnity::HEU_PluginStorage_StoreDataArray_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage_StoreDataArray_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::HoudiniEngineUnity::HEU_PluginStorage_StoreDataArray_1<T>* HoudiniEngineUnity::HEU_PluginStorage_StoreDataArray_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_PluginStorage_StoreDataArray_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::HoudiniEngineUnity::HEU_PluginStorage_StoreDataArray_1<T>::HEU_PluginStorage_StoreDataArray_1() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.GetEnvironmentPathMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (::HoudiniEngineUnity::HEU_PluginStorage::*)()>(
    &::HoudiniEngineUnity::HEU_PluginStorage::GetEnvironmentPathMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a40000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                               "GetEnvironmentPathMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.get_RequiresSave
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PluginStorage::*)()>(&::HoudiniEngineUnity::HEU_PluginStorage::get_RequiresSave)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a40008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                               "get_RequiresSave", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_PluginStorage* (*)()>(&::HoudiniEngineUnity::HEU_PluginStorage::get_Instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3a37518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "get_Instance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.InstantiateAndLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_PluginStorage::InstantiateAndLoad)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3a40010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                               "InstantiateAndLoad", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.SetCurrentCulture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::HoudiniEngineUnity::HEU_PluginStorage::SetCurrentCulture)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3a3f54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "SetCurrentCulture",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PluginStorage::*)(::StringW, bool)>(&::HoudiniEngineUnity::HEU_PluginStorage::Set)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3a3c6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PluginStorage::*)(::StringW, int32_t)>(
    &::HoudiniEngineUnity::HEU_PluginStorage::Set)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3a3ddd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PluginStorage::*)(::StringW, int64_t)>(
    &::HoudiniEngineUnity::HEU_PluginStorage::Set)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3a40bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PluginStorage::*)(::StringW, float_t)>(
    &::HoudiniEngineUnity::HEU_PluginStorage::Set)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3a3d458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PluginStorage::*)(::StringW, ::StringW)>(
    &::HoudiniEngineUnity::HEU_PluginStorage::Set)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3a3c098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HoudiniEngineUnity::HEU_PluginStorage::*)(::StringW, ::System::Collections::Generic::List_1<::StringW>*, char16_t)>(&::HoudiniEngineUnity::HEU_PluginStorage::Set)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3a3e72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PluginStorage::*)(::StringW, ::ByRef<bool>, bool)>(
    &::HoudiniEngineUnity::HEU_PluginStorage::Get)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3a3c578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PluginStorage::*)(::StringW, ::ByRef<int32_t>, int32_t)>(
    &::HoudiniEngineUnity::HEU_PluginStorage::Get)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3a3dc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PluginStorage::*)(::StringW, ::ByRef<int64_t>, int64_t)>(
    &::HoudiniEngineUnity::HEU_PluginStorage::Get)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3a40c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int64_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PluginStorage::*)(::StringW, ::ByRef<float_t>, float_t)>(
    &::HoudiniEngineUnity::HEU_PluginStorage::Get)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3a3d2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PluginStorage::*)(::StringW, ::ByRef<::StringW>, ::StringW)>(
    &::HoudiniEngineUnity::HEU_PluginStorage::Get)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3a3bf7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::HoudiniEngineUnity::HEU_PluginStorage::*)(::StringW, ::ByRef<::System::Collections::Generic::List_1<::StringW>*>, char16_t)>(&::HoudiniEngineUnity::HEU_PluginStorage::Get)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3a3e50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::StringW>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.MarkDirtyForSave
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PluginStorage::*)()>(&::HoudiniEngineUnity::HEU_PluginStorage::MarkDirtyForSave)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a40bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                               "MarkDirtyForSave", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.SaveIfRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_PluginStorage::SaveIfRequired)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3a40d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                               "SaveIfRequired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.SettingsFilePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::HoudiniEngineUnity::HEU_PluginStorage::SettingsFilePath)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3a412b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                               "SettingsFilePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.SavePluginData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PluginStorage::*)()>(&::HoudiniEngineUnity::HEU_PluginStorage::SavePluginData)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x3a40de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                               "SavePluginData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.LoadPluginData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PluginStorage::*)()>(&::HoudiniEngineUnity::HEU_PluginStorage::LoadPluginData)> {
  constexpr static std::size_t size = 0xa58;
  constexpr static std::size_t addrs = 0x3a4015c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                               "LoadPluginData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.ReadFromEditorPrefs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PluginStorage::*)()>(&::HoudiniEngineUnity::HEU_PluginStorage::ReadFromEditorPrefs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a413d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                               "ReadFromEditorPrefs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.ClearPluginData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_PluginStorage::ClearPluginData)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3a413d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                               "ClearPluginData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.LoadFromSavedFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_PluginStorage::LoadFromSavedFile)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3a41484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                               "LoadFromSavedFile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.SessionFilePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::HoudiniEngineUnity::HEU_PluginStorage::SessionFilePath)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3a414dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                               "SessionFilePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.SaveAllSessionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionBase*>*)>(
    &::HoudiniEngineUnity::HEU_PluginStorage::SaveAllSessionData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a415f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "SaveAllSessionData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionBase*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.LoadAllSessionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionData*>* (*)()>(
    &::HoudiniEngineUnity::HEU_PluginStorage::LoadAllSessionData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3a415f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                               "LoadAllSessionData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.DeleteAllSavedSessionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::HoudiniEngineUnity::HEU_PluginStorage::DeleteAllSavedSessionData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a41660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                               "DeleteAllSavedSessionData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.LoadAssetEnvironmentPaths
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PluginStorage::*)()>(
    &::HoudiniEngineUnity::HEU_PluginStorage::LoadAssetEnvironmentPaths)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x3a3c138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                               "LoadAssetEnvironmentPaths", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.ConvertRealPathToEnvKeyedPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_PluginStorage::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_PluginStorage::ConvertRealPathToEnvKeyedPath)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x3a41664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "ConvertRealPathToEnvKeyedPath",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage.ConvertEnvKeyedPathToReal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_PluginStorage::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_PluginStorage::ConvertEnvKeyedPathToReal)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x3a37574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "ConvertEnvKeyedPathToReal",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PluginStorage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PluginStorage::*)()>(&::HoudiniEngineUnity::HEU_PluginStorage::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3a400e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_PluginStorage_StoreData*>*& HoudiniEngineUnity::HEU_PluginStorage::__cordl_internal_get__dataMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_PluginStorage_StoreData*>* const&
HoudiniEngineUnity::HEU_PluginStorage::__cordl_internal_get__dataMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataMap;
}
constexpr void
HoudiniEngineUnity::HEU_PluginStorage::__cordl_internal_set__dataMap(::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_PluginStorage_StoreData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& HoudiniEngineUnity::HEU_PluginStorage::__cordl_internal_get__envPathMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____envPathMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* const& HoudiniEngineUnity::HEU_PluginStorage::__cordl_internal_get__envPathMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____envPathMap;
}
constexpr void HoudiniEngineUnity::HEU_PluginStorage::__cordl_internal_set__envPathMap(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____envPathMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_PluginStorage::__cordl_internal_get__requiresSave() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requiresSave;
}
constexpr bool const& HoudiniEngineUnity::HEU_PluginStorage::__cordl_internal_get__requiresSave() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requiresSave;
}
constexpr void HoudiniEngineUnity::HEU_PluginStorage::__cordl_internal_set__requiresSave(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requiresSave = value;
}
inline void HoudiniEngineUnity::HEU_PluginStorage::setStaticF__instance(::HoudiniEngineUnity::HEU_PluginStorage* value) {
  ::cordl_internals::setStaticField<::HoudiniEngineUnity::HEU_PluginStorage*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get>(
      std::forward<::HoudiniEngineUnity::HEU_PluginStorage*>(value));
}
inline ::HoudiniEngineUnity::HEU_PluginStorage* HoudiniEngineUnity::HEU_PluginStorage::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::HoudiniEngineUnity::HEU_PluginStorage*, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get>();
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* HoudiniEngineUnity::HEU_PluginStorage::GetEnvironmentPathMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                             "GetEnvironmentPathMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PluginStorage::get_RequiresSave() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                             "get_RequiresSave", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_PluginStorage* HoudiniEngineUnity::HEU_PluginStorage::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "get_Instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_PluginStorage*, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PluginStorage::InstantiateAndLoad() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                             "InstantiateAndLoad", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PluginStorage::SetCurrentCulture(bool useInvariant) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "SetCurrentCulture",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, useInvariant);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> HoudiniEngineUnity::HEU_PluginStorage::GetJSONArray(::StringW jsonArray) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                                  "GetJSONArray", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method, jsonArray);
}
inline void HoudiniEngineUnity::HEU_PluginStorage::Set(::StringW key, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline void HoudiniEngineUnity::HEU_PluginStorage::Set(::StringW key, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline void HoudiniEngineUnity::HEU_PluginStorage::Set(::StringW key, int64_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline void HoudiniEngineUnity::HEU_PluginStorage::Set(::StringW key, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline void HoudiniEngineUnity::HEU_PluginStorage::Set(::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline void HoudiniEngineUnity::HEU_PluginStorage::Set(::StringW key, ::System::Collections::Generic::List_1<::StringW>* values, char16_t delimiter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, values, delimiter);
}
inline bool HoudiniEngineUnity::HEU_PluginStorage::Get(::StringW key, ::ByRef<bool> value, bool defaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value, defaultValue);
}
inline bool HoudiniEngineUnity::HEU_PluginStorage::Get(::StringW key, ::ByRef<int32_t> value, int32_t defaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value, defaultValue);
}
inline bool HoudiniEngineUnity::HEU_PluginStorage::Get(::StringW key, ::ByRef<int64_t> value, int64_t defaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int64_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value, defaultValue);
}
inline bool HoudiniEngineUnity::HEU_PluginStorage::Get(::StringW key, ::ByRef<float_t> value, float_t defaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value, defaultValue);
}
inline bool HoudiniEngineUnity::HEU_PluginStorage::Get(::StringW key, ::ByRef<::StringW> value, ::StringW defaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value, defaultValue);
}
inline bool HoudiniEngineUnity::HEU_PluginStorage::Get(::StringW key, ::ByRef<::System::Collections::Generic::List_1<::StringW>*> values, char16_t delimiter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, values, delimiter);
}
inline void HoudiniEngineUnity::HEU_PluginStorage::MarkDirtyForSave() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                             "MarkDirtyForSave", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PluginStorage::SaveIfRequired() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "SaveIfRequired",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_PluginStorage::SettingsFilePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                             "SettingsFilePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PluginStorage::SavePluginData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "SavePluginData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PluginStorage::LoadPluginData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "LoadPluginData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PluginStorage::ReadFromEditorPrefs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                             "ReadFromEditorPrefs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PluginStorage::ClearPluginData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "ClearPluginData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PluginStorage::LoadFromSavedFile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                             "LoadFromSavedFile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_PluginStorage::SessionFilePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "SessionFilePath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PluginStorage::SaveAllSessionData(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionBase*>* allSessions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "SaveAllSessionData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionBase*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, allSessions);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionData*>* HoudiniEngineUnity::HEU_PluginStorage::LoadAllSessionData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                             "LoadAllSessionData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionData*>*, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PluginStorage::DeleteAllSavedSessionData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                             "DeleteAllSavedSessionData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PluginStorage::LoadAssetEnvironmentPaths() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(),
                                                                             "LoadAssetEnvironmentPaths", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_PluginStorage::ConvertRealPathToEnvKeyedPath(::StringW inPath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "ConvertRealPathToEnvKeyedPath",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, inPath);
}
inline ::StringW HoudiniEngineUnity::HEU_PluginStorage::ConvertEnvKeyedPathToReal(::StringW inPath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), "ConvertEnvKeyedPathToReal",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, inPath);
}
inline void HoudiniEngineUnity::HEU_PluginStorage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PluginStorage*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_PluginStorage* HoudiniEngineUnity::HEU_PluginStorage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_PluginStorage*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_PluginStorage::HEU_PluginStorage() {}
