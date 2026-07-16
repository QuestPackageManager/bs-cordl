#pragma once
// IWYU pragma private; include "System/Drawing/KnownColorTable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Drawing/zzzz__KnownColorTable_def.hpp"
#include "System/Drawing/zzzz__KnownColor_def.hpp"
//  Writing Method size for method: ::System::Drawing::KnownColorTable.EnsureColorTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Drawing::KnownColorTable::EnsureColorTable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60ccec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::KnownColorTable*>(), { "EnsureColorTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::KnownColorTable.InitColorTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Drawing::KnownColorTable::InitColorTable)> {
  constexpr static std::size_t size = 0xab8;
  constexpr static std::size_t addrs = 0x60ccf1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::KnownColorTable*>(), { "InitColorTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::KnownColorTable.EnsureColorNameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Drawing::KnownColorTable::EnsureColorNameTable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60cdb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::KnownColorTable*>(), { "EnsureColorNameTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::KnownColorTable.InitColorNameTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Drawing::KnownColorTable::InitColorNameTable)> {
  constexpr static std::size_t size = 0x18ec;
  constexpr static std::size_t addrs = 0x60cdb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::KnownColorTable*>(), { "InitColorNameTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::KnownColorTable.KnownColorToArgb
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Drawing::KnownColor)>(&::System::Drawing::KnownColorTable::KnownColorToArgb)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60cf450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::KnownColorTable*>(), { "KnownColorToArgb", {}, { ::i2c::type_of<::System::Drawing::KnownColor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::KnownColorTable.KnownColorToName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Drawing::KnownColor)>(&::System::Drawing::KnownColorTable::KnownColorToName)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60cf4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::KnownColorTable*>(), { "KnownColorToName", {}, { ::i2c::type_of<::System::Drawing::KnownColor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::KnownColorTable.UpdateSystemColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>)>(&::System::Drawing::KnownColorTable::UpdateSystemColors)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x60cd9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::KnownColorTable*>(), { "UpdateSystemColors", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
inline void System::Drawing::KnownColorTable::setStaticF_s_colorTable(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_colorTable", ::System::Drawing::KnownColorTable*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Drawing::KnownColorTable::getStaticF_s_colorTable() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_colorTable", ::System::Drawing::KnownColorTable*>();
}
inline void System::Drawing::KnownColorTable::setStaticF_s_colorNameTable(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_colorNameTable", ::System::Drawing::KnownColorTable*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Drawing::KnownColorTable::getStaticF_s_colorNameTable() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_colorNameTable", ::System::Drawing::KnownColorTable*>();
}
inline void System::Drawing::KnownColorTable::EnsureColorTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::KnownColorTable*>(), { "EnsureColorTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Drawing::KnownColorTable::InitColorTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::KnownColorTable*>(), { "InitColorTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Drawing::KnownColorTable::EnsureColorNameTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::KnownColorTable*>(), { "EnsureColorNameTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Drawing::KnownColorTable::InitColorNameTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::KnownColorTable*>(), { "InitColorNameTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t System::Drawing::KnownColorTable::KnownColorToArgb(::System::Drawing::KnownColor color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::KnownColorTable*>(), { "KnownColorToArgb", {}, { ::i2c::type_of<::System::Drawing::KnownColor>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, color);
}
inline ::StringW System::Drawing::KnownColorTable::KnownColorToName(::System::Drawing::KnownColor color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::KnownColorTable*>(), { "KnownColorToName", {}, { ::i2c::type_of<::System::Drawing::KnownColor>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, color);
}
inline void System::Drawing::KnownColorTable::UpdateSystemColors(::ArrayW<int32_t> colorTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::KnownColorTable*>(), { "UpdateSystemColors", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, colorTable);
}
// Ctor Parameters []
constexpr ::System::Drawing::KnownColorTable::KnownColorTable() {}
