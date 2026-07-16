#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/NormalizationTableUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__NormalizationTableUtil_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::NormalizationTableUtil.PropIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Mono::Globalization::Unicode::NormalizationTableUtil::PropIdx)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ab0b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::NormalizationTableUtil*>(), { "PropIdx", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::NormalizationTableUtil.MapIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Mono::Globalization::Unicode::NormalizationTableUtil::MapIdx)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ab0bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::NormalizationTableUtil*>(), { "MapIdx", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Mono::Globalization::Unicode::NormalizationTableUtil::setStaticF_Prop(::Mono::Globalization::Unicode::CodePointIndexer* value) {
  ::cordl_internals::setStaticField<::Mono::Globalization::Unicode::CodePointIndexer*, "Prop", ::Mono::Globalization::Unicode::NormalizationTableUtil*>(
      std::forward<::Mono::Globalization::Unicode::CodePointIndexer*>(value));
}
inline ::Mono::Globalization::Unicode::CodePointIndexer* Mono::Globalization::Unicode::NormalizationTableUtil::getStaticF_Prop() {
  return ::cordl_internals::getStaticField<::Mono::Globalization::Unicode::CodePointIndexer*, "Prop", ::Mono::Globalization::Unicode::NormalizationTableUtil*>();
}
inline void Mono::Globalization::Unicode::NormalizationTableUtil::setStaticF_Map(::Mono::Globalization::Unicode::CodePointIndexer* value) {
  ::cordl_internals::setStaticField<::Mono::Globalization::Unicode::CodePointIndexer*, "Map", ::Mono::Globalization::Unicode::NormalizationTableUtil*>(
      std::forward<::Mono::Globalization::Unicode::CodePointIndexer*>(value));
}
inline ::Mono::Globalization::Unicode::CodePointIndexer* Mono::Globalization::Unicode::NormalizationTableUtil::getStaticF_Map() {
  return ::cordl_internals::getStaticField<::Mono::Globalization::Unicode::CodePointIndexer*, "Map", ::Mono::Globalization::Unicode::NormalizationTableUtil*>();
}
inline void Mono::Globalization::Unicode::NormalizationTableUtil::setStaticF_Combining(::Mono::Globalization::Unicode::CodePointIndexer* value) {
  ::cordl_internals::setStaticField<::Mono::Globalization::Unicode::CodePointIndexer*, "Combining", ::Mono::Globalization::Unicode::NormalizationTableUtil*>(
      std::forward<::Mono::Globalization::Unicode::CodePointIndexer*>(value));
}
inline ::Mono::Globalization::Unicode::CodePointIndexer* Mono::Globalization::Unicode::NormalizationTableUtil::getStaticF_Combining() {
  return ::cordl_internals::getStaticField<::Mono::Globalization::Unicode::CodePointIndexer*, "Combining", ::Mono::Globalization::Unicode::NormalizationTableUtil*>();
}
inline void Mono::Globalization::Unicode::NormalizationTableUtil::setStaticF_Composite(::Mono::Globalization::Unicode::CodePointIndexer* value) {
  ::cordl_internals::setStaticField<::Mono::Globalization::Unicode::CodePointIndexer*, "Composite", ::Mono::Globalization::Unicode::NormalizationTableUtil*>(
      std::forward<::Mono::Globalization::Unicode::CodePointIndexer*>(value));
}
inline ::Mono::Globalization::Unicode::CodePointIndexer* Mono::Globalization::Unicode::NormalizationTableUtil::getStaticF_Composite() {
  return ::cordl_internals::getStaticField<::Mono::Globalization::Unicode::CodePointIndexer*, "Composite", ::Mono::Globalization::Unicode::NormalizationTableUtil*>();
}
inline void Mono::Globalization::Unicode::NormalizationTableUtil::setStaticF_Helper(::Mono::Globalization::Unicode::CodePointIndexer* value) {
  ::cordl_internals::setStaticField<::Mono::Globalization::Unicode::CodePointIndexer*, "Helper", ::Mono::Globalization::Unicode::NormalizationTableUtil*>(
      std::forward<::Mono::Globalization::Unicode::CodePointIndexer*>(value));
}
inline ::Mono::Globalization::Unicode::CodePointIndexer* Mono::Globalization::Unicode::NormalizationTableUtil::getStaticF_Helper() {
  return ::cordl_internals::getStaticField<::Mono::Globalization::Unicode::CodePointIndexer*, "Helper", ::Mono::Globalization::Unicode::NormalizationTableUtil*>();
}
inline int32_t Mono::Globalization::Unicode::NormalizationTableUtil::PropIdx(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::NormalizationTableUtil*>(), { "PropIdx", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cp);
}
inline int32_t Mono::Globalization::Unicode::NormalizationTableUtil::MapIdx(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Globalization::Unicode::NormalizationTableUtil*>(), { "MapIdx", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cp);
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::NormalizationTableUtil::NormalizationTableUtil() {}
