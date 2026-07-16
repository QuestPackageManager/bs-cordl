#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/OSPlatform.hpp"
#include "System/Runtime/InteropServices/zzzz__OSPlatform_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::OSPlatform.get_Linux
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::OSPlatform (*)()>(&::System::Runtime::InteropServices::OSPlatform::get_Linux)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b697b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { "get_Linux", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::OSPlatform.get_OSX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::OSPlatform (*)()>(&::System::Runtime::InteropServices::OSPlatform::get_OSX)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b6980c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { "get_OSX", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::OSPlatform.get_Windows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::OSPlatform (*)()>(&::System::Runtime::InteropServices::OSPlatform::get_Windows)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b69868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { "get_Windows", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::OSPlatform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::OSPlatform::*)(::StringW)>(&::System::Runtime::InteropServices::OSPlatform::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b698c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::OSPlatform.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::OSPlatform (*)(::StringW)>(&::System::Runtime::InteropServices::OSPlatform::Create)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b69978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { "Create", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::OSPlatform.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::InteropServices::OSPlatform::*)(::System::Runtime::InteropServices::OSPlatform)>(
    &::System::Runtime::InteropServices::OSPlatform::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b69994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { "Equals", {}, { ::i2c::type_of<::System::Runtime::InteropServices::OSPlatform>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::OSPlatform.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::InteropServices::OSPlatform::*)(::StringW)>(&::System::Runtime::InteropServices::OSPlatform::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b69a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { "Equals", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::OSPlatform.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::InteropServices::OSPlatform::*)(::System::Object*)>(&::System::Runtime::InteropServices::OSPlatform::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b69a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { ::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::OSPlatform.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::InteropServices::OSPlatform::*)()>(&::System::Runtime::InteropServices::OSPlatform::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b69ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { ::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::OSPlatform.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::InteropServices::OSPlatform::*)()>(&::System::Runtime::InteropServices::OSPlatform::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b69ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { ::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::OSPlatform.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::InteropServices::OSPlatform, ::System::Runtime::InteropServices::OSPlatform)>(
    &::System::Runtime::InteropServices::OSPlatform::op_Equality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b69b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(),
                            { "op_Equality", {}, { ::i2c::type_of<::System::Runtime::InteropServices::OSPlatform>(), ::i2c::type_of<::System::Runtime::InteropServices::OSPlatform>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::InteropServices::OSPlatform::setStaticF__Linux_k__BackingField(::System::Runtime::InteropServices::OSPlatform value) {
  ::cordl_internals::setStaticField<::System::Runtime::InteropServices::OSPlatform, "<Linux>k__BackingField", ::System::Runtime::InteropServices::OSPlatform>(
      std::forward<::System::Runtime::InteropServices::OSPlatform>(value));
}
inline ::System::Runtime::InteropServices::OSPlatform System::Runtime::InteropServices::OSPlatform::getStaticF__Linux_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Runtime::InteropServices::OSPlatform, "<Linux>k__BackingField", ::System::Runtime::InteropServices::OSPlatform>();
}
inline void System::Runtime::InteropServices::OSPlatform::setStaticF__OSX_k__BackingField(::System::Runtime::InteropServices::OSPlatform value) {
  ::cordl_internals::setStaticField<::System::Runtime::InteropServices::OSPlatform, "<OSX>k__BackingField", ::System::Runtime::InteropServices::OSPlatform>(
      std::forward<::System::Runtime::InteropServices::OSPlatform>(value));
}
inline ::System::Runtime::InteropServices::OSPlatform System::Runtime::InteropServices::OSPlatform::getStaticF__OSX_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Runtime::InteropServices::OSPlatform, "<OSX>k__BackingField", ::System::Runtime::InteropServices::OSPlatform>();
}
inline void System::Runtime::InteropServices::OSPlatform::setStaticF__Windows_k__BackingField(::System::Runtime::InteropServices::OSPlatform value) {
  ::cordl_internals::setStaticField<::System::Runtime::InteropServices::OSPlatform, "<Windows>k__BackingField", ::System::Runtime::InteropServices::OSPlatform>(
      std::forward<::System::Runtime::InteropServices::OSPlatform>(value));
}
inline ::System::Runtime::InteropServices::OSPlatform System::Runtime::InteropServices::OSPlatform::getStaticF__Windows_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Runtime::InteropServices::OSPlatform, "<Windows>k__BackingField", ::System::Runtime::InteropServices::OSPlatform>();
}
inline ::System::Runtime::InteropServices::OSPlatform System::Runtime::InteropServices::OSPlatform::get_Linux() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { "get_Linux", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::OSPlatform>(nullptr, ___internal_method);
}
inline ::System::Runtime::InteropServices::OSPlatform System::Runtime::InteropServices::OSPlatform::get_OSX() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { "get_OSX", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::OSPlatform>(nullptr, ___internal_method);
}
inline ::System::Runtime::InteropServices::OSPlatform System::Runtime::InteropServices::OSPlatform::get_Windows() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { "get_Windows", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::OSPlatform>(nullptr, ___internal_method);
}
inline void System::Runtime::InteropServices::OSPlatform::_ctor(::StringW osPlatform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, osPlatform);
}
inline ::System::Runtime::InteropServices::OSPlatform System::Runtime::InteropServices::OSPlatform::Create(::StringW osPlatform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { "Create", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::OSPlatform>(nullptr, ___internal_method, osPlatform);
}
inline bool System::Runtime::InteropServices::OSPlatform::Equals(::System::Runtime::InteropServices::OSPlatform other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { "Equals", {}, { ::i2c::type_of<::System::Runtime::InteropServices::OSPlatform>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool System::Runtime::InteropServices::OSPlatform::Equals(::StringW other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), { "Equals", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool System::Runtime::InteropServices::OSPlatform::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t System::Runtime::InteropServices::OSPlatform::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW System::Runtime::InteropServices::OSPlatform::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool System::Runtime::InteropServices::OSPlatform::op_Equality(::System::Runtime::InteropServices::OSPlatform left, ::System::Runtime::InteropServices::OSPlatform right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::OSPlatform>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::System::Runtime::InteropServices::OSPlatform>(), ::i2c::type_of<::System::Runtime::InteropServices::OSPlatform>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>"
constexpr System::Runtime::InteropServices::OSPlatform::operator ::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>*() {
  return static_cast<::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>"
constexpr ::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>*
System::Runtime::InteropServices::OSPlatform::i___System__IEquatable_1___System__Runtime__InteropServices__OSPlatform_() {
  return static_cast<::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_osPlatform", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::InteropServices::OSPlatform::OSPlatform(::StringW _osPlatform) noexcept {
  this->_osPlatform = _osPlatform;
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::OSPlatform::OSPlatform() {}
