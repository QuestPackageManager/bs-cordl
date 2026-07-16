#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/SelectionPickerRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__SharedVertex_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
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
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer.RenderLookupTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Shader*, ::StringW, int32_t, int32_t)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer::RenderLookupTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer::RenderLookupTexture(::UnityEngine::Camera* camera, ::UnityEngine::Shader* shader,
                                                                                                                                         ::StringW tag, int32_t width, int32_t height) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, camera, shader, tag, width, height);
}
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP.RenderLookupTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Shader*, ::StringW, int32_t, int32_t)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP::RenderLookupTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66e0960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP*>(),
                                                                                           { "RenderLookupTexture",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Shader*>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP::*)()>(
    &::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66e0968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP::RenderLookupTexture(::UnityEngine::Camera* camera,
                                                                                                                                            ::UnityEngine::Shader* shader, ::StringW tag, int32_t width,
                                                                                                                                            int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP*>(),
                                                                                         { "RenderLookupTexture",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Shader*>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, camera, shader, tag, width, height);
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP* UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP*>());
}
/// @brief Convert operator to "::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer"
constexpr UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP::operator ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*() noexcept {
  return static_cast<::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer"
constexpr ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*
UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP::i___UnityEngine__ProBuilder__SelectionPickerRenderer_ISelectionPickerRenderer() noexcept {
  return static_cast<::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererHDRP::SelectionPickerRenderer_SelectionPickerRendererHDRP() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard.RenderLookupTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Shader*, ::StringW, int32_t, int32_t)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard::RenderLookupTexture)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x66e096c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard*>(),
                                                                                           { "RenderLookupTexture",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Shader*>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard::*)()>(
    &::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66e0d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard::RenderLookupTexture(::UnityEngine::Camera* camera,
                                                                                                                                                ::UnityEngine::Shader* shader, ::StringW tag,
                                                                                                                                                int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard*>(),
                                                                                         { "RenderLookupTexture",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Shader*>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, camera, shader, tag, width, height);
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard* UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard*>());
}
/// @brief Convert operator to "::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer"
constexpr UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard::operator ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*() noexcept {
  return static_cast<::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer"
constexpr ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*
UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard::i___UnityEngine__ProBuilder__SelectionPickerRenderer_ISelectionPickerRenderer() noexcept {
  return static_cast<::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::SelectionPickerRenderer_SelectionPickerRendererStandard::SelectionPickerRenderer_SelectionPickerRendererStandard() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SelectionPickerRenderer___c::*)()>(&::UnityEngine::ProBuilder::SelectionPickerRenderer___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66e0db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer___c._GenerateFacePickingObjects_b__24_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (
    ::UnityEngine::ProBuilder::SelectionPickerRenderer___c::*)(::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer___c::_GenerateFacePickingObjects_b__24_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66e0db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer___c*>(),
                                                                                           { "<GenerateFacePickingObjects>b__24_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::SelectionPickerRenderer___c::setStaticF___9(::UnityEngine::ProBuilder::SelectionPickerRenderer___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::SelectionPickerRenderer___c*, "<>9", ::UnityEngine::ProBuilder::SelectionPickerRenderer___c*>(
      std::forward<::UnityEngine::ProBuilder::SelectionPickerRenderer___c*>(value));
}
inline ::UnityEngine::ProBuilder::SelectionPickerRenderer___c* UnityEngine::ProBuilder::SelectionPickerRenderer___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::SelectionPickerRenderer___c*, "<>9", ::UnityEngine::ProBuilder::SelectionPickerRenderer___c*>();
}
inline void
UnityEngine::ProBuilder::SelectionPickerRenderer___c::setStaticF___9__24_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__24_0",
                                    ::UnityEngine::ProBuilder::SelectionPickerRenderer___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* UnityEngine::ProBuilder::SelectionPickerRenderer___c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__24_0",
                                           ::UnityEngine::ProBuilder::SelectionPickerRenderer___c*>();
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::SelectionPickerRenderer___c::_GenerateFacePickingObjects_b__24_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer___c*>(),
                                                                                         { "<GenerateFacePickingObjects>b__24_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::SelectionPickerRenderer___c* UnityEngine::ProBuilder::SelectionPickerRenderer___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::SelectionPickerRenderer___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::SelectionPickerRenderer___c::SelectionPickerRenderer___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0::*)()>(
    &::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66e0dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0._PickVerticesInRect_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0::*)(int32_t)>(
    &::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0::_PickVerticesInRect_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66e0dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0*>(),
                                                                                           { "<PickVerticesInRect>b__0", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector3>& UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0::__cordl_internal_get_positions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positions;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0::__cordl_internal_get_positions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positions;
}
constexpr void UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0::__cordl_internal_set_positions(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positions = value;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>& UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0::__cordl_internal_get_sharedVertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedVertices;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> const& UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0::__cordl_internal_get_sharedVertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedVertices;
}
constexpr void UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0::__cordl_internal_set_sharedVertices(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sharedVertices = value;
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0::_PickVerticesInRect_b__0(int32_t x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0*>(),
                                                                                         { "<PickVerticesInRect>b__0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0* UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::SelectionPickerRenderer___c__DisplayClass19_0::SelectionPickerRenderer___c__DisplayClass19_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.get_renderTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (*)()>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::get_renderTextureFormat)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x66de1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(), { "get_renderTextureFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.get_textureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextureFormat (*)()>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::get_textureFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66de338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(), { "get_textureFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.get_pickerRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer* (*)()>(
    &::UnityEngine::ProBuilder::SelectionPickerRenderer::get_pickerRenderer)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x66de340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(), { "get_pickerRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.PickFacesInRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>,
    ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>* (*)(::UnityEngine::Camera*, ::UnityEngine::Rect,
                                                                                       ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, int32_t,
                                                                                       int32_t)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::PickFacesInRect)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0x66dc5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
                                                             { "PickFacesInRect",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.PickVerticesInRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>,
    ::System::Collections::Generic::HashSet_1<int32_t>*>* (*)(::UnityEngine::Camera*, ::UnityEngine::Rect,
                                                              ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, bool, int32_t, int32_t)>(
    &::UnityEngine::ProBuilder::SelectionPickerRenderer::PickVerticesInRect)> {
  constexpr static std::size_t size = 0xbc8;
  constexpr static std::size_t addrs = 0x66da9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
                                                             { "PickVerticesInRect",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.PickEdgesInRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>,
    ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>* (*)(::UnityEngine::Camera*, ::UnityEngine::Rect,
                                                                                      ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, bool, int32_t,
                                                                                      int32_t)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::PickEdgesInRect)> {
  constexpr static std::size_t size = 0x858;
  constexpr static std::size_t addrs = 0x66dd570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
                                                             { "PickEdgesInRect",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.RenderSelectionPickerTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(
    ::UnityEngine::Camera*, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*,
    ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>,
    int32_t, int32_t)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::RenderSelectionPickerTexture)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x66de430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
                                         { "RenderSelectionPickerTexture",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(),
                                             ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<
                                                 uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.RenderSelectionPickerTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(
    ::UnityEngine::Camera*, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, bool,
    ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*>, int32_t, int32_t)>(
    &::UnityEngine::ProBuilder::SelectionPickerRenderer::RenderSelectionPickerTexture)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x66de6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
            { "RenderSelectionPickerTexture",
              {},
              { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(), ::i2c::type_of<bool>(),
                ::i2c::type_of<
                    ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*>>(),
                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.RenderSelectionPickerTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(
    ::UnityEngine::Camera*, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, bool,
    ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>,
    int32_t, int32_t)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::RenderSelectionPickerTexture)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x66dea00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
                                                { "RenderSelectionPickerTexture",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Camera*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<
                                                        uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.GenerateFacePickingObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::GameObject>> (*)(
    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*,
    ::by_ref<
        ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>)>(
    &::UnityEngine::ProBuilder::SelectionPickerRenderer::GenerateFacePickingObjects)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x66ded20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
                                         { "GenerateFacePickingObjects",
                                           {},
                                           { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(),
                                             ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<
                                                 uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.GenerateVertexPickingObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, bool,
    ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*>,
    ::by_ref<::ArrayW<::UnityEngine::GameObject*>>, ::by_ref<::ArrayW<::UnityEngine::GameObject*>>)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::GenerateVertexPickingObjects)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x66df2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
            { "GenerateVertexPickingObjects",
              {},
              { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(), ::i2c::type_of<bool>(),
                ::i2c::type_of<
                    ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*>>(),
                ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::GameObject*>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::GameObject*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.GenerateEdgePickingObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, bool,
    ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>,
    ::by_ref<::ArrayW<::UnityEngine::GameObject*>>, ::by_ref<::ArrayW<::UnityEngine::GameObject*>>)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::GenerateEdgePickingObjects)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x66df748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
                                                { "GenerateEdgePickingObjects",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<
                                                        uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>>(),
                                                    ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::GameObject*>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::GameObject*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.BuildVertexMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*,
    ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*, ::by_ref<uint32_t>)>(
    &::UnityEngine::ProBuilder::SelectionPickerRenderer::BuildVertexMesh)> {
  constexpr static std::size_t size = 0x7fc;
  constexpr static std::size_t addrs = 0x66dfbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
            { "BuildVertexMesh",
              {},
              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*>(),
                ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.BuildEdgeMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*,
    ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*,
    ::by_ref<uint32_t>)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::BuildEdgeMesh)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x66e03c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
                                                { "BuildEdgeMesh",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::Dictionary_2<
                                                        uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>(),
                                                    ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.DecodeRGBA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Color32)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::DecodeRGBA)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66de6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(), { "DecodeRGBA", {}, { ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.EncodeRGBA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(uint32_t)>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::EncodeRGBA)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66dfbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(), { "EncodeRGBA", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPickerRenderer.ShouldUseHDRP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::ProBuilder::SelectionPickerRenderer::ShouldUseHDRP)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66de428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(), { "ShouldUseHDRP", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::SelectionPickerRenderer::setStaticF_k_Blackf(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "k_Blackf", ::UnityEngine::ProBuilder::SelectionPickerRenderer*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::ProBuilder::SelectionPickerRenderer::getStaticF_k_Blackf() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "k_Blackf", ::UnityEngine::ProBuilder::SelectionPickerRenderer*>();
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer::setStaticF_k_Whitef(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "k_Whitef", ::UnityEngine::ProBuilder::SelectionPickerRenderer*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::ProBuilder::SelectionPickerRenderer::getStaticF_k_Whitef() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "k_Whitef", ::UnityEngine::ProBuilder::SelectionPickerRenderer*>();
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer::setStaticF_s_Initialized(bool value) {
  ::cordl_internals::setStaticField<bool, "s_Initialized", ::UnityEngine::ProBuilder::SelectionPickerRenderer*>(std::forward<bool>(value));
}
inline bool UnityEngine::ProBuilder::SelectionPickerRenderer::getStaticF_s_Initialized() {
  return ::cordl_internals::getStaticField<bool, "s_Initialized", ::UnityEngine::ProBuilder::SelectionPickerRenderer*>();
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer::setStaticF_s_PickerRenderer(::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*, "s_PickerRenderer", ::UnityEngine::ProBuilder::SelectionPickerRenderer*>(
      std::forward<::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*>(value));
}
inline ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer* UnityEngine::ProBuilder::SelectionPickerRenderer::getStaticF_s_PickerRenderer() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*, "s_PickerRenderer", ::UnityEngine::ProBuilder::SelectionPickerRenderer*>();
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer::setStaticF_s_RenderTextureFormat(::UnityEngine::RenderTextureFormat value) {
  ::cordl_internals::setStaticField<::UnityEngine::RenderTextureFormat, "s_RenderTextureFormat", ::UnityEngine::ProBuilder::SelectionPickerRenderer*>(
      std::forward<::UnityEngine::RenderTextureFormat>(value));
}
inline ::UnityEngine::RenderTextureFormat UnityEngine::ProBuilder::SelectionPickerRenderer::getStaticF_s_RenderTextureFormat() {
  return ::cordl_internals::getStaticField<::UnityEngine::RenderTextureFormat, "s_RenderTextureFormat", ::UnityEngine::ProBuilder::SelectionPickerRenderer*>();
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer::setStaticF_s_PreferredFormats(::ArrayW<::UnityEngine::RenderTextureFormat> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::RenderTextureFormat>, "s_PreferredFormats", ::UnityEngine::ProBuilder::SelectionPickerRenderer*>(
      std::forward<::ArrayW<::UnityEngine::RenderTextureFormat>>(value));
}
inline ::ArrayW<::UnityEngine::RenderTextureFormat> UnityEngine::ProBuilder::SelectionPickerRenderer::getStaticF_s_PreferredFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::RenderTextureFormat>, "s_PreferredFormats", ::UnityEngine::ProBuilder::SelectionPickerRenderer*>();
}
inline ::UnityEngine::RenderTextureFormat UnityEngine::ProBuilder::SelectionPickerRenderer::get_renderTextureFormat() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(), { "get_renderTextureFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(nullptr, ___internal_method);
}
inline ::UnityEngine::TextureFormat UnityEngine::ProBuilder::SelectionPickerRenderer::get_textureFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(), { "get_textureFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextureFormat>(nullptr, ___internal_method);
}
inline ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer* UnityEngine::ProBuilder::SelectionPickerRenderer::get_pickerRenderer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(), { "get_pickerRenderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*
UnityEngine::ProBuilder::SelectionPickerRenderer::PickFacesInRect(::UnityEngine::Camera* camera, ::UnityEngine::Rect pickerRect,
                                                                  ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, int32_t renderTextureWidth,
                                                                  int32_t renderTextureHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
                                                           { "PickFacesInRect",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*>(
      nullptr, ___internal_method, camera, pickerRect, selection, renderTextureWidth, renderTextureHeight);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<int32_t>*>*
UnityEngine::ProBuilder::SelectionPickerRenderer::PickVerticesInRect(::UnityEngine::Camera* camera, ::UnityEngine::Rect pickerRect,
                                                                     ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, bool doDepthTest,
                                                                     int32_t renderTextureWidth, int32_t renderTextureHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
                                                           { "PickVerticesInRect",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<int32_t>*>*>(
      nullptr, ___internal_method, camera, pickerRect, selection, doDepthTest, renderTextureWidth, renderTextureHeight);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>*
UnityEngine::ProBuilder::SelectionPickerRenderer::PickEdgesInRect(::UnityEngine::Camera* camera, ::UnityEngine::Rect pickerRect,
                                                                  ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, bool doDepthTest,
                                                                  int32_t renderTextureWidth, int32_t renderTextureHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
                                                           { "PickEdgesInRect",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>*>(
      nullptr, ___internal_method, camera, pickerRect, selection, doDepthTest, renderTextureWidth, renderTextureHeight);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::ProBuilder::SelectionPickerRenderer::RenderSelectionPickerTexture(
    ::UnityEngine::Camera* camera, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection,
    ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>
        map,
    int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
                                       { "RenderSelectionPickerTexture",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(),
                                           ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<
                                               uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>>(),
                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, camera, selection, map, width, height);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::ProBuilder::SelectionPickerRenderer::RenderSelectionPickerTexture(
    ::UnityEngine::Camera* camera, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, bool doDepthTest,
    ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*> map, int32_t width,
    int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
          { "RenderSelectionPickerTexture",
            {},
            { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(), ::i2c::type_of<bool>(),
              ::i2c::type_of<
                  ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*>>(),
              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, camera, selection, doDepthTest, map, width, height);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::ProBuilder::SelectionPickerRenderer::RenderSelectionPickerTexture(
    ::UnityEngine::Camera* camera, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, bool doDepthTest,
    ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>
        map,
    int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
                                              { "RenderSelectionPickerTexture",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Camera*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<
                                                      uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, camera, selection, doDepthTest, map, width, height);
}
inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> UnityEngine::ProBuilder::SelectionPickerRenderer::GenerateFacePickingObjects(
    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection,
    ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>
        map) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
                                       { "GenerateFacePickingObjects",
                                         {},
                                         { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(),
                                           ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<
                                               uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Face*>>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::GameObject>>>(nullptr, ___internal_method, selection, map);
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer::GenerateVertexPickingObjects(
    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, bool doDepthTest,
    ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*> map,
    ::by_ref<::ArrayW<::UnityEngine::GameObject*>> depthObjects, ::by_ref<::ArrayW<::UnityEngine::GameObject*>> pickerObjects) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
          { "GenerateVertexPickingObjects",
            {},
            { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(), ::i2c::type_of<bool>(),
              ::i2c::type_of<
                  ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*>>(),
              ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::GameObject*>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::GameObject*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, selection, doDepthTest, map, depthObjects, pickerObjects);
}
inline void UnityEngine::ProBuilder::SelectionPickerRenderer::GenerateEdgePickingObjects(
    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selection, bool doDepthTest,
    ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>
        map,
    ::by_ref<::ArrayW<::UnityEngine::GameObject*>> depthObjects, ::by_ref<::ArrayW<::UnityEngine::GameObject*>> pickerObjects) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
                                              { "GenerateEdgePickingObjects",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<
                                                      uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>>(),
                                                  ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::GameObject*>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::GameObject*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, selection, doDepthTest, map, depthObjects, pickerObjects);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::ProBuilder::SelectionPickerRenderer::BuildVertexMesh(
    ::UnityEngine::ProBuilder::ProBuilderMesh* pb,
    ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>* map, ::by_ref<uint32_t> index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
          { "BuildVertexMesh",
            {},
            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
              ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, int32_t>>*>(),
              ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, pb, map, index);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::ProBuilder::SelectionPickerRenderer::BuildEdgeMesh(
    ::UnityEngine::ProBuilder::ProBuilderMesh* pb,
    ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>* map,
    ::by_ref<uint32_t> index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(),
                                              { "BuildEdgeMesh",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::Dictionary_2<
                                                      uint32_t, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::UnityEngine::ProBuilder::Edge>>*>(),
                                                  ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, pb, map, index);
}
inline uint32_t UnityEngine::ProBuilder::SelectionPickerRenderer::DecodeRGBA(::UnityEngine::Color32 color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(), { "DecodeRGBA", {}, { ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, color);
}
inline ::UnityEngine::Color32 UnityEngine::ProBuilder::SelectionPickerRenderer::EncodeRGBA(uint32_t hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(), { "EncodeRGBA", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, hash);
}
inline bool UnityEngine::ProBuilder::SelectionPickerRenderer::ShouldUseHDRP() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPickerRenderer*>(), { "ShouldUseHDRP", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::SelectionPickerRenderer::SelectionPickerRenderer() {}
