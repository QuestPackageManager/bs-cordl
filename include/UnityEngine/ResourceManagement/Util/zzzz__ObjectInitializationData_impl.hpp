#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/ObjectInitializationData.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedType_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedType_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ObjectInitializationData.get_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)()>(
    &::UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x691273c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(), { "get_Id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ObjectInitializationData.get_ObjectType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::Util::SerializedType (::UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)()>(
    &::UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_ObjectType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6912744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(), { "get_ObjectType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ObjectInitializationData.get_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)()>(
    &::UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6912754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(), { "get_Data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ObjectInitializationData.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)()>(
    &::UnityEngine::ResourceManagement::Util::ObjectInitializationData::ToString)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x691275c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::ObjectInitializationData.GetAsyncInitHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::StringW)>(&::UnityEngine::ResourceManagement::Util::ObjectInitializationData::GetAsyncInitHandle)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6912814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(),
                                                             { "GetAsyncInitHandle", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_Id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(), { "get_Id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::SerializedType UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_ObjectType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(), { "get_ObjectType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::SerializedType>(*this, ___internal_method);
}
inline ::StringW UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_Data() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(), { "get_Data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::ResourceManagement::Util::ObjectInitializationData::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename TObject> inline TObject UnityEngine::ResourceManagement::Util::ObjectInitializationData::CreateInstance(::StringW idOverride) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(),
                                                                                              { "CreateInstance", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<TObject>(*this, ___internal_method, idOverride);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
UnityEngine::ResourceManagement::Util::ObjectInitializationData::GetAsyncInitHandle(::UnityEngine::ResourceManagement::ResourceManager* rm, ::StringW idOverride) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(),
                                                           { "GetAsyncInitHandle", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(*this, ___internal_method, rm, idOverride);
}
// Ctor Parameters [CppParam { name: "m_Id", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ObjectType", ty: "::UnityEngine::ResourceManagement::Util::SerializedType",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Data", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData::ObjectInitializationData(::StringW m_Id, ::UnityEngine::ResourceManagement::Util::SerializedType m_ObjectType,
                                                                                                      ::StringW m_Data) noexcept {
  this->m_Id = m_Id;
  this->m_ObjectType = m_ObjectType;
  this->m_Data = m_Data;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData::ObjectInitializationData() {}
