#pragma once
// IWYU pragma private; include "LufsMetering/LufsMeter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LufsMetering/zzzz__LufsMeter_def.hpp"
#include "LufsMetering/zzzz__LoudnessData_def.hpp"
#include "LufsMetering/zzzz__LufsMeter_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::LufsMetering::LufsMeter___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LufsMetering::LufsMeter___c::*)()>(&::LufsMetering::LufsMeter___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b751d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LufsMetering::LufsMeter___c._IntegratedLoudness_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::LufsMetering::LufsMeter___c::*)(float_t, float_t)>(
    &::LufsMetering::LufsMeter___c::_IntegratedLoudness_b__5_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b751d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter___c*>::get(), "<IntegratedLoudness>b__5_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void LufsMetering::LufsMeter___c::setStaticF___9(::LufsMetering::LufsMeter___c* value) {
  ::cordl_internals::setStaticField<::LufsMetering::LufsMeter___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter___c*>::get>(
      std::forward<::LufsMetering::LufsMeter___c*>(value));
}
inline ::LufsMetering::LufsMeter___c* LufsMetering::LufsMeter___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::LufsMetering::LufsMeter___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter___c*>::get>();
}
inline void LufsMetering::LufsMeter___c::setStaticF___9__5_0(::System::Func_3<float_t, float_t, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<float_t, float_t, float_t>*, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter___c*>::get>(
      std::forward<::System::Func_3<float_t, float_t, float_t>*>(value));
}
inline ::System::Func_3<float_t, float_t, float_t>* LufsMetering::LufsMeter___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_3<float_t, float_t, float_t>*, "<>9__5_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter___c*>::get>();
}
inline void LufsMetering::LufsMeter___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t LufsMetering::LufsMeter___c::_IntegratedLoudness_b__5_0(float_t g, float_t z) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter___c*>::get(), "<IntegratedLoudness>b__5_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, g, z);
}
inline ::LufsMetering::LufsMeter___c* LufsMetering::LufsMeter___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LufsMetering::LufsMeter___c*>());
}
// Ctor Parameters []
constexpr ::LufsMetering::LufsMeter___c::LufsMeter___c() {}
//  Writing Method size for method: ::LufsMetering::LufsMeter.AnalyzeClipLoudness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LufsMetering::LoudnessData (::LufsMetering::LufsMeter::*)(::UnityEngine::AudioClip*)>(
    &::LufsMetering::LufsMeter::AnalyzeClipLoudness)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3b73a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter*>::get(), "AnalyzeClipLoudness", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LufsMetering::LufsMeter.IntegratedLoudness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LufsMetering::LoudnessData (::LufsMetering::LufsMeter::*)(::ArrayW<float_t, ::Array<float_t>*>, int32_t, int32_t)>(
    &::LufsMetering::LufsMeter::IntegratedLoudness)> {
  constexpr static std::size_t size = 0xe1c;
  constexpr static std::size_t addrs = 0x3b73adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter*>::get(), "IntegratedLoudness", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LufsMetering::LufsMeter.MomentaryLoudness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::LufsMetering::LufsMeter::*)(::ArrayW<float_t, ::Array<float_t>*>, int32_t, int32_t)>(
    &::LufsMetering::LufsMeter::MomentaryLoudness)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x3b74908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter*>::get(), "MomentaryLoudness", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LufsMetering::LufsMeter.SwapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LufsMetering::LufsMeter::*)()>(&::LufsMetering::LufsMeter::SwapData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3b748f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter*>::get(), "SwapData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LufsMetering::LufsMeter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LufsMetering::LufsMeter::*)()>(&::LufsMetering::LufsMeter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b750d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*>& LufsMetering::LufsMeter::__cordl_internal_get__inputDataNative() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputDataNative;
}
constexpr ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> const& LufsMetering::LufsMeter::__cordl_internal_get__inputDataNative() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputDataNative;
}
constexpr void LufsMetering::LufsMeter::__cordl_internal_set__inputDataNative(::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputDataNative)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*>& LufsMetering::LufsMeter::__cordl_internal_get__outputDataNative() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputDataNative;
}
constexpr ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> const&
LufsMetering::LufsMeter::__cordl_internal_get__outputDataNative() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputDataNative;
}
constexpr void LufsMetering::LufsMeter::__cordl_internal_set__outputDataNative(::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outputDataNative)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void LufsMetering::LufsMeter::setStaticF__channelGains(::ArrayW<float_t, ::Array<float_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t, ::Array<float_t>*>, "_channelGains", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter*>::get>(
      std::forward<::ArrayW<float_t, ::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t, ::Array<float_t>*> LufsMetering::LufsMeter::getStaticF__channelGains() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t, ::Array<float_t>*>, "_channelGains", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter*>::get>();
}
inline ::LufsMetering::LoudnessData LufsMetering::LufsMeter::AnalyzeClipLoudness(::UnityEngine::AudioClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter*>::get(), "AnalyzeClipLoudness", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LufsMetering::LoudnessData, false>(this, ___internal_method, clip);
}
inline ::LufsMetering::LoudnessData LufsMetering::LufsMeter::IntegratedLoudness(::ArrayW<float_t, ::Array<float_t>*> interleavedData, int32_t numChannels, int32_t rate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter*>::get(), "IntegratedLoudness", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LufsMetering::LoudnessData, false>(this, ___internal_method, interleavedData, numChannels, rate);
}
inline float_t LufsMetering::LufsMeter::MomentaryLoudness(::ArrayW<float_t, ::Array<float_t>*> interleavedData, int32_t numChannels, int32_t rate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter*>::get(), "MomentaryLoudness", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, interleavedData, numChannels, rate);
}
inline void LufsMetering::LufsMeter::SwapData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter*>::get(), "SwapData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LufsMetering::LufsMeter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LufsMeter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::LufsMetering::LufsMeter* LufsMetering::LufsMeter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LufsMetering::LufsMeter*>());
}
// Ctor Parameters []
constexpr ::LufsMetering::LufsMeter::LufsMeter() {}
