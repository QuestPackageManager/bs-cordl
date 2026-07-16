#pragma once
// IWYU pragma private; include "System/Numerics/BigIntegerCalculator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Numerics/zzzz__BigIntegerCalculator_def.hpp"
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (*)(::ArrayW<uint32_t>, uint32_t)>(&::System::Numerics::BigIntegerCalculator::Add)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x60ee300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Add", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::System::Numerics::BigIntegerCalculator::Add)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60ee3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Add", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, int32_t, uint32_t*, int32_t, uint32_t*, int32_t)>(&::System::Numerics::BigIntegerCalculator::Add)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60f0910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Add",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(),
                                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.AddSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, int32_t, uint32_t*, int32_t)>(&::System::Numerics::BigIntegerCalculator::AddSelf)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60f0994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                                                             { "AddSelf", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Subtract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (*)(::ArrayW<uint32_t>, uint32_t)>(&::System::Numerics::BigIntegerCalculator::Subtract)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x60ee730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Subtract", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Subtract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::System::Numerics::BigIntegerCalculator::Subtract)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x60ee87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                                                                                           { "Subtract", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Subtract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, int32_t, uint32_t*, int32_t, uint32_t*, int32_t)>(&::System::Numerics::BigIntegerCalculator::Subtract)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x60f0a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Subtract",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(),
                                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::System::Numerics::BigIntegerCalculator::Compare)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x60ee7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                                                                                           { "Compare", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Divide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (*)(::ArrayW<uint32_t>, uint32_t)>(&::System::Numerics::BigIntegerCalculator::Divide)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60effd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Divide", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Remainder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint32_t>, uint32_t)>(&::System::Numerics::BigIntegerCalculator::Remainder)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60f02e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Remainder", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Divide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::System::Numerics::BigIntegerCalculator::Divide)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x60f009c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                                                                                           { "Divide", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Remainder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::System::Numerics::BigIntegerCalculator::Remainder)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x60f034c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                                                                                           { "Remainder", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Divide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, int32_t, uint32_t*, int32_t, uint32_t*, int32_t)>(&::System::Numerics::BigIntegerCalculator::Divide)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x60f0afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Divide",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(),
                                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.AddDivisor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t*, int32_t, uint32_t*, int32_t)>(&::System::Numerics::BigIntegerCalculator::AddDivisor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x60f0f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                                                { "AddDivisor", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.SubtractDivisor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t*, int32_t, uint32_t*, int32_t, uint64_t)>(&::System::Numerics::BigIntegerCalculator::SubtractDivisor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x60f0eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                         { "SubtractDivisor", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.DivideGuessTooBig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, uint64_t, uint32_t, uint32_t, uint32_t)>(&::System::Numerics::BigIntegerCalculator::DivideGuessTooBig)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x60f0e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                         { "DivideGuessTooBig", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.CreateCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (*)(::ArrayW<uint32_t>)>(&::System::Numerics::BigIntegerCalculator::CreateCopy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60f0a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "CreateCopy", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.LeadingZeros
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::System::Numerics::BigIntegerCalculator::LeadingZeros)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x60f0e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "LeadingZeros", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Square
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (*)(::ArrayW<uint32_t>)>(&::System::Numerics::BigIntegerCalculator::Square)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x60efcc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Square", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Square
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, int32_t, uint32_t*, int32_t)>(&::System::Numerics::BigIntegerCalculator::Square)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x60f0f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                                                             { "Square", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (*)(::ArrayW<uint32_t>, uint32_t)>(&::System::Numerics::BigIntegerCalculator::Multiply)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x60efbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Multiply", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::System::Numerics::BigIntegerCalculator::Multiply)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x60efd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                                                                                           { "Multiply", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, int32_t, uint32_t*, int32_t, uint32_t*, int32_t)>(&::System::Numerics::BigIntegerCalculator::Multiply)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x60f13f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Multiply",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(),
                                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BigIntegerCalculator.SubtractCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, int32_t, uint32_t*, int32_t, uint32_t*, int32_t)>(&::System::Numerics::BigIntegerCalculator::SubtractCore)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x60f132c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "SubtractCore",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(),
                                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Numerics::BigIntegerCalculator::setStaticF_ReducerThreshold(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ReducerThreshold", ::System::Numerics::BigIntegerCalculator*>(std::forward<int32_t>(value));
}
inline int32_t System::Numerics::BigIntegerCalculator::getStaticF_ReducerThreshold() {
  return ::cordl_internals::getStaticField<int32_t, "ReducerThreshold", ::System::Numerics::BigIntegerCalculator*>();
}
inline void System::Numerics::BigIntegerCalculator::setStaticF_SquareThreshold(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SquareThreshold", ::System::Numerics::BigIntegerCalculator*>(std::forward<int32_t>(value));
}
inline int32_t System::Numerics::BigIntegerCalculator::getStaticF_SquareThreshold() {
  return ::cordl_internals::getStaticField<int32_t, "SquareThreshold", ::System::Numerics::BigIntegerCalculator*>();
}
inline void System::Numerics::BigIntegerCalculator::setStaticF_AllocationThreshold(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "AllocationThreshold", ::System::Numerics::BigIntegerCalculator*>(std::forward<int32_t>(value));
}
inline int32_t System::Numerics::BigIntegerCalculator::getStaticF_AllocationThreshold() {
  return ::cordl_internals::getStaticField<int32_t, "AllocationThreshold", ::System::Numerics::BigIntegerCalculator*>();
}
inline void System::Numerics::BigIntegerCalculator::setStaticF_MultiplyThreshold(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MultiplyThreshold", ::System::Numerics::BigIntegerCalculator*>(std::forward<int32_t>(value));
}
inline int32_t System::Numerics::BigIntegerCalculator::getStaticF_MultiplyThreshold() {
  return ::cordl_internals::getStaticField<int32_t, "MultiplyThreshold", ::System::Numerics::BigIntegerCalculator*>();
}
inline ::ArrayW<uint32_t> System::Numerics::BigIntegerCalculator::Add(::ArrayW<uint32_t> left, uint32_t right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Add", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(nullptr, ___internal_method, left, right);
}
inline ::ArrayW<uint32_t> System::Numerics::BigIntegerCalculator::Add(::ArrayW<uint32_t> left, ::ArrayW<uint32_t> right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Add", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(nullptr, ___internal_method, left, right);
}
inline void System::Numerics::BigIntegerCalculator::Add(uint32_t* left, int32_t leftLength, uint32_t* right, int32_t rightLength, uint32_t* bits, int32_t bitsLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
          { "Add", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, left, leftLength, right, rightLength, bits, bitsLength);
}
inline void System::Numerics::BigIntegerCalculator::AddSelf(uint32_t* left, int32_t leftLength, uint32_t* right, int32_t rightLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                                                           { "AddSelf", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, left, leftLength, right, rightLength);
}
inline ::ArrayW<uint32_t> System::Numerics::BigIntegerCalculator::Subtract(::ArrayW<uint32_t> left, uint32_t right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Subtract", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(nullptr, ___internal_method, left, right);
}
inline ::ArrayW<uint32_t> System::Numerics::BigIntegerCalculator::Subtract(::ArrayW<uint32_t> left, ::ArrayW<uint32_t> right) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                                                                                         { "Subtract", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(nullptr, ___internal_method, left, right);
}
inline void System::Numerics::BigIntegerCalculator::Subtract(uint32_t* left, int32_t leftLength, uint32_t* right, int32_t rightLength, uint32_t* bits, int32_t bitsLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Subtract",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(),
                                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, left, leftLength, right, rightLength, bits, bitsLength);
}
inline int32_t System::Numerics::BigIntegerCalculator::Compare(::ArrayW<uint32_t> left, ::ArrayW<uint32_t> right) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                                                                                         { "Compare", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, left, right);
}
inline ::ArrayW<uint32_t> System::Numerics::BigIntegerCalculator::Divide(::ArrayW<uint32_t> left, uint32_t right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Divide", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(nullptr, ___internal_method, left, right);
}
inline uint32_t System::Numerics::BigIntegerCalculator::Remainder(::ArrayW<uint32_t> left, uint32_t right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Remainder", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, left, right);
}
inline ::ArrayW<uint32_t> System::Numerics::BigIntegerCalculator::Divide(::ArrayW<uint32_t> left, ::ArrayW<uint32_t> right) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                                                                                         { "Divide", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(nullptr, ___internal_method, left, right);
}
inline ::ArrayW<uint32_t> System::Numerics::BigIntegerCalculator::Remainder(::ArrayW<uint32_t> left, ::ArrayW<uint32_t> right) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                                                                                         { "Remainder", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(nullptr, ___internal_method, left, right);
}
inline void System::Numerics::BigIntegerCalculator::Divide(uint32_t* left, int32_t leftLength, uint32_t* right, int32_t rightLength, uint32_t* bits, int32_t bitsLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Divide",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(),
                                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, left, leftLength, right, rightLength, bits, bitsLength);
}
inline uint32_t System::Numerics::BigIntegerCalculator::AddDivisor(uint32_t* left, int32_t leftLength, uint32_t* right, int32_t rightLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                                                           { "AddDivisor", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, left, leftLength, right, rightLength);
}
inline uint32_t System::Numerics::BigIntegerCalculator::SubtractDivisor(uint32_t* left, int32_t leftLength, uint32_t* right, int32_t rightLength, uint64_t q) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                          { "SubtractDivisor", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, left, leftLength, right, rightLength, q);
}
inline bool System::Numerics::BigIntegerCalculator::DivideGuessTooBig(uint64_t q, uint64_t valHi, uint32_t valLo, uint32_t divHi, uint32_t divLo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                       { "DivideGuessTooBig", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, q, valHi, valLo, divHi, divLo);
}
inline ::ArrayW<uint32_t> System::Numerics::BigIntegerCalculator::CreateCopy(::ArrayW<uint32_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "CreateCopy", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(nullptr, ___internal_method, value);
}
inline int32_t System::Numerics::BigIntegerCalculator::LeadingZeros(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "LeadingZeros", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint32_t> System::Numerics::BigIntegerCalculator::Square(::ArrayW<uint32_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Square", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(nullptr, ___internal_method, value);
}
inline void System::Numerics::BigIntegerCalculator::Square(uint32_t* value, int32_t valueLength, uint32_t* bits, int32_t bitsLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                                                           { "Square", {}, { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, valueLength, bits, bitsLength);
}
inline ::ArrayW<uint32_t> System::Numerics::BigIntegerCalculator::Multiply(::ArrayW<uint32_t> left, uint32_t right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Multiply", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(nullptr, ___internal_method, left, right);
}
inline ::ArrayW<uint32_t> System::Numerics::BigIntegerCalculator::Multiply(::ArrayW<uint32_t> left, ::ArrayW<uint32_t> right) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(),
                                                                                         { "Multiply", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(nullptr, ___internal_method, left, right);
}
inline void System::Numerics::BigIntegerCalculator::Multiply(uint32_t* left, int32_t leftLength, uint32_t* right, int32_t rightLength, uint32_t* bits, int32_t bitsLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "Multiply",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(),
                                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, left, leftLength, right, rightLength, bits, bitsLength);
}
inline void System::Numerics::BigIntegerCalculator::SubtractCore(uint32_t* left, int32_t leftLength, uint32_t* right, int32_t rightLength, uint32_t* core, int32_t coreLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Numerics::BigIntegerCalculator*>(), { "SubtractCore",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(),
                                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, left, leftLength, right, rightLength, core, coreLength);
}
// Ctor Parameters []
constexpr ::System::Numerics::BigIntegerCalculator::BigIntegerCalculator() {}
