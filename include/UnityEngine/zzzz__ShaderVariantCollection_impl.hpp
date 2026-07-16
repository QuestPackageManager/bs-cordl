#pragma once
// IWYU pragma private; include "UnityEngine/ShaderVariantCollection.hpp"
#include "UnityEngine/Rendering/zzzz__PassType_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ShaderVariantCollection_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__PassType_def.hpp"
#include "UnityEngine/zzzz__ShaderVariantCollection_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::ShaderVariantCollection_ShaderVariant._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ShaderVariantCollection_ShaderVariant::*)(::UnityEngine::Shader*, ::UnityEngine::Rendering::PassType, ::ArrayW<::StringW>)>(
    &::UnityEngine::ShaderVariantCollection_ShaderVariant::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aed000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection_ShaderVariant>(),
                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::Rendering::PassType>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ShaderVariantCollection_ShaderVariant::_ctor(::UnityEngine::Shader* shader, ::UnityEngine::Rendering::PassType passType, ::ArrayW<::StringW> keywords) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection_ShaderVariant>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::Rendering::PassType>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, shader, passType, keywords);
}
// Ctor Parameters [CppParam { name: "shader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: Some("{}") }, CppParam { name: "passType", ty: "::UnityEngine::Rendering::PassType",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "keywords", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ShaderVariantCollection_ShaderVariant::ShaderVariantCollection_ShaderVariant(::UnityW<::UnityEngine::Shader> shader, ::UnityEngine::Rendering::PassType passType,
                                                                                                      ::ArrayW<::StringW> keywords) noexcept {
  this->shader = shader;
  this->passType = passType;
  this->keywords = keywords;
}
// Ctor Parameters []
constexpr ::UnityEngine::ShaderVariantCollection_ShaderVariant::ShaderVariantCollection_ShaderVariant() {}
//  Writing Method size for method: ::UnityEngine::ShaderVariantCollection.get_variantCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ShaderVariantCollection::*)()>(&::UnityEngine::ShaderVariantCollection::get_variantCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6aecafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "get_variantCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ShaderVariantCollection.get_warmedUpVariantCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ShaderVariantCollection::*)()>(&::UnityEngine::ShaderVariantCollection::get_warmedUpVariantCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6aecbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "get_warmedUpVariantCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ShaderVariantCollection.get_isWarmedUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ShaderVariantCollection::*)()>(&::UnityEngine::ShaderVariantCollection::get_isWarmedUp)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6aecc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "get_isWarmedUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ShaderVariantCollection.AddVariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ShaderVariantCollection::*)(::UnityEngine::Shader*, ::UnityEngine::Rendering::PassType, ::ArrayW<::StringW>)>(
    &::UnityEngine::ShaderVariantCollection::AddVariant)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6aecd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(),
                            { "AddVariant", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::Rendering::PassType>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ShaderVariantCollection.WarmUpProgressively
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ShaderVariantCollection::*)(int32_t)>(&::UnityEngine::ShaderVariantCollection::WarmUpProgressively)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6aece64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "WarmUpProgressively", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ShaderVariantCollection.Internal_Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ShaderVariantCollection*)>(&::UnityEngine::ShaderVariantCollection::Internal_Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aecf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "Internal_Create", {}, { ::i2c::type_of<::UnityEngine::ShaderVariantCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ShaderVariantCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ShaderVariantCollection::*)()>(&::UnityEngine::ShaderVariantCollection::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6aecf74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ShaderVariantCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ShaderVariantCollection::*)(::UnityEngine::ShaderVariantCollection_ShaderVariant)>(
    &::UnityEngine::ShaderVariantCollection::Add)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6aecfec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::ShaderVariantCollection_ShaderVariant>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ShaderVariantCollection.get_variantCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ShaderVariantCollection::get_variantCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aecb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "get_variantCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ShaderVariantCollection.get_warmedUpVariantCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ShaderVariantCollection::get_warmedUpVariantCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aecc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "get_warmedUpVariantCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ShaderVariantCollection.get_isWarmedUp_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ShaderVariantCollection::get_isWarmedUp_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6aeccf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "get_isWarmedUp_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ShaderVariantCollection.AddVariant_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::Rendering::PassType, ::ArrayW<::StringW>)>(
    &::UnityEngine::ShaderVariantCollection::AddVariant_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6aece08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(),
                                                                                           { "AddVariant_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::PassType>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ShaderVariantCollection.WarmUpProgressively_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t)>(&::UnityEngine::ShaderVariantCollection::WarmUpProgressively_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6aecef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(),
                                                                                           { "WarmUpProgressively_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::ShaderVariantCollection::get_variantCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "get_variantCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::ShaderVariantCollection::get_warmedUpVariantCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "get_warmedUpVariantCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::ShaderVariantCollection::get_isWarmedUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "get_isWarmedUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::ShaderVariantCollection::AddVariant(::UnityEngine::Shader* shader, ::UnityEngine::Rendering::PassType passType, ::ArrayW<::StringW> keywords) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(),
                          { "AddVariant", {}, { ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::Rendering::PassType>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shader, passType, keywords);
}
inline bool UnityEngine::ShaderVariantCollection::WarmUpProgressively(int32_t variantCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "WarmUpProgressively", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, variantCount);
}
inline void UnityEngine::ShaderVariantCollection::Internal_Create(::UnityEngine::ShaderVariantCollection* svc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "Internal_Create", {}, { ::i2c::type_of<::UnityEngine::ShaderVariantCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, svc);
}
inline void UnityEngine::ShaderVariantCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ShaderVariantCollection::Add(::UnityEngine::ShaderVariantCollection_ShaderVariant variant) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::ShaderVariantCollection_ShaderVariant>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, variant);
}
inline int32_t UnityEngine::ShaderVariantCollection::get_variantCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "get_variantCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::ShaderVariantCollection::get_warmedUpVariantCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "get_warmedUpVariantCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::ShaderVariantCollection::get_isWarmedUp_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(), { "get_isWarmedUp_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::ShaderVariantCollection::AddVariant_Injected(::System::IntPtr _unity_self, ::System::IntPtr shader, ::UnityEngine::Rendering::PassType passType,
                                                                      ::ArrayW<::StringW> keywords) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(),
                                                                                         { "AddVariant_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::PassType>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, shader, passType, keywords);
}
inline bool UnityEngine::ShaderVariantCollection::WarmUpProgressively_Injected(::System::IntPtr _unity_self, int32_t variantCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ShaderVariantCollection*>(),
                                                                                         { "WarmUpProgressively_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, variantCount);
}
inline ::UnityEngine::ShaderVariantCollection* UnityEngine::ShaderVariantCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ShaderVariantCollection*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ShaderVariantCollection::ShaderVariantCollection() {}
