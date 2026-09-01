#pragma once
// IWYU pragma private; include "UnityEngine\Playables\PlayableGraph.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameRate_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__IExposedPropertyTable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.GetRootPlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Playables::PlayableGraph::*)(int32_t)>(
    &::UnityEngine::Playables::PlayableGraph::GetRootPlayable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b048c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "GetRootPlayable", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.Evaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::Evaluate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b04920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "Evaluate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::IsValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b049ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.IsPlaying
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::IsPlaying)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b049e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "IsPlaying", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.Evaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableGraph::*)(float_t)>(&::UnityEngine::Playables::PlayableGraph::Evaluate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b04960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "Evaluate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.GetResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::IExposedPropertyTable* (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::GetResolver)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b04a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "GetResolver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.GetPlayableCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::GetPlayableCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b04a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "GetPlayableCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.GetRootPlayableCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::GetRootPlayableCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b04a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "GetRootPlayableCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.SynchronizeEvaluation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableGraph::*)(::UnityEngine::Playables::PlayableGraph)>(
    &::UnityEngine::Playables::PlayableGraph::SynchronizeEvaluation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b04ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "SynchronizeEvaluation", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.CreatePlayableHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Playables::PlayableGraph::*)()>(
    &::UnityEngine::Playables::PlayableGraph::CreatePlayableHandle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b0417c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "CreatePlayableHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.CreateScriptOutputInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableGraph::*)(::StringW, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>)>(
    &::UnityEngine::Playables::PlayableGraph::CreateScriptOutputInternal)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6b04bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                                                { "CreateScriptOutputInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.GetRootPlayableInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Playables::PlayableGraph::*)(int32_t)>(
    &::UnityEngine::Playables::PlayableGraph::GetRootPlayableInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b048c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "GetRootPlayableInternal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.IsMatchFrameRateEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::IsMatchFrameRateEnabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b04da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "IsMatchFrameRateEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.GetFrameRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::FrameRate (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::GetFrameRate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b04ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "GetFrameRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.ConnectInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableGraph::*)(::UnityEngine::Playables::PlayableHandle, int32_t, ::UnityEngine::Playables::PlayableHandle,
                                                                                                         int32_t)>(&::UnityEngine::Playables::PlayableGraph::ConnectInternal)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b04e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "ConnectInternal",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<int32_t>(),
                                                                                                         ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.SynchronizeEvaluation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Playables::PlayableGraph>)>(
    &::UnityEngine::Playables::PlayableGraph::SynchronizeEvaluation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b04b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
            { "SynchronizeEvaluation_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.CreatePlayableHandle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(
    &::UnityEngine::Playables::PlayableGraph::CreatePlayableHandle_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b04b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
            { "CreatePlayableHandle_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.CreateScriptOutputInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>)>(
        &::UnityEngine::Playables::PlayableGraph::CreateScriptOutputInternal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b04cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                                                { "CreateScriptOutputInternal_Injected",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.GetRootPlayableInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, int32_t, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(
    &::UnityEngine::Playables::PlayableGraph::GetRootPlayableInternal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b04d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "GetRootPlayableInternal_Injected",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<int32_t>(),
                                                                                                         ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.GetFrameRate_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Playables::FrameRate>)>(
    &::UnityEngine::Playables::PlayableGraph::GetFrameRate_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b04e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                         { "GetFrameRate_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::FrameRate>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.ConnectInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t,
                                                                ::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Playables::PlayableGraph::ConnectInternal_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b04ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                                                { "ConnectInternal_Injected",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Playables::Playable UnityEngine::Playables::PlayableGraph::GetRootPlayable(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "GetRootPlayable", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(*this, ___internal_method, index);
}
template <typename U, typename V> inline bool UnityEngine::Playables::PlayableGraph::Connect(U source, int32_t sourceOutputPort, V destination, int32_t destinationInputPort) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                          { "Connect", { ::i2c::class_of<U>(), ::i2c::class_of<V>() }, { ::i2c::type_of<U>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<V>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>(), ::i2c::class_of<V>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, source, sourceOutputPort, destination, destinationInputPort);
}
inline void UnityEngine::Playables::PlayableGraph::Evaluate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "Evaluate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool UnityEngine::Playables::PlayableGraph::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Playables::PlayableGraph::IsPlaying() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "IsPlaying", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableGraph::Evaluate(float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "Evaluate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, deltaTime);
}
inline ::UnityEngine::IExposedPropertyTable* UnityEngine::Playables::PlayableGraph::GetResolver() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "GetResolver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::IExposedPropertyTable*>(*this, ___internal_method);
}
inline int32_t UnityEngine::Playables::PlayableGraph::GetPlayableCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "GetPlayableCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Playables::PlayableGraph::GetRootPlayableCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "GetRootPlayableCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableGraph::SynchronizeEvaluation(::UnityEngine::Playables::PlayableGraph playable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "SynchronizeEvaluation", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, playable);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Playables::PlayableGraph::CreatePlayableHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "CreatePlayableHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline bool UnityEngine::Playables::PlayableGraph::CreateScriptOutputInternal(::StringW name, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                                              { "CreateScriptOutputInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, name, handle);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Playables::PlayableGraph::GetRootPlayableInternal(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "GetRootPlayableInternal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method, index);
}
inline bool UnityEngine::Playables::PlayableGraph::IsMatchFrameRateEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "IsMatchFrameRateEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::FrameRate UnityEngine::Playables::PlayableGraph::GetFrameRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "GetFrameRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::FrameRate>(*this, ___internal_method);
}
inline bool UnityEngine::Playables::PlayableGraph::ConnectInternal(::UnityEngine::Playables::PlayableHandle source, int32_t sourceOutputPort, ::UnityEngine::Playables::PlayableHandle destination,
                                                                   int32_t destinationInputPort) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "ConnectInternal",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<int32_t>(),
                                                                                                       ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, source, sourceOutputPort, destination, destinationInputPort);
}
inline void UnityEngine::Playables::PlayableGraph::SynchronizeEvaluation_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self,
                                                                                  ::by_ref<::UnityEngine::Playables::PlayableGraph> playable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
          { "SynchronizeEvaluation_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, playable);
}
inline void UnityEngine::Playables::PlayableGraph::CreatePlayableHandle_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self,
                                                                                 ::by_ref<::UnityEngine::Playables::PlayableHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
          { "CreatePlayableHandle_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline bool UnityEngine::Playables::PlayableGraph::CreateScriptOutputInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self,
                                                                                       ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                                                       ::by_ref<::UnityEngine::Playables::PlayableOutputHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                                              { "CreateScriptOutputInternal_Injected",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, name, handle);
}
inline void UnityEngine::Playables::PlayableGraph::GetRootPlayableInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self, int32_t index,
                                                                                    ::by_ref<::UnityEngine::Playables::PlayableHandle> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(), { "GetRootPlayableInternal_Injected",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<int32_t>(),
                                                                                                       ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, ret);
}
inline void UnityEngine::Playables::PlayableGraph::GetFrameRate_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self, ::by_ref<::UnityEngine::Playables::FrameRate> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                          { "GetFrameRate_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::FrameRate>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline bool UnityEngine::Playables::PlayableGraph::ConnectInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle> source,
                                                                            int32_t sourceOutputPort, ::by_ref<::UnityEngine::Playables::PlayableHandle> destination, int32_t destinationInputPort) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                                              { "ConnectInternal_Injected",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, source, sourceOutputPort, destination, destinationInputPort);
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::PlayableGraph::PlayableGraph(::System::IntPtr m_Handle, uint32_t m_Version) noexcept {
  this->m_Handle = m_Handle;
  this->m_Version = m_Version;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableGraph::PlayableGraph() {}
