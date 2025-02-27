#pragma once
// IWYU pragma private; include "HMUI/CurvedTextMeshPro.hpp"
#include "GlobalNamespace/zzzz__IComponentRefresher_impl.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_impl.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "HMUI/zzzz__CurvedCanvasSettingsHelper_def.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "uvs3", ty: "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::CurvedTextMeshPro_CurvedMeshInfo::CurvedTextMeshPro_CurvedMeshInfo(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs3) noexcept {
  this->uvs3 = uvs3;
}
// Ctor Parameters []
constexpr ::HMUI::CurvedTextMeshPro_CurvedMeshInfo::CurvedTextMeshPro_CurvedMeshInfo() {}
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.get_useScriptableObjectColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::get_useScriptableObjectColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2292970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                                                                               "get_useScriptableObjectColors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.set_useScriptableObjectColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedTextMeshPro::*)(bool)>(&::HMUI::CurvedTextMeshPro::set_useScriptableObjectColors)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2292978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), "set_useScriptableObjectColors",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::get_color)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2292984;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.set_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedTextMeshPro::*)(::UnityEngine::Color)>(&::HMUI::CurvedTextMeshPro::set_color)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2292a18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::OnEnable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2292a20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.GenerateTextMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::GenerateTextMesh)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2292a48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), 142));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.__Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::__Refresh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2292dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), "__Refresh",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.UpdateMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedTextMeshPro::*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Vector2, ::UnityEngine::Color32)>(
    &::HMUI::CurvedTextMeshPro::UpdateMesh)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2292d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), "UpdateMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.FillUV3s
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> (::HMUI::CurvedTextMeshPro::*)(int32_t, int32_t, ::UnityEngine::Vector2)>(&::HMUI::CurvedTextMeshPro::FillUV3s)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2292de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), "FillUV3s", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.FillColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> (::HMUI::CurvedTextMeshPro::*)(int32_t, ::UnityEngine::Color32)>(&::HMUI::CurvedTextMeshPro::FillColors)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2292ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), "FillColors", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2292f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& HMUI::CurvedTextMeshPro::__cordl_internal_get__useScriptableObjectColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScriptableObjectColors;
}
constexpr bool const& HMUI::CurvedTextMeshPro::__cordl_internal_get__useScriptableObjectColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScriptableObjectColors;
}
constexpr void HMUI::CurvedTextMeshPro::__cordl_internal_set__useScriptableObjectColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useScriptableObjectColors = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& HMUI::CurvedTextMeshPro::__cordl_internal_get__colorSo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSo;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& HMUI::CurvedTextMeshPro::__cordl_internal_get__colorSo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSo;
}
constexpr void HMUI::CurvedTextMeshPro::__cordl_internal_set__colorSo(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorSo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::HMUI::CurvedTextMeshPro_CurvedMeshInfo, ::Array<::HMUI::CurvedTextMeshPro_CurvedMeshInfo>*>& HMUI::CurvedTextMeshPro::__cordl_internal_get__curvedMeshInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedMeshInfos;
}
constexpr ::ArrayW<::HMUI::CurvedTextMeshPro_CurvedMeshInfo, ::Array<::HMUI::CurvedTextMeshPro_CurvedMeshInfo>*> const& HMUI::CurvedTextMeshPro::__cordl_internal_get__curvedMeshInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedMeshInfos;
}
constexpr void HMUI::CurvedTextMeshPro::__cordl_internal_set__curvedMeshInfos(::ArrayW<::HMUI::CurvedTextMeshPro_CurvedMeshInfo, ::Array<::HMUI::CurvedTextMeshPro_CurvedMeshInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curvedMeshInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::CurvedCanvasSettingsHelper*& HMUI::CurvedTextMeshPro::__cordl_internal_get__curvedCanvasSettingsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedCanvasSettingsHelper;
}
constexpr ::HMUI::CurvedCanvasSettingsHelper* const& HMUI::CurvedTextMeshPro::__cordl_internal_get__curvedCanvasSettingsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedCanvasSettingsHelper;
}
constexpr void HMUI::CurvedTextMeshPro::__cordl_internal_set__curvedCanvasSettingsHelper(::HMUI::CurvedCanvasSettingsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curvedCanvasSettingsHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool HMUI::CurvedTextMeshPro::get_useScriptableObjectColors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), "get_useScriptableObjectColors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HMUI::CurvedTextMeshPro::set_useScriptableObjectColors(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), "set_useScriptableObjectColors",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color HMUI::CurvedTextMeshPro::get_color() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void HMUI::CurvedTextMeshPro::set_color(::UnityEngine::Color value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::CurvedTextMeshPro::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::CurvedTextMeshPro::GenerateTextMesh() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), 142)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::CurvedTextMeshPro::__Refresh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), "__Refresh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::CurvedTextMeshPro::UpdateMesh(::UnityEngine::Mesh* mesh, int32_t meshIndex, ::UnityEngine::Vector2 curveUV, ::UnityEngine::Color32 color32) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), "UpdateMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, meshIndex, curveUV, color32);
}
inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> HMUI::CurvedTextMeshPro::FillUV3s(int32_t meshIndex, int32_t vertexCount, ::UnityEngine::Vector2 curve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), "FillUV3s", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, false>(this, ___internal_method, meshIndex, vertexCount, curve);
}
inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> HMUI::CurvedTextMeshPro::FillColors(int32_t meshIndex, ::UnityEngine::Color32 color32) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), "FillColors", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>, false>(this, ___internal_method, meshIndex, color32);
}
inline void HMUI::CurvedTextMeshPro::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::CurvedTextMeshPro* HMUI::CurvedTextMeshPro::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::CurvedTextMeshPro*>());
}
/// @brief Convert operator to "::GlobalNamespace::IComponentRefresher"
constexpr HMUI::CurvedTextMeshPro::operator ::GlobalNamespace::IComponentRefresher*() noexcept {
  return static_cast<::GlobalNamespace::IComponentRefresher*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IComponentRefresher"
constexpr ::GlobalNamespace::IComponentRefresher* HMUI::CurvedTextMeshPro::i___GlobalNamespace__IComponentRefresher() noexcept {
  return static_cast<::GlobalNamespace::IComponentRefresher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::CurvedTextMeshPro::CurvedTextMeshPro() {}
