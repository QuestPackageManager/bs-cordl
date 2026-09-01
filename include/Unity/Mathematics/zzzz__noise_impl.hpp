#pragma once
// IWYU pragma private; include "Unity\Mathematics\noise.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__noise_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::noise.cellular
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::cellular)> {
  constexpr static std::size_t size = 0x878;
  constexpr static std::size_t addrs = 0x6676678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "cellular", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.cellular2x2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::cellular2x2)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x6677104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "cellular2x2", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.cellular2x2x2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::cellular2x2x2)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x6677524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "cellular2x2x2", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.cellular
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::cellular)> {
  constexpr static std::size_t size = 0x21b8;
  constexpr static std::size_t addrs = 0x6677d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "cellular", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.cnoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::cnoise)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x6679f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "cnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.pnoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::pnoise)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x667a2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "pnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.cnoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::cnoise)> {
  constexpr static std::size_t size = 0x744;
  constexpr static std::size_t addrs = 0x667a5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "cnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.pnoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::pnoise)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0x667ad7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "pnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.cnoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::cnoise)> {
  constexpr static std::size_t size = 0x1108;
  constexpr static std::size_t addrs = 0x667b538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "cnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.pnoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::pnoise)> {
  constexpr static std::size_t size = 0x11bc;
  constexpr static std::size_t addrs = 0x667c684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "pnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.mod289
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Unity::Mathematics::noise::mod289)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x667d840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "mod289", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.mod289
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::mod289)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6676ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "mod289", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.mod289
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::mod289)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6677c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "mod289", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.mod289
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::mod289)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x667a1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "mod289", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.mod7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::mod7)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6676fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "mod7", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.mod7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::mod7)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x66774b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "mod7", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.permute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Unity::Mathematics::noise::permute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x667d8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "permute", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.permute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::permute)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6676fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "permute", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.permute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::permute)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6677480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "permute", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.taylorInvSqrt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Unity::Mathematics::noise::taylorInvSqrt)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x667d8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "taylorInvSqrt", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.taylorInvSqrt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::taylorInvSqrt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x667a25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "taylorInvSqrt", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.fade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::fade)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x667a290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "fade", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.fade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::fade)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x667ad20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "fade", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.fade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::fade)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x667c640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "fade", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.grad4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(float_t, ::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::grad4)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x667d8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "grad4", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.rgrad2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::noise::rgrad2)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x667da70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "rgrad2", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.snoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::snoise)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x667dbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "snoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.snoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::snoise)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x667df80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "snoise", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.snoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Mathematics::float3>)>(&::Unity::Mathematics::noise::snoise)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x667e5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(),
                                                             { "snoise", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.snoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::snoise)> {
  constexpr static std::size_t size = 0x808;
  constexpr static std::size_t addrs = 0x667ed4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "snoise", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.psrdnoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t)>(
    &::Unity::Mathematics::noise::psrdnoise)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x667f554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(),
                                                { "psrdnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.psrdnoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::psrdnoise)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x667f938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "psrdnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.psrnoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::noise::psrnoise)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x667f940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(),
                                                { "psrnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.psrnoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::psrnoise)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x667fc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "psrnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.srdnoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::noise::srdnoise)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x667fc84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "srdnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.srdnoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::srdnoise)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6680018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "srdnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.srnoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float2, float_t)>(&::Unity::Mathematics::noise::srnoise)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x6680020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "srnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.srnoise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float2)>(&::Unity::Mathematics::noise::srnoise)> {
  constexpr static std::size_t size = 0x1e08;
  constexpr static std::size_t addrs = 0x66802ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "srnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
    return ___internal_method;
  }
};
inline ::Unity::Mathematics::float2 Unity::Mathematics::noise::cellular(::Unity::Mathematics::float2 P) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "cellular", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, P);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::noise::cellular2x2(::Unity::Mathematics::float2 P) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "cellular2x2", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, P);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::noise::cellular2x2x2(::Unity::Mathematics::float3 P) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "cellular2x2x2", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, P);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::noise::cellular(::Unity::Mathematics::float3 P) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "cellular", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, P);
}
inline float_t Unity::Mathematics::noise::cnoise(::Unity::Mathematics::float2 P) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "cnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, P);
}
inline float_t Unity::Mathematics::noise::pnoise(::Unity::Mathematics::float2 P, ::Unity::Mathematics::float2 rep) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "pnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, P, rep);
}
inline float_t Unity::Mathematics::noise::cnoise(::Unity::Mathematics::float3 P) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "cnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, P);
}
inline float_t Unity::Mathematics::noise::pnoise(::Unity::Mathematics::float3 P, ::Unity::Mathematics::float3 rep) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "pnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, P, rep);
}
inline float_t Unity::Mathematics::noise::cnoise(::Unity::Mathematics::float4 P) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "cnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, P);
}
inline float_t Unity::Mathematics::noise::pnoise(::Unity::Mathematics::float4 P, ::Unity::Mathematics::float4 rep) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "pnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, P, rep);
}
inline float_t Unity::Mathematics::noise::mod289(float_t x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "mod289", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::noise::mod289(::Unity::Mathematics::float2 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "mod289", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::mod289(::Unity::Mathematics::float3 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "mod289", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::noise::mod289(::Unity::Mathematics::float4 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "mod289", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::mod7(::Unity::Mathematics::float3 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "mod7", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::noise::mod7(::Unity::Mathematics::float4 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "mod7", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, x);
}
inline float_t Unity::Mathematics::noise::permute(float_t x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "permute", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::permute(::Unity::Mathematics::float3 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "permute", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::noise::permute(::Unity::Mathematics::float4 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "permute", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, x);
}
inline float_t Unity::Mathematics::noise::taylorInvSqrt(float_t r) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "taylorInvSqrt", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, r);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::noise::taylorInvSqrt(::Unity::Mathematics::float4 r) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "taylorInvSqrt", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, r);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::noise::fade(::Unity::Mathematics::float2 t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "fade", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, t);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::fade(::Unity::Mathematics::float3 t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "fade", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, t);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::noise::fade(::Unity::Mathematics::float4 t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "fade", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, t);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::noise::grad4(float_t j, ::Unity::Mathematics::float4 ip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "grad4", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, j, ip);
}
inline ::Unity::Mathematics::float2 Unity::Mathematics::noise::rgrad2(::Unity::Mathematics::float2 p, float_t rot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "rgrad2", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, p, rot);
}
inline float_t Unity::Mathematics::noise::snoise(::Unity::Mathematics::float2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "snoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v);
}
inline float_t Unity::Mathematics::noise::snoise(::Unity::Mathematics::float3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "snoise", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v);
}
inline float_t Unity::Mathematics::noise::snoise(::Unity::Mathematics::float3 v, ::by_ref<::Unity::Mathematics::float3> gradient) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(),
                                                           { "snoise", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v, gradient);
}
inline float_t Unity::Mathematics::noise::snoise(::Unity::Mathematics::float4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "snoise", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::psrdnoise(::Unity::Mathematics::float2 pos, ::Unity::Mathematics::float2 per, float_t rot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(),
                                              { "psrdnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, pos, per, rot);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::psrdnoise(::Unity::Mathematics::float2 pos, ::Unity::Mathematics::float2 per) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "psrdnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, pos, per);
}
inline float_t Unity::Mathematics::noise::psrnoise(::Unity::Mathematics::float2 pos, ::Unity::Mathematics::float2 per, float_t rot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(),
                                              { "psrnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, pos, per, rot);
}
inline float_t Unity::Mathematics::noise::psrnoise(::Unity::Mathematics::float2 pos, ::Unity::Mathematics::float2 per) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "psrnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, pos, per);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::srdnoise(::Unity::Mathematics::float2 pos, float_t rot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "srdnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, pos, rot);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::srdnoise(::Unity::Mathematics::float2 pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "srdnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, pos);
}
inline float_t Unity::Mathematics::noise::srnoise(::Unity::Mathematics::float2 pos, float_t rot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "srnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, pos, rot);
}
inline float_t Unity::Mathematics::noise::srnoise(::Unity::Mathematics::float2 pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::noise*>(), { "srnoise", {}, { ::i2c::type_of<::Unity::Mathematics::float2>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, pos);
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::noise::noise() {}
