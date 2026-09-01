#pragma once
// IWYU pragma private; include "HMUI\CurvedTextMeshPro.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__IComponentRefresher_def.hpp"
#include "HMUI/zzzz__CurvedCanvasSettingsHelper_def.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "uvs3", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::CurvedTextMeshPro_CurvedMeshInfo::CurvedTextMeshPro_CurvedMeshInfo(::ArrayW<::UnityEngine::Vector2> uvs3) noexcept {
  this->uvs3 = uvs3;
}
// Ctor Parameters []
constexpr ::HMUI::CurvedTextMeshPro_CurvedMeshInfo::CurvedTextMeshPro_CurvedMeshInfo() {}
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.get_useScriptableObjectColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::get_useScriptableObjectColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f94f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), { "get_useScriptableObjectColors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.set_useScriptableObjectColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CurvedTextMeshPro::*)(bool)>(&::HMUI::CurvedTextMeshPro::set_useScriptableObjectColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f94fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), { "set_useScriptableObjectColors", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::get_color)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x32f9504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), { ::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.set_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CurvedTextMeshPro::*)(::UnityEngine::Color)>(&::HMUI::CurvedTextMeshPro::set_color)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f959c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), { ::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::OnEnable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x32f95a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), { ::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.GenerateTextMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::GenerateTextMesh)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x32f95d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), { ::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), 142 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.__Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::__Refresh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x32f9970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), { "__Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.UpdateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CurvedTextMeshPro::*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Vector2, ::UnityEngine::Color32)>(
    &::HMUI::CurvedTextMeshPro::UpdateMesh)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32f98c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::HMUI::CurvedTextMeshPro*>(),
            { "UpdateMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.FillUV3s
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::HMUI::CurvedTextMeshPro::*)(int32_t, int32_t, ::UnityEngine::Vector2)>(
    &::HMUI::CurvedTextMeshPro::FillUV3s)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x32f9980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), { "FillUV3s", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.FillColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color32> (::HMUI::CurvedTextMeshPro::*)(int32_t, ::UnityEngine::Color32)>(&::HMUI::CurvedTextMeshPro::FillColors)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32f9a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), { "FillColors", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x32f9acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), { ".ctor", {}, {} })));
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
  this->____colorSo = value;
}
constexpr ::ArrayW<::HMUI::CurvedTextMeshPro_CurvedMeshInfo>& HMUI::CurvedTextMeshPro::__cordl_internal_get__curvedMeshInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedMeshInfos;
}
constexpr ::ArrayW<::HMUI::CurvedTextMeshPro_CurvedMeshInfo> const& HMUI::CurvedTextMeshPro::__cordl_internal_get__curvedMeshInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedMeshInfos;
}
constexpr void HMUI::CurvedTextMeshPro::__cordl_internal_set__curvedMeshInfos(::ArrayW<::HMUI::CurvedTextMeshPro_CurvedMeshInfo> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curvedMeshInfos = value;
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
  this->____curvedCanvasSettingsHelper = value;
}
inline bool HMUI::CurvedTextMeshPro::get_useScriptableObjectColors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), { "get_useScriptableObjectColors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::CurvedTextMeshPro::set_useScriptableObjectColors(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), { "set_useScriptableObjectColors", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color HMUI::CurvedTextMeshPro::get_color() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void HMUI::CurvedTextMeshPro::set_color(::UnityEngine::Color value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::CurvedTextMeshPro::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::CurvedTextMeshPro::GenerateTextMesh() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), 142 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::CurvedTextMeshPro::__Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), { "__Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::CurvedTextMeshPro::UpdateMesh(::UnityEngine::Mesh* mesh, int32_t meshIndex, ::UnityEngine::Vector2 curveUV, ::UnityEngine::Color32 color32) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::HMUI::CurvedTextMeshPro*>(),
          { "UpdateMesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, meshIndex, curveUV, color32);
}
inline ::ArrayW<::UnityEngine::Vector2> HMUI::CurvedTextMeshPro::FillUV3s(int32_t meshIndex, int32_t vertexCount, ::UnityEngine::Vector2 curve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), { "FillUV3s", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method, meshIndex, vertexCount, curve);
}
inline ::ArrayW<::UnityEngine::Color32> HMUI::CurvedTextMeshPro::FillColors(int32_t meshIndex, ::UnityEngine::Color32 color32) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), { "FillColors", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color32>>(this, ___internal_method, meshIndex, color32);
}
inline void HMUI::CurvedTextMeshPro::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedTextMeshPro*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::CurvedTextMeshPro* HMUI::CurvedTextMeshPro::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::CurvedTextMeshPro*>());
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
