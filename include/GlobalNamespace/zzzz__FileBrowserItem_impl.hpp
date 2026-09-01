#pragma once
// IWYU pragma private; include "GlobalNamespace\FileBrowserItem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FileBrowserItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileBrowserItem.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FileBrowserItem::*)()>(&::GlobalNamespace::FileBrowserItem::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370a654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserItem*>(), { "get_displayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserItem.set_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileBrowserItem::*)(::StringW)>(&::GlobalNamespace::FileBrowserItem::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370a65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserItem*>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserItem.get_fullPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FileBrowserItem::*)()>(&::GlobalNamespace::FileBrowserItem::get_fullPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370a664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserItem*>(), { "get_fullPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserItem.set_fullPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileBrowserItem::*)(::StringW)>(&::GlobalNamespace::FileBrowserItem::set_fullPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370a66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserItem*>(), { "set_fullPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserItem.get_isDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FileBrowserItem::*)()>(&::GlobalNamespace::FileBrowserItem::get_isDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370a674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserItem*>(), { "get_isDirectory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserItem.set_isDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileBrowserItem::*)(bool)>(&::GlobalNamespace::FileBrowserItem::set_isDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370a67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserItem*>(), { "set_isDirectory", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileBrowserItem::*)(::StringW, ::StringW, bool)>(&::GlobalNamespace::FileBrowserItem::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3707e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserItem*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FileBrowserItem::__cordl_internal_get__displayName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FileBrowserItem::__cordl_internal_get__displayName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr void GlobalNamespace::FileBrowserItem::__cordl_internal_set__displayName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayName_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FileBrowserItem::__cordl_internal_get__fullPath_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullPath_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FileBrowserItem::__cordl_internal_get__fullPath_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullPath_k__BackingField;
}
constexpr void GlobalNamespace::FileBrowserItem::__cordl_internal_set__fullPath_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullPath_k__BackingField = value;
}
constexpr bool& GlobalNamespace::FileBrowserItem::__cordl_internal_get__isDirectory_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDirectory_k__BackingField;
}
constexpr bool const& GlobalNamespace::FileBrowserItem::__cordl_internal_get__isDirectory_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDirectory_k__BackingField;
}
constexpr void GlobalNamespace::FileBrowserItem::__cordl_internal_set__isDirectory_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDirectory_k__BackingField = value;
}
inline ::StringW GlobalNamespace::FileBrowserItem::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserItem*>(), { "get_displayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FileBrowserItem::set_displayName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserItem*>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FileBrowserItem::get_fullPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserItem*>(), { "get_fullPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FileBrowserItem::set_fullPath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserItem*>(), { "set_fullPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::FileBrowserItem::get_isDirectory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserItem*>(), { "get_isDirectory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::FileBrowserItem::set_isDirectory(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserItem*>(), { "set_isDirectory", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FileBrowserItem::_ctor(::StringW displayName, ::StringW fullPath, bool isDirectory) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserItem*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName, fullPath, isDirectory);
}
inline ::GlobalNamespace::FileBrowserItem* GlobalNamespace::FileBrowserItem::New_ctor(::StringW displayName, ::StringW fullPath, bool isDirectory) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FileBrowserItem*>(displayName, fullPath, isDirectory));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileBrowserItem::FileBrowserItem() {}
