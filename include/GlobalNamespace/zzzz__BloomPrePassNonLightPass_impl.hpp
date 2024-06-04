#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassNonLightPass.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType::__BloomPrePassNonLightPass__ExecutionTimeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType::__BloomPrePassNonLightPass__ExecutionTimeType() {}
constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType::BeforeBlur{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType::AfterBlur{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.get_executionTimeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType (::GlobalNamespace::BloomPrePassNonLightPass::*)()>(
    &::GlobalNamespace::BloomPrePassNonLightPass::get_executionTimeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2503a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(),
                                                                               "get_executionTimeType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.get_bloomPrePassAfterBlurList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* (*)()>(
    &::GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassAfterBlurList)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2503a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(),
                                                                               "get_bloomPrePassAfterBlurList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.get_bloomPrePassBeforeBlurList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* (*)()>(
    &::GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassBeforeBlurList)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2503a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(),
                                                                               "get_bloomPrePassBeforeBlurList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassNonLightPass::*)()>(&::GlobalNamespace::BloomPrePassNonLightPass::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2502338;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassNonLightPass::*)()>(&::GlobalNamespace::BloomPrePassNonLightPass::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2503af4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassNonLightPass::*)()>(&::GlobalNamespace::BloomPrePassNonLightPass::Register)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x25011f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(), "Register",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.Unregister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassNonLightPass::*)()>(&::GlobalNamespace::BloomPrePassNonLightPass::Unregister)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x25013a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(),
                                                                               "Unregister", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassNonLightPass::*)()>(&::GlobalNamespace::BloomPrePassNonLightPass::OnValidate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2502ea0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassNonLightPass::*)(
    ::UnityEngine::RenderTexture*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&::GlobalNamespace::BloomPrePassNonLightPass::Render)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassNonLightPass::*)()>(&::GlobalNamespace::BloomPrePassNonLightPass::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25008e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType& GlobalNamespace::BloomPrePassNonLightPass::__cordl_internal_get__executionTimeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executionTimeType;
}
constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType const& GlobalNamespace::BloomPrePassNonLightPass::__cordl_internal_get__executionTimeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executionTimeType;
}
constexpr void GlobalNamespace::BloomPrePassNonLightPass::__cordl_internal_set__executionTimeType(::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____executionTimeType = value;
}
constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType& GlobalNamespace::BloomPrePassNonLightPass::__cordl_internal_get__registeredExecutionTimeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredExecutionTimeType;
}
constexpr ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType const& GlobalNamespace::BloomPrePassNonLightPass::__cordl_internal_get__registeredExecutionTimeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredExecutionTimeType;
}
constexpr void GlobalNamespace::BloomPrePassNonLightPass::__cordl_internal_set__registeredExecutionTimeType(::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____registeredExecutionTimeType = value;
}
inline void GlobalNamespace::BloomPrePassNonLightPass::setStaticF__bloomPrePassAfterBlurList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>*, "_bloomPrePassAfterBlurList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* GlobalNamespace::BloomPrePassNonLightPass::getStaticF__bloomPrePassAfterBlurList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>*, "_bloomPrePassAfterBlurList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get>();
}
inline void GlobalNamespace::BloomPrePassNonLightPass::setStaticF__bloomPrePassBeforeBlurList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>*, "_bloomPrePassBeforeBlurList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* GlobalNamespace::BloomPrePassNonLightPass::getStaticF__bloomPrePassBeforeBlurList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>*, "_bloomPrePassBeforeBlurList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get>();
}
inline ::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType GlobalNamespace::BloomPrePassNonLightPass::get_executionTimeType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(),
                                                                             "get_executionTimeType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BloomPrePassNonLightPass__ExecutionTimeType, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassAfterBlurList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(),
                                                                             "get_bloomPrePassAfterBlurList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassBeforeBlurList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(),
                                                                             "get_bloomPrePassBeforeBlurList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassNonLightPass::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassNonLightPass::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassNonLightPass::Register() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(), "Register",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassNonLightPass::Unregister() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(), "Unregister",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassNonLightPass::OnValidate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassNonLightPass::Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dest, viewMatrix, projectionMatrix);
}
inline ::GlobalNamespace::BloomPrePassNonLightPass* GlobalNamespace::BloomPrePassNonLightPass::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassNonLightPass*>());
}
inline void GlobalNamespace::BloomPrePassNonLightPass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassNonLightPass*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassNonLightPass::BloomPrePassNonLightPass() {}
