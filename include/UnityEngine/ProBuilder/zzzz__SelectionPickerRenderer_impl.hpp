#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__SelectionPickerRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SelectionPickerRenderer_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SharedVertex_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_2_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer.RenderLookupTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (
    ::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer::*)(::UnityEngine::Camera*, ::UnityEngine::Shader*, ::StringW, int32_t, int32_t)>(
    &::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer::RenderLookupTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*>::get(), 0));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer::RenderLookupTexture(::UnityEngine::Camera* camera,
                                                                                                                                            ::UnityEngine::Shader* shader, ::StringW tag, int32_t width,
                                                                                                                                            int32_t height) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(this, ___internal_method, camera, shader, tag, width, height);
}
//  Writing Method size for method: ::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP.RenderLookupTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (
    ::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP::*)(::UnityEngine::Camera*, ::UnityEngine::Shader*, ::StringW, int32_t, int32_t)>(
    &::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP::RenderLookupTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5055c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP*>::get(),
                                    "RenderLookupTexture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP::*)()>(
    &::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c50564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer"
constexpr UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP::operator ::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*() noexcept {
  return static_cast<::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer"
constexpr ::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*
UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP::i___UnityEngine__ProBuilder____SelectionPickerRenderer__ISelectionPickerRenderer() noexcept {
  return static_cast<::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*>(static_cast<void*>(this));
}
/// @param width: int32_t (default: static_cast<int32_t>(0xffffffff))
/// @param height: int32_t (default: static_cast<int32_t>(0xffffffff))
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP::RenderLookupTexture(::UnityEngine::Camera* camera,
                                                                                                                                               ::UnityEngine::Shader* shader, ::StringW tag,
                                                                                                                                               int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP*>::get(), "RenderLookupTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(this, ___internal_method, camera, shader, tag, width, height);
}
inline ::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP* UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP*>());
}
inline void UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP::__SelectionPickerRenderer__SelectionPickerRendererHDRP() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard.RenderLookupTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (
    ::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard::*)(::UnityEngine::Camera*, ::UnityEngine::Shader*, ::StringW, int32_t, int32_t)>(
    &::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard::RenderLookupTexture)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x2c5056c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard*>::get(),
                                    "RenderLookupTexture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard::*)()>(
    &::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c50980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer"
constexpr UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard::operator ::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*() noexcept {
  return static_cast<::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer"
constexpr ::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*
UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard::i___UnityEngine__ProBuilder____SelectionPickerRenderer__ISelectionPickerRenderer() noexcept {
  return static_cast<::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*>(static_cast<void*>(this));
}
/// @param width: int32_t (default: static_cast<int32_t>(0xffffffff))
/// @param height: int32_t (default: static_cast<int32_t>(0xffffffff))
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard::RenderLookupTexture(::UnityEngine::Camera* camera,
                                                                                                                                                   ::UnityEngine::Shader* shader, ::StringW tag,
                                                                                                                                                   int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard*>::get(), "RenderLookupTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(this, ___internal_method, camera, shader, tag, width, height);
}
inline ::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard* UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard*>());
}
inline void UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard::__SelectionPickerRenderer__SelectionPickerRendererStandard() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0::*)()>(
    &::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c50988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0._PickVerticesInRect_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0::*)(int32_t)>(
    &::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0::_PickVerticesInRect_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2c50990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0*>::get(), "<PickVerticesInRect>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0::__cordl_internal_get_positions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positions;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0::__cordl_internal_get_positions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positions;
}
constexpr void UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0::__cordl_internal_set_positions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___positions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>&
UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0::__cordl_internal_get_sharedVertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedVertices;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> const&
UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0::__cordl_internal_get_sharedVertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedVertices;
}
constexpr void UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0::__cordl_internal_set_sharedVertices(
    ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sharedVertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0* UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0*>());
}
inline void UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0::_PickVerticesInRect_b__0(int32_t x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0*>::get(), "<PickVerticesInRect>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0::__SelectionPickerRenderer____c__DisplayClass19_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::__SelectionPickerRenderer____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::__SelectionPickerRenderer____c::*)()>(
    &::UnityEngine::ProBuilder::__SelectionPickerRenderer____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c50b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__SelectionPickerRenderer____c._GenerateFacePickingObjects_b__24_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (
    ::UnityEngine::ProBuilder::__SelectionPickerRenderer____c::*)(::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::__SelectionPickerRenderer____c::_GenerateFacePickingObjects_b__24_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c50b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c*>::get(), "<GenerateFacePickingObjects>b__24_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::__SelectionPickerRenderer____c::setStaticF___9(::UnityEngine::ProBuilder::__SelectionPickerRenderer____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c*>::get>(
      std::forward<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c*>(value));
}
inline ::UnityEngine::ProBuilder::__SelectionPickerRenderer____c* UnityEngine::ProBuilder::__SelectionPickerRenderer____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c*>::get>();
}
inline void
UnityEngine::ProBuilder::__SelectionPickerRenderer____c::setStaticF___9__24_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__24_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* UnityEngine::ProBuilder::__SelectionPickerRenderer____c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__24_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c*>::get>();
}
inline ::UnityEngine::ProBuilder::__SelectionPickerRenderer____c* UnityEngine::ProBuilder::__SelectionPickerRenderer____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c*>());
}
inline void UnityEngine::ProBuilder::__SelectionPickerRenderer____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::__SelectionPickerRenderer____c::_GenerateFacePickingObjects_b__24_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c*>::get(), "<GenerateFacePickingObjects>b__24_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::__SelectionPickerRenderer____c::__SelectionPickerRenderer____c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.get_renderTextureFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureFormat (*)()>(
    &::UnityEngine::ProBuilder::SelectionPickerRenderer::get_renderTextureFormat)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2c4ce68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(),
                                                                               "get_renderTextureFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.get_textureFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextureFormat (*)()>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::get_textureFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4cfc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(),
                                                                               "get_textureFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.get_pickerRenderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer* (*)()>(
    &::UnityEngine::ProBuilder::SelectionPickerRenderer::get_pickerRenderer)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2c4cfcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(),
                                                                               "get_pickerRenderer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.PickFacesInRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>,
    ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>* (*)(::UnityEngine::Camera*, ::UnityEngine::Rect,
                                                                                       ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, int32_t,
                                                                                       int32_t)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::PickFacesInRect)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x2c4b5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "PickFacesInRect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.PickVerticesInRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>,
    ::System::Collections::Generic::HashSet_1<int32_t>*>* (*)(::UnityEngine::Camera*, ::UnityEngine::Rect,
                                                              ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, bool, int32_t, int32_t)>(
    &::UnityEngine::ProBuilder::SelectionPickerRenderer::PickVerticesInRect)> {
  constexpr static std::size_t size = 0x9b8;
  constexpr static std::size_t addrs = 0x2c49cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "PickVerticesInRect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.PickEdgesInRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>,
    ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>* (*)(::UnityEngine::Camera*, ::UnityEngine::Rect,
                                                                                      ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, bool, int32_t,
                                                                                      int32_t)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::PickEdgesInRect)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x2c4c3ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "PickEdgesInRect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.RenderSelectionPickerTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(
    ::UnityEngine::Camera*, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*,
    ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>,
    int32_t, int32_t)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::RenderSelectionPickerTexture)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2c4d0ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "RenderSelectionPickerTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<
                                                uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.RenderSelectionPickerTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(
    ::UnityEngine::Camera*, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, bool,
    ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*>, int32_t, int32_t)>(
    &::UnityEngine::ProBuilder::SelectionPickerRenderer::RenderSelectionPickerTexture)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x2c4d37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "RenderSelectionPickerTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.RenderSelectionPickerTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(
    ::UnityEngine::Camera*, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, bool,
    ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>,
    int32_t, int32_t)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::RenderSelectionPickerTexture)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x2c4d65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "RenderSelectionPickerTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<
                                                uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.GenerateFacePickingObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> (*)(
    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*,
    ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>)>(
    &::UnityEngine::ProBuilder::SelectionPickerRenderer::GenerateFacePickingObjects)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x2c4d93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "GenerateFacePickingObjects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<
                uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.GenerateVertexPickingObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, bool,
                         ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*>,
                         ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>, ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>)>(
        &::UnityEngine::ProBuilder::SelectionPickerRenderer::GenerateVertexPickingObjects)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x2c4decc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "GenerateVertexPickingObjects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.GenerateEdgePickingObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, bool,
    ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>,
    ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>, ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>)>(
    &::UnityEngine::ProBuilder::SelectionPickerRenderer::GenerateEdgePickingObjects)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x2c4e34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "GenerateEdgePickingObjects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<
                                                uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.BuildVertexMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*,
    ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*, ByRef<uint32_t>)>(
    &::UnityEngine::ProBuilder::SelectionPickerRenderer::BuildVertexMesh)> {
  constexpr static std::size_t size = 0x76c;
  constexpr static std::size_t addrs = 0x2c4e854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "BuildVertexMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.BuildEdgeMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*,
    ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*,
    ByRef<uint32_t>)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::BuildEdgeMesh)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x2c4efc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "BuildEdgeMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<
                                                uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.DecodeRGBA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::UnityEngine::Color32)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::DecodeRGBA)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2c4d2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "DecodeRGBA", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.EncodeRGBA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (*)(uint32_t)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::EncodeRGBA)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c4e7cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "EncodeRGBA",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.ShouldUseHDRP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::ShouldUseHDRP)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c4d0a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(),
                                                                               "ShouldUseHDRP", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::SelectionPickerRenderer::setStaticF_k_Blackf(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "k_Blackf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get>(
      std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::ProBuilder::SelectionPickerRenderer::getStaticF_k_Blackf() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "k_Blackf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get>();
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer::setStaticF_k_Whitef(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "k_Whitef", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get>(
      std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::ProBuilder::SelectionPickerRenderer::getStaticF_k_Whitef() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "k_Whitef", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get>();
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer::setStaticF_s_Initialized(bool value) {
  ::cordl_internals::setStaticField<bool, "s_Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::ProBuilder::SelectionPickerRenderer::getStaticF_s_Initialized() {
  return ::cordl_internals::getStaticField<bool, "s_Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get>();
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer::setStaticF_s_PickerRenderer(::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*, "s_PickerRenderer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get>(
      std::forward<::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*>(value));
}
inline ::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer* UnityEngine::ProBuilder::SelectionPickerRenderer::getStaticF_s_PickerRenderer() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*, "s_PickerRenderer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get>();
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer::setStaticF_s_RenderTextureFormat(::UnityEngine::RenderTextureFormat value) {
  ::cordl_internals::setStaticField<::UnityEngine::RenderTextureFormat, "s_RenderTextureFormat",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get>(
      std::forward<::UnityEngine::RenderTextureFormat>(value));
}
inline ::UnityEngine::RenderTextureFormat UnityEngine::ProBuilder::SelectionPickerRenderer::getStaticF_s_RenderTextureFormat() {
  return ::cordl_internals::getStaticField<::UnityEngine::RenderTextureFormat, "s_RenderTextureFormat",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get>();
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer::setStaticF_s_PreferredFormats(::ArrayW<::UnityEngine::RenderTextureFormat, ::Array<::UnityEngine::RenderTextureFormat>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::RenderTextureFormat, ::Array<::UnityEngine::RenderTextureFormat>*>, "s_PreferredFormats",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get>(
      std::forward<::ArrayW<::UnityEngine::RenderTextureFormat, ::Array<::UnityEngine::RenderTextureFormat>*>>(value));
}
inline ::ArrayW<::UnityEngine::RenderTextureFormat, ::Array<::UnityEngine::RenderTextureFormat>*> UnityEngine::ProBuilder::SelectionPickerRenderer::getStaticF_s_PreferredFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::RenderTextureFormat, ::Array<::UnityEngine::RenderTextureFormat>*>, "s_PreferredFormats",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get>();
}
inline ::UnityEngine::RenderTextureFormat UnityEngine::ProBuilder::SelectionPickerRenderer::get_renderTextureFormat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(),
                                                                             "get_renderTextureFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::TextureFormat UnityEngine::ProBuilder::SelectionPickerRenderer::get_textureFormat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(),
                                                                             "get_textureFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextureFormat, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer* UnityEngine::ProBuilder::SelectionPickerRenderer::get_pickerRenderer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(),
                                                                             "get_pickerRenderer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*, false>(nullptr, ___internal_method);
}
/// @param renderTextureWidth: int32_t (default: static_cast<int32_t>(0xffffffff))
/// @param renderTextureHeight: int32_t (default: static_cast<int32_t>(0xffffffff))
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*
UnityEngine::ProBuilder::SelectionPickerRenderer::PickFacesInRect(::UnityEngine::Camera* camera, ::UnityEngine::Rect pickerRect,
                                                                  ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, int32_t renderTextureWidth,
                                                                  int32_t renderTextureHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "PickFacesInRect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*, false>(
      nullptr, ___internal_method, camera, pickerRect, selection, renderTextureWidth, renderTextureHeight);
}
/// @param renderTextureWidth: int32_t (default: static_cast<int32_t>(0xffffffff))
/// @param renderTextureHeight: int32_t (default: static_cast<int32_t>(0xffffffff))
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<int32_t>*>*
UnityEngine::ProBuilder::SelectionPickerRenderer::PickVerticesInRect(::UnityEngine::Camera* camera, ::UnityEngine::Rect pickerRect,
                                                                     ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, bool doDepthTest,
                                                                     int32_t renderTextureWidth, int32_t renderTextureHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "PickVerticesInRect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<int32_t>*>*,
                                             false>(nullptr, ___internal_method, camera, pickerRect, selection, doDepthTest, renderTextureWidth, renderTextureHeight);
}
/// @param renderTextureWidth: int32_t (default: static_cast<int32_t>(0xffffffff))
/// @param renderTextureHeight: int32_t (default: static_cast<int32_t>(0xffffffff))
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>*
UnityEngine::ProBuilder::SelectionPickerRenderer::PickEdgesInRect(::UnityEngine::Camera* camera, ::UnityEngine::Rect pickerRect,
                                                                  ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, bool doDepthTest,
                                                                  int32_t renderTextureWidth, int32_t renderTextureHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "PickEdgesInRect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>*, false>(
      nullptr, ___internal_method, camera, pickerRect, selection, doDepthTest, renderTextureWidth, renderTextureHeight);
}
/// @param width: int32_t (default: static_cast<int32_t>(0xffffffff))
/// @param height: int32_t (default: static_cast<int32_t>(0xffffffff))
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::ProBuilder::SelectionPickerRenderer::RenderSelectionPickerTexture(
    ::UnityEngine::Camera* camera, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection,
    ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*> map,
    int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "RenderSelectionPickerTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<
                                              uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(nullptr, ___internal_method, camera, selection, map, width, height);
}
/// @param width: int32_t (default: static_cast<int32_t>(0xffffffff))
/// @param height: int32_t (default: static_cast<int32_t>(0xffffffff))
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::ProBuilder::SelectionPickerRenderer::RenderSelectionPickerTexture(
    ::UnityEngine::Camera* camera, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, bool doDepthTest,
    ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*> map, int32_t width,
    int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "RenderSelectionPickerTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(nullptr, ___internal_method, camera, selection, doDepthTest, map, width, height);
}
/// @param width: int32_t (default: static_cast<int32_t>(0xffffffff))
/// @param height: int32_t (default: static_cast<int32_t>(0xffffffff))
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::ProBuilder::SelectionPickerRenderer::RenderSelectionPickerTexture(
    ::UnityEngine::Camera* camera, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, bool doDepthTest,
    ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*> map,
    int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "RenderSelectionPickerTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<
                                              uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(nullptr, ___internal_method, camera, selection, doDepthTest, map, width, height);
}
inline ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> UnityEngine::ProBuilder::SelectionPickerRenderer::GenerateFacePickingObjects(
    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection,
    ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>
        map) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "GenerateFacePickingObjects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<
                                              uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>, false>(nullptr, ___internal_method, selection, map);
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer::GenerateVertexPickingObjects(
    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, bool doDepthTest,
    ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*> map,
    ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>> depthObjects, ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>> pickerObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "GenerateVertexPickingObjects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, selection, doDepthTest, map, depthObjects, pickerObjects);
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer::GenerateEdgePickingObjects(
    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, bool doDepthTest,
    ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*> map,
    ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>> depthObjects, ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>> pickerObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "GenerateEdgePickingObjects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<
                                              uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, selection, doDepthTest, map, depthObjects, pickerObjects);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::ProBuilder::SelectionPickerRenderer::BuildVertexMesh(
    ::UnityEngine::ProBuilder::ProBuilderMesh* pb,
    ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>* map, ByRef<uint32_t> index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "BuildVertexMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(nullptr, ___internal_method, pb, map, index);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::ProBuilder::SelectionPickerRenderer::BuildEdgeMesh(
    ::UnityEngine::ProBuilder::ProBuilderMesh* pb,
    ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>* map,
    ByRef<uint32_t> index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "BuildEdgeMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<
                                              uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(nullptr, ___internal_method, pb, map, index);
}
inline uint32_t UnityEngine::ProBuilder::SelectionPickerRenderer::DecodeRGBA(::UnityEngine::Color32 color) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "DecodeRGBA", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, color);
}
inline ::UnityEngine::Color32 UnityEngine::ProBuilder::SelectionPickerRenderer::EncodeRGBA(uint32_t hash) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(), "EncodeRGBA",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32, false>(nullptr, ___internal_method, hash);
}
inline bool UnityEngine::ProBuilder::SelectionPickerRenderer::ShouldUseHDRP() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::SelectionPickerRenderer*>::get(),
                                                                             "ShouldUseHDRP", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::SelectionPickerRenderer::SelectionPickerRenderer() {}
