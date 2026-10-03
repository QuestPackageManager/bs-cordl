#pragma once
// IWYU pragma private; include "UnityEngine/LightProbes.hpp"
#include "UnityEngine/zzzz__Hash128_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LightProbes_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__LightProbeOcclusion_def.hpp"
#include "UnityEngine/zzzz__LightProbes_def.hpp"
#include "UnityEngine/zzzz__ProbeSetIndex_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Tetrahedron_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "Hash", ty: "::UnityEngine::Hash128", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Value", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::LightProbes_Hash128IntPair::LightProbes_Hash128IntPair(::UnityEngine::Hash128 Hash, int32_t Value) noexcept {
  this->Hash = Hash;
  this->Value = Value;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbes_Hash128IntPair::LightProbes_Hash128IntPair() {}
//  Writing Method size for method: ::UnityEngine::LightProbes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6edcc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.Internal_Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LightProbes*)>(&::UnityEngine::LightProbes::Internal_Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6edccf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "Internal_Create", {}, { ::i2c::type_of<::UnityEngine::LightProbes*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.add_lightProbesUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::LightProbes::add_lightProbesUpdated)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6edcd34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "add_lightProbesUpdated", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.remove_lightProbesUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::LightProbes::remove_lightProbesUpdated)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6edce00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "remove_lightProbesUpdated", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.Internal_CallLightProbesUpdatedFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::LightProbes::Internal_CallLightProbesUpdatedFunction)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6edcecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "Internal_CallLightProbesUpdatedFunction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.add_tetrahedralizationCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::LightProbes::add_tetrahedralizationCompleted)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6edcf34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "add_tetrahedralizationCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.remove_tetrahedralizationCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::LightProbes::remove_tetrahedralizationCompleted)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6edd004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "remove_tetrahedralizationCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.Internal_CallTetrahedralizationCompletedFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::LightProbes::Internal_CallTetrahedralizationCompletedFunction)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6edd0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "Internal_CallTetrahedralizationCompletedFunction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.add_needsRetetrahedralization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::LightProbes::add_needsRetetrahedralization)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6edd13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "add_needsRetetrahedralization", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.remove_needsRetetrahedralization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::LightProbes::remove_needsRetetrahedralization)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6edd20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "remove_needsRetetrahedralization", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.Internal_CallNeedsRetetrahedralizationFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::LightProbes::Internal_CallNeedsRetetrahedralizationFunction)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6edd2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "Internal_CallNeedsRetetrahedralizationFunction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.Tetrahedralize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::LightProbes::Tetrahedralize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6edd344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "Tetrahedralize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.TetrahedralizeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::LightProbes::TetrahedralizeAsync)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6edd36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "TetrahedralizeAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.GetInterpolatedProbe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Renderer*, ::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>)>(
    &::UnityEngine::LightProbes::GetInterpolatedProbe)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6edd394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "GetInterpolatedProbe",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Renderer*>(),
                                                                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.AreLightProbesAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Renderer*)>(&::UnityEngine::LightProbes::AreLightProbesAllowed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6edd490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "AreLightProbesAllowed", {}, { ::i2c::type_of<::UnityEngine::Renderer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.CalculateInterpolatedLightAndOcclusionProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2>, ::ArrayW<::UnityEngine::Vector4>)>(
    &::UnityEngine::LightProbes::CalculateInterpolatedLightAndOcclusionProbes)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6edd54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                             { "CalculateInterpolatedLightAndOcclusionProbes",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2>>(),
                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.CalculateInterpolatedLightAndOcclusionProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>*,
                         ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::LightProbes::CalculateInterpolatedLightAndOcclusionProbes)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6edd850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "CalculateInterpolatedLightAndOcclusionProbes",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.CalculateInterpolatedLightAndOcclusionProbes_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, int32_t, ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2>, ::ArrayW<::UnityEngine::Vector4>)>(
    &::UnityEngine::LightProbes::CalculateInterpolatedLightAndOcclusionProbes_Internal)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6edd694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                             { "CalculateInterpolatedLightAndOcclusionProbes_Internal",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.GetSharedLightProbesForScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::LightProbes> (*)(::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::LightProbes::GetSharedLightProbesForScene)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6edda84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "GetSharedLightProbesForScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.GetInstantiatedLightProbesForScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::LightProbes> (*)(::UnityEngine::SceneManagement::Scene)>(
    &::UnityEngine::LightProbes::GetInstantiatedLightProbesForScene)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6eddbe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "GetInstantiatedLightProbesForScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_positions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::get_positions)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6eddd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_positions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_positions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbes::*)(::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::LightProbes::set_positions)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6eddee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_positions", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.GetPositionsSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::GetPositionsSelf)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6ede028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "GetPositionsSelf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.SetPositionsSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LightProbes::*)(::ArrayW<::UnityEngine::Vector3>, bool)>(&::UnityEngine::LightProbes::SetPositionsSelf)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6ede1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "SetPositionsSelf", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_bakedProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2> (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::get_bakedProbes)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6ede330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_bakedProbes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_bakedProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbes::*)(::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2>)>(&::UnityEngine::LightProbes::set_bakedProbes)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6ede4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_bakedProbes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.SetBakedCoefficients_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbes::*)(::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2>)>(
    &::UnityEngine::LightProbes::SetBakedCoefficients_Internal)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6ede61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "SetBakedCoefficients_Internal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::get_count)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ede764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_countSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::get_countSelf)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ede820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_countSelf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_cellCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::get_cellCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ede8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_cellCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_cellCountSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::get_cellCountSelf)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ede998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_cellCountSelf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_nonTetrahedralizedProbeSetIndexMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::LightProbes_Hash128IntPair> (::UnityEngine::LightProbes::*)()>(
    &::UnityEngine::LightProbes::get_nonTetrahedralizedProbeSetIndexMap)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6edea54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_nonTetrahedralizedProbeSetIndexMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_nonTetrahedralizedProbeSetIndexMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbes::*)(::ArrayW<::UnityEngine::LightProbes_Hash128IntPair>)>(
    &::UnityEngine::LightProbes::set_nonTetrahedralizedProbeSetIndexMap)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6edebf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                             { "set_nonTetrahedralizedProbeSetIndexMap", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::LightProbes_Hash128IntPair>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_bakedLightOcclusion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::LightProbeOcclusion> (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::get_bakedLightOcclusion)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6eded40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_bakedLightOcclusion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_bakedLightOcclusion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbes::*)(::ArrayW<::UnityEngine::LightProbeOcclusion>)>(&::UnityEngine::LightProbes::set_bakedLightOcclusion)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6edeee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_bakedLightOcclusion", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::LightProbeOcclusion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_boundingBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::get_boundingBox)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6edf02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_boundingBox", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_boundingBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbes::*)(::UnityEngine::Bounds)>(&::UnityEngine::LightProbes::set_boundingBox)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6edf120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_boundingBox", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_probeSets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProbeSetIndex> (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::get_probeSets)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6edf1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_probeSets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_probeSets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbes::*)(::ArrayW<::UnityEngine::ProbeSetIndex>)>(&::UnityEngine::LightProbes::set_probeSets)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6edf398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_probeSets", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProbeSetIndex>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_tetrahedra
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Tetrahedron> (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::get_tetrahedra)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6edf4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_tetrahedra", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_tetrahedra
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbes::*)(::ArrayW<::UnityEngine::Tetrahedron>)>(&::UnityEngine::LightProbes::set_tetrahedra)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6edf684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_tetrahedra", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Tetrahedron>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_hullRays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::get_hullRays)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6edf7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_hullRays", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_hullRays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbes::*)(::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::LightProbes::set_hullRays)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6edf970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_hullRays", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.GetCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::LightProbes::GetCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6edfab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "GetCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.GetInterpolatedLightProbe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbes::*)(::UnityEngine::Vector3, ::UnityEngine::Renderer*, ::ArrayW<float_t>)>(
    &::UnityEngine::LightProbes::GetInterpolatedLightProbe)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6edfae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                            { "GetInterpolatedLightProbe", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_coefficients
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::get_coefficients)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6edfae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_coefficients", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_coefficients
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbes::*)(::ArrayW<float_t>)>(&::UnityEngine::LightProbes::set_coefficients)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6edfb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_coefficients", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.GetInterpolatedProbe_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::System::IntPtr, ::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>)>(
    &::UnityEngine::LightProbes::GetInterpolatedProbe_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6edd43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "GetInterpolatedProbe_Injected",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.AreLightProbesAllowed_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::LightProbes::AreLightProbesAllowed_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6edd510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "AreLightProbesAllowed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.CalculateInterpolatedLightAndOcclusionProbes_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
        &::UnityEngine::LightProbes::CalculateInterpolatedLightAndOcclusionProbes_Internal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6edda28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                         { "CalculateInterpolatedLightAndOcclusionProbes_Internal_Injected",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.GetSharedLightProbesForScene_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::SceneManagement::Scene>)>(&::UnityEngine::LightProbes::GetSharedLightProbesForScene_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eddba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "GetSharedLightProbesForScene_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.GetInstantiatedLightProbesForScene_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::SceneManagement::Scene>)>(
    &::UnityEngine::LightProbes::GetInstantiatedLightProbesForScene_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eddd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                             { "GetInstantiatedLightProbesForScene_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_positions_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::LightProbes::get_positions_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6edde9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                { "get_positions_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_positions_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::LightProbes::set_positions_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eddfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                { "set_positions_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.GetPositionsSelf_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::LightProbes::GetPositionsSelf_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ede188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                         { "GetPositionsSelf_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.SetPositionsSelf_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool)>(
    &::UnityEngine::LightProbes::SetPositionsSelf_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ede2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::LightProbes*>(),
            { "SetPositionsSelf_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_bakedProbes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::LightProbes::get_bakedProbes_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ede490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                         { "get_bakedProbes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_bakedProbes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::LightProbes::set_bakedProbes_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ede5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                { "set_bakedProbes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.SetBakedCoefficients_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::LightProbes::SetBakedCoefficients_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ede720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                            { "SetBakedCoefficients_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_count_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::LightProbes::get_count_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ede7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_count_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_countSelf_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::LightProbes::get_countSelf_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ede8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_countSelf_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_cellCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::LightProbes::get_cellCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ede95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_cellCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_cellCountSelf_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::LightProbes::get_cellCountSelf_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6edea18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_cellCountSelf_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_nonTetrahedralizedProbeSetIndexMap_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::LightProbes::get_nonTetrahedralizedProbeSetIndexMap_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6edebb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::LightProbes*>(),
            { "get_nonTetrahedralizedProbeSetIndexMap_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_nonTetrahedralizedProbeSetIndexMap_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::LightProbes::set_nonTetrahedralizedProbeSetIndexMap_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6edecfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::LightProbes*>(),
                         { "set_nonTetrahedralizedProbeSetIndexMap_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_bakedLightOcclusion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::LightProbes::get_bakedLightOcclusion_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6edeea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                            { "get_bakedLightOcclusion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_bakedLightOcclusion_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::LightProbes::set_bakedLightOcclusion_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6edefe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                         { "set_bakedLightOcclusion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_boundingBox_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::LightProbes::get_boundingBox_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6edf0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                             { "get_boundingBox_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_boundingBox_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::LightProbes::set_boundingBox_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6edf1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                             { "set_boundingBox_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_probeSets_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::LightProbes::get_probeSets_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6edf354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                { "get_probeSets_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_probeSets_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::LightProbes::set_probeSets_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6edf49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                { "set_probeSets_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_tetrahedra_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::LightProbes::get_tetrahedra_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6edf640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                         { "get_tetrahedra_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_tetrahedra_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::LightProbes::set_tetrahedra_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6edf788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                { "set_tetrahedra_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_hullRays_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::LightProbes::get_hullRays_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6edf92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                { "get_hullRays_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_hullRays_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::LightProbes::set_hullRays_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6edfa74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                { "set_hullRays_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::LightProbes::setStaticF_lightProbesUpdated(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "lightProbesUpdated", ::UnityEngine::LightProbes*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::LightProbes::getStaticF_lightProbesUpdated() {
  return ::cordl_internals::getStaticField<::System::Action*, "lightProbesUpdated", ::UnityEngine::LightProbes*>();
}
inline void UnityEngine::LightProbes::setStaticF_tetrahedralizationCompleted(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "tetrahedralizationCompleted", ::UnityEngine::LightProbes*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::LightProbes::getStaticF_tetrahedralizationCompleted() {
  return ::cordl_internals::getStaticField<::System::Action*, "tetrahedralizationCompleted", ::UnityEngine::LightProbes*>();
}
inline void UnityEngine::LightProbes::setStaticF_needsRetetrahedralization(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "needsRetetrahedralization", ::UnityEngine::LightProbes*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::LightProbes::getStaticF_needsRetetrahedralization() {
  return ::cordl_internals::getStaticField<::System::Action*, "needsRetetrahedralization", ::UnityEngine::LightProbes*>();
}
inline void UnityEngine::LightProbes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::LightProbes::Internal_Create(/* [Writable] */ ::UnityEngine::LightProbes* self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "Internal_Create", {}, { ::i2c::type_of<::UnityEngine::LightProbes*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self);
}
inline void UnityEngine::LightProbes::add_lightProbesUpdated(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "add_lightProbesUpdated", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::LightProbes::remove_lightProbesUpdated(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "remove_lightProbesUpdated", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::LightProbes::Internal_CallLightProbesUpdatedFunction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "Internal_CallLightProbesUpdatedFunction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::LightProbes::add_tetrahedralizationCompleted(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "add_tetrahedralizationCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::LightProbes::remove_tetrahedralizationCompleted(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "remove_tetrahedralizationCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::LightProbes::Internal_CallTetrahedralizationCompletedFunction() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "Internal_CallTetrahedralizationCompletedFunction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::LightProbes::add_needsRetetrahedralization(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "add_needsRetetrahedralization", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::LightProbes::remove_needsRetetrahedralization(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "remove_needsRetetrahedralization", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::LightProbes::Internal_CallNeedsRetetrahedralizationFunction() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "Internal_CallNeedsRetetrahedralizationFunction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::LightProbes::Tetrahedralize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "Tetrahedralize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::LightProbes::TetrahedralizeAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "TetrahedralizeAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::LightProbes::GetInterpolatedProbe(::UnityEngine::Vector3 position, ::UnityEngine::Renderer* renderer, ::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> probe) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "GetInterpolatedProbe",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Renderer*>(),
                                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, renderer, probe);
}
inline bool UnityEngine::LightProbes::AreLightProbesAllowed(::UnityEngine::Renderer* renderer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "AreLightProbesAllowed", {}, { ::i2c::type_of<::UnityEngine::Renderer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, renderer);
}
inline void UnityEngine::LightProbes::CalculateInterpolatedLightAndOcclusionProbes(::ArrayW<::UnityEngine::Vector3> positions, ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2> lightProbes,
                                                                                   ::ArrayW<::UnityEngine::Vector4> occlusionProbes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                           { "CalculateInterpolatedLightAndOcclusionProbes",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2>>(),
                                                               ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, positions, lightProbes, occlusionProbes);
}
inline void UnityEngine::LightProbes::CalculateInterpolatedLightAndOcclusionProbes(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions,
                                                                                   ::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>* lightProbes,
                                                                                   ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* occlusionProbes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "CalculateInterpolatedLightAndOcclusionProbes",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(),
                                                                                           ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>*>(),
                                                                                           ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, positions, lightProbes, occlusionProbes);
}
inline void UnityEngine::LightProbes::CalculateInterpolatedLightAndOcclusionProbes_Internal(::ArrayW<::UnityEngine::Vector3> positions, int32_t positionsCount,
                                                                                            ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2> lightProbes,
                                                                                            ::ArrayW<::UnityEngine::Vector4> occlusionProbes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                           { "CalculateInterpolatedLightAndOcclusionProbes_Internal",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, positions, positionsCount, lightProbes, occlusionProbes);
}
inline ::UnityW<::UnityEngine::LightProbes> UnityEngine::LightProbes::GetSharedLightProbesForScene(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "GetSharedLightProbesForScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::LightProbes>>(nullptr, ___internal_method, scene);
}
inline ::UnityW<::UnityEngine::LightProbes> UnityEngine::LightProbes::GetInstantiatedLightProbesForScene(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "GetInstantiatedLightProbesForScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::LightProbes>>(nullptr, ___internal_method, scene);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::LightProbes::get_positions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_positions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void UnityEngine::LightProbes::set_positions(::ArrayW<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_positions", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::LightProbes::GetPositionsSelf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "GetPositionsSelf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline bool UnityEngine::LightProbes::SetPositionsSelf(::ArrayW<::UnityEngine::Vector3> positions, bool checkForDuplicatePositions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "SetPositionsSelf", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, positions, checkForDuplicatePositions);
}
inline ::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2> UnityEngine::LightProbes::get_bakedProbes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_bakedProbes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2>>(this, ___internal_method);
}
inline void UnityEngine::LightProbes::set_bakedProbes(::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_bakedProbes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::LightProbes::SetBakedCoefficients_Internal(::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2> coefficients) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "SetBakedCoefficients_Internal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coefficients);
}
inline int32_t UnityEngine::LightProbes::get_count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::LightProbes::get_countSelf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_countSelf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::LightProbes::get_cellCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_cellCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::LightProbes::get_cellCountSelf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_cellCountSelf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::LightProbes_Hash128IntPair> UnityEngine::LightProbes::get_nonTetrahedralizedProbeSetIndexMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_nonTetrahedralizedProbeSetIndexMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::LightProbes_Hash128IntPair>>(this, ___internal_method);
}
inline void UnityEngine::LightProbes::set_nonTetrahedralizedProbeSetIndexMap(::ArrayW<::UnityEngine::LightProbes_Hash128IntPair> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                           { "set_nonTetrahedralizedProbeSetIndexMap", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::LightProbes_Hash128IntPair>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::LightProbeOcclusion> UnityEngine::LightProbes::get_bakedLightOcclusion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_bakedLightOcclusion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::LightProbeOcclusion>>(this, ___internal_method);
}
inline void UnityEngine::LightProbes::set_bakedLightOcclusion(::ArrayW<::UnityEngine::LightProbeOcclusion> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_bakedLightOcclusion", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::LightProbeOcclusion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Bounds UnityEngine::LightProbes::get_boundingBox() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_boundingBox", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void UnityEngine::LightProbes::set_boundingBox(::UnityEngine::Bounds value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_boundingBox", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::ProbeSetIndex> UnityEngine::LightProbes::get_probeSets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_probeSets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProbeSetIndex>>(this, ___internal_method);
}
inline void UnityEngine::LightProbes::set_probeSets(::ArrayW<::UnityEngine::ProbeSetIndex> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_probeSets", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProbeSetIndex>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Tetrahedron> UnityEngine::LightProbes::get_tetrahedra() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_tetrahedra", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Tetrahedron>>(this, ___internal_method);
}
inline void UnityEngine::LightProbes::set_tetrahedra(::ArrayW<::UnityEngine::Tetrahedron> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_tetrahedra", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Tetrahedron>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::LightProbes::get_hullRays() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_hullRays", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void UnityEngine::LightProbes::set_hullRays(::ArrayW<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_hullRays", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::LightProbes::GetCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "GetCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::LightProbes::GetInterpolatedLightProbe(::UnityEngine::Vector3 position, ::UnityEngine::Renderer* renderer, ::ArrayW<float_t> coefficients) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                          { "GetInterpolatedLightProbe", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, renderer, coefficients);
}
inline ::ArrayW<float_t> UnityEngine::LightProbes::get_coefficients() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_coefficients", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void UnityEngine::LightProbes::set_coefficients(::ArrayW<float_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_coefficients", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::LightProbes::GetInterpolatedProbe_Injected(::by_ref<::UnityEngine::Vector3> position, ::System::IntPtr renderer,
                                                                    ::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> probe) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "GetInterpolatedProbe_Injected",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, renderer, probe);
}
inline bool UnityEngine::LightProbes::AreLightProbesAllowed_Injected(::System::IntPtr renderer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "AreLightProbesAllowed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, renderer);
}
inline void UnityEngine::LightProbes::CalculateInterpolatedLightAndOcclusionProbes_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> positions, int32_t positionsCount,
                                                                                                     ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> lightProbes,
                                                                                                     ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> occlusionProbes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                       { "CalculateInterpolatedLightAndOcclusionProbes_Internal_Injected",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, positions, positionsCount, lightProbes, occlusionProbes);
}
inline ::System::IntPtr UnityEngine::LightProbes::GetSharedLightProbesForScene_Injected(::by_ref<::UnityEngine::SceneManagement::Scene> scene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "GetSharedLightProbesForScene_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, scene);
}
inline ::System::IntPtr UnityEngine::LightProbes::GetInstantiatedLightProbesForScene_Injected(::by_ref<::UnityEngine::SceneManagement::Scene> scene) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                           { "GetInstantiatedLightProbesForScene_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, scene);
}
inline void UnityEngine::LightProbes::get_positions_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                              { "get_positions_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::LightProbes::set_positions_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                              { "set_positions_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::LightProbes::GetPositionsSelf_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                       { "GetPositionsSelf_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline bool UnityEngine::LightProbes::SetPositionsSelf_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> positions, bool checkForDuplicatePositions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::LightProbes*>(),
                       { "SetPositionsSelf_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, positions, checkForDuplicatePositions);
}
inline void UnityEngine::LightProbes::get_bakedProbes_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                              { "get_bakedProbes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::LightProbes::set_bakedProbes_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                              { "set_bakedProbes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::LightProbes::SetBakedCoefficients_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> coefficients) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                          { "SetBakedCoefficients_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, coefficients);
}
inline int32_t UnityEngine::LightProbes::get_count_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_count_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::LightProbes::get_countSelf_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_countSelf_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::LightProbes::get_cellCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_cellCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::LightProbes::get_cellCountSelf_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_cellCountSelf_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::LightProbes::get_nonTetrahedralizedProbeSetIndexMap_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::LightProbes*>(),
                       { "get_nonTetrahedralizedProbeSetIndexMap_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::LightProbes::set_nonTetrahedralizedProbeSetIndexMap_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                          { "set_nonTetrahedralizedProbeSetIndexMap_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::LightProbes::get_bakedLightOcclusion_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                          { "get_bakedLightOcclusion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::LightProbes::set_bakedLightOcclusion_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                       { "set_bakedLightOcclusion_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::LightProbes::get_boundingBox_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                           { "get_boundingBox_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::LightProbes::set_boundingBox_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                           { "set_boundingBox_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::LightProbes::get_probeSets_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                              { "get_probeSets_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::LightProbes::set_probeSets_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                              { "set_probeSets_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::LightProbes::get_tetrahedra_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                              { "get_tetrahedra_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::LightProbes::set_tetrahedra_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                              { "set_tetrahedra_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::LightProbes::get_hullRays_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                              { "get_hullRays_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::LightProbes::set_hullRays_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                              { "set_hullRays_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::LightProbes* UnityEngine::LightProbes::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LightProbes*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbes::LightProbes() {}
