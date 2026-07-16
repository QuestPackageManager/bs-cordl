#pragma once
// IWYU pragma private; include "UnityEngine/LightProbes.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LightProbes_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::LightProbes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a843a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.add_lightProbesUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::LightProbes::add_lightProbesUpdated)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6a843f8;

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
  constexpr static std::size_t addrs = 0x6a844c4;

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
  constexpr static std::size_t addrs = 0x6a84590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "Internal_CallLightProbesUpdatedFunction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.add_tetrahedralizationCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::LightProbes::add_tetrahedralizationCompleted)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6a845f8;

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
  constexpr static std::size_t addrs = 0x6a846c8;

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
  constexpr static std::size_t addrs = 0x6a84798;

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
  constexpr static std::size_t addrs = 0x6a84800;

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
  constexpr static std::size_t addrs = 0x6a848d0;

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
  constexpr static std::size_t addrs = 0x6a849a0;

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
  constexpr static std::size_t addrs = 0x6a84a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "Tetrahedralize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.TetrahedralizeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::LightProbes::TetrahedralizeAsync)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a84a30;

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
  constexpr static std::size_t addrs = 0x6a84a58;

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
  constexpr static std::size_t addrs = 0x6a84b54;

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
  constexpr static std::size_t addrs = 0x6a84c10;

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
  constexpr static std::size_t addrs = 0x6a84f14;

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
  constexpr static std::size_t addrs = 0x6a84d58;

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
  constexpr static std::size_t addrs = 0x6a85148;

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
  constexpr static std::size_t addrs = 0x6a852a4;

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
  constexpr static std::size_t addrs = 0x6a85400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_positions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.GetPositionsSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::GetPositionsSelf)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6a855a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "GetPositionsSelf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.SetPositionsSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LightProbes::*)(::ArrayW<::UnityEngine::Vector3>, bool)>(&::UnityEngine::LightProbes::SetPositionsSelf)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6a85748;

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
  constexpr static std::size_t addrs = 0x6a858ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_bakedProbes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_bakedProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbes::*)(::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2>)>(&::UnityEngine::LightProbes::set_bakedProbes)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6a85a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "set_bakedProbes", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::SphericalHarmonicsL2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::get_count)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a85b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_countSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::get_countSelf)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a85c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_countSelf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_cellCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::get_cellCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a85d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_cellCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_cellCountSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::LightProbes::*)()>(&::UnityEngine::LightProbes::get_cellCountSelf)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a85dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_cellCountSelf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.GetCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::LightProbes::GetCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a85e88;

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
  constexpr static std::size_t addrs = 0x6a85eb0;

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
  constexpr static std::size_t addrs = 0x6a85eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_coefficients", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.set_coefficients
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbes::*)(::ArrayW<float_t>)>(&::UnityEngine::LightProbes::set_coefficients)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a85efc;

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
  constexpr static std::size_t addrs = 0x6a84b00;

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
  constexpr static std::size_t addrs = 0x6a84bd4;

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
  constexpr static std::size_t addrs = 0x6a850ec;

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
  constexpr static std::size_t addrs = 0x6a85268;

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
  constexpr static std::size_t addrs = 0x6a853c4;

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
  constexpr static std::size_t addrs = 0x6a85560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                { "get_positions_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.GetPositionsSelf_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::LightProbes::GetPositionsSelf_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a85704;

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
  constexpr static std::size_t addrs = 0x6a85858;

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
  constexpr static std::size_t addrs = 0x6a85a0c;

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
  constexpr static std::size_t addrs = 0x6a85b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(),
                                                { "set_bakedProbes_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.get_count_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::LightProbes::get_count_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a85c18;

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
  constexpr static std::size_t addrs = 0x6a85cd4;

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
  constexpr static std::size_t addrs = 0x6a85d90;

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
  constexpr static std::size_t addrs = 0x6a85e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightProbes*>(), { "get_cellCountSelf_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
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
inline ::UnityEngine::LightProbes* UnityEngine::LightProbes::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LightProbes*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbes::LightProbes() {}
