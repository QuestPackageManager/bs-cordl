#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipeline_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipeline.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderPipeline::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*>)>(&::UnityEngine::Rendering::RenderPipeline::Render)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipeline.ProcessRenderRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderPipeline::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*, ::System::Collections::Generic::List_1<::UnityEngine::__Camera__RenderRequest>*)>(
    &::UnityEngine::Rendering::RenderPipeline::ProcessRenderRequests)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cedf10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipeline.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderPipeline::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>*)>(&::UnityEngine::Rendering::RenderPipeline::Render)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2cedf14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipeline.InternalRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderPipeline::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>*)>(&::UnityEngine::Rendering::RenderPipeline::InternalRender)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2ced5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), "InternalRender", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Camera*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipeline.InternalRenderWithRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderPipeline::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>*,
    ::System::Collections::Generic::List_1<::UnityEngine::__Camera__RenderRequest>*)>(&::UnityEngine::Rendering::RenderPipeline::InternalRenderWithRequests)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2ced628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), "InternalRenderWithRequests", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Camera*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::__Camera__RenderRequest>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipeline.get_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderPipeline::*)()>(&::UnityEngine::Rendering::RenderPipeline::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cedf8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), "get_disposed",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipeline.set_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderPipeline::*)(bool)>(&::UnityEngine::Rendering::RenderPipeline::set_disposed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cedf94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), "set_disposed", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipeline.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderPipeline::*)()>(&::UnityEngine::Rendering::RenderPipeline::Dispose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ced01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderPipeline.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderPipeline::*)(bool)>(&::UnityEngine::Rendering::RenderPipeline::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cedfa0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), 7));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::RenderPipeline::__get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::RenderPipeline::__get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderPipeline::__set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
inline void UnityEngine::Rendering::RenderPipeline::Render(::UnityEngine::Rendering::ScriptableRenderContext context, ::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*> cameras) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), "Render", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, cameras);
}
inline void UnityEngine::Rendering::RenderPipeline::ProcessRenderRequests(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera,
                                                                          ::System::Collections::Generic::List_1<::UnityEngine::__Camera__RenderRequest>* renderRequests) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), "ProcessRenderRequests", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::__Camera__RenderRequest>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, camera, renderRequests);
}
inline void UnityEngine::Rendering::RenderPipeline::Render(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>* cameras) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), "Render", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Camera*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, cameras);
}
inline void UnityEngine::Rendering::RenderPipeline::InternalRender(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>* cameras) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), "InternalRender", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Camera*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, cameras);
}
inline void UnityEngine::Rendering::RenderPipeline::InternalRenderWithRequests(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                               ::System::Collections::Generic::List_1<::UnityEngine::Camera*>* cameras,
                                                                               ::System::Collections::Generic::List_1<::UnityEngine::__Camera__RenderRequest>* renderRequests) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), "InternalRenderWithRequests", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Camera*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::__Camera__RenderRequest>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, cameras, renderRequests);
}
inline bool UnityEngine::Rendering::RenderPipeline::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), "get_disposed",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderPipeline::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), "set_disposed", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderPipeline::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderPipeline::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipeline*>::get(), "Dispose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderPipeline::RenderPipeline() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
