#pragma once
// IWYU pragma private; include "System\Math.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Math_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__MidpointRounding_def.hpp"
//  Writing Method size for method: ::System::Math.Abs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Math::Abs)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c496ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Abs", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Abs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int64_t)>(&::System::Math::Abs)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c497a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Abs", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Abs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Math::Abs)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c49808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Abs", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.ThrowAbsOverflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Math::ThrowAbsOverflow)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c49754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "ThrowAbsOverflow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.DivRem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, ::by_ref<int32_t>)>(&::System::Math::DivRem)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c49870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "DivRem", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Clamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::System::Math::Clamp)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c49884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Clamp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Clamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::System::Math::Clamp)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c49928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Clamp", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t)>(&::System::Math::Log)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c499e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Log", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint8_t, uint8_t)>(&::System::Math::Max)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c49ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Math::Max)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c49ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t)>(&::System::Math::Max)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c49b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(int16_t, int16_t)>(&::System::Math::Max)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c49b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<int16_t>(), ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::System::Math::Max)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c49ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int64_t, int64_t)>(&::System::Math::Max)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c49bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(int8_t, int8_t)>(&::System::Math::Max)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c49bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::System::Math::Max)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c49bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(uint16_t, uint16_t)>(&::System::Math::Max)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c49be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::System::Math::Max)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c49bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, uint64_t)>(&::System::Math::Max)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c49c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint8_t, uint8_t)>(&::System::Math::Min)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c49c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Math::Min)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c49c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t)>(&::System::Math::Min)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c49cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(int16_t, int16_t)>(&::System::Math::Min)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c49ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<int16_t>(), ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::System::Math::Min)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c49cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int64_t, int64_t)>(&::System::Math::Min)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c49d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(int8_t, int8_t)>(&::System::Math::Min)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c49d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::System::Math::Min)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c49d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(uint16_t, uint16_t)>(&::System::Math::Min)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c49d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::System::Math::Min)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c49d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, uint64_t)>(&::System::Math::Min)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c49d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Round
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Math::Round)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c49d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Round", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Round
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Round)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c49dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Round", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Round
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, int32_t)>(&::System::Math::Round)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c49e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Round", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Round
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, ::System::MidpointRounding)>(&::System::Math::Round)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c4a17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Round", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::System::MidpointRounding>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Round
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, int32_t, ::System::MidpointRounding)>(&::System::Math::Round)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5c49ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Round", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::MidpointRounding>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Sign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(double_t)>(&::System::Math::Sign)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c4a1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Sign", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Sign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t)>(&::System::Math::Sign)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c4a264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Sign", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Truncate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Math::Truncate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c4a278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Truncate", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Truncate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Truncate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c4a2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Truncate", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Abs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Abs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4a354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Abs", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Abs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::System::Math::Abs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4a35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Abs", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Acos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Acos)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4a364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Acos", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Asin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Asin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4a368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Asin", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Atan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Atan)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4a36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Atan", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Atan2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t)>(&::System::Math::Atan2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4a370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Atan2", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Ceiling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Ceiling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4a374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Ceiling", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Cos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Cos)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4a37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Cos", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Cosh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Cosh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4a380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Cosh", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Exp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Exp)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4a384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Exp", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Floor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Floor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4a388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Floor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Log)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4a390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Log", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Log10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Log10)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4a394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Log10", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Pow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t)>(&::System::Math::Pow)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4a398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Pow", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Sin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Sin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4a39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Sin", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Sinh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Sinh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4a3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Sinh", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Sqrt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Sqrt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4a3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Sqrt", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Tan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Tan)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4a3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Tan", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.Tanh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::System::Math::Tanh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4a3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Tanh", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Math.ModF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t*)>(&::System::Math::ModF)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4a1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "ModF", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t*>() } })));
    return ___internal_method;
  }
};
inline void System::Math::setStaticF_doubleRoundLimit(double_t value) {
  ::cordl_internals::setStaticField<double_t, "doubleRoundLimit", ::System::Math*>(std::forward<double_t>(value));
}
inline double_t System::Math::getStaticF_doubleRoundLimit() {
  return ::cordl_internals::getStaticField<double_t, "doubleRoundLimit", ::System::Math*>();
}
inline void System::Math::setStaticF_roundPower10Double(::ArrayW<double_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<double_t>, "roundPower10Double", ::System::Math*>(std::forward<::ArrayW<double_t>>(value));
}
inline ::ArrayW<double_t> System::Math::getStaticF_roundPower10Double() {
  return ::cordl_internals::getStaticField<::ArrayW<double_t>, "roundPower10Double", ::System::Math*>();
}
inline int32_t System::Math::Abs(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Abs", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Math::Abs(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Abs", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Math::Abs(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Abs", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline void System::Math::ThrowAbsOverflow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "ThrowAbsOverflow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t System::Math::DivRem(int32_t a, int32_t b, ::by_ref<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "DivRem", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b, result);
}
inline int32_t System::Math::Clamp(int32_t value, int32_t min, int32_t max) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Clamp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, min, max);
}
inline float_t System::Math::Clamp(float_t value, float_t min, float_t max) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Clamp", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, min, max);
}
inline double_t System::Math::Log(double_t a, double_t newBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Log", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, a, newBase);
}
inline uint8_t System::Math::Max(uint8_t val1, uint8_t val2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, val1, val2);
}
inline ::System::Decimal System::Math::Max(::System::Decimal val1, ::System::Decimal val2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, val1, val2);
}
inline double_t System::Math::Max(double_t val1, double_t val2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, val1, val2);
}
inline int16_t System::Math::Max(int16_t val1, int16_t val2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<int16_t>(), ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, val1, val2);
}
inline int32_t System::Math::Max(int32_t val1, int32_t val2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, val1, val2);
}
inline int64_t System::Math::Max(int64_t val1, int64_t val2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, val1, val2);
}
inline int8_t System::Math::Max(int8_t val1, int8_t val2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, val1, val2);
}
inline float_t System::Math::Max(float_t val1, float_t val2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, val1, val2);
}
inline uint16_t System::Math::Max(uint16_t val1, uint16_t val2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, val1, val2);
}
inline uint32_t System::Math::Max(uint32_t val1, uint32_t val2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, val1, val2);
}
inline uint64_t System::Math::Max(uint64_t val1, uint64_t val2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Max", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, val1, val2);
}
inline uint8_t System::Math::Min(uint8_t val1, uint8_t val2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, val1, val2);
}
inline ::System::Decimal System::Math::Min(::System::Decimal val1, ::System::Decimal val2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, val1, val2);
}
inline double_t System::Math::Min(double_t val1, double_t val2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, val1, val2);
}
inline int16_t System::Math::Min(int16_t val1, int16_t val2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<int16_t>(), ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, val1, val2);
}
inline int32_t System::Math::Min(int32_t val1, int32_t val2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, val1, val2);
}
inline int64_t System::Math::Min(int64_t val1, int64_t val2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, val1, val2);
}
inline int8_t System::Math::Min(int8_t val1, int8_t val2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, val1, val2);
}
inline float_t System::Math::Min(float_t val1, float_t val2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, val1, val2);
}
inline uint16_t System::Math::Min(uint16_t val1, uint16_t val2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, val1, val2);
}
inline uint32_t System::Math::Min(uint32_t val1, uint32_t val2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, val1, val2);
}
inline uint64_t System::Math::Min(uint64_t val1, uint64_t val2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Min", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, val1, val2);
}
inline ::System::Decimal System::Math::Round(::System::Decimal d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Round", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d);
}
inline double_t System::Math::Round(double_t a) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Round", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, a);
}
inline double_t System::Math::Round(double_t value, int32_t digits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Round", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, digits);
}
inline double_t System::Math::Round(double_t value, ::System::MidpointRounding mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Round", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::System::MidpointRounding>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, mode);
}
inline double_t System::Math::Round(double_t value, int32_t digits, ::System::MidpointRounding mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Round", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::MidpointRounding>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, digits, mode);
}
inline int32_t System::Math::Sign(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Sign", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Math::Sign(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Sign", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Math::Truncate(::System::Decimal d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Truncate", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d);
}
inline double_t System::Math::Truncate(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Truncate", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, d);
}
template <typename T> inline void System::Math::ThrowMinMaxException(T min, T max) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "ThrowMinMaxException", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, min, max);
}
inline double_t System::Math::Abs(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Abs", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline float_t System::Math::Abs(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Abs", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline double_t System::Math::Acos(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Acos", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, d);
}
inline double_t System::Math::Asin(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Asin", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, d);
}
inline double_t System::Math::Atan(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Atan", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, d);
}
inline double_t System::Math::Atan2(double_t y, double_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Atan2", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, y, x);
}
inline double_t System::Math::Ceiling(double_t a) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Ceiling", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, a);
}
inline double_t System::Math::Cos(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Cos", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, d);
}
inline double_t System::Math::Cosh(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Cosh", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Math::Exp(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Exp", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, d);
}
inline double_t System::Math::Floor(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Floor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, d);
}
inline double_t System::Math::Log(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Log", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, d);
}
inline double_t System::Math::Log10(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Log10", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, d);
}
inline double_t System::Math::Pow(double_t x, double_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Pow", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, x, y);
}
inline double_t System::Math::Sin(double_t a) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Sin", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, a);
}
inline double_t System::Math::Sinh(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Sinh", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Math::Sqrt(double_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Sqrt", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, d);
}
inline double_t System::Math::Tan(double_t a) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Tan", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, a);
}
inline double_t System::Math::Tanh(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "Tanh", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Math::ModF(double_t x, double_t* intptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Math*>(), { "ModF", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, x, intptr);
}
// Ctor Parameters []
constexpr ::System::Math::Math() {}
