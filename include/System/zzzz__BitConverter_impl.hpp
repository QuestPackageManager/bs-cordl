#pragma once
// IWYU pragma private; include "System\BitConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__BitConverter_def.hpp"
#include "System/Buffers/zzzz__SpanAction_2_def.hpp"
#include "System/zzzz__BitConverter_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
//  Writing Method size for method: ::System::BitConverter___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::BitConverter___c::*)()>(&::System::BitConverter___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bb00f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter___c._ToString_b__38_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::BitConverter___c::*)(::System::Span_1<char16_t>, ::System::ValueTuple_3<::ArrayW<uint8_t>, int32_t, int32_t>)>(
    &::System::BitConverter___c::_ToString_b__38_0)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5bb00f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::BitConverter___c*>(),
                            { "<ToString>b__38_0", {}, { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::System::ValueTuple_3<::ArrayW<uint8_t>, int32_t, int32_t>>() } })));
    return ___internal_method;
  }
};
inline void System::BitConverter___c::setStaticF___9(::System::BitConverter___c* value) {
  ::cordl_internals::setStaticField<::System::BitConverter___c*, "<>9", ::System::BitConverter___c*>(std::forward<::System::BitConverter___c*>(value));
}
inline ::System::BitConverter___c* System::BitConverter___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::BitConverter___c*, "<>9", ::System::BitConverter___c*>();
}
inline void System::BitConverter___c::setStaticF___9__38_0(::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_3<::ArrayW<uint8_t>, int32_t, int32_t>>* value) {
  ::cordl_internals::setStaticField<::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_3<::ArrayW<uint8_t>, int32_t, int32_t>>*, "<>9__38_0", ::System::BitConverter___c*>(
      std::forward<::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_3<::ArrayW<uint8_t>, int32_t, int32_t>>*>(value));
}
inline ::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_3<::ArrayW<uint8_t>, int32_t, int32_t>>* System::BitConverter___c::getStaticF___9__38_0() {
  return ::cordl_internals::getStaticField<::System::Buffers::SpanAction_2<char16_t, ::System::ValueTuple_3<::ArrayW<uint8_t>, int32_t, int32_t>>*, "<>9__38_0", ::System::BitConverter___c*>();
}
inline void System::BitConverter___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::BitConverter___c::_ToString_b__38_0(::System::Span_1<char16_t> dst, ::System::ValueTuple_3<::ArrayW<uint8_t>, int32_t, int32_t> state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::BitConverter___c*>(),
                                       { "<ToString>b__38_0", {}, { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::System::ValueTuple_3<::ArrayW<uint8_t>, int32_t, int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dst, state);
}
inline ::System::BitConverter___c* System::BitConverter___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::BitConverter___c*>());
}
// Ctor Parameters []
constexpr ::System::BitConverter___c::BitConverter___c() {}
//  Writing Method size for method: ::System::BitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(bool)>(&::System::BitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5baf78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(char16_t)>(&::System::BitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5baf7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int16_t)>(&::System::BitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5baf860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t)>(&::System::BitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5baf8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int64_t)>(&::System::BitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5baf930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(uint16_t)>(&::System::BitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5baf998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(uint32_t)>(&::System::BitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bafa00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.TryWriteBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Span_1<uint8_t>, uint32_t)>(&::System::BitConverter::TryWriteBytes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bafa68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "TryWriteBytes", {}, { ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(uint64_t)>(&::System::BitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bafae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(float_t)>(&::System::BitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bafb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(double_t)>(&::System::BitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bafbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::BitConverter::ToChar)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bafc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToChar", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::BitConverter::ToInt16)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bafc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToInt16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::BitConverter::ToInt32)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bafc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToInt32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::BitConverter::ToInt64)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bafce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToInt64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::BitConverter::ToUInt16)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bafd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToUInt16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::BitConverter::ToUInt32)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bafd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToUInt32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::BitConverter::ToUInt64)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bafd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToUInt64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::BitConverter::ToSingle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bafd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToSingle", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::BitConverter::ToDouble)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bafd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToDouble", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::BitConverter::ToString)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5bafd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::System::BitConverter::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bb0010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.DoubleToInt64Bits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(double_t)>(&::System::BitConverter::DoubleToInt64Bits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb0030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "DoubleToInt64Bits", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.Int64BitsToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(int64_t)>(&::System::BitConverter::Int64BitsToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb0038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "Int64BitsToDouble", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.SingleToInt32Bits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::System::BitConverter::SingleToInt32Bits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb0040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "SingleToInt32Bits", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::BitConverter.Int32BitsToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t)>(&::System::BitConverter::Int32BitsToSingle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb0048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "Int32BitsToSingle", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::BitConverter::setStaticF_IsLittleEndian(bool value) {
  ::cordl_internals::setStaticField<bool, "IsLittleEndian", ::System::BitConverter*>(std::forward<bool>(value));
}
inline bool System::BitConverter::getStaticF_IsLittleEndian() {
  return ::cordl_internals::getStaticField<bool, "IsLittleEndian", ::System::BitConverter*>();
}
inline ::ArrayW<uint8_t> System::BitConverter::GetBytes(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::BitConverter::GetBytes(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::BitConverter::GetBytes(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::BitConverter::GetBytes(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::BitConverter::GetBytes(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::BitConverter::GetBytes(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::BitConverter::GetBytes(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline bool System::BitConverter::TryWriteBytes(::System::Span_1<uint8_t> destination, uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "TryWriteBytes", {}, { ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, destination, value);
}
inline ::ArrayW<uint8_t> System::BitConverter::GetBytes(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::BitConverter::GetBytes(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::BitConverter::GetBytes(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "GetBytes", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline char16_t System::BitConverter::ToChar(::ArrayW<uint8_t> value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToChar", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value, startIndex);
}
inline int16_t System::BitConverter::ToInt16(::ArrayW<uint8_t> value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToInt16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value, startIndex);
}
inline int32_t System::BitConverter::ToInt32(::ArrayW<uint8_t> value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToInt32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, startIndex);
}
inline int64_t System::BitConverter::ToInt64(::ArrayW<uint8_t> value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToInt64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value, startIndex);
}
inline uint16_t System::BitConverter::ToUInt16(::ArrayW<uint8_t> value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToUInt16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value, startIndex);
}
inline uint32_t System::BitConverter::ToUInt32(::ArrayW<uint8_t> value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToUInt32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value, startIndex);
}
inline uint64_t System::BitConverter::ToUInt64(::ArrayW<uint8_t> value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToUInt64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, startIndex);
}
inline float_t System::BitConverter::ToSingle(::ArrayW<uint8_t> value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToSingle", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, startIndex);
}
inline double_t System::BitConverter::ToDouble(::ArrayW<uint8_t> value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToDouble", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, startIndex);
}
inline ::StringW System::BitConverter::ToString(::ArrayW<uint8_t> value, int32_t startIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, startIndex, length);
}
inline ::StringW System::BitConverter::ToString(::ArrayW<uint8_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "ToString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline int64_t System::BitConverter::DoubleToInt64Bits(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "DoubleToInt64Bits", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline double_t System::BitConverter::Int64BitsToDouble(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "Int64BitsToDouble", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline int32_t System::BitConverter::SingleToInt32Bits(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "SingleToInt32Bits", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline float_t System::BitConverter::Int32BitsToSingle(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::BitConverter*>(), { "Int32BitsToSingle", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::BitConverter::BitConverter() {}
