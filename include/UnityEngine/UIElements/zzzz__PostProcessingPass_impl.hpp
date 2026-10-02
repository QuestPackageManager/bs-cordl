#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PostProcessingPass.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ParameterBinding_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PostProcessingMargins_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PostProcessingPass_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterPassContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__ParameterBinding_def.hpp"
#include "UnityEngine/UIElements/zzzz__PostProcessingMargins_def.hpp"
#include "UnityEngine/UIElements/zzzz__PostProcessingPass_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7235fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate::*)(
    ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::UIElements::FilterFunction)>(&::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate::Invoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x723604c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate::Invoke(::UnityEngine::MaterialPropertyBlock* mpb, ::UnityEngine::UIElements::FilterFunction func) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mpb, func);
}
inline ::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate*
UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate::PostProcessingPass_PrepareMaterialPropertyBlockDelegate() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x72360a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate::*)(
    ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::UIElements::FilterPassContext)>(&::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate::Invoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x7236124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate::Invoke(::UnityEngine::MaterialPropertyBlock* mpb, ::UnityEngine::UIElements::FilterPassContext context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mpb, context);
}
inline ::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate* UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                            ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate::PostProcessingPass_ApplyFilterPassSettingsDelegate() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x723617c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PostProcessingMargins (::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate::*)(
    ::UnityEngine::UIElements::FilterFunction)>(&::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate::Invoke)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x72361e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityEngine::UIElements::PostProcessingMargins UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate::Invoke(::UnityEngine::UIElements::FilterFunction func) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PostProcessingMargins>(this, ___internal_method, func);
}
inline ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate::PostProcessingPass_ComputeRequiredMarginsDelegate() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass.get_material
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::UIElements::PostProcessingPass::*)()>(
    &::UnityEngine::UIElements::PostProcessingPass::get_material)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "get_material", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass.set_material
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PostProcessingPass::*)(::UnityEngine::Material*)>(
    &::UnityEngine::UIElements::PostProcessingPass::set_material)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "set_material", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass.get_passIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::PostProcessingPass::*)()>(&::UnityEngine::UIElements::PostProcessingPass::get_passIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "get_passIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass.set_passIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PostProcessingPass::*)(int32_t)>(&::UnityEngine::UIElements::PostProcessingPass::set_passIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "set_passIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass.get_parameterBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::UIElements::ParameterBinding> (::UnityEngine::UIElements::PostProcessingPass::*)()>(
    &::UnityEngine::UIElements::PostProcessingPass::get_parameterBindings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "get_parameterBindings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass.set_parameterBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PostProcessingPass::*)(::ArrayW<::UnityEngine::UIElements::ParameterBinding>)>(
    &::UnityEngine::UIElements::PostProcessingPass::set_parameterBindings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(),
                                                             { "set_parameterBindings", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::ParameterBinding>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass.get_readMargins
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PostProcessingMargins (::UnityEngine::UIElements::PostProcessingPass::*)()>(
    &::UnityEngine::UIElements::PostProcessingPass::get_readMargins)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7235f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "get_readMargins", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass.set_readMargins
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PostProcessingPass::*)(::UnityEngine::UIElements::PostProcessingMargins)>(
    &::UnityEngine::UIElements::PostProcessingPass::set_readMargins)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7235f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(),
                                                                                           { "set_readMargins", {}, { ::i2c::type_of<::UnityEngine::UIElements::PostProcessingMargins>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass.get_writeMargins
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PostProcessingMargins (::UnityEngine::UIElements::PostProcessingPass::*)()>(
    &::UnityEngine::UIElements::PostProcessingPass::get_writeMargins)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7235f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "get_writeMargins", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass.set_writeMargins
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PostProcessingPass::*)(::UnityEngine::UIElements::PostProcessingMargins)>(
    &::UnityEngine::UIElements::PostProcessingPass::set_writeMargins)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7235f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(),
                                                                                           { "set_writeMargins", {}, { ::i2c::type_of<::UnityEngine::UIElements::PostProcessingMargins>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass.get_applySettingsCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate* (::UnityEngine::UIElements::PostProcessingPass::*)()>(
    &::UnityEngine::UIElements::PostProcessingPass::get_applySettingsCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "get_applySettingsCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass.set_applySettingsCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PostProcessingPass::*)(::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate*)>(
    &::UnityEngine::UIElements::PostProcessingPass::set_applySettingsCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(),
                                                { "set_applySettingsCallback", {}, { ::i2c::type_of<::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass.get_computeRequiredReadMarginsCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* (::UnityEngine::UIElements::PostProcessingPass::*)()>(
    &::UnityEngine::UIElements::PostProcessingPass::get_computeRequiredReadMarginsCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "get_computeRequiredReadMarginsCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass.set_computeRequiredReadMarginsCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PostProcessingPass::*)(::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*)>(
    &::UnityEngine::UIElements::PostProcessingPass::set_computeRequiredReadMarginsCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(),
                                         { "set_computeRequiredReadMarginsCallback", {}, { ::i2c::type_of<::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass.get_computeRequiredWriteMarginsCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* (::UnityEngine::UIElements::PostProcessingPass::*)()>(
    &::UnityEngine::UIElements::PostProcessingPass::get_computeRequiredWriteMarginsCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "get_computeRequiredWriteMarginsCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PostProcessingPass.set_computeRequiredWriteMarginsCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PostProcessingPass::*)(::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*)>(
    &::UnityEngine::UIElements::PostProcessingPass::set_computeRequiredWriteMarginsCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7235fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(),
                                         { "set_computeRequiredWriteMarginsCallback", {}, { ::i2c::type_of<::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*>() } })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::PostProcessingPass::get_material() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "get_material", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PostProcessingPass::set_material(::UnityEngine::Material* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "set_material", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::PostProcessingPass::get_passIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "get_passIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PostProcessingPass::set_passIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "set_passIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::UIElements::ParameterBinding> UnityEngine::UIElements::PostProcessingPass::get_parameterBindings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "get_parameterBindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::ParameterBinding>>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PostProcessingPass::set_parameterBindings(::ArrayW<::UnityEngine::UIElements::ParameterBinding> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(),
                                                           { "set_parameterBindings", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::ParameterBinding>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::PostProcessingMargins UnityEngine::UIElements::PostProcessingPass::get_readMargins() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "get_readMargins", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PostProcessingMargins>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PostProcessingPass::set_readMargins(::UnityEngine::UIElements::PostProcessingMargins value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(),
                                                                                         { "set_readMargins", {}, { ::i2c::type_of<::UnityEngine::UIElements::PostProcessingMargins>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::PostProcessingMargins UnityEngine::UIElements::PostProcessingPass::get_writeMargins() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "get_writeMargins", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PostProcessingMargins>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PostProcessingPass::set_writeMargins(::UnityEngine::UIElements::PostProcessingMargins value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(),
                                                                                         { "set_writeMargins", {}, { ::i2c::type_of<::UnityEngine::UIElements::PostProcessingMargins>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate* UnityEngine::UIElements::PostProcessingPass::get_applySettingsCallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "get_applySettingsCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PostProcessingPass::set_applySettingsCallback(::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(),
                                                           { "set_applySettingsCallback", {}, { ::i2c::type_of<::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* UnityEngine::UIElements::PostProcessingPass::get_computeRequiredReadMarginsCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "get_computeRequiredReadMarginsCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PostProcessingPass::set_computeRequiredReadMarginsCallback(::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(),
                                              { "set_computeRequiredReadMarginsCallback", {}, { ::i2c::type_of<::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* UnityEngine::UIElements::PostProcessingPass::get_computeRequiredWriteMarginsCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(), { "get_computeRequiredWriteMarginsCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PostProcessingPass::set_computeRequiredWriteMarginsCallback(::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PostProcessingPass>(),
                                              { "set_computeRequiredWriteMarginsCallback", {}, { ::i2c::type_of<::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PassIndex", ty: "int32_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ParameterBindings", ty: "::ArrayW<::UnityEngine::UIElements::ParameterBinding>", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "m_ReadMargins", ty: "::UnityEngine::UIElements::PostProcessingMargins", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_WriteMargins",
// ty: "::UnityEngine::UIElements::PostProcessingMargins", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_prepareMaterialPropertyBlockCallback_k__BackingField", ty:
// "::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_applySettingsCallback_k__BackingField", ty: "::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "_computeRequiredReadMarginsCallback_k__BackingField", ty: "::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "_computeRequiredWriteMarginsCallback_k__BackingField", ty: "::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::PostProcessingPass::PostProcessingPass(
    ::UnityW<::UnityEngine::Material> m_Material, int32_t m_PassIndex, ::ArrayW<::UnityEngine::UIElements::ParameterBinding> m_ParameterBindings,
    ::UnityEngine::UIElements::PostProcessingMargins m_ReadMargins, ::UnityEngine::UIElements::PostProcessingMargins m_WriteMargins,
    ::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate* _prepareMaterialPropertyBlockCallback_k__BackingField,
    ::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate* _applySettingsCallback_k__BackingField,
    ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* _computeRequiredReadMarginsCallback_k__BackingField,
    ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* _computeRequiredWriteMarginsCallback_k__BackingField) noexcept {
  this->m_Material = m_Material;
  this->m_PassIndex = m_PassIndex;
  this->m_ParameterBindings = m_ParameterBindings;
  this->m_ReadMargins = m_ReadMargins;
  this->m_WriteMargins = m_WriteMargins;
  this->_prepareMaterialPropertyBlockCallback_k__BackingField = _prepareMaterialPropertyBlockCallback_k__BackingField;
  this->_applySettingsCallback_k__BackingField = _applySettingsCallback_k__BackingField;
  this->_computeRequiredReadMarginsCallback_k__BackingField = _computeRequiredReadMarginsCallback_k__BackingField;
  this->_computeRequiredWriteMarginsCallback_k__BackingField = _computeRequiredWriteMarginsCallback_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PostProcessingPass::PostProcessingPass() {}
