#pragma once
// IWYU pragma private; include "GlobalNamespace\BloomPrePassNonLightPass.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType::BloomPrePassNonLightPass_ExecutionTimeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType::BloomPrePassNonLightPass_ExecutionTimeType() {}
constexpr ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType::BeforeBlur{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType::AfterBlur{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.get_executionTimeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType (::GlobalNamespace::BloomPrePassNonLightPass::*)()>(
    &::GlobalNamespace::BloomPrePassNonLightPass::get_executionTimeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5862870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), { "get_executionTimeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.get_bloomPrePassAfterBlurList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* (*)()>(
    &::GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassAfterBlurList)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5862878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), { "get_bloomPrePassAfterBlurList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.get_bloomPrePassBeforeBlurList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* (*)()>(
    &::GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassBeforeBlurList)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58628d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), { "get_bloomPrePassBeforeBlurList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassNonLightPass::*)()>(&::GlobalNamespace::BloomPrePassNonLightPass::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5861110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), { ::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassNonLightPass::*)()>(&::GlobalNamespace::BloomPrePassNonLightPass::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5862930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), { ::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassNonLightPass::*)()>(&::GlobalNamespace::BloomPrePassNonLightPass::Register)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x585ffc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), { "Register", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.Unregister
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassNonLightPass::*)()>(&::GlobalNamespace::BloomPrePassNonLightPass::Unregister)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x586017c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), { "Unregister", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassNonLightPass::*)()>(&::GlobalNamespace::BloomPrePassNonLightPass::OnValidate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5861c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), { ::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassNonLightPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&::GlobalNamespace::BloomPrePassNonLightPass::Render)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), { ::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassNonLightPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassNonLightPass::*)()>(&::GlobalNamespace::BloomPrePassNonLightPass::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585fc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType& GlobalNamespace::BloomPrePassNonLightPass::__cordl_internal_get__executionTimeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executionTimeType;
}
constexpr ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType const& GlobalNamespace::BloomPrePassNonLightPass::__cordl_internal_get__executionTimeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executionTimeType;
}
constexpr void GlobalNamespace::BloomPrePassNonLightPass::__cordl_internal_set__executionTimeType(::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____executionTimeType = value;
}
constexpr ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType& GlobalNamespace::BloomPrePassNonLightPass::__cordl_internal_get__registeredExecutionTimeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredExecutionTimeType;
}
constexpr ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType const& GlobalNamespace::BloomPrePassNonLightPass::__cordl_internal_get__registeredExecutionTimeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredExecutionTimeType;
}
constexpr void GlobalNamespace::BloomPrePassNonLightPass::__cordl_internal_set__registeredExecutionTimeType(::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____registeredExecutionTimeType = value;
}
inline void GlobalNamespace::BloomPrePassNonLightPass::setStaticF__bloomPrePassAfterBlurList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>*, "_bloomPrePassAfterBlurList",
                                    ::GlobalNamespace::BloomPrePassNonLightPass*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* GlobalNamespace::BloomPrePassNonLightPass::getStaticF__bloomPrePassAfterBlurList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>*, "_bloomPrePassAfterBlurList",
                                           ::GlobalNamespace::BloomPrePassNonLightPass*>();
}
inline void GlobalNamespace::BloomPrePassNonLightPass::setStaticF__bloomPrePassBeforeBlurList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>*, "_bloomPrePassBeforeBlurList",
                                    ::GlobalNamespace::BloomPrePassNonLightPass*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* GlobalNamespace::BloomPrePassNonLightPass::getStaticF__bloomPrePassBeforeBlurList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>*, "_bloomPrePassBeforeBlurList",
                                           ::GlobalNamespace::BloomPrePassNonLightPass*>();
}
inline ::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType GlobalNamespace::BloomPrePassNonLightPass::get_executionTimeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), { "get_executionTimeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BloomPrePassNonLightPass_ExecutionTimeType>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassAfterBlurList() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), { "get_bloomPrePassAfterBlurList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>* GlobalNamespace::BloomPrePassNonLightPass::get_bloomPrePassBeforeBlurList() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), { "get_bloomPrePassBeforeBlurList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BloomPrePassNonLightPass>>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassNonLightPass::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassNonLightPass::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassNonLightPass::Register() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), { "Register", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassNonLightPass::Unregister() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), { "Unregister", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassNonLightPass::OnValidate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassNonLightPass::Render(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* dest, ::UnityEngine::Matrix4x4 viewMatrix,
                                                              ::UnityEngine::Matrix4x4 projectionMatrix) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, dest, viewMatrix, projectionMatrix);
}
inline void GlobalNamespace::BloomPrePassNonLightPass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassNonLightPass*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassNonLightPass* GlobalNamespace::BloomPrePassNonLightPass::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassNonLightPass*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassNonLightPass::BloomPrePassNonLightPass() {}
