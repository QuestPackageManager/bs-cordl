#pragma once
// IWYU pragma private; include "Unity/Properties/TypeConversion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__ConversionRegistry_impl.hpp"
#include "Unity/Properties/zzzz__TypeConversion_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__ConversionRegistry_def.hpp"
#include "Unity/Properties/zzzz__TypeConversion_def.hpp"
#include "Unity/Properties/zzzz__TypeConverter_2_def.hpp"
//  Writing Method size for method: ::Unity::Properties::TypeConversion_Unsafe.LazyRegister
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Type*, ::System::Func_1<::System::Delegate*>*)>(&::Unity::Properties::TypeConversion_Unsafe::LazyRegister)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x700e7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_Unsafe>(),
                                         { "LazyRegister", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Func_1<::System::Delegate*>*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Properties::TypeConversion_Unsafe::LazyRegister(::System::Type* source, ::System::Type* destination, ::System::Func_1<::System::Delegate*>* getConverterDelegate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_Unsafe>(),
                                       { "LazyRegister", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Func_1<::System::Delegate*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination, getConverterDelegate);
}
// Ctor Parameters []
constexpr ::Unity::Properties::TypeConversion_Unsafe::TypeConversion_Unsafe() {}
//  Writing Method size for method: ::Unity::Properties::PrimitiveConverters_TypeConversion___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::PrimitiveConverters_TypeConversion___c::*)()>(&::Unity::Properties::PrimitiveConverters_TypeConversion___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x700e888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PrimitiveConverters_TypeConversion___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PrimitiveConverters_TypeConversion___c._Register_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Unity::Properties::PrimitiveConverters_TypeConversion___c::*)(::by_ref<::StringW>)>(
    &::Unity::Properties::PrimitiveConverters_TypeConversion___c::_Register_b__0_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x700e88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Properties::PrimitiveConverters_TypeConversion___c*>(), { "<Register>b__0_0", {}, { ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
inline void Unity::Properties::PrimitiveConverters_TypeConversion___c::setStaticF___9(::Unity::Properties::PrimitiveConverters_TypeConversion___c* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::PrimitiveConverters_TypeConversion___c*, "<>9", ::Unity::Properties::PrimitiveConverters_TypeConversion___c*>(
      std::forward<::Unity::Properties::PrimitiveConverters_TypeConversion___c*>(value));
}
inline ::Unity::Properties::PrimitiveConverters_TypeConversion___c* Unity::Properties::PrimitiveConverters_TypeConversion___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Unity::Properties::PrimitiveConverters_TypeConversion___c*, "<>9", ::Unity::Properties::PrimitiveConverters_TypeConversion___c*>();
}
inline void Unity::Properties::PrimitiveConverters_TypeConversion___c::setStaticF___9__0_0(::Unity::Properties::TypeConverter_2<::StringW, ::System::Guid>* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::TypeConverter_2<::StringW, ::System::Guid>*, "<>9__0_0", ::Unity::Properties::PrimitiveConverters_TypeConversion___c*>(
      std::forward<::Unity::Properties::TypeConverter_2<::StringW, ::System::Guid>*>(value));
}
inline ::Unity::Properties::TypeConverter_2<::StringW, ::System::Guid>* Unity::Properties::PrimitiveConverters_TypeConversion___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::Unity::Properties::TypeConverter_2<::StringW, ::System::Guid>*, "<>9__0_0", ::Unity::Properties::PrimitiveConverters_TypeConversion___c*>();
}
inline void Unity::Properties::PrimitiveConverters_TypeConversion___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PrimitiveConverters_TypeConversion___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Guid Unity::Properties::PrimitiveConverters_TypeConversion___c::_Register_b__0_0(::by_ref<::StringW> g) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PrimitiveConverters_TypeConversion___c*>(), { "<Register>b__0_0", {}, { ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method, g);
}
inline ::Unity::Properties::PrimitiveConverters_TypeConversion___c* Unity::Properties::PrimitiveConverters_TypeConversion___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::PrimitiveConverters_TypeConversion___c*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::PrimitiveConverters_TypeConversion___c::PrimitiveConverters_TypeConversion___c() {}
//  Writing Method size for method: ::Unity::Properties::TypeConversion_PrimitiveConverters.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Properties::TypeConversion_PrimitiveConverters::Register)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x700e5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_PrimitiveConverters*>(), { "Register", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Properties::TypeConversion_PrimitiveConverters::Register() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_PrimitiveConverters*>(), { "Register", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Properties::TypeConversion_PrimitiveConverters::TypeConversion_PrimitiveConverters() {}
template <typename TSource, typename TDestination>
inline bool Unity::Properties::TypeConversion_PrimitivesConverters::TryConvertPrimitiveOrString(::by_ref<TSource> source, ::by_ref<TDestination> destination) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_PrimitivesConverters*>(),
                                                                                              { "TryConvertPrimitiveOrString",
                                                                                                { ::i2c::class_of<TSource>(), ::i2c::class_of<TDestination>() },
                                                                                                { ::i2c::type_of<::by_ref<TSource>>(), ::i2c::type_of<::by_ref<TDestination>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSource>(), ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination);
}
template <typename TDestination> inline TDestination Unity::Properties::TypeConversion_PrimitivesConverters::DoConvert(::by_ref<bool> source) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_PrimitivesConverters*>(),
                                                                                              { "DoConvert", { ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<bool>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<TDestination>(nullptr, ___internal_method, source);
}
template <typename TDestination> inline TDestination Unity::Properties::TypeConversion_PrimitivesConverters::DoConvert(::by_ref<uint8_t> source) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_PrimitivesConverters*>(),
                                                                                              { "DoConvert", { ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<uint8_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<TDestination>(nullptr, ___internal_method, source);
}
template <typename TDestination> inline TDestination Unity::Properties::TypeConversion_PrimitivesConverters::DoConvert(::by_ref<char16_t> source) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_PrimitivesConverters*>(),
                                                                                              { "DoConvert", { ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<char16_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<TDestination>(nullptr, ___internal_method, source);
}
template <typename TDestination> inline TDestination Unity::Properties::TypeConversion_PrimitivesConverters::DoConvert(::by_ref<double_t> source) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_PrimitivesConverters*>(),
                                                                                              { "DoConvert", { ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<double_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<TDestination>(nullptr, ___internal_method, source);
}
template <typename TDestination> inline TDestination Unity::Properties::TypeConversion_PrimitivesConverters::DoConvert(::by_ref<int16_t> source) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_PrimitivesConverters*>(),
                                                                                              { "DoConvert", { ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<int16_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<TDestination>(nullptr, ___internal_method, source);
}
template <typename TDestination> inline TDestination Unity::Properties::TypeConversion_PrimitivesConverters::DoConvert(::by_ref<int32_t> source) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_PrimitivesConverters*>(),
                                                                                              { "DoConvert", { ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<TDestination>(nullptr, ___internal_method, source);
}
template <typename TDestination> inline TDestination Unity::Properties::TypeConversion_PrimitivesConverters::DoConvert(::by_ref<int64_t> source) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_PrimitivesConverters*>(),
                                                                                              { "DoConvert", { ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<int64_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<TDestination>(nullptr, ___internal_method, source);
}
template <typename TDestination> inline TDestination Unity::Properties::TypeConversion_PrimitivesConverters::DoConvert(::by_ref<int8_t> source) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_PrimitivesConverters*>(),
                                                                                              { "DoConvert", { ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<int8_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<TDestination>(nullptr, ___internal_method, source);
}
template <typename TDestination> inline TDestination Unity::Properties::TypeConversion_PrimitivesConverters::DoConvert(::by_ref<float_t> source) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_PrimitivesConverters*>(),
                                                                                              { "DoConvert", { ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<float_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<TDestination>(nullptr, ___internal_method, source);
}
template <typename TDestination> inline TDestination Unity::Properties::TypeConversion_PrimitivesConverters::DoConvert(::by_ref<::StringW> source) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_PrimitivesConverters*>(),
                                                                                              { "DoConvert", { ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<::StringW>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<TDestination>(nullptr, ___internal_method, source);
}
template <typename TDestination> inline TDestination Unity::Properties::TypeConversion_PrimitivesConverters::DoConvert(::by_ref<uint16_t> source) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_PrimitivesConverters*>(),
                                                                                              { "DoConvert", { ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<uint16_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<TDestination>(nullptr, ___internal_method, source);
}
template <typename TDestination> inline TDestination Unity::Properties::TypeConversion_PrimitivesConverters::DoConvert(::by_ref<uint32_t> source) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_PrimitivesConverters*>(),
                                                                                              { "DoConvert", { ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<uint32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<TDestination>(nullptr, ___internal_method, source);
}
template <typename TDestination> inline TDestination Unity::Properties::TypeConversion_PrimitivesConverters::DoConvert(::by_ref<uint64_t> source) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion_PrimitivesConverters*>(),
                                                                                              { "DoConvert", { ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<uint64_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<TDestination>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::Unity::Properties::TypeConversion_PrimitivesConverters::TypeConversion_PrimitivesConverters() {}
//  Writing Method size for method: ::Unity::Properties::TypeConversion.IsNumericType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Unity::Properties::TypeConversion::IsNumericType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x700e77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion*>(), { "IsNumericType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Properties::TypeConversion::setStaticF_s_GlobalConverters(::Unity::Properties::ConversionRegistry value) {
  ::cordl_internals::setStaticField<::Unity::Properties::ConversionRegistry, "s_GlobalConverters", ::Unity::Properties::TypeConversion*>(std::forward<::Unity::Properties::ConversionRegistry>(value));
}
inline ::Unity::Properties::ConversionRegistry Unity::Properties::TypeConversion::getStaticF_s_GlobalConverters() {
  return ::cordl_internals::getStaticField<::Unity::Properties::ConversionRegistry, "s_GlobalConverters", ::Unity::Properties::TypeConversion*>();
}
template <typename TSource, typename TDestination> inline bool Unity::Properties::TypeConversion::TryConvert(::by_ref<TSource> source, ::by_ref<TDestination> destination) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion*>(),
                          { "TryConvert", { ::i2c::class_of<TSource>(), ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<TSource>>(), ::i2c::type_of<::by_ref<TDestination>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSource>(), ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination);
}
template <typename TSource, typename TDestination>
inline bool Unity::Properties::TypeConversion::TryConvert(/* [IsReadOnly] */ ::by_ref<::Unity::Properties::ConversionRegistry const> registry, ::by_ref<TSource> source,
                                                          ::by_ref<TDestination> destination) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion*>(), { "TryConvert",
                                                                                                         { ::i2c::class_of<TSource>(), ::i2c::class_of<TDestination>() },
                                                                                                         { ::i2c::type_of<::by_ref<::Unity::Properties::ConversionRegistry const>>(),
                                                                                                           ::i2c::type_of<::by_ref<TSource>>(), ::i2c::type_of<::by_ref<TDestination>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSource>(), ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, registry, source, destination);
}
template <typename TSource, typename TDestination> inline bool Unity::Properties::TypeConversion::TryConvertNullable(::by_ref<TSource> source, ::by_ref<TDestination> destination) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion*>(), { "TryConvertNullable",
                                                                                                         { ::i2c::class_of<TSource>(), ::i2c::class_of<TDestination>() },
                                                                                                         { ::i2c::type_of<::by_ref<TSource>>(), ::i2c::type_of<::by_ref<TDestination>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSource>(), ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination);
}
template <typename TSource, typename TDestination> inline bool Unity::Properties::TypeConversion::TryConvertEnum(::by_ref<TSource> source, ::by_ref<TDestination> destination) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion*>(),
                          { "TryConvertEnum", { ::i2c::class_of<TSource>(), ::i2c::class_of<TDestination>() }, { ::i2c::type_of<::by_ref<TSource>>(), ::i2c::type_of<::by_ref<TDestination>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSource>(), ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination);
}
template <typename TSource, typename TDestination> inline bool Unity::Properties::TypeConversion::TryConvertToUnityEngineObject(TSource source, ::by_ref<TDestination> destination) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion*>(), { "TryConvertToUnityEngineObject",
                                                                                                                      { ::i2c::class_of<TSource>(), ::i2c::class_of<TDestination>() },
                                                                                                                      { ::i2c::type_of<TSource>(), ::i2c::type_of<::by_ref<TDestination>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSource>(), ::i2c::class_of<TDestination>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination);
}
inline bool Unity::Properties::TypeConversion::IsNumericType(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConversion*>(), { "IsNumericType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::Unity::Properties::TypeConversion::TypeConversion() {}
