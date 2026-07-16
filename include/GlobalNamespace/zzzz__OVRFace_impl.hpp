#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRFace.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRFace_def.hpp"
#include "GlobalNamespace/zzzz__OVRFaceExpressions_def.hpp"
#include "GlobalNamespace/zzzz__OVRFace_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRFace_IMeshWeightsProvider.UpdateWeights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFace_IMeshWeightsProvider::*)(::GlobalNamespace::OVRFaceExpressions*)>(
    &::GlobalNamespace::OVRFace_IMeshWeightsProvider::UpdateWeights)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace_IMeshWeightsProvider*>(), { ::i2c::class_of<::GlobalNamespace::OVRFace_IMeshWeightsProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFace_IMeshWeightsProvider.GetWeightValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRFace_IMeshWeightsProvider::*)(int32_t, ::by_ref<float_t>)>(
    &::GlobalNamespace::OVRFace_IMeshWeightsProvider::GetWeightValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace_IMeshWeightsProvider*>(), { ::i2c::class_of<::GlobalNamespace::OVRFace_IMeshWeightsProvider*>(), 1 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRFace_IMeshWeightsProvider::UpdateWeights(::GlobalNamespace::OVRFaceExpressions* faceExpressions) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRFace_IMeshWeightsProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, faceExpressions);
}
inline bool GlobalNamespace::OVRFace_IMeshWeightsProvider::GetWeightValue(int32_t blendshapeIndex, ::by_ref<float_t> weightValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRFace_IMeshWeightsProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, blendshapeIndex, weightValue);
}
//  Writing Method size for method: ::GlobalNamespace::OVRFace.get_FaceExpressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRFaceExpressions> (::GlobalNamespace::OVRFace::*)()>(&::GlobalNamespace::OVRFace::get_FaceExpressions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df69d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { "get_FaceExpressions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFace.set_FaceExpressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFace::*)(::GlobalNamespace::OVRFaceExpressions*)>(&::GlobalNamespace::OVRFace::set_FaceExpressions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df69dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { "set_FaceExpressions", {}, { ::i2c::type_of<::GlobalNamespace::OVRFaceExpressions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFace.get_BlendShapeStrengthMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRFace::*)()>(&::GlobalNamespace::OVRFace::get_BlendShapeStrengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df69e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { "get_BlendShapeStrengthMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFace.set_BlendShapeStrengthMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFace::*)(float_t)>(&::GlobalNamespace::OVRFace::set_BlendShapeStrengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df69ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { "set_BlendShapeStrengthMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFace.get_SkinnedMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::SkinnedMeshRenderer> (::GlobalNamespace::OVRFace::*)()>(&::GlobalNamespace::OVRFace::get_SkinnedMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df69f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { "get_SkinnedMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFace.RetrieveSkinnedMeshRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::SkinnedMeshRenderer> (::GlobalNamespace::OVRFace::*)()>(&::GlobalNamespace::OVRFace::RetrieveSkinnedMeshRenderer)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5df69fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { "RetrieveSkinnedMeshRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFace.SearchFaceExpressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRFaceExpressions> (::GlobalNamespace::OVRFace::*)()>(&::GlobalNamespace::OVRFace::SearchFaceExpressions)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5df6a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { "SearchFaceExpressions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFace.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFace::*)()>(&::GlobalNamespace::OVRFace::Awake)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5df6aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { ::i2c::class_of<::GlobalNamespace::OVRFace*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFace.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFace::*)()>(&::GlobalNamespace::OVRFace::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5df6c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFace.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFace::*)()>(&::GlobalNamespace::OVRFace::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5df5e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { ::i2c::class_of<::GlobalNamespace::OVRFace*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFace.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFace::*)()>(&::GlobalNamespace::OVRFace::Update)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5df6cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { ::i2c::class_of<::GlobalNamespace::OVRFace*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFace.GetFaceExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRFaceExpressions_FaceExpression (::GlobalNamespace::OVRFace::*)(int32_t)>(&::GlobalNamespace::OVRFace::GetFaceExpression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df6e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { ::i2c::class_of<::GlobalNamespace::OVRFace*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFace.GetWeightValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRFace::*)(int32_t, ::by_ref<float_t>)>(&::GlobalNamespace::OVRFace::GetWeightValue)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5df6e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { ::i2c::class_of<::GlobalNamespace::OVRFace*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRFace::*)()>(&::GlobalNamespace::OVRFace::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5df5fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRFaceExpressions>& GlobalNamespace::OVRFace::__cordl_internal_get__faceExpressions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____faceExpressions;
}
constexpr ::UnityW<::GlobalNamespace::OVRFaceExpressions> const& GlobalNamespace::OVRFace::__cordl_internal_get__faceExpressions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____faceExpressions;
}
constexpr void GlobalNamespace::OVRFace::__cordl_internal_set__faceExpressions(::UnityW<::GlobalNamespace::OVRFaceExpressions> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____faceExpressions = value;
}
constexpr float_t& GlobalNamespace::OVRFace::__cordl_internal_get__blendShapeStrengthMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blendShapeStrengthMultiplier;
}
constexpr float_t const& GlobalNamespace::OVRFace::__cordl_internal_get__blendShapeStrengthMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blendShapeStrengthMultiplier;
}
constexpr void GlobalNamespace::OVRFace::__cordl_internal_set__blendShapeStrengthMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blendShapeStrengthMultiplier = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRFace::__cordl_internal_get__meshWeightsProviderObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshWeightsProviderObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRFace::__cordl_internal_get__meshWeightsProviderObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshWeightsProviderObject;
}
constexpr void GlobalNamespace::OVRFace::__cordl_internal_set__meshWeightsProviderObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshWeightsProviderObject = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::OVRFace::__cordl_internal_get__skinnedMeshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skinnedMeshRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::OVRFace::__cordl_internal_get__skinnedMeshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skinnedMeshRenderer;
}
constexpr void GlobalNamespace::OVRFace::__cordl_internal_set__skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____skinnedMeshRenderer = value;
}
constexpr ::GlobalNamespace::OVRFace_IMeshWeightsProvider*& GlobalNamespace::OVRFace::__cordl_internal_get__meshWeightsProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshWeightsProvider;
}
constexpr ::GlobalNamespace::OVRFace_IMeshWeightsProvider* const& GlobalNamespace::OVRFace::__cordl_internal_get__meshWeightsProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshWeightsProvider;
}
constexpr void GlobalNamespace::OVRFace::__cordl_internal_set__meshWeightsProvider(::GlobalNamespace::OVRFace_IMeshWeightsProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshWeightsProvider = value;
}
inline ::UnityW<::GlobalNamespace::OVRFaceExpressions> GlobalNamespace::OVRFace::get_FaceExpressions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { "get_FaceExpressions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRFaceExpressions>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFace::set_FaceExpressions(::GlobalNamespace::OVRFaceExpressions* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { "set_FaceExpressions", {}, { ::i2c::type_of<::GlobalNamespace::OVRFaceExpressions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRFace::get_BlendShapeStrengthMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { "get_BlendShapeStrengthMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFace::set_BlendShapeStrengthMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { "set_BlendShapeStrengthMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> GlobalNamespace::OVRFace::get_SkinnedMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { "get_SkinnedMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::SkinnedMeshRenderer>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> GlobalNamespace::OVRFace::RetrieveSkinnedMeshRenderer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { "RetrieveSkinnedMeshRenderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::SkinnedMeshRenderer>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::OVRFaceExpressions> GlobalNamespace::OVRFace::SearchFaceExpressions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { "SearchFaceExpressions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRFaceExpressions>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFace::Awake() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRFace*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFace::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFace::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRFace*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRFace::Update() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRFace*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRFaceExpressions_FaceExpression GlobalNamespace::OVRFace::GetFaceExpression(int32_t blendShapeIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRFace*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRFaceExpressions_FaceExpression>(this, ___internal_method, blendShapeIndex);
}
inline bool GlobalNamespace::OVRFace::GetWeightValue(int32_t blendShapeIndex, ::by_ref<float_t> weightValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRFace*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, blendShapeIndex, weightValue);
}
inline void GlobalNamespace::OVRFace::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRFace*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRFace* GlobalNamespace::OVRFace::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRFace*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRFace::OVRFace() {}
